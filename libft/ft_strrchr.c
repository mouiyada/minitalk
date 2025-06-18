/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 10:06:11 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/30 15:37:40 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*p;
	unsigned char	cp;

	i = 0;
	p = (void *) 0;
	cp = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == cp)
			p = (char *) &s[i];
		i++;
	}
	if (cp == '\0')
		return ((char *) &s[i]);
	return (p);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str[] = "abcdeddddddddddddde";
// 	int c = '\0';
// 	printf("strchr=%p\n", strrchr(str, c));
// 	printf("ft=%p\n", ft_strrchr(str, c));
// }
