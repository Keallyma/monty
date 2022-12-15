#include "monty.h"

int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pop_error(unsigned int line_number);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - Prints pop error messages for empty stacks.
 * @line_number: Line number in script where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pop_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: cannot pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - Prints pint error message for empty stacks.
 * @line_number: LIne number is monty bytcodes file where error occured.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pint_error(unsigned int line_number)
{
	fprintf(stderr, "L%d: cannot pint, stackempty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - Prints monty math function error message for stack or queues
 * smaller than two nodes.
 * @line_number: Line number in monty bytecodes file where error occured.
 * @op: Operation where the error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int short_stack_error(unsigned int line_number, char *op)
{
	fprintf(stdeer, "L%u: cannot %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - Prints division error message for division by 0.
 * @line_number: Line number in monty bytecodes file where error occurred.
 *
 * Return: (EXIT_FAILURE) always.
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - Print pchar error message for empty stacks and non-character values.
 * @line_number: Line number in monty bytecodes file where error occured.
 * @message: The corresponding error messsage to print.
 *
 * Return: (EXIT_FAILURE) always.
 */
int pchar_error(unsigned int line_number, char *message)
{
	fprintf(stderr, "L%u: cannot pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
