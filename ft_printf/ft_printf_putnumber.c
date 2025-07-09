/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnumber.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugarcia <jugarcia@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 20:11:03 by jugarcia          #+#    #+#             */
/*   Updated: 2024/11/17 22:45:02 by jugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		len;
	char	num;

	len = 0;
	if (nb == -2147483648)
		return (ft_putstr("-2147483648"));
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	num = nb % 10 + '0';
	len += ft_putchar(num);
	return (len);
}

int	ft_putunbr(unsigned int nb)
{
	int		len;
	char	num;

	len = 0;
	if (nb >= 10)
		len += ft_putunbr(nb / 10);
	num = nb % 10 + '0';
	len += ft_putchar(num);
	return (len);
}
