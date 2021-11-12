#ifndef INIT_H
# define INIT_H

//init.c
t_env_export	*init_env_export(const char **menv);

//init_export.c
char	**init_export(const char **menv);
int		*sort_table(const char **menv);
int		*init_sort_table(const char **menv);
int		fill_export(const char **menv, char **export, int *sorted);
char	*export_arg(char *menv);

//init_env.c
char	**init_env(const char **menv);

#endif
