/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:26:17 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/08 20:35:37 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	size_t	i;
	size_t	j;
	size_t	slen;

	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	if (i == j)
		return (ft_strdup(""));
	j--;
	while (j >= 0 && ft_strchr(set, s1[j]))
		j--;
	j++;
	slen = j - i;
	new = (char *)malloc((slen + 1) * sizeof(char));
	if (!new)
		return (0);
	ft_strlcpy(new, &s1[i], slen + 1);
	return (new);
}
/*
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	const char *s1 = " xxx    xxx";
	const char *set = " x";
	char *new;

	new = ft_strtrim(s1, set);
	printf("%s\n", new);
	free(new);
}
*/
