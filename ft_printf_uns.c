/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:02:25 by ali               #+#    #+#             */
/*   Updated: 2022/12/08 10:08:06 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int count(unsigned int value)
{
	int count;

	count = 0;
	while (value != 0)
	{
		value = value / 10;
		count++;
	}
	return (count);
}

char *ft_uns_itoa(unsigned int value)
{
	char *string;
	int length;

	length = count(value);
	string = malloc(length + 1);
	string[length] = '\0';
	while (value != 0)
	{
		string[--length] = value % 10 + 48;
		value = value / 10;
	}
	return (string);
}

int ft_print_unsigned(unsigned int value)
{
	char *string;
	int length;

	if (value == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	string = ft_uns_itoa(value);
	length = ft_printstr(string);
	free(string);
	return (length);
}

void lol(int c, ...)
{
	#include <stdio.h>
	va_list list;
	va_start(list,c);
	printf("\nsayi1: %d\n",va_arg(list,int));
	
	printf("\nsayi2: %d\n",va_arg(list,int));
	printf("\nsayi3: %d\n",va_arg(list,int));
}

int main()
{
	#include <stdio.h>
	//printf("%u\n",4294967290);
	//ft_printf("%u\n",4294967290);
	lol(3,1022,3432,1232);
}