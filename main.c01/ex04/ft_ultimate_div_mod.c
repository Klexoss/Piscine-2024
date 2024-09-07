/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 17:02:16 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/03 12:07:09 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{

	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

#include <stdio.h>
int main(void)
{
	int num1;
        int  num2;
	num1 = 11;
	num2 = 5;

    ft_ultimate_div_mod(&num1,&num2);
    printf("%d %d", num1, num2);
}
