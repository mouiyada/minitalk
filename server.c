/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:20:07 by kyamada           #+#    #+#             */
/*   Updated: 2025/09/10 16:20:10 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define END_TRANSMISSION '\0'

void	handle_signal(int signal)
{
	static unsigned char	current_char = 0;
	static int				bit_index = 0;

	current_char <<= 1;
	if (signal == SIGUSR1)
		current_char |= 1;
	bit_index++;
	if (bit_index == 8)
	{
		if (current_char == END_TRANSMISSION)
			write(1, "\n", 1);
		else
			write(1, &current_char, 1);
		bit_index = 0;
		current_char = 0;
	}
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, handle_signal);
	signal(SIGUSR2, handle_signal);
	while (1)
		pause();
	return (0);
}
