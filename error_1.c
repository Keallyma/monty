#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int no_int_error(unsigned int line_number);
int unknown_op_error(char *opcode, unsigned int line_number);

/**
 * usage_error - Print usage error message.
 *
 * Return: (EXIT_FAILURE) always.
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_error - Prints malloc error message.
 *
 * Return: (EXIT_FAILURE) always.
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - Prints file opening error message w/ file name.
 * @filename: Name of file failed to open
 *
 * Return: (EXIT_FAILURE) always.
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}

/**
 * unknown_op_error - Prints unknown instruction error message.
 * @opcode: Opcode where error occured.
 * @line_number: Line number in monty bytecodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int unknown_op_error(char *opcode, unsigned int line_number)
{
	fprintf(sterr, "L%u: unknown instruction %s\n",
			line_number, opcode);
	return (EXIT_FAILURE);
}
/**
 * no_int_error - Prints invalid monty_push argument error message.
 * @line_number: Line number in monty bytescodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
