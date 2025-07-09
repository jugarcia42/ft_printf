/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugarcia <jugarcia@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:22:34 by jugarcia          #+#    #+#             */
/*   Updated: 2024/11/17 22:42:44 by jugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_puthexalong(unsigned long num, char x)
{
	int		len;
	char	*base;

	len = 0;
	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (num >= 16)
		len += ft_puthexalong(num / 16, x);
	len += ft_putchar(base[num % 16]);
	return (len);
}

int	ft_putptr(void *ptr)
{
	int	len;

	len = 0;
	if (!ptr)
		return (ft_putstr("(nil)"));
	len += ft_putstr("0x");
	len += ft_puthexalong((unsigned long)ptr, 'x');
	return (len);
}
