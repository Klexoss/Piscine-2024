/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 10:34:33 by clgutier          #+#    #+#             */
/*   Updated: 2024/06/30 15:30:39 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	int		digit;
	char	character;

	digit = 1;
	character = digit + '/';
	while (character <= '9')
	{
		write(1, &character, 1);
		character++;
	}
}
