/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:51:43 by kyamada           #+#    #+#             */
/*   Updated: 2024/11/30 13:43:11 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = (char *)s;
	while (i < n)
	{
		src[i] = 0;
		i++;
	}
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	int i = 10;
// 	char buf1[i];
// 	char buf2[i];
// 	bzero(buf1, i);
// 	ft_bzero(buf2, i);
// 	printf("bzero=%c\n", buf1[10]);
// 	printf("ft=%c\n", buf2[10]);
// }
