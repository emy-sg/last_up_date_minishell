#include "../../../minishell.h"

int	add_env_export(t_env_export *env_export, char **temp)
{
	int	ret;

	ret = export_exist(env_export->export, temp[0]);
	if (ret == EXIT_SUCCESS)
		ret = update_arg_export(env_export->export, temp[0], temp[1]);
	else if (ret == EXIT_FAILURE)
		ret = add_arg_export(env_export, temp[0], temp[1]);
	if (ret == ERROR)
		return (ret);
	ret = env_exist(env_export->env, temp[0]);
	if (ret == EXIT_SUCCESS)
		ret = update_arg_env(env_export->env, temp[0], temp[1]);
	else if (ret == EXIT_FAILURE)
		ret = add_arg_env(env_export, temp[0], temp[1]);
	free_double(temp);
	return (ret);
}