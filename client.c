/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyamada <kyamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 16:19:34 by kyamada           #+#    #+#             */
/*   Updated: 2025/09/10 17:44:03 by kyamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <unistd.h>

void	send_signal(int pid, unsigned char character)
{
	int		i;

	i = 8;
	while (i > 0)
	{
		i--;
		if (((character >> i) & 1) == 0)
		{
			if (kill(pid, SIGUSR2) == -1)
			{
				ft_printf("Failed to send signal to PID %d\n", pid);
				exit(1);
			}
		}
		else
		{
			if (kill(pid, SIGUSR1) == -1)
			{
				ft_printf("Failed to send signal to PID %d\n", pid);
				exit(1);
			}
		}
		usleep(200);
	}
}

int	main(int argc, char *argv[])
{
	pid_t		server_pid;
	const char	*message;
	int			i;

	if (argc != 3)
	{
		ft_printf("Usage: %s <pid> <message>\n", argv[0]);
		exit(0);
	}
	server_pid = ft_atoi(argv[1]);
	if (server_pid <= 0)
	{
		ft_printf("Invalid PID: %s\n", argv[1]);
		exit(0);
	}
	message = argv[2];
	i = 0;
	while (message[i])
		send_signal(server_pid, message[i++]);
	send_signal(server_pid, '\0');
	return (0);
}
