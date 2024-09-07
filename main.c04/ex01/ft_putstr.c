/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:52:41 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/07 15:03:45 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
int ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}



void ft_putstr(char *str)
{
	write(1, str,ft_strlen(str));
}

int main(void)
{  
    char str1[] = "claudia";
	ft_strlen(str1);
	ft_putstr(str1);
	return (0);
}
