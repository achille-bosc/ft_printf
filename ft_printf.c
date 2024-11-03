/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abosc <abosc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 04:47:15 by achillebosc       #+#    #+#             */
/*   Updated: 2024/11/01 23:58:43 by abosc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == 'X')
		print_length = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_length += ft_printchar('%');
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' )
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
// int	main(void)
// {
// 	ft_printf("Test\n");
// 	printf("test\n");
// 	ft_printf("Test%i\n", 2);
// 	printf("test%i\n", 2);
// 	ft_printf("Test, %i, %c\n", 3, 'a');
// 	printf("test, %i, %c\n", 3, 'a');
// 	ft_printf("Test, %i, %c, %s\n", 4, 'a', "encore un Test");
// 	printf("test, %i, %c, %s\n", 4, 'a', "encore un Test");
// 	ft_printf("Test, %i, %c, %s\n", 4, 'a', "encore un Test");
// 	printf("test, %i, %c, %s\n", 4, 'a', "encore un Test");
// 	return (0);
// }
