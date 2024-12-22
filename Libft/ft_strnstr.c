/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 14:50:54 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/08 12:12:27 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*little)
		return ((char *)big);
	if (len == 0)
		return (0);
	while (big[i] != '\0' && i < len)
	{
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strnstr("empty", "", -1));
//	printf("%s\n", ft_strnstr("empty", "aqui", 25));
//	printf("%s\n", strnstr("aq alessandro ta aqui", "ow", 25));
	printf("%s\n", strnstr("empty", "", -1));
}
*/
