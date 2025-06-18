/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:50:30 by kyamada           #+#    #+#             */
/*   Updated: 2025/04/08 18:57:02 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex1(unsigned int n)
{
	char		c;
	static int	flg = 0;
	size_t		count;

	count = 0;
	if (n == 0 && flg == 0)
		return (write(1, "0", 1));
	if (n > 0)
	{
		flg = 1;
		count += ft_puthex1(n / 16);
		if (n % 16 < 10)
		{
			c = n % 16 + '0';
			count += write(1, &c, 1);
		}
		if (n % 16 > 9)
		{
			c = n % 16 - 10 + 'a';
			count += write(1, &c, 1);
		}
	}
	flg = 0;
	return (count);
}

int	ft_puthex2(unsigned int n)
{
	char		c;
	static int	flg = 0;
	size_t		count;

	count = 0;
	if (n == 0 && flg == 0)
		return (write(1, "0", 1));
	if (n > 0)
	{
		flg = 1;
		count += ft_puthex2(n / 16);
		if (n % 16 < 10)
		{
			c = n % 16 + '0';
			count += write(1, &c, 1);
		}
		if (n % 16 > 9)
		{
			c = n % 16 - 10 + 'A';
			count += write(1, &c, 1);
		}
	}
	flg = 0;
	return (count);
}

int	ft_putptr(void *arg)
{
	uintptr_t	nb;
	size_t		count;

	count = 0;
	nb = (uintptr_t)arg;
	if (arg == 0)
	{
		count += ft_putstr("(nil)");
		return (count);
	}
	count += ft_putstr("0x");
	count += ft_puthex3 ((long long unsigned int)nb);
	return (count);
}

int	ft_puthex3(long long unsigned int n)
{
	char	c;
	size_t	count;

	count = 0;
	if (n > 0)
	{
		count += ft_puthex3(n / 16);
		if (n % 16 < 10)
		{
			c = n % 16 + '0';
			count += write(1, &c, 1);
		}
		if (n % 16 > 9)
		{
			c = n % 16 - 10 + 'a';
			count += write(1, &c, 1);
		}
	}
	return (count);
}
