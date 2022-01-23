# libft

*Summary: This project aims to code a C library regrouping usual functions that you'll be use for all your next projects* (sic) 🇫🇷

`libft` is our first project at 42, which builds upon the basic C and shell skills learned in the Piscine. The goal is to write and compile a library of functions that reproduce the behaviour of a number of some standard library functions which many take for granted (next up is `ft_printf`...)

See en.subject.pdf for further details.

| Function      | Status    | Notes		|
|---------------|-----------|-----------|
| **libc**    | ------	|
| ft_isalpha    | check     |
| ft_isdigit    | check     |
| ft_isalnum    | check     |
| ft_isascii    | check     |
| ft_isprint    | check     |
| ft_strlen     | check     |
| ft_memset     | check     |
| ft_bzero      | check     | 
| ft_memcpy     | check     | does it need NULL check on dest/src? per gh/Yaten
| ft_memmove    | check     |
| ft_strlcpy    | check     |
| ft_strlcat    | check     |
| ft_toupper    | check     |
| ft_tolower    | check     |
| ft_strchr     | check     |
| ft_strrchr    | check     |
| ft_strncmp    | check     |
| ft_memchr     | check     |
| ft_memcmp     | check     |
| ft_strnstr    | check     |
| ft_atoi       | check\*   | test against libc version
| ft_calloc     | check     | minor size_t mystery (byte size of entire memory space? undefined?)
| ft_strdup     | check     |
| **additional**
| ft_substr     | check     |
| ft_strjoin    | check     |
| ft_strtrim    | check     |
| ft_split      | check     |
| ft_itoa       | 
| ft_strmapi    |
| ft_striteri   | 
| ft_putchar_fd | check
| ft_putstr_fd  | check
| ft_putendl_fd | check
| ft_putnbr_fd  | check
| **bonus**     |
| ft_lstnew       | 
| ft_lstadd_front |
| ft_lstsize      |
| ft_lstlast      |
| ft_lstadd_back  |
| ft_lstdelone    |
| ft_lstclear     |
| ft_lstiter      |
| ft_lstmap       |
