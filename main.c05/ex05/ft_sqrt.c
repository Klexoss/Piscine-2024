/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:41:23 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/11 12:04:50 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_sqrt(int nb)
{
    int i;
    i = 1;
    while (i <= nb)
    {
        if(i * i == nb)
        return(i);
         i++;
    }
    return(0);
}
int main()
{
    int x = 16;
    printf("%d", ft_sqrt(x));
    return(0);
}
