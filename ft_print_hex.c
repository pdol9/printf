/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:04:03 by pdolinar          #+#    #+#             */
/*   Updated: 2022/02/12 13:30:50 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_low(size_t n)
{
	size_t	len;

	len = 0;
	if (n > 15)
	{
		len += ft_print_hex_low(n / 16);
		len += ft_print_hex_low(n % 16);
	}
	else
	{
		if (n < 10)
			len += ft_print_char(n + '0');
		else
			len += ft_print_char(n - 10 + 'a');
	}
	return (len);
}

int	ft_print_hex_upp(size_t n)
{
	size_t	len;

	len = 0;
	if (n > 15)
	{
		len += ft_print_hex_upp(n / 16);
		len += ft_print_hex_upp(n % 16);
	}
	else
	{
		if (n < 10)
			len += ft_print_char(n + '0');
		else
			len += ft_print_char(n - 10 + 'A');
	}
	return (len);
}
