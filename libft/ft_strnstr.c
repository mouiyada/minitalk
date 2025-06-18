/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 11:31:37 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/30 13:53:00 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *) &big[0]);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i - j]);
		i = i - j + 1;
	}
	return (NULL);
}

// #include <string.h>

// char *strnstr(const char *s, const char *find, int slen)
// {
// 	char c, sc;
// 	int len;

// 	if ((c = *find++) != '\0') {
// 		len = strlen(find);
// 		do {
// 			do {
// 				if (slen-- < 1 || (sc = *s++) == '\0')
// 					return (NULL);
// 			} while (sc != c);
// 			if (len > slen)
// 				return (NULL);
// 		} while (strncmp(s, find, len) != 0);
// 		s--;
// 	}
// 	return ((char *)s);
// }

// #include <stdio.h>

// int main()
// {
// 	int n = 10;
// 	char dst[] = "abcdefghij";
// 	char src[] = "ij";
// 	printf("strnstr=%p\n", strnstr(dst, src, n));
// 	printf("ft_=%p\n", ft_strnstr(dst, src, n));
// }
