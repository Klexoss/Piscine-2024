/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 09:18:24 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/05 09:25:43 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i] && i < n)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int main()
{
        char s1[100] = "claufia";
        char s2[100] = "claudia";

        printf("original text:");
        printf("\n%s", s1);
        printf("\n%s", s2);
        int result = ft_strncmp(s1, s2, 4);
        if( result < 0 )
      printf( "\nDon't match\n" );
   else if( result == 0 )
      printf( "\nFirst is equal to second.\n" );
   else
      printf( "\nDon't match\n" );
}
