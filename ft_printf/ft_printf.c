/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:53:33 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/16 16:08:35 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_choice(const char *format, va_list args)
{
	int	count;

	count = 0;
	format++;
	if (*format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (*format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (*format == 'p')
		count += ft_print_pointer(va_arg(args, void *));
	else if (*format == 'd' || *format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		count += ft_itoa_base((unsigned int)
				va_arg(args, unsigned int), 10, "0123456789");
	else if (*format == 'x')
		count += ft_itoa_base(
				va_arg(args, unsigned int), 16, "0123456789abcdef");
	else if (*format == 'X')
		count += ft_itoa_base(
				va_arg(args, unsigned int), 16, "0123456789ABCDEF");
	else
		count += ft_putchar(*format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int			count;
	va_list		args;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			count += ft_choice(format, args);
			format++;
		}
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
