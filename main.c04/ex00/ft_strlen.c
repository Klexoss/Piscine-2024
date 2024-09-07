/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:24:29 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/07 14:47:09 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
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

int main()
{
	printf("expected: 7 ");
	printf("result: %d\n", ft_strlen("claudia"));
        printf("expected: 8 ");
        printf("result: %d\n", ft_strlen("12345678"));
	return(0);
}
