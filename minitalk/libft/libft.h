/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malopes- <malopes-@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:39:07 by malopes-          #+#    #+#             */
/*   Updated: 2024/10/16 16:11:38 by malopes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <signal.h>

int	ft_itoa_base(unsigned int n, int base, const char *digits);
int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_print_hexa(unsigned long n);
int	ft_print_pointer(void *ptr);
int	ft_printf(const char *format, ...);
int	ft_atoi(const char *nptr);
#endif
