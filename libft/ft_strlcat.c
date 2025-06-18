/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:49:23 by kyamada           #+#    #+#             */
/*   Updated: 2025/01/02 13:19:34 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	k = i + j;
	if (i >= size)
		return (j + size);
	j = 0;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (k);
}

// #include<string.h>
// int strlcat(char *dst, const char *src, int siz)
// {
//         char *d = dst;
//         const char *s = src;
//         int m = siz;
//         int dlen;

//         /* Find the end of dst and adjust bytes left but don't go past end */
//         while (m-- != 0 && *d != '\0')
//                 d++;
//         dlen = d - dst;
//         m = siz - dlen;

//         if (m == 0)
//                 return(dlen + strlen(s));
//         while (*s != '\0') {
//                 if (m != 1) {
//                         *d++ = *s;
//                         m--;
//                 }
//                 s++;
//         }
//         *d = '\0';

//         return(dlen + (s - src));       /* count does not include NUL */
// }
// #include<stdio.h>
// int main()
// {
// 	char buf1[] = "abcdefghij";
// 	char buf2[] = "abcdefghij";
// 	char buf3[] = "1234567890";
// 	char buf4[] = "1234567890";
// 	printf("strlcat=%d,%s\n", strlcat(buf1, buf3, 12), buf1);
// 	printf("ft=%d,%s\n", ft_strlcat(buf2, buf4, 12), buf2);
// }
