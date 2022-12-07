/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ali <ali@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:02:44 by ali               #+#    #+#             */
/*   Updated: 2022/12/06 14:27:54 by ali              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int zort(char *str, ...)
{
	va_list args;
	va_start(args, str);
	va_end(args);
	

	int i = 0;
	while (str[i])
	{
		char *s = va_arg(args, char *);
		ft_printf("\n%s\n", s);
		i++;
	}

	
}

int main()
{
	zort("aa", "AAA", "BBB");
}