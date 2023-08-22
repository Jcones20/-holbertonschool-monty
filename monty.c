#include "monty.h"

/**
 * main - entry point
 * @argc: count of arguments
 * @argv: The arguments
 * Description: entry point for the program to exec monty code
 * Return: 0 on success
 */
int main(int argc, char **argv)
{

	verify_args(argc);
	open_and_read(*(argv + 1));
	clean();
	return (EXIT_SUCCESS);
}