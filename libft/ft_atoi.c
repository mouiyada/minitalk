/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:09:58 by kyamada           #+#    #+#             */
/*   Updated: 2025/01/02 11:29:32 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		sign;
	int		output;

	i = 0;
	sign = 1;
	output = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		i++;
		sign = -1;
		if (nptr[i] == '+')
			return (0);
	}
	if (nptr[i] == '+')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		output = output * 10 + (nptr[i] - '0');
		i++;
	}
	return (output * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main ()
// {
// 	char n[] = "2147483648";
// 	printf("atoi=%d", atoi(n));
// 	printf("ft_=%d", ft_atoi(n));
// }
