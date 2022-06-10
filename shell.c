#include "shell.h"

/**
 * main - shell init program
 * @argc: Number of Arguments
 * @argv: Array of arguments
 * @env:  Array enviroment
 * Return: Return 0
 **/
int main(int argc, char *argv[], char **env)
{

	if (argc == 1)
	{
		intoHsh(env, argv);
	}
	else
	{
		
		if (_exec(++argv, env))
			exit(127);
	}

	return (0);
}
