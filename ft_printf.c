/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 09:54:10 by ali               #+#    #+#             */
/*   Updated: 2022/12/09 12:53:41 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//GETS FROM DEFAULT AND SENDS TO SPECIFIC TYPE TO A FUNCITON
int	ft_formats(va_list args, char symbol)
{
	int	lenght;
	
	lenght = 0;
	if (symbol == 'c')
		lenght += ft_putchar(va_arg(args, int));
	else if (symbol == 's')
		lenght += ft_printstr(va_arg(args, char *));
	else if (symbol == 'd' || symbol == 'i')
		lenght += ft_printnbr(va_arg(args, int));
	else if (symbol == '%') 
		lenght += ft_printpercent();
	else if (symbol == 'u')
		lenght += ft_print_unsigned(va_arg(args, unsigned int));
	else if (symbol == 'x' || symbol == 'X')
		lenght += ft_print_hex(va_arg(args, unsigned int), symbol);
	else if (symbol == 'p')
		lenght += ft_print_ptr(va_arg(args, unsigned long long));
	return (lenght);
}

//DEFAULT FUNCTION
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
