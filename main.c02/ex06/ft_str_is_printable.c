/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 18:31:49 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/04 08:38:32 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_str_is_printable(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		if (!(c >= 32  && c <= 126))
		{
			return(0);
			
		}
	}
	return(1);
}
int main()
{
	char str[10] = "g";
	ft_str_is_printable(str);
	printf("%d\n", ft_str_is_printable(str));
}
