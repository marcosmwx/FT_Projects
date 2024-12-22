/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:32:03 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/03 13:55:17 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		((char *)s)[i] = (char)c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int main(void)
{
    char str[5] = "teste";

    ft_memset(str, 'a', 2);
    printf("%s\n", str);

    char strs[] = "  ";

    ft_memset(strs, 'a', 2);
    printf("%s\n", strs);
    return(0);
}
*/
