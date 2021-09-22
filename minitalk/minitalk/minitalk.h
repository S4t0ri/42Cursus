/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrojas-e <mrojas-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 17:39:04 by mrojas-e          #+#    #+#             */
/*   Updated: 2021/09/21 22:05:13 by mrojas-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdio.h>
# include <signal.h>
# include <unistd.h>
# include <stdlib.h>
# include "./printf/ft_printf.h"

/* **CLIENT** */

typedef struct s_vars{
	int	pid;
	int	c;
	int	j;
	int	send;
	int	back;
	int	x;
}	t_vars;

int		error_handler(int argc, char *argv[]);
void	ft_init_vars(char **argv, t_vars *vars);
int		ft_atoi(const char *str);
void	handle_sigusr1(int sig, siginfo_t *info, void *useless);

/* ***SERVER*** */

void	handle_sigusr_server(int sig);

#endif
