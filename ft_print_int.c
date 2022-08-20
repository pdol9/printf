/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:02:28 by pdolinar          #+#    #+#             */
/*   Updated: 2022/02/12 13:32:33 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = ft_print_string("-2147483648");
		return (len);
	}
	if (n < 0)
	{
		len = ft_print_char('-');
		n = -(n);
	}
	if (n >= 10)
	{
		len += ft_print_int(n / 10);
		len += ft_print_int(n % 10);
	}
	else
		len += ft_print_char(n + '0');
	return (len);
}

int	ft_print_unsigned_int(unsigned int n)
{
	int	len;

	len = 0;
	if (n >= 10)
	{
		len += ft_print_int(n / 10);
		len += ft_print_int(n % 10);
	}
	else
		len += ft_print_char(n + '0');
	return (len);
}
