/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbetz <rbetz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 14:00:49 by rbetz             #+#    #+#             */
/*   Updated: 2022/04/25 14:35:47 by rbetz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include "libft/libft.h"
#include "printf.h"

#define RED "\033[1;31m"
#define GREEN "\033[01;32m"
#define NC "\033[0m"

int main(void)
{
	printf(RED"OK, lets run some tests...:\n"NC);
	printf(GREEN"Only a single Char:\n"NC);
	printf("Original one	:%c	:\n", 'w');
	ft_printf("Your one	:%c	:\n", 'w');
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"A little String:\n"NC);
	printf("Original one	:%s	:\n", "Where is the end of the World?");
	ft_printf("Your one	:%s	:\n", "Where is the end of the World?");
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"String without flag:\n"NC);
	printf("Original one	:Is it here?	:\n");
	ft_printf("Your one	:Is it here?	:\n");
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"Lets ask the %%:\n"NC);
	printf("Original one	:%s%%%s	:\n", "Hey ", " How is it going?");
	ft_printf("Your one	:%s%%%s	:\n", "Hey ", " How is it going?");
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"%% gave us an integer. Can you print it?:\n"NC);
	printf("Original one	:%%%s%i	:\n", "s Integer: ", 45);
	ft_printf("Your one	:%%%s%i	:\n", "s Integer: ", 45);
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"What's with negativ, MAX and MIN?:\n"NC);
	printf("Original one	:%i, %i, %i	:\n", -125, 2147483647, (int)-2147483648);
	ft_printf("Your one	:%i, %i, %i	:\n", -125, 2147483647, -2147483648);
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"Oh, it's no Integer. It's a decimal. What about that?:\n"NC);
	printf("Original one	:%d, %d, %d, %d	:\n",75031, -125, 2147483647, (int)-2147483648);
	ft_printf("Your one	:%d, %d, %d, %d	:\n",75031, -125, 2147483647, -2147483648);
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"Or an Unsigned?:\n"NC);
	printf("Original one	:%u, %u, %u, %u	:\n",75031, -125, (unsigned int)4294967295, 0);
	ft_printf("Your one	:%u, %u, %u, %u	:\n",75031, -125, 4294967295, 0);
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"He is asking for a hexadecimal code:\n"NC);
	printf("Original one	:%x, %x, %x, %x	:\n", 75031, 125, (unsigned int)4294967295, 0);
	ft_printf("Your one	:%x, %x, %x, %x	:\n", 75031, 125, 4294967295, 0);
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN"He want it in Capslock!:\n"NC);
	printf("Original one	:%X, %X, %X, %X	:\n",75031, 125, (unsigned int)4294967295, 0);
	ft_printf("Your one	:%X, %X, %X, %X	:\n",75031, 125, 4294967295, 0);
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	printf(GREEN":\n"NC);
	printf("Original one	:%p	:\n", NULL);
	ft_printf("Your one	:%p	:\n", NULL);
	printf("#-#-#-#-#-#-#-#-#-#-#\n");
	return (0);
}
