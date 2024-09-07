char/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:11:03 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/03 15:11:10 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int     ft_str_is_alpha(char *str)
{
        int i;
        int c;

        i = 0;
        while (str[i])
        {
                c = str[i++];
                if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
                {
                        return(0);

                }
        }
        return(1);
}
int main()
{
        char str[10] = "clau5dia";
        ft_str_is_alpha(str);
        printf("%d\n", ft_str_is_alpha(str));
}

