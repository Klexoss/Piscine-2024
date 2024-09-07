/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:15:00 by ljylhank          #+#    #+#             */
/*   Updated: 2024/07/13 15:18:34 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*set_newline_buffer(char *text_buffer)
{
	char *newline_buffer;
	long	i;
	
	i = 0;
	newline_buffer = malloc(str_length(text_buffer) + 3);
	newline_buffer[0] = '\n';
	while (text_buffer[i])
	{
		newline_buffer[i + 1] = text_buffer[i];
		i++;
	}
	newline_buffer[i + 1] = '\n';
	newline_buffer[i + 2] = '\0';
	free(text_buffer);
	return (newline_buffer);
}

char	*read_dictionary(char *dict_name)
{
	int		fbytes;
	long	buffer_size;
	char	*text_buffer;

	buffer_size = 100;
	text_buffer = malloc(1);
	while (str_length(text_buffer) >= buffer_size || buffer_size == 100)
	{
		fbytes = open(dict_name, O_RDONLY);
		buffer_size *= 2;
		free(text_buffer);
		text_buffer = malloc(buffer_size);
		read(fbytes, text_buffer, buffer_size);
		close(fbytes);
	}
	text_buffer = set_newline_buffer(text_buffer);
	return (text_buffer);
}
