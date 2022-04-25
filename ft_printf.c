/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:38:56 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/25 14:36:35 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>
int	ft_isspace(char c)
{	
	if (c == '\t' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

static int	ft_counthex(long c)
{
	int	n;

	n = 0;
	if (c == 0)
		return (1);
	while (c != 0)
	{
		c = c / 16;
		n++;
	}
	return (n);
}

int	ft_hex(long number, char c)
{
	long	quotient;
	long	remainder;
	int		i;
	char	*result;
	
	quotient = number;
	if (number == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	i = ft_counthex(number);
	result = ft_calloc(i + 1,sizeof(char));
	if (result == NULL)
		return (0);
	while (quotient != 0 && i > 0)
	{
		i--;
		remainder = quotient % 16;
		if (remainder < 10)
			result[i] = remainder + '0';
		else if (c == 'X')
			result[i] = remainder + 'A' - 10;
		else
			result[i] = remainder + 'a' - 10;
		quotient = quotient / 16;
	}
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(result, 1);
	free(result);
	return(ft_counthex(number));
}

void ft_flaghandling(char c, va_list args)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'i' || c == 'd')
		ft_putstr_fd(ft_itoa(va_arg(args, int)), 1);
	else if (c == 'u')
		ft_putstr_fd(ft_itoa(va_arg(args, unsigned int)), 1);
	else if (c == 'p' || c == 'x' || c == 'X')
		ft_hex(va_arg(args, unsigned int), c);
	else
		ft_putchar_fd(c, 1);
}

int	ft_checkforoption(const char c, va_list	args)
{
	char set[10] = "cspdiuxX%%";
	char x;
	int	i;

	// set = "cspdiuxX%%";
	i = 0;
	x = c;
	while (set[i] != '\0' && x != set[i])
		i++;
	if (set[i] != '\0')
	{
		ft_flaghandling(set[i], args);
		return (1);
	}
	return (0);
}


int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		chars;

	chars = 0;
	va_start(args, format);
	while (chars < ft_strlen(format) && format[chars] != '\0')
	{
		if (format[chars] == '%' && format[chars+1] != '\0')
		{
			ft_checkforoption(format[chars+1], args);
			chars++;
		}
		else if (format[chars] != '%')
			ft_putchar_fd(format[chars], 1);
		chars++;
	}
	va_end(args);
	return (chars);
}
