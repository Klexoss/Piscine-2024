/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:38:40 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/16 14:54:52 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int strleng(char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int i;

	char *ptr;
	ptr = (char* )malloc((strleng(src) + 1)*(sizeof(char)));
	i = 0;
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}
#include <stdio.h>
int main()
{
	char s1[] = "Hello World";
	char *arr;
	arr = ft_strdup(s1);
	printf("%s\n",arr); 
	//free(arr);
	//printf("%s\n", arr);
	return (0);
}
