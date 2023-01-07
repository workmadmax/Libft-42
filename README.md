<h1 align=center>LIBFT</h1>

<i>This is the repository of my 3 first projects from <b>42 São Paulo</b> ... after about 6 months of course I decided to refactor my <b>LIBFT</b> library so that I already include the other 2 projects <b>GET_NEXT_LINE<b> and <b>FT_PRINTF</b> putting it into practice what I learned about <b>MAKEFILE</b> and structuring the project architecture.</i>


<h2><i>functions</i></h2>

<p align=center>

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character
- [`ft_toupper`](ft_toupper.c)	- convert char to uppercase
- [`ft_tolower`](ft_tolower.c)	- convert char to lowercase
- [`ft_memset`](ft_memset.c)	- fill memory with a constant byte
- [`ft_strlen`](ft_strlen.c)	- calculate the length of a string
- [`ft_bzero`](ft_bzero.c)	- zero a byte string
- [`ft_memcpy`](ft_memcpy.c)	- copy memory area
- [`ft_memmove`](ft_memmove.c)	- copy memory area
- [`ft_strlcpy`](ft_strlcpy.c)	- copy string to an specific size
- [`ft_strlcat`](ft_strlcat.c)	- concatenate string to an specific size
- [`ft_strchr`](ft_strchr.c)	- locate character in string
- [`ft_strrchr`](ft_strrchr.c)	- locate character in string
- [`ft_strncmp`](ft_strncmp.c)	- compare two strings
- [`ft_memchr`](ft_memchr.c)	- scan memory for a character
- [`ft_memcmp`](ft_memcmp.c)	- compare memory areas
- [`ft_strnstr`](ft_strnstr.c)	- locate a substring in a string
- [`ft_strdup`](ft_strdup.c)	- creates a dupplicate for the string passed as parameter
- [`ft_atoi`](ft_atoi.c)	- convert a string to an integer
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0
- [`ft_substr`](ft_substr.c)	- returns a substring from a string
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of string with specific set of chars
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string
- [`ft_putchar_fd`](ft_putchar_fd.c)	- output a char to a file descriptor
- [`ft_putstr_fd`](ft_putstr_fd.c)	- output a string to a file descriptor
- [`ft_putendl_fd`](ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- output a number to a file descriptor
- [`ft_lstnew`](ft_lstnew.c)	- creates a new list element
- [`ft_lstadd_front`](ft_lstadd_front.c)	- adds an element at the beginning of a list
- [`ft_lstsize`](ft_lstsize.c)	- counts the number of elements in a list
- [`ft_lstlast`](ft_lstlast.c)	- returns the last element of the list
- [`ft_lstadd_back`](ft_lstadd_back.c)	- adds an element at the end of a list
- [`ft_lstclear`](ft_lstclear.c)	- deletes and free list
- [`ft_lstiter`](ft_lstiter.c)	- applies a function to each element of a list
- [`ft_lstmap`](ft_lstmap.c)	- applies a function to each element of a list
- [`get_next_line`](get_next_line.c)  - Reads a line from a file descriptor
- [`ft_printf`](ft_printf.c)  - Prints a formatted output to the screen or to a file
</p>

### Requirements
`libft` requires a *gcc* compiler and some standard libraries.

### Instructions

Clone this repository in your local computer:


```sh
$> git clone https://github.com/workmadmax/Libft-42
```

In your local repository, run `make`

```sh
$> make 
```
