/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:44:13 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/27 16:58:05 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
// 	char c = 'A';
// 	printf("tolower=%c\n", tolower(c));
// 	printf("ft=%c\n",ft_tolower(c));
// }
