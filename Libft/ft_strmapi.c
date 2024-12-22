/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:52:34 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/08 20:33:48 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen(s) + 1;
	i = 0;
	new = (char *)malloc(len * sizeof(char));
	if (!new)
		return (0);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
char	ft_tramalpha(unsigned int i, char c)
{
	if (i)
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
*/
/*
#include <stdio.h>
int	main(void)
{
	char *new;
	new = ft_strmapi("teste", ft_tramalpha);
	printf("%s\n", new);
	free(new);
	return (0);
}
*/
