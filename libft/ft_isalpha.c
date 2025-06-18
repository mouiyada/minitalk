/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:13:04 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/27 16:53:53 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 122 && !(c >= 91 && c <= 96))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int c = '1';
// 	printf("isalpha=%d\n",isalpha(c));
// 	printf("ft=%d\n",ft_isalpha(c));
// }
