/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:24:41 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/06 17:56:16 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		if (!(c >= 'A' && c <= 'Z'))
		{
			return (0);
		}
	}
	return (1);
}
