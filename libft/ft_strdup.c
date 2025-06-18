/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:30:25 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 16:26:04 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] != '\0')
		i++;
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (&str[0]);
}

// #include <string.h>

// char *strdup(const char *str)
// {
// 	size_t len;
// 	char *copy;

// 	len = strlen(str) + 1;
// 	if ((copy = malloc(len)) == NULL)
// 		return (NULL);
// 	memcpy(copy, str, len);
// 	return (copy);
// }

// #include <stdio.h>
// int main()
// {
// 	char str[] = "abcde";
// 	printf("origin=%s", strdup(str));
// 	printf("ft=%s", strdup(str));
// }
