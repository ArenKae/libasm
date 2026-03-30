#ifndef TESTS_H
# define TESTS_H

# include <stddef.h>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

size_t	ft_strlen(const char *s);

int		run_strlen_tests(void);

#endif