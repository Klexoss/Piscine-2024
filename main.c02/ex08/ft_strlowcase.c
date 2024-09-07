/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 08:49:05 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/04 08:54:15 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strlowcase(char *str)
{

	int i;
	int c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A'  && c <= 'Z')
		{
			str[i] = str[i] + ('a' - 'A');

		}
		i++;
		
	}
	return(str);
}
int main()
{
	char str[10] = "CLAUDIA";
	ft_strlowcase(str);
	printf("%s\n", ft_strlowcase(str));
	return(0);
	}
