# libft

*Summary: This project aims to code a C library regrouping usual functions that you'll be use for all your next projects* (sic) 🇫🇷

`libft` is our first project at 42, which builds upon the basic C skills learned in the Piscine. The goal is to write and compile a library of functions that reproduce the behaviour of some standard library functions which many take for granted (next up is `ft_printf`...), along with a few custom functions for use throughout our 42 journey.

See en.subject.pdf for further details.

Testing against https://github.com/Abaker-Hype/42-Cursus-Tester

| Function      | Status    | Notes		|
|---------------|-----------|-----------|
| **libc**    | ------	|
| ft_isalpha    | tests passing     |
| ft_isdigit    | tests passing     |
| ft_isalnum    | tests passing     |
| ft_isascii    | tests passing     |
| ft_isprint    | tests passing     |
| ft_strlen     | tests passing     |
| ft_memset     | tests passing     |
| ft_bzero      | tests passing     |
| ft_memcpy     | tests passing     | does it need NULL check on dest/src? per gh/Yaten (passing = I guess not)
| ft_memmove    | tests passing     |
| ft_strlcpy    | tests passing     |
| ft_strlcat    | tests passing     |
| ft_toupper    | tests passing     |
| ft_tolower    | tests passing     |
| ft_strchr     | tests passing     |
| ft_strrchr    | tests passing     |
| ft_strncmp    | tests passing     |
| ft_memchr     | tests passing     |
| ft_memcmp     | tests passing     |
| ft_strnstr    | tests passing     |
| ft_atoi       | tests passing     | 
| ft_calloc     | tests passing     | minor size_t mystery (byte size of entire memory space? undefined?)
| ft_strdup     | tests passing     |
| **additional**
| ft_substr     | tests passing     |
| ft_strjoin    | tests passing     |
| ft_strtrim    | tests passing     |
| ft_split      | f     |
| ft_itoa       | f     | mega timeout city
| ft_strmapi    | f
| ft_striteri   | f
| ft_putchar_fd | tests passing
| ft_putstr_fd  | tests passing
| ft_putendl_fd | tests passing
| ft_putnbr_fd  | tests passing
| **bonus**     |
| ft_lstnew       | tests passing   |
| ft_lstadd_front | f
| ft_lstsize      | tests passing
| ft_lstlast      | tests passing
| ft_lstadd_back  | check
| ft_lstdelone    | check
| ft_lstclear     | check
| ft_lstiter      | check
| ft_lstmap       | check
