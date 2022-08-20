/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:02:18 by pdolinar          #+#    #+#             */
/*   Updated: 2022/02/12 13:34:45 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_format(va_list args, int len, const char *input)
{
	if (*input == 'c')
		len = ft_print_char(va_arg(args, int));
	if (*input == 's')
		len = ft_print_string(va_arg(args, char *));
	if (*input == 'p')
		len = ft_print_ptr(va_arg(args, void *));
	if (*input == 'd' || *input == 'i')
		len = ft_print_int(va_arg(args, int));
	if (*input == 'u')
		len = ft_print_unsigned_int(va_arg(args, unsigned int));
	if (*input == 'x')
		len = ft_print_hex_low(va_arg(args, unsigned int));
	if (*input == 'X')
		len = ft_print_hex_upp(va_arg(args, unsigned int));
	if (*input == '%')
		len = ft_print_char('%');
	return (len);
}

int	ft_printf(const char *input, ...)
{
	int		len;
	va_list	args;

	va_start(args, input);
	len = 0;
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			len += check_format(args, len, input);
		}
		else
			len += ft_print_char(*input);
		input++;
	}
	va_end(args);
	return (len);
}
