/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unlock_string.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isghioua <isghioua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 21:43:35 by isghioua          #+#    #+#             */
/*   Updated: 2021/11/17 18:51:49 by isghioua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	unlock_string(char *content, t_ast **s_cmd, char **table_of_env_var)
{
	char	*new_str;
	char	*cap_content;
	int		i;

	i = 0;
	cap_content = ft_strdup("");
	while (content[i] != '\0')
	{
		if (content[i] == '\'')
			new_str = extract_string_within_quotes(content, &i, '\'');
		else if (content[i] == '"')
			new_str = expand_string_within_double_quotes(table_of_env_var,
					extract_string_within_quotes(content, &i, '"'));
		else if (content[i] == '$')
		{
			new_str = extract_string_within_dollar_sign(s_cmd, &cap_content,
				expand_dollar_sign(content, &i, table_of_env_var));
		    int size;
            if (!new_str && content[i + 1] == '\0')
            {
                size = get_size_of_table((*s_cmd)->argv);
                if (size > 1)
                {
                    free(new_str);
                    new_str = NULL;
                    free(cap_content);
                    cap_content = NULL;
                    free((*s_cmd)->argv[size - 1]);
                    (*s_cmd)->argv[size - 1] = NULL;
                    return ;
                }
                else
                {
                    free(new_str);
                    new_str = NULL;
                    free(cap_content);
                    cap_content = NULL;
                    free((*s_cmd)->argv[0]);
                    (*s_cmd)->argv[0] = NULL;
                    free((*s_cmd)->argv[1]);
                    (*s_cmd)->argv[1] = NULL;
                    free((*s_cmd)->argv);
                    (*s_cmd)->argv = NULL;
                    return ;
                }
            }
        }
		else
			new_str = ft_substr(content, i, 1);
		i++;
		ft_strjoin_and_free(&cap_content, &new_str);
	}
	add_string_to_table_of_args(&cap_content, s_cmd);
}
