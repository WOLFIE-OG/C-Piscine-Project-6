/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otodd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:44:00 by otodd             #+#    #+#             */
/*   Updated: 2023/10/19 18:06:20 by otodd            ###   ########.fr       */
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

void	ft_handle_args(int nb, char **a_a)
{
	int	index;

	index = 1;
	while (index < nb)
	{
		ft_putstr(a_a[index++]);
		ft_putchar('\n');
	}
}

int	main(int arg_n, char **arg_a)
{
	ft_handle_args(arg_n, arg_a);
	return (0);
}
