#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdbool.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>
# include <fcntl.h>
# include <stdbool.h>
# include "ft_libft/libft.h"

typedef struct s_stack
{
		int	value;
		int index;
		struct s_stack	*next;
} stack;

int	ft_return_int(char *n);

# endif 