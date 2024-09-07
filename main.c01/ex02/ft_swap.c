/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:29:57 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/02 14:43:09 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main(void)
#include <stdio.h>
{
	int num1;
	int num2;
	num1 = 2;
	num2 = 3;

	
	ft_swap(&num1, &num2);
	printf("%d\n%d", num1, num2);
	return(0);
 
}*/
