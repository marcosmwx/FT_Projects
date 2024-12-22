/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:33:42 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/08 15:02:03 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst || !src)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	while (n--)
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	return (dst);
}
/*
#include <memory.h>
#include <stdio.h>
int	main(void)
{
	char	str[] = "Hello, World!";
//	ft_memmove(str + 7, str, 7);
	memmove(str + 7, str, 7);
	printf("%s\n", str);
	return (0);
}
*/
