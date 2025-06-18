/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:20:17 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 17:27:03 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// #include <stdio.h>

// void reverse_char(unsigned int i, char *c) {
// 	(void)i;
//     if (*c >= 'a' && *c <= 'z') {
//         *c = 'z' - (*c - 'a');
//     }
// }

// int main() {
//     char str[] = "abcd";
//     ft_striteri(str, reverse_char);
//     printf("%s\n", str);  // 出力: "zyxw"
//     return 0;
// }
