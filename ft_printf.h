/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarre <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:58:18 by gmarre            #+#    #+#             */
/*   Updated: 2023/11/15 18:38:27 by gmarre           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int n);
int	ft_strlen(char *str);
int	ft_putunsigned(unsigned int n);
int	ft_base_sixteen(char arg, unsigned int n);
int	ft_which_printf(char format, va_list args);
int	ft_void_sixteen(unsigned long nb);
#endif
