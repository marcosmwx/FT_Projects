/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:50:39 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/05 16:52:24 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*
#include <unistd.h>

int	main(void)
{
	printf("%d\n", ft_toupper('A'));
	char a = 65;
	write(1, &a, 1);
	return (0);
}
*/
