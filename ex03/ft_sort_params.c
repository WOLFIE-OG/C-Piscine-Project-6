/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:44:00 by otodd             #+#    #+#             */
/*   Updated: 2023/10/20 12:14:40 by otodd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] == s2[index] && (s1[index] != '\0' || s2[index] != '\0'))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}

void	ft_handle_args(int nb, char **a_a)
{
	int		index;
	char	*swap;
	int		is_found;

	is_found = 1;
	while (is_found)
	{
		index = 1;
		is_found = 0;
		while (index < nb - 1)
		{
			if (ft_strcmp(a_a[index], a_a[index + 1]) > 0)
			{
				swap = a_a[index];
				a_a[index] = a_a[index + 1];
				a_a[index + 1] = swap;
				is_found = 1;
			}
			index++;
		}
	}
}

int	main(int arg_n, char **arg_a)
{
	int	index;

	index = 1;
	ft_handle_args(arg_n, arg_a);
	while (index < arg_n)
	{
		ft_putstr(arg_a[index++]);
		ft_putchar('\n');
	}
	return (0);
}
