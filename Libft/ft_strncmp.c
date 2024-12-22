/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:50:55 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/08 20:37:28 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (--n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main(void)
{
    // Teste 1: Strings iguais
    const char str1[] = "echo";
    const char str2[] = "ech";
    size_t n = 3;

    printf("Test 1: Strings iguais\n");
    printf("strncmp: %d\n", strncmp(str1, str2, n));
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, n));

    // Teste 2: Strings diferentes
    const char strr1[] = "Hello";
    const char strr2[] = "HelLo";
    n = 5;

    printf("\nTest 2: Strings diferentes\n");
    printf("strncmp: %d\n", strncmp(strr1, strr2, n));
    printf("ft_strncmp: %d\n", ft_strncmp(strr1, strr2, n));

    // Teste 3: Comparando parcialmente
    const char strrr1[] = "abcdef";
    const char strrr2[] = "abcxyz";
    n = 3;

    printf("\nTest 3: Comparação parcial\n");
    printf("strncmp: %d\n", strncmp(strrr1, strrr2, n));
    printf("ft_strncmp: %d\n", ft_strncmp(strrr1, strrr2, n));

    // Teste 4: Strings vazias
    const char strt1[] = "";
    const char strt2[] = "a";
    n = 1;

    printf("\nTest 4: Strings vazias\n");
    printf("strncmp: %d\n", strncmp(strt1, strt2, n));
    printf("ft_strncmp: %d\n", ft_strncmp(strt1, strt2, n));

    return 0;
}
*/
