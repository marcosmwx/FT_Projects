/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:02:25 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/05 17:11:52 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (s[len] != (char)c && len > 0)
		len--;
	if (s[len] == (char)c)
		return ((char *)s + len);
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", ft_strrchr("teste", 's'));
	printf("%s\n", strrchr("teste", 's'));
	return (0);
}
*/
