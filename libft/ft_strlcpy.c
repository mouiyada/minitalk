/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 14:49:23 by kyamada           #+#    #+#             */
/*   Updated: 2025/09/10 16:23:18 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < n - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

// int strlcpy(char * __restrict dst, const char * __restrict src, int dsize)
// {
// 	const char *osrc = src;
// 	int nleft = dsize;

// 	/* Copy as many bytes as will fit. */
// 	if (nleft != 0) {
// 		while (--nleft != 0) {
// 			if ((*dst++ = *src++) == '\0')
// 				break;
// 		}
// 	}

// 	/* Not enough room in dst, add NUL and traverse rest of src. */
// 	if (nleft == 0) {
// 		if (dsize != 0)
// 			*dst = '\0';		/* NUL-terminate dst */
// 		while (*src++)
// 			;
// 	}

// 	return(src - osrc - 1);	/* count does not include NUL */
// }

// #include<stdio.h>
// int main()
// {
// 	int i = 11;
// 	char buf1[] = "abcdefghij";
// 	char buf2[] = "abcdefghij";
// 	char buf3[] = "0123456789";
// 	strlcpy(buf1, buf3, i);
// 	ft_strlcpy(buf2, buf3, i);
// 	printf("strlcpy=%s\n", buf1);
// 	printf("ft=%s\n", buf2);
// }
