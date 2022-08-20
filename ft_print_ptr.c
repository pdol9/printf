/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:04:38 by pdolinar          #+#    #+#             */
/*   Updated: 2022/02/12 13:33:55 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_ptr(void *p)
{
	size_t	len;

	len = (size_t)p;
	if (!p)
		len = ft_print_string("0x0");
	else
		len = ft_print_string("0x") + ft_print_hex_low(len);
	return (len);
}
