# libft

*Summary: This project aims to code a C library regrouping usual functions that you'll be use for all your next projects* (sic) 🇫🇷

`libft` is our first project at 42, which builds upon the basic C skills learned in the Piscine. The goal is to write and compile a library of functions that reproduce the behaviour of some standard library functions which many take for granted (next up is `ft_printf`...), along with a few custom functions for use throughout our 42 journey.

See en.subject.pdf for further details.

| Function      | Status    | Notes		|
|---------------|-----------|-----------|
| **libc**    | ------	|
| ft_isalpha    | tests passing     |
| ft_isdigit    | tests passing     |
| ft_isalnum    | tests passing     |
| ft_isascii    | tests passing     |
| ft_isprint    | tests passing     |
| ft_strlen     | tests passing     |
| ft_memset     | **tests failing**     |
| ft_bzero      | **tests failing**     |
| ft_memcpy     | tests passing     | does it need NULL check on dest/src? per gh/Yaten
| ft_memmove    | tests passing     |
| ft_strlcpy    | tests passing     |
| ft_strlcat    | f     |
| ft_toupper    | tests passing     |
| ft_tolower    | tests passing     |
| ft_strchr     | tests passing     |
| ft_strrchr    | tests passing     |
| ft_strncmp    | f     |
| ft_memchr     | tests passing     |
| ft_memcmp     | tests passing     |
| ft_strnstr    | f     |
| ft_atoi       | f\*   | test against libc version
| ft_calloc     | tests passing     | minor size_t mystery (byte size of entire memory space? undefined?)
| ft_strdup     | tests passing     |
| **additional**
| ft_substr     | f     |
| ft_strjoin    | f     |
| ft_strtrim    | f     |
| ft_split      | f     |
| ft_itoa       | f
| ft_strmapi    | f
| ft_striteri   | f
| ft_putchar_fd | tests passing
| ft_putstr_fd  | f
| ft_putendl_fd | f
| ft_putnbr_fd  | tests passing
| **bonus**     |
| ft_lstnew       | check
| ft_lstadd_front | check
| ft_lstsize      | check
| ft_lstlast      | check
| ft_lstadd_back  | check
| ft_lstdelone    | check
| ft_lstclear     |
| ft_lstiter      |
| ft_lstmap       |
