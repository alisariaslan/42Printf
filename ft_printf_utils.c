/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:52:18 by ali               #+#    #+#             */
/*   Updated: 2022/12/06 14:29:37 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//PRINTS CHAR VALUE
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

//PRINTS %
int	ft_printpercent()
{
	write(1, "%%", 1);
	return (1);
}

//PRINTS STRING VALUE (RETURNS 0)
void	ft_putstr(char *string)
{
	int	length;

	length = 0;
	while (string[length])
	{
		write(1, &string[length], 1);
		length++;
	}
}

//PRINTS STRING VALUE (RETURNS LENGTH)
int	ft_printstr(char *string)
{
	int	length;

	length = 0;
	if (!string)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (string[length])
	{
		write(1, &string[length], 1);
		length++;
	}
	return (length);
}

//PRINTS INT VALUE AS NUMBER 
int	ft_printnbr(int value)
{
	int		length;
	char	*string;

	length = 0;
	if (value == 0)
		return (write(1, "0", 1));
	string = ft_itoa(value);
	length = ft_printstr(string);
	free(string);
	return (length);
}
