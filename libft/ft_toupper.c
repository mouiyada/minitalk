/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:44:13 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/27 16:58:08 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>
// int main()
// {
// 	char c = 'a';
// 	printf("toupper=%c\n", toupper(c));
// 	printf("ft=%c\n",ft_toupper(c));
// }
