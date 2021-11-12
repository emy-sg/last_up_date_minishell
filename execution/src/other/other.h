/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:22:26 by emallah           #+#    #+#             */
/*   Updated: 2021/11/02 14:22:27 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OTHER_H
# define OTHER_H

//other.c
int	other(t_ast *s_ast, t_env_export *env_export);

//run_cmd.c
void	run_cmd(t_ast *s_ast, t_env_export *env_export);
char	*try_all_paths(char **all_paths, char *cmd);
char	*get_cmd_path(char *cmd, char **env);

#endif
