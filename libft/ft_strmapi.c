/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:04:21 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 16:46:52 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
		i++;
	str = malloc (i + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// char to_uppercase(insigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z') {
//         return c - 'a' + 'A';  // 小文字を大文字に変換
//     }
//     return c;  // 他の文字はそのまま
// }
// int main() {
//     char *result = ft_strmapi("abcd", to_uppercase);
//     printf("Result: %s\n", result);  // 予想される結果: "ABCD"
//     return 0;
// }