/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:18:21 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/03 14:03:13 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i]  = '\0';
		i++;
	}
	return dest;
}
#include <stdio.h>
int main()
{
	char src[100] = "claudia";
	char dest[100];
	ft_strncpy(dest, src, 4);
	printf(" src: %s\n", src);
	printf(" dest: %s\n", dest);
	return 0;
}
