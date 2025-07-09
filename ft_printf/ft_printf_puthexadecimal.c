/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puthexadecimal.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugarcia <jugarcia@student.42madrid.co,>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:23:40 by jugarcia          #+#    #+#             */
/*   Updated: 2024/11/17 22:44:12 by jugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexaint(unsigned int num, char x)
{
	int		len;
	char	*base;

	len = 0;
	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		len += ft_puthexaint(num / 16, x);
	len += ft_putchar(base[num % 16]);
	return (len);
}
