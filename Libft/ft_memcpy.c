/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:24:53 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/03 13:55:59 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	c;

	c = 0;
	if (!dest || !src)
		return (dest);
	while (c < n)
	{
		((unsigned char *)dest)[c] = ((unsigned char *)src)[c];
		c++;
	}
	return (dest);
}
/*
int	main(void)
{
//	char	str[] = "ABCDEFG";
//	ft_memcpy(str, str, 6);
//	printf("%s", str);
	int	dst[] = {1, 2, 3, 4};
	int	src[] = {5, 6, 7, 8};
	ft_memcpy(dst, src, sizeof(int) * 4);
	printf("%d\n", dst[0]);
	printf("%d\n", dst[1]);
	
}
*/
