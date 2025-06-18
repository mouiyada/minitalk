/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:13:04 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/30 12:40:08 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int c = 12;
// 	printf("isprint=%d\n",isprint(c));
// 	printf("ft=%d\n",ft_isprint(c));
// }
