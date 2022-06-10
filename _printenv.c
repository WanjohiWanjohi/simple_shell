#include "shell.h"
/**
 * _printenv- print enviroment var
 *@env: array enviroment var
 *
 **/
void _printenv(char **env)
{
	char **isEnv;


	for (isEnv = env; *env != NULL; env++)
	{
		*isEnv = *env;
		_puts(*isEnv);
	}
}
