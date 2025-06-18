/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:21:46 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/01 13:35:09 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (nmemb != 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	i = nmemb * size;
	j = 0;
	if (i == 0)
		i = 1;
	str = malloc (i);
	if (str == NULL)
		return (NULL);
	while (j < i)
	{
		str[j] = '\0';
		j++;
	}
	return (str);
}

// #include<string.h>
// void *calloc (size_t nelem, size_t elsize)
// {
//   register void *ptr;
//   if (nelem == 0 || elsize == 0)
//     nelem = elsize = 1;
//   ptr = malloc (nelem * elsize);
//   if (ptr) bzero (ptr, nelem * elsize);
//   return ptr;
// }
// #include <stdio.h>
// int main ()
// {
// 	int count = 10;
// 	int size = 4;
// 	int i = 0;
// 	int *str1 = ft_calloc (count, size);
// 	while (i < count + 10)
// 	{
// 		printf("%d", str1[i]);
// 		i++;
// 	}
// 	i = 0;
// 	printf("%c", '\n');
// 	int *str2 = calloc (count, size);
// 	while (i < count + 10)
// 	{
// 		printf("%i", str2[i]);
// 		i++;
// 	}
// }
