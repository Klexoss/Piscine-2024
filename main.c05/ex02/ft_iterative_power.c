/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:00:32 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/10 11:56:48 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	while (nb > 0 && power > 0)
	{
		result *= nb;
		power--;
	}
	if (nb < 0 && power < 0)
		return (0);
	return (result);
	
}
#include <stdio.h>
int main()
{
	int x = 2;
	int y = 3;

	printf("%d\n", ft_iterative_power(x, y));
	return(0);
}
