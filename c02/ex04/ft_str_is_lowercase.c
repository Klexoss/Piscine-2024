/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgutier <clgutier@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 15:19:30 by clgutier          #+#    #+#             */
/*   Updated: 2024/07/06 17:55:21 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		c = str[i++];
		if (!(c >= 'a' && c <= 'z'))
		{
			return (0);
		}
	}
	return (1);
}