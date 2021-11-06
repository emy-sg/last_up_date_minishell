/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emallah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:32:02 by emallah           #+#    #+#             */
/*   Updated: 2021/11/02 13:32:04 by emallah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CD_H
# define CD_H

int		cd(t_ast *s_ast, t_env_export *env_export);
int		update_env_export_old_pwd(t_env_export *env_export);
int		update_env_export_pwd(t_env_export *env_export);
char	*home_path(char **env);
char	*abs_path(const char *arg);
char	*cd_path(const char *arg, char **env);

#endif
