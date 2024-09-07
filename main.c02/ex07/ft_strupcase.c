/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:49:30 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/04 08:48:10 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char *ft_strupcase(char *str)
{

	int i;
	int c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'a'  && c <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');

		}
		i++;
		
	}
	return(str);
}
int main()
{
	char str[10] = "claudia";
	ft_strupcase(str);
	printf("%s\n", ft_strupcase(str));
	return(0);
	}
