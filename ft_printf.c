/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:38:56 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/19 16:48:17 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_isspace(char c)
{	
	if (c == '\t' || c == '\v' || c == '\f'
		|| c == '\r' || c == '\n' || c == ' ')
		return (1);
	return (0);
}

void ft_flaghandling(char c, va_list args)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (c == '%')
		ft_putchar_fd('%', 1);
	else if (c == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (c == 'i')
		ft_putstr_fd(ft_itoa(va_arg(args, int)), 1);
	else
		ft_putchar_fd(c, 1);
}

int	ft_checkforoption(const char c, const char cc, va_list	args)
{
	char set[10] = "cspdiuxX%%";
	char x;
	int	i;

	// set = "cspdiuxX%%";
	i = 0;
	x = c;
	// if (c == '\0' || cc == '\0')
	// 	return (0);
	if (ft_isspace(c) == 1)
	{
		x = cc;
	}
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
		if (format[chars] == '%' && format[chars+1] != '\0' && format[chars+2] != '\0')
		{
			ft_checkforoption(format[chars+1], format[chars+2], args);
			chars++;
		}
		else if (format[chars] != '%')
			ft_putchar_fd(format[chars], 1);
		chars++;
	}
	va_end(args);
	return (chars);
}
