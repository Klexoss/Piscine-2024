/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:45:59 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/05 11:37:21 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
int     ft_strcmp(char *s1, char *s2)
{
        int     i;

        i = 0;
        while (s1[i])
        {
                if (s1[i] != s2[i])
                return(s1[i] - s2[i]);
                i++;
        }
        return(0);
}
int main ()
{
        char s1[100] = "Llaudia";
        char s2[100] = "claudia";

        printf("original text:");
        printf("\n%s", s1);
        printf("\n%s", s2);
        int result = ft_strcmp(s1, s2);
        if( result < 0 )
      printf( "\nDon't match\n" );
   else if( result == 0 )
      printf( "\nFirst is equal to second.\n" );
   else
      printf( "\nDon't match\n" );
}

int main ()
{
   char s1[100] = "claudia";
   char s2[100] = "claudia";
   
   int result = ft_strcmp(s1,s2);
   printf("%d", result);
}
