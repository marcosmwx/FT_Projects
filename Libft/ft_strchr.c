/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:31:02 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/03 13:34:42 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s && (*s != (char)c))
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	printf("%s\n", ft_strchr("teste", 'e'));
	printf("%s\n", strchr("teste", 'e'));	
	return (0);
	faz o teste com null invez de e
}
*/
