


#include "shell.h"
/**
 * errors- print error to stderr
 *@program : exe shell
 *@param: Parsed command
 *@message: Desc err to print
 *@Qexe: Quantity Executions
 **/
void errors(char *program, char *param, char *message, int Qexe)
{

	char buf[256];
	char sint[11];

	intToStr(Qexe, sint);

	_strcpy(buf, program);
	_strcat(buf, ": ");
	_strcat(buf, sint);
	_strcat(buf, ": ");
	_strcat(buf, param);
	_strcat(buf, ": ");
	_strcat(buf, message);
	_strcat(buf, "\n");

	write(STDERR_FILENO, &buf, _strlen(buf));

}
