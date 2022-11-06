#ifndef MICROSHELL_H
# define MICROSHELL_H

typedef struct s_envlst
{
	char	*key;
	char	*value;
}	t_envlst;


typedef struct s_env
{
	t_envlst	*envlst;
}	t_env;


typedef	struct s_working_info	
{
	t_env	env;
};


#endif