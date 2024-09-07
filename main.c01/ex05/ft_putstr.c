/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 09:01:08 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/03 12:08:48 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#in
void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}	
}
/*
#include <unistd.h>
int main(void)
{
	char i[] = "abc";

	ft_putstr(i);
	return(0);
		
}*/
