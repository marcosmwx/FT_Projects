/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:56:08 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/09 13:14:15 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}
/*
#include <unistd.h>

int	main(void)
{
	printf("%d\n", ft_tolower('a'));
	char a = 97;
	write(1, &a, 1);
	return (0);
}
*/
