/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:25:08 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/05 16:50:35 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!f || !s)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	ft_putstr(unsigned int i, char *s)
{
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}
*/
/*
int	main(void)
{
	char *abc = "abc";
	ft_striteri(abc, ft_putstr);
	return (0);
}
*/
