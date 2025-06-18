/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:23:25 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 10:58:07 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*src1;
	unsigned char	*src2;

	i = 0;
	src1 = (unsigned char *) s1;
	src2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (src1[i] != src2[i])
			return (src1[i] - src2[i]);
		i++;
	}
	return (0);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	chars1[] = "abcdefghij";
// 	char s2[] = "abzdefghij";
// 	int n = 10;
// 	printf("memcmp=%d\n", memcmp(s1, s2, n));
// 	printf("ft=%d\n", ft_memcmp(s1, s2, n));
// }
