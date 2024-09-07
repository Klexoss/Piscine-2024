/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:12:11 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/06 18:08:43 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int i;
	int c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		if (!(c >= '0' && c <= '9'))
		{
			return(0);
			
		}
	}
	return(1);
}
int main()
{
	char str[20] = "567y7";
	ft_str_is_numeric(str);
	printf("%d\n", ft_str_is_numeric(str));
	return(0);

}
