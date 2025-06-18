/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 12:26:51 by kyamada           #+#    #+#             */
/*   Updated: 2024/12/31 14:09:54 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_count(char const *s, char c)
{
	size_t	count;
	size_t	i;
	int		trigger;

	count = 0;
	i = 0;
	trigger = 0;
	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (s[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
}

char	**ft_free(char **str, size_t index)
{
	while (index >= 0)
	{
		free(str[index]);
		index--;
	}
	free(str);
	return (NULL);
}

char	**ft_split_core(char **str, char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;

	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			str[j] = ft_substr(s, index, i - index);
			if (str[j] == NULL)
				return (ft_free(str, j));
			j++;
			index = -1;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (str == NULL)
		return (NULL);
	str = ft_split_core(str, s, c);
	return (str);
}

// #include <stdio.h>
// int main()
// {
// 	char s[] = "a,,efgh,ijkl,nmop";
// 	char c = ',';
// 	char **str = ft_split(s, c);
// 	for (int i = 0; str[i] != NULL; i++)
// 	printf("%s\n", str[i]);
// }
