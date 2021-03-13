#include "calc.h"

/**
 * get_op_func -
 *
 * @s:
 *
 * Return:
 */

int (*get_op_func(char *s))(int, int)
{

	op_t ops[] = {

        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}

};

    int i = 0;

	if (s == NULL)
		return (NULL);

	while (i < 6)
	{

		ops[i].op[0] = *s;

		if (ops[i].op[0] == *s)
			return (ops[i].f);

		i++;

	}

return (NULL);

}
