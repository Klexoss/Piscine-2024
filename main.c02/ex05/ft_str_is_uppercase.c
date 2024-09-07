/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:24:41 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/03 15:27:23 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		if (!(c >= 'A' && c <= 'Z'))
		{
			return(0);
			
		}
	}
	return(1);
}
int main()
{
	char str[10] = "CLAUDIA";
	ft_str_is_uppercase(str);
	printf("%d\n", ft_str_is_uppercase(str));
}
