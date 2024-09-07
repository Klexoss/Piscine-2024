/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:11:12 by clgutier          #+#    #+#             */
/*   Updated: 2024/06/27 17:02:37 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)

{
	int number;

	number = n;

	if (n <= -1)
	write(1, "N", 1);
	else 
	write(1, "P", 1);
}

int main(void)
{
	ft_is_negative(3);
	return (0);
}
