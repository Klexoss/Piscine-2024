/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:55:23 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/17 09:34:50 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int *ft_range(int min, int max)
{
	int	i;
	int	*result;
	
	if (min >= max)
		return (NULL);
	i = max - min;
	result = (int*)malloc(sizeof(int)*(i));
	
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
#include <stdio.h>
int main()
{
    int max = 9;
    int min = 1;
    int i;
    int *ptr;
    ptr = ft_range(min, max);

	    i = 0;
	    while (i < max - min)
	    {
		    printf("%d ", ptr[i]);
		    i++;
	    }
	    printf("\n");
	    free(ptr);
	    //ptr = 0;
	    //printf("%d\n", ptr);
    return (0);
}
