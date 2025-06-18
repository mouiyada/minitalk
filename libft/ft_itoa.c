/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:02:49 by kyamada           #+#    #+#             */
/*   Updated: 2025/01/02 11:03:41 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_minus(char *str, int n)
{
	str[0] = '-';
	if (n == -2147483648)
	{
		str[1] = '2';
		n = -147483648;
	}
	n = -n;
	return (n);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*str;

	len = ft_intlen(n);
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		n = ft_minus(str, n);
	while (n > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char *result = ft_itoa(-54321);
// 	printf("%s", result);
// }
