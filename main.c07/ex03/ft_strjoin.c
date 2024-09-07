/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:18:36 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/17 16:31:29 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
int total_lenght(int size, char **str, char *sep)
{
    int total_lenght;
    int i;
    total_lenght = 0;
    i = 0;
    while (i < size)
    {
        total_lenght += ft_strlen(str[i]);
        if (i < size -1)
        {
        	total_lenght +=ft_strlen(sep);
        }
        i++;
    }
    return (total_lenght);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int total_len;
	char *result;
	int i;
	total_len = total_lenght(size, strs, sep);
	result = (char *)malloc(sizeof(char)*(total_len + 1));
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size -1)
		{
		ft_strcat(result, sep);
		}
		i++;
	}
	return (result);
}
#include <stdio.h>
int main()
{
    char *strs[] = {"hello", "world"};
    char *sep = " ";
    char *joined_str = ft_strjoin(2, strs, sep);
        printf("Joined string: %s\n", joined_str);
        free(joined_str);
    return 0;
}

