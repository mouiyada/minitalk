/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:06:11 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/30 15:27:41 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	cp;

	i = 0;
	cp = (unsigned char)c;
	while (s[i] != cp)
	{
		if (s[i] == '\0')
			return (0);
		i++;
	}
	return ((char *) &s[i]);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str[] = "abcde";
// 	int c = '\0';
// 	printf("strchr=%p\n", strchr(str, c));
// 	printf("ft=%p\n", ft_strchr(str, c));
// }
