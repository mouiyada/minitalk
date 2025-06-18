/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:51:49 by kyamada           #+#    #+#             */
/*   Updated: 2025/01/04 12:19:02 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n && s1[j] != '\0' && s2[j] != '\0')
	{
		if (s1[j] != s2[j])
			return ((unsigned char)s1[j] - (unsigned char)s2[j]);
		j++;
	}
	if (j < n)
		return ((unsigned char)s1[j] - (unsigned char)s2[j]);
	return (0);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char str1[] = "abc";
// 	char str2[] = "\0";
// 	int i = 5;

// 	printf("strncmp=%d\n", strncmp(str1, str2, i));
// 	printf("ft=%d\n", ft_strncmp(str1, str2, i));
// }
