/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugarcia <jugarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:04:30 by jugarcia          #+#    #+#             */
/*   Updated: 2024/11/17 23:09:27 by jugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_puthexaint(unsigned int num, char x);
int	ft_puthexalong(unsigned long num, char x);
int	ft_putptr(void *ptr);
int	ft_printf(char const *type_str, ...);
