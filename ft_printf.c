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

int	ft_checkforoption(const char c)
{
	char set[10];
	int	i;

	set = "%cspdiuxX\0";
	i = 0;
	if (ft_isspace(c) == 1)
		ft
	while (set[i] != '\0' && c != set[i])
		i++;
	if (set[i] == '\0')
		return (0);
	return (1);
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
			if (ft_checkforoption(format[chars++]) != 0);
				numargs++;
		}
		chars++;
	}
	
	return (chars);
}
