/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:54:01 by kyamada           #+#    #+#             */
/*   Updated: 2025/05/04 17:22:16 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_lstsize(t_list *lst)
{
    int count;

    count = 0;
	if (!lst)
		return (0);
    while(lst)
    {
        count++;
        lst = lst->next;
    }
	return(count) ;
}