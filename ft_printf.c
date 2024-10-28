/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:47:15 by achillebosc       #+#    #+#             */
/*   Updated: 2024/10/28 19:54:41 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf(const char *str, ...)
{
	va_list	args;

	if (!str)
		return ;
	search_balises_number(str);
	va_start(args, str);
}
