/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:20:07 by kyamada           #+#    #+#             */
/*   Updated: 2025/09/10 17:53:48 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <unistd.h>

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
		if (current_char == '\0')
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
	if (signal(SIGUSR1, handle_signal) == SIG_ERR)
	{
		ft_printf("Error: signal() failed\n");
		return (1);
	}
	if (signal(SIGUSR2, handle_signal) == SIG_ERR)
	{
		ft_printf("Error: signal() failed\n");
		return (1);
	}
	while (1)
		pause();
	return (0);
}
