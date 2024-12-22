/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:19:00 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/16 12:37:36 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_len(unsigned int t, int base)
{
	int	quant;

	if (t == 0)
		return (1);
	quant = 0;
	while (t != 0)
	{
		t = t / base;
		quant++;
	}
	return (quant);
}

int	ft_itoa_base(unsigned int n, int base, const char *digits)
{
	int			quant;
	int			full_len;
	char		*str;

	if (n == 0)
		return (ft_putchar('0'));
	quant = ft_count_len(n, base);
	full_len = quant;
	str = (char *)malloc((quant + 1) * sizeof(char));
	if (!str)
		return (0);
	str[quant] = '\0';
	while (quant-- > 0)
	{
		str[quant] = digits[n % base];
		n = n / base;
	}
	ft_putstr(str);
	free(str);
	return (full_len);
}
