/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:01:57 by emallah           #+#    #+#             */
/*   Updated: 2021/11/02 15:01:59 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../minishell.h"

int	unset(t_cmd *cmd)
{
	if (cmd->arg != NULL)
		return (unset_env_export(cmd));
	return (EXIT_SUCCESS);
}
