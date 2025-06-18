/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putetc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:51:36 by kyamada           #+#    #+#             */
/*   Updated: 2025/02/02 15:36:28 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)
{
	if (str == NULL)
		str = "(null)";
	return (write (1, str, ft_strlen(str)));
}

int	ft_putnbr(int n)
{
	char		c;
	size_t		count;
	long long	nb;

	count = 0;
	nb = (long long)n;
	if (nb < 0)
	{
		count += write (1, "-", 1);
		nb = nb * -1;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	count += write (1, &c, 1);
	return (count);
}

int	ft_putuns(unsigned long n)
{
	int				count;
	unsigned long	num;

	count = 0;
	num = n;
	if (num > 100)
		count += ft_putuns(num / 10);
	else if (num == 100)
		count += ft_putstr("10");
	else if ((num / 10) > 0)
		count += ft_putchar((num / 10) + '0');
	count += ft_putchar((num % 10) + '0');
	return (count);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
