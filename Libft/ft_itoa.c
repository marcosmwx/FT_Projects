/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:19:00 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/08 20:29:07 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_len(int t)
{
	int	quant;

	quant = 0;
	if (t <= 0)
	{
		quant++;
		t *= -1;
	}
	while (t != 0)
	{
		t = t / 10;
		quant++;
	}
	return (quant);
}

char	*ft_itoa(int n)
{
	int			quant;
	char		*str;
	long int	nb;

	nb = n;
	quant = ft_count_len(n);
	str = (char *)malloc((quant + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[quant] = '\0';
	if (n < 0)
		nb *= -1;
	while (quant-- > 0)
	{
		str[quant] = (nb % 10) + 48;
		nb = nb / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
char *str;
	str = ft_itoa(INT_MIN);
	printf("%s\n", str);
//	str = ft_itoa(-123);
//	printf("%s\n", str);
//	str = ft_itoa(0);
//	printf("%s\n", str);
	free(str);
}
*/
