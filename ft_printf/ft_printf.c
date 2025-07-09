/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugarcia <jugarcia@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 23:03:44 by jugarcia          #+#    #+#             */
/*   Updated: 2024/11/19 19:51:11 by jugarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_printf_select(va_list parameters, char type_str)
{
	int	count;

	count = 0;
	if (type_str == 'c')
		count += ft_putchar(va_arg(parameters, int));
	if (type_str == 's')
		count += ft_putstr(va_arg(parameters, char *));
	if (type_str == 'x')
		count += ft_puthexaint(va_arg(parameters, unsigned int), type_str);
	if (type_str == 'X')
		count += ft_puthexaint(va_arg(parameters, unsigned int), type_str);
	if (type_str == 'p')
		count += ft_putptr(va_arg(parameters, void *));
	if (type_str == 'u')
		count += ft_putunbr(va_arg(parameters, unsigned int));
	if (type_str == 'i' || type_str == 'd')
		count += ft_putnbr(va_arg(parameters, int));
	if (type_str == '%')
		count += ft_putchar(type_str);
	return (count);
}

int	ft_printf(const char *type_str, ...)
{
	va_list	parameters;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(parameters, type_str);
	while (type_str[i] != '\0')
	{
		if (type_str[i] == '%' && type_str[i + 1] != '\0')
		{
			len += ft_printf_select(parameters, type_str[i + 1]);
			i++;
		}
		else
			len += ft_putchar(type_str[i]);
		i++;
	}
	va_end(parameters);
	return (len);
}
// int main(void)
// {
//     ft_printf("Mi funcion: Caracter: %c\n", 'M');
//     ft_printf("Mi funcion: Cadena: %s\n", "Mi funcion");
//     ft_printf("Mi funcion: Hexadecimal (minúscula): %x\n", 255);
//     ft_printf("Mi funcion: Hexadecimal (mayúscula): %X\n", 255);
//     ft_printf("Mi funcion: Puntero: %p\n", &main);
//     ft_printf("Mi funcion: Unsigned int: %u\n", 1234);
//     ft_printf("Mi funcion: Entero con signo: %d\n", -1234);
//     ft_printf("Mi funcion: Porcentaje: %%\n");
//     printf("original: Caracter: %c\n", 'M');
//     printf("original: Cadena: %s\n", "original");
//     printf("original: Hexadecimal (minúscula): %x\n", 255);
//     printf("original: Hexadecimal (mayúscula): %X\n", 255);
//     printf("original: Puntero: %p\n", &main);norm
//     printf("original: Unsigned int: %u\n", 1234);
//     printf("original: Entero con signo: %d\n", -1234);
//     printf("original: Porcentaje: %%\n");
//     return 0;
// }
