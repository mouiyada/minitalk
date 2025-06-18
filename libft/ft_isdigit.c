/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 18:52:10 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/30 11:36:42 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
// 	int c = '9';
// 	printf("isdigit=%d\n",isdigit(c));
// 	printf("ft=%d\n",ft_isdigit(c));
// }
