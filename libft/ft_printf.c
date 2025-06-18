/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 12:02:49 by kyamada           #+#    #+#             */
/*   Updated: 2025/04/08 20:02:04 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strsearch(const char c, const char *little)
{
	size_t	i;

	i = 0;
	while (little[i] != '\0')
	{
		if (c == little[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_checktype(int c, va_list args)
{
	size_t	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (c == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (c == 'p')
		count += ft_putptr(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		count += ft_putuns(va_arg(args, unsigned int));
	else if (c == 'x')
		count += ft_puthex1(va_arg(args, unsigned int));
	else if (c == 'X')
		count += ft_puthex2(va_arg(args, unsigned int));
	else if (c == '%')
		count += write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	size_t	i;
	size_t	count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (ft_strsearch(format[i], "cspdiuxX%"))
				count += ft_checktype(format[i], args);
			else
				count += write(1, &format[i], 1);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

// #include <limits.h>
// #include <stdio.h>
// int	main(void)
// {
// 	unsigned int a = 0;
// 	char *str1 = (void *)0;
// 	char *str2 = (void *)0;
// 	a = ft_printf("%s %x %x %x\n", str2, 0, -1, 1);
// 	ft_printf("%u", a);
// 	ft_printf ("\n");
// 	a = printf("%s %x %x %x\n", str1, 0, -1, 1);
// 	printf("%u", a);
// }
