/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:23:25 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/30 15:22:24 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	cp;

	src = (unsigned char *)s;
	cp = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == cp)
			return (&src[i]);
		i++;
	}
	return (0);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char buf[] = "abc4defghij";
// 	int	c = '256 + 2';
// 	int n = 10;
// 	printf("memchr=%p\n", memchr(buf, c, n));
// 	printf("ft=%p\n", ft_memchr(buf, c, n));
// }
// #include <string.h>
