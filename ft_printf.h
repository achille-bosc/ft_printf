/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:38:51 by abosc             #+#    #+#             */
/*   Updated: 2024/11/01 22:58:47 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft/libft.h"
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>

int	ft_printchar(int c);
int	ft_printnbr(int num);
int	ft_printstr(char *str);
int	ft_print_unsigned(unsigned int n);
int	ft_print_hex(unsigned int num, const char format);
int	ft_print_ptr(uintptr_t ptr);
int	ft_printf(const char *str, ...);
