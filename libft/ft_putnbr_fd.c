/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:23:25 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 17:15:54 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n < 0)
	{
		write (fd, "-", 1);
		if (n == -2147483648)
		{
			write (fd, "2147483648", 10);
			return ;
		}
		n = n * -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		c = n % 10 + '0';
		write (fd, &c, 1);
	}
	if (n >= 0 && n < 10)
	{
		c = n + '0';
		write (fd, &c, 1);
	}
}

// #include <stdio.h>
// #include <limits.h>
// int main()
// {
// 	int i = INT_MAX;
// 	int fd = 1;
// 	ft_putnbr_fd(i, fd);
// }