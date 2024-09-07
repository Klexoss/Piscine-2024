/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:35:31 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/17 11:16:55 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *result;

    if (min >= max)
    {
        *range = NULL;
        return 0;
    }

    *range = (int*)malloc(sizeof(int) * (max - min));
    if (*range == NULL)
        return (0);

    result = *range;
    i = 0;
    while (min < max)
    {
        result[i] = min;
        min++;
        i++;
    }

    return i;
}
#include <stdio.h>
int main()
{
    int min = 3;
    int max = 9;
    int i;
    int *range;

    int num_elements = ft_ultimate_range(&range, min, max);
    i = 0;
    while (i < num_elements)
    {
        printf("%d ", range[i]);
        i++;
    }
    printf("\n");

    free(range);
    return 0;
}

