/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_to_words.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljylhank <ljylhank@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:23:49 by ljylhank          #+#    #+#             */
/*   Updated: 2024/07/14 13:07:30 by clgutier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	str_length(char *str);
int	complex_num_to_words(char *dictionary, char *number);

char	*find_key(char *dictionary, char *number)
{
	int	i;
	int	i2;
	int	ireturn;

	i = 0;
	while (dictionary[i])
	{
		if (dictionary[i] == number[0])
		{
			i2 = 0;
			ireturn = 1;
			while (number[i2] != '\0')
			{
				if (dictionary[i + i2] != number[i2])
					ireturn = 0;
				i2++;
			}
			if (ireturn == 1 && (dictionary[i + i2] < '0'
					|| dictionary[i + i2] > '9'))
				return (dictionary + i);
		}
		i++;
	}
	return (0);
}

void	write_value(char *key_pointer)
{
	int	i;

	i = 0;
	if (key_pointer[i] == '\n')
		i++;
	while (key_pointer[i] >= '0' && key_pointer[i] <= '9')
		i++;
	while (key_pointer[i] == ' ')
		i++;
	if (key_pointer[i] == ':')
		i++;
	while (key_pointer[i] == ' ')
		i++;
	while (key_pointer[i] >= ' ' && key_pointer[i] <= '~')
	{
		write(1, &key_pointer[i], 1);
		i++;
	}
	write(1, " ", 1);
//	if (key_pointer[i] != '\n')
}

char	*set_newline_number(char *number)
{
	char	*newline_number;
	int		i;

	i = 0;
	newline_number = malloc(str_length(number) + 2);
	newline_number[0] = '\n';
	while (number[i])
	{
		newline_number[i + 1] = number[i];
		i++;
	}
	newline_number[i + 1] = '\0';
	return (newline_number);
}

char	*create_string_of_digits(int digits)
{
	char	*string;
	char	*newline_string;

	string = malloc(digits + 1);
	string[0] = '1';
	string[digits] = '\0';
	digits--;
	while (digits > 0)
	{
		string[digits] = '0';
		digits--;
	}
	newline_string = set_newline_number(string);
	free(string);
	return (newline_string);
}

int	find_closest_digit(char *dictionary, char *number)
{
	char	*key_pointer;
	char	*new_number;
	char	*newline_number;
	int		difference;
	int		i;

	difference = 0;
	i = -1;
	while (i < 0)
	{
		i = str_length(number) - difference;
		if (i <= 0)
			return (-1);
		newline_number = create_string_of_digits(i);
		key_pointer = find_key(dictionary, newline_number);
		free(newline_number);
		if (key_pointer == 0)
		{
			i = -10;
			difference++;
		}
	}
	return (difference);
}

char	*duplicate_number_range(char *number, int max)
{
	char	*return_num;
	int		i;

	i = 0;
	return_num = malloc(sizeof(char) * (max + 2));
	while (i <= max)
	{
		return_num[i] = number[i];
		i++;
	}
	return_num[i] = 0;
	return (return_num);
}

char	*get_two_digits(char *number)
{
	char	*return_num;
	int		i;

	return_num = malloc(sizeof(char) * 3);
	return_num[0] = number[0];
	return_num[1] = '0';
	return_num[2] = 0;
	return (return_num);
}

int	num_to_words(char *dictionary, char *number, int free_num)
{
	int		i;
	int		difference;
	char	*key_pointer;
	char	*new_number;
	char	*newline_number;
	char	*temp_pointer;

	newline_number = set_newline_number(number);
	if (number[0] == '0')
	{
		if (number[1] != 0)
		{
			temp_pointer = number;
			temp_pointer++;
			num_to_words(dictionary, temp_pointer, 0);
		}
		else if (free_num == -1)
		{
			key_pointer = find_key(dictionary, newline_number);
			write_value(key_pointer);
			free(newline_number);
		}
		return (0);
	}
	if (number[0] < '2' && number[1] != 0 && str_length(number) < 3)
	{
		if (number[1] < '9')
		{
			key_pointer = find_key(dictionary, newline_number);
			write_value(key_pointer);
			return (0);
		}
	}
	else if (number[0] <= '9' && number[1] == 0 && str_length(number) < 3)
	{
		key_pointer = find_key(dictionary, newline_number);
		write_value(key_pointer);
		return (0);
	}
	else if (str_length(number) == 2)
	{
		key_pointer = find_key(dictionary, get_two_digits(number));
		write_value(key_pointer);
		num_to_words(dictionary, duplicate_number_range(number + 1, 0), 1);
		return (0);
	}
	i = 0;
	free(newline_number);
	difference = find_closest_digit(dictionary, number);
	if (difference == 0)
	{
		new_number = malloc(3 * sizeof(char));
		new_number[0] = '\n';
		new_number[1] = number[i];
		new_number[2] = '\0';
		key_pointer = find_key(dictionary, new_number);
		if (key_pointer != NULL)
			write_value(key_pointer);
		free(new_number);
		new_number = create_string_of_digits(str_length(number));
		key_pointer = find_key(dictionary, new_number);
		if (key_pointer != NULL)
			write_value(key_pointer);
		free(new_number);
	}
	else
	{
		num_to_words(dictionary, duplicate_number_range(number, difference), 1);
		temp_pointer = number;
		temp_pointer += difference;
		new_number = create_string_of_digits(str_length(temp_pointer));
		key_pointer = find_key(dictionary, new_number);
		if (key_pointer != NULL)
			write_value(key_pointer);
		free(new_number);
	}
	if (str_length(number) > 0)
	{
		temp_pointer = number;
		temp_pointer += 1 + difference;
		num_to_words(dictionary, temp_pointer, 0);
	}
	if (free_num == 1)
		free(number);
	return (0);
}
