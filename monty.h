#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
/**                                                                                                                                                                      * struct bus_s - struct for handling various operations                                                                                                                 * @arg: argument string                                                                                                                                                 * @file: file pointer                                                                                                                                                   * @content: content string                                                                                                                                              * @lifi: integer flag                                                                                                                                                   *                                                                                                                                                                       * Description: struct for handling various operations                                                                                                                   */                                                                                                                                                                     typedef struct bus_s                                                                                                                                                    {                                                                                                                                                                           char *arg;                                                                                                                                                              FILE *file;                                                                                                                                                             char *content;                                                                                                                                                          int lifi;                                                                                                                                                           } bus_t;                                                                                                                                                                                                                                                                                                                                        extern bus_t bus;      
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* Function Prototypes */
void pop(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void add(stack_t **head, unsigned int counter);
void sub(stack_t **head, unsigned int counter);
void queue(stack_t **head, unsigned int counter);
void addqueue(stack_t **head, int n);
void stack(stack_t **head, unsigned int counter);
/*void sub(stack_t **head, unsigned int counter)*/
void mul(stack_t **head, unsigned int counter);
#endif
