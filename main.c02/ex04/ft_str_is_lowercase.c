/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:19:30 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/03 15:23:20 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		if (!(c >= 'a' && c <= 'z'))
		{
			return(0);
			
		}
	}
	return(1);
}
int main()
{
	char str[10] = "CLaudia";
	ft_str_is_lowercase(str);
	printf("%d\n", ft_str_is_lowercase(str));
}
