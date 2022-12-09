/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:55:06 by ali               #+#    #+#             */
/*   Updated: 2022/12/09 13:05:51 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//TAKES VALUE AND RETURNS ITS DIGIT LENGTH
int	ft_len_hex(unsigned int value)
{
	int	len;

	len = 0;
	while (value != 0)
	{
		value = value / 16;
		len++;
	}
	return (len);
}

//CONVERTS VALUE TO HEXADECIMAL WITH RECURSIVE
void	ft_put_hex(unsigned int value, const char format) 
{
	if (value >= 16) 
	{
		ft_put_hex(value / 16, format);
		ft_put_hex(value % 16, format);
	}
	else
	{
		if (value > 9)
		{
			if (format == 'x')
				ft_putchar(value - 10 + 'a');
			if (format == 'X')
				ft_putchar(value - 10 + 'A');
		}
		else
			ft_putchar(value + 48);
	}
}

//PRINTS AS HEXADECIMAL
int	ft_print_hex(unsigned int value, const char format)
{
	if (value == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		ft_put_hex(value, format);
	return (ft_len_hex(value));
}
