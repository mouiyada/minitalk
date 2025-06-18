/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:23:25 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 11:21:29 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (s < d)
	{
		i = n - 1;
		while ((int) i != -1)
		{
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int i = 5;
// 	char buf1[] = "abcdefghij";
// 	char buf2[] = "abcdefghij";
// 	char buf3[] = "11111";
// 	memmove(buf1, buf3, i);
// 	ft_memmove(buf2, buf3, i);
// 	printf("memmove=%s\n", buf1);
// 	printf("ft=%s\n", buf2);
// }
