/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 10:49:50 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/02 12:44:39 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		x++;
	}
	return (x);
}
/*
#include <stdio.h>
int main(void)
{
    char i[] = "absdc";
    int y = ft_strlen(i);
    
    printf("%d",y);
    return(0);
}*/
