/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:52:10 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/30 11:29:20 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int c = 'z';
// 	printf("isalnum=%d\n",isalnum(c));
// 	printf("ft=%d\n",ft_isalnum(c));
// }
