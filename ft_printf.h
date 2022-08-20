/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdolinar <pdolinar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:08:40 by pdolinar          #+#    #+#             */
/*   Updated: 2022/02/12 13:30:18 by pdolinar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int		ft_printf(const char *input, ...);
int		ft_print_char(char c);
int		ft_print_string(char *string);
int		ft_print_hex_upp(size_t n);
int		ft_print_hex_low(size_t n);
int		ft_print_int(int n);
int		ft_print_ptr(void *p);
int		ft_print_unsigned_int(unsigned int n);

#endif
