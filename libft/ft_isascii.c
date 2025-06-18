/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:52:10 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/30 11:46:11 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int c = 0;
// 	printf("isascii=%d\n",isascii(c));
// 	printf("ft=%d\n",ft_isascii(c));
// }
