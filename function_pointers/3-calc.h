#ifndef F&P_HEADER
#define F&P_HEADER

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */

typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

#endif
