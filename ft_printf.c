/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 10:38:56 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/14 15:06:05 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_checkforoption(const char *formstr, int *pos, int curarg)
{
	char	next;

	next = formstr[*pos + 1]
	if (x == '%')
	else if (x == 'c')
	else if (x == 's')
	else if (x == 'p')
	else if (x == 'd')
	else if (x == 'i')
	else if (x == 'u')
	else if (x == 'x')
	else if (x == 'X')
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		chars;
	int		numargs;

	chars = 0;
	numargs = 0;
	while (chars < ft_strlen(format) && format[chars] != '\0')
	{
		if (format[chars] = '%')
		{
		chars += ft_checkforoption(format, &chars);
		}
		chars++;
	}
	return (chars);
}
