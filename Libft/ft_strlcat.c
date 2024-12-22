/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:43:04 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/08 14:39:50 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	c;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	c = 0;
	if (size == 0)
		return (src_len);
	if (size < dst_len)
		return (size + src_len);
	if (size > 0)
	{
		while (src[c] && (dst_len + c + 1) < size)
		{
			dst[dst_len + c] = src[c];
			c++;
		}
		dst[dst_len + c] = '\0';
	}
	return (dst_len + src_len);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	char dst[30] = "B";
	char src[30] = "AAAAAAAAAA";
	char dsts[30] = "B";
	char srcs[30] = "AAAAAAAAA";
	printf("%zu\n", ft_strlcat(dst, src, -1));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dsts, srcs, -1));
	printf("%s\n", dsts);
	return (0);
}
*/
