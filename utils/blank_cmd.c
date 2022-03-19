/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blank_cmd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itaouil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:01:11 by itaouil           #+#    #+#             */
/*   Updated: 2022/03/19 23:19:03 by abittel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "utils.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	blank_cmd(char *cmd)
{
	int	i;

	i = 0;
	while (cmd[i])
	{
		if (!ft_isspace(cmd[i]))
			return (0);
		i++;
	}
	return (1);
}

int	blanck_tabcmd(char **cmd)
{
	int	i;

	i = -1;
	while (cmd[++i])
		if (!blank_cmd(cmd[i]))
			return (0);
	return (1);
}

int	*ft_intdup(int *val)
{
	int	*res;

	res = malloc (sizeof(int));
	*res = *val;
	return (res);
}
