/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:54:54 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/02 12:46:46 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	c;
	int	d;

	c = a / b;
	d = a % b;
	*div = c;
	*mod = d;
}
/*
#include <stdio.h>
int main (void)
{
	int x;
	int y;
	int num1 = 11;
	int num2 = 5;


	ft_div_mod(num1, num2, &x, &y);
	printf("%d %d %d %d",num1, num2, x, y);
}*/
