/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:10:18 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/10 16:14:45 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
        if (index == 1)
                return (1);
        if (index == 0)
                return (0);
        if (index < 0)
                return (-1);

        if (index > 0)
                return ft_fibonacci(index -2) + ft_fibonacci(index -1);

}
#include <stdio.h>
int main()
{
    int x = 3;
    printf("%d", ft_fibonacci(x));
    return(0);
}
