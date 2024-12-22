/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 13:39:46 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/05 16:35:52 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1) && ((char *)s1)[i] == ((char *)s2)[i])
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	int a[] = {1, 3, 5, 7};
	int b[] = {1, 3, 6, 7};
	printf("%d\n", ft_memcmp(a, b, sizeof(int)* 3)); 
	printf("%d\n", memcmp(a, b, sizeof(int)* 3)); 
	return (0);
}
*/
