/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:58:42 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/10 15:09:04 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
}
#include <stdio.h>
#include <math.h>
int	ft_recursive_power(int nb, int power);
int	main()
{
	printf("2 by power -1 should be %.0lf, is %d\n", pow(2, -1), ft_recursive_power(2, -1));
	printf("-1 by power 3 should be %.0lf, is %d\n", pow(-1, 3), ft_recursive_power(-1, 3));
	printf("0 by power 0 should be %.0lf, is %d\n", pow(0, 0), ft_recursive_power(0, 0));
	printf("1 by power 0 should be %.0lf, is %d\n", pow(1, 0), ft_recursive_power(1, 0));
	printf("0 by power 1 should be %.0lf, is %d\n", pow(0, 1), ft_recursive_power(0, 1));
	printf("1 by power 99 should be %.0lf, is %d\n", pow(1, 99), ft_recursive_power(1, 99));
	printf("4 by power 2 should be %.0lf, is %d\n", pow(4, 2), ft_recursive_power(4, 2));
	printf("5 by power 5 should be %.0lf, is %d\n", pow(5, 5), ft_recursive_power(5, 5));
	printf("7 by power 0 should be %.0lf, is %d\n", pow(7, 0), ft_recursive_power(7, 0));
	printf("10 by power 3 should be %.0lf, is %d\n", pow(10, 3), ft_recursive_power(10, 3));
	return 0;
}
