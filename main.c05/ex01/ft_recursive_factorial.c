/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 09:56:12 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/10 11:02:53 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_recursive_factorial(int n)
{
	if (n <= 0 )
	{
        return (0);
	} else if (n == 1)
	{
		return (1);    
	}else
	{
	    return (n * ft_recursive_factorial(n - 1));
	}
	
}
#include <stdio.h>
int     main()
{
        printf("Factorial of -1: %d\n", ft_recursive_factorial(-1));
        printf("Factorial of 0: %d\n", ft_recursive_factorial(0));
        printf("Factorial of 1: %d\n", ft_recursive_factorial(1));
        printf("Factorial of 4: %d\n", ft_recursive_factorial(4));
        printf("Factorial of 7: %d\n", ft_recursive_factorial(7));
        printf("Factorial of 10: %d\n", ft_recursive_factorial(10));
}

