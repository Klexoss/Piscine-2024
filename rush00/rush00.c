/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 17:10:08 by clgutier          #+#    #+#             */
/*   Updated: 2024/06/30 18:07:21 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_putchar(char c);

void	row1(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		j++;
	}
}

void	row2(int x)
{
	int	j;

	j = 1;
	while (j <= x)
	{
		if (j == 1 || j == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		j++;
	}
}

void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error", 5);
		return ;
	}	
	i = 1;
	while (i <= y)
	{
		if (i == 1 || i == y)
		{
			row1(x);
		}
		else
		{
			row2(x);
		}
		ft_putchar('\n');
		i++;
	}
}
