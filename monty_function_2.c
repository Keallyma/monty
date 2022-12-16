#include "monty.h"

void monty_add(stock_t **stack, unsigned int line_number);
void monty_sub(stock_t **stack, unsigned int line_number);
void monty_div(stock_t **stack, unsigned int line_number);
void monty_mul(stock_t **stack, unsigned int line_number);
void monty_mod(stock_t **stack, unsigned int line_number);

/**
 * monty_add Add the top two values of a stack-t linked list.
 * @stack: A pointer to the top mode node of a stack _t linked list.
 * @line_number: The current working line number of a monty bytecodes file.
 * Description: the result is strored in the second value node from the top value and the top value is removed.
 */
void monty_add(stock_t **stack, unsigned int line_number);
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}

	(*stack)->next->next->n += (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_sub - Subtract the second value from the top of
 * 		satck_t linked list by the top value.
 * @stack: A pointer to the top mode node of a stack _t linked list.
 * @line_number: The current working line number of a monty bytecodes file.
 * Description: the result is strored in the second value node from 
 * 		the top value and the top value is removed.
 */
void monty_sub(stock_t **stack, unsigned int line_number);
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "sub"));
		return;
	}

	(*stack)->next->next->n -= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_div - Divides the second value from the top of
 * 	       a stack_t linked list by the top value.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a monty bytecodes file.
 * Description: The result is strored in the second value node from
 * 		from the top and the top value is removed.
 */
void monty_div(stock_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "div"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}

	(*stack)->next->next->n /= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * montty_mul - Multiply the second value from the top of a
 * 		stack_t linked list by the top value.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a monty bytecodes file.
 * Description: The result is strored in the second value node from the top
	        and the top value is removed.
 */
void monty_mul(stock_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mul"));
		return;
	}

	(*stack)->next->next->n *= (*stack)->next->n
	monty_pop(stack, line_number);

/**
 * monty_mod - Compute modulus of the sceond value from the top of a stack_t linked list by the top value.
 * @stack: A pointer to the top mode node of a stack_t linked list.
 * @line_number: The current working line number of a monty bytecodes file.
 * Description: the result is strored in the second value node from the top value and the top value is removed.
 */
void monty_mod(stock_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mod"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
		return;
	}

	(*stack)->next->next->n %= (*stack)->next->n
	monty_pop(stack, line_number);
}
