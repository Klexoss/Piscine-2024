/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 18:14:03 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/10 09:53:50 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;
	
	if (nb <= 0 )
	{
		return (0);
	} if (nb == 1)
	{
	    return(1);
	}
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
#include <stdio.h>
int     main()
{
        printf("Factorial of -1: %d\n", ft_iterative_factorial(-1));
        printf("Factorial of 0: %d\n", ft_iterative_factorial(0));
        printf("Factorial of 1: %d\n", ft_iterative_factorial(1));
        printf("Factorial of 4: %d\n", ft_iterative_factorial(4));
        printf("Factorial of 7: %d\n", ft_iterative_factorial(7));
        printf("Factorial of 10: %d\n", ft_iterative_factorial(10));
}
