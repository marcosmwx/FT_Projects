/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 15:00:11 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/03 13:48:05 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		j;
	size_t	total_len;

	i = -1;
	j = -1;
	total_len = (ft_strlen(s1) + (ft_strlen(s2) + 1));
	new = (char *)malloc(total_len * sizeof(char));
	if (!new)
		return (NULL);
	while (s1[++i] != '\0')
		new[i] = s1[i];
	while (s2[++j] != '\0')
		new[i + j] = s2[j];
	new[i + j] = '\0';
	return (new);
}
/*
int	main(void)
{
	char *s1 = "teste ";
	char *s2 = "memoria";
	char *new;

	new = ft_strjoin(s1, s2);
	printf("%s\n", new);
	free(new);
	return(0);
}
*/
