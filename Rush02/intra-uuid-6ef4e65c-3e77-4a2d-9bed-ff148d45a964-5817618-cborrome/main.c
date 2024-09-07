/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:22:32 by ljylhank          #+#    #+#             */
/*   Updated: 2024/07/13 15:23:06 by ljylhank         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	num_to_words(char *dictionary, char *number, int free_num);
char	*read_dictionary(char *dict_name);

int	main(int argc, char **argv)
{
	(void) argc;
	num_to_words(read_dictionary("numbers.dict"), argv[1], -1);
	return (0);
}
