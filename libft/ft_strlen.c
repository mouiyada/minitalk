/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 19:49:11 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 17:00:00 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

// #include <stdio.h>
// #include <string.h>

// int main ()
// {
// 	char str[] = "AbC";
// 	printf("strlen=%lu\n", strlen(str));
// 	printf("ft_strlen=%d\n", ft_strlen(str));
// }
