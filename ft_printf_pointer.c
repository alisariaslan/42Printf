/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:06:38 by ali               #+#    #+#             */
/*   Updated: 2022/12/09 13:06:23 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//TAKES VALUE AND RETURNS ITS DIGIT LENGTH
int	hex_len(unsigned long long value)
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
void	ft_put_hexx(unsigned long long value)
{
	if (value >= 16)
	{
		ft_put_hexx(value / 16);
		ft_put_hexx(value % 16);
	}
	else
	{
		if (value > 9)
			ft_putchar(value - 10 + 'a');
		else
			ft_putchar(value + 48);
	}
}

//PRINTS AS HEXADECIMAL TAKES ULL
int	ft_print_ptr(unsigned long long value)
{
	int	len;

	len = 0;

	len += write(1, "0x", 2);
	if (value == 0)
		len += write(1, "0", 1);
	else
		ft_put_hexx(value);
	return (hex_len(value) + len);
}
