/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 21:35:44 by msariasl          #+#    #+#             */
/*   Updated: 2022/12/08 14:31:25 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int				ft_atoi(const char *nptr);
char			*ft_itoa(int n);
int				ft_putchar(char c);
int				ft_printstr(char *string);
int				ft_printnbr(int value);
int				ft_printpercent();
int				ft_print_unsigned(unsigned int n);
int				ft_print_hex(unsigned int n, const char format);
int				ft_print_ptr(unsigned long long n);
int				ft_printf(const char *str, ...);

#endif
