/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:34:33 by clgutier          #+#    #+#             */
/*   Updated: 2024/06/27 17:01:23 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int digit = 1;
	char character = digit + '/';
	while (character <= '9')
	{
		write(1, &character, 1);
		character++;
	}
}

int main(void)
{
	ft_print_numbers();
	return(0);
}
