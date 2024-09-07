/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 08:37:24 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/03 09:01:35 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char    *ft_strcpy(char *dest, char *src)
{
        if (dest == NULL) return '\0';

        int i;

        i = 0;

        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return dest;

}

int  main(void)
{
        char src[] = "hello";
        char dest[100] ;
	ft_strcpy(dest, src);
  printf(" src: %s\n", src);
  printf(" dest: %s\n", dest);
  return 0;

}



