/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 11:33:22 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/28 10:46:12 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdint.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
int		ft_loop_format(const char *format, int chars, va_list args);
int		ft_flaghandling(char c, va_list args);
int		ft_hex(unsigned long number, char c);
int		ft_counthex(unsigned long c);
int		ft_putstr(char *s, char c);
#endif
