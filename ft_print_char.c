/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:02:49 by pdolinar          #+#    #+#             */
/*   Updated: 2022/02/12 13:29:08 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_string(char *string)
{
	size_t	i;

	if (!string)
	{
		write(1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (string[i] != '\0')
	{
		ft_print_char(string[i]);
		i++;
	}
	return (i);
}
