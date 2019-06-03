# Libft

## Your first own library

```
Pedagopedago@42.fr
```
_Summary: The aim of this project is to code aClibrary regrouping usual functions that
you’ll be allowed to use in all your other projects._


## Contents

- I Foreword
- II Introduction
- III Objectives
- IV General Instructions
- V Mandatory part
   - V.1 Technical considerations
   - V.2 Part 1 - Libc functions
   - V.3 Part 2 - Additional functions
- VI Bonus part
- VII Submission and peer correction


# Chapter I

# Foreword

This first project marks the beginning of your training to become de software engineer.

To accompany you during this project, here is a list of oustanding music groups. It’s
highly probable that you won’t like any of those. This will mean that you have poor
music taste. I’m sure that you have some other qualities such as being able to hold your
breath for more than 3 minutes or maybe you know by heart the names of the 206 United
Nations’ signatory states. The groups aren’t listed in any particular order and the list
does not need to be exhaustive. Click on the links to find out more.

- Between The Buried And Me
- Between The Buried And Me, c’est bon, mangez-en
- Tesseract
- Chimp Spanner
- Emancipator
- Cynic
- Kalisia
- O.S.I
- Dream Theater
- Pain Of Salvation
- Crucified Barbara


# Chapter II

# Introduction

Thelibftproject builds on the concepts you learned during Day-06 of the bootcamp
ie code a library of useful functions that you will be allowed to reuse in most of yourC
projects this year. This will save you a lot of precious time. The following assignments
will have you write lines of code you already wrote during the bootcamp. See thelibft
project as a Bootcamp reminder and use it wisely to assess your level and progress.

```
Figure II.1: A possible representation of your Libft (artist’s view)
```

# Chapter III

# Objectives

Cprogramming can be very tedious when one doesn’t have access to those highly useful
standard functions. This project makes you to take the time to re-write those functions,
understand them, and learn to use them. This library will help you for all your futureC
projects.
Through this project, we also give you the opportunity to expand the list of functions
with your own. Take the time to expand yourlibftthroughout the year.


# Chapter IV

# General Instructions

- You must create the following functions in the order you believe makes most sense.
    We encourage you to use the functions you have already coded to write the next
    ones. The difficulty level does not increase by assignment and the project has not
    been structured in any specific way. It is similar to a video game, where you can
    complete quests in the order of your choosing and use the loot from the previous
    quests to solve the next ones.
- Your project must be written in accordance with the Norm.
- Your functions should not quit unexpectedly (segmentation fault, bus error, double
    free, etc) apart from undefined behaviors. If this happens, your project will be
    considered non functional and will receive a 0 during the defence.
- All heap allocated memory space must be properly freed when necessary.
- You must submit a file namedauthorcontaining your username followed by a ’\n’
    at the root of your repository,
    $>cat -e author
    xlogin$
- You must submit aCfile for each function you create, as well as alibft.hfile,
    which will contain all the necessary prototypes as well asmacrosandtypedefsyou
    might need. All those files must be at the root of your repository.
- You must submit aMakefilewhich will compile your source files to a static library
    libft.a.
- YourMakefilemust at least contain the rules$(NAME),all,clean,fcleanetre
    in the order that you will see fit.
- YourMakefilemust compile your work with the flags-Wall,-Wextraand-Werror.


Libft Your first own library

- Only the followinglibcfunctions are allowed :malloc(3),free(3)andwrite(2),
    and their usage is restricted. See below.
- You must include the necessaryincludesystem files to use one or more of the three
    authorized functions in your.cfiles. The only additional systemincludefile you
    are allowed to use isstring.hto have access to the constantNULLand to the type
    size_t. Everything else if forbidden.
- We encourage you to create test programs for your library even though this work
    **won’t have to be submitted and won’t be graded**. It will give you a chance
    to easily test your work and your peers’ work. You will find those tests especially
    useful during your defence. Indeed, during defence, you are free to use your tests
    and/or the tests of the peer you are evaluating.


# Chapter V

# Mandatory part

### V.1 Technical considerations

- Yourlibft.hfile can containmacrosandtypedefsif needed.
- A string must **ALWAYS** end with a’\0’, even if it is not included in the function’s
    description, unless explicitly stated otherwise.
- It is forbidden to use global variables.
- If you need sub-functions to write a complex function, you must define these sub-
    functions asstaticas stipulated in the Norm.

```
Check out this link to find out more about static functions:
http://codingfreak.blogspot.com/2010/06/static-functions-in-c.html
```
- You must pay attention to your types and wisely use the casts when needed, es-
    pecially when avoid*type is involved. Generally speaking, avoid implicit casts.
    Example:

```
char *str;
str = malloc(42 * sizeof (*str)); /* Wrong! Malloc returns a void * (implicit cast) */
str = ( char *) malloc(42 * sizeof (*str)); /* Right! (explicit cast) */
```

Libft Your first own library

### V.2 Part 1 - Libc functions

In this first part, you must re-code a set of the libc functions, as defined in their
man. Your functions will need to present the same prototype and behaviors as the orig-
inals. Your functions’ names must be prefixed by “ft_”. For instancestrlenbecomes
ft_strlen.

```
Some of the functions’ prototypes you have to re-code use the
"restrict" qualifier. This keyword is part of the c99 standard.
It is therefore forbidden to include it in your prototypes and to
compile it with the flag -std=c99.
```
```
You must re-code the following functions:
```
- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- strdup
- strcpy
- strncpy
- strcat
- strncat
- strlcat
- strchr
- strrchr
- strstr
- strnstr
- strcmp
- strncmp
- atoi
- isalpha


Libft Your first own library

- isdigit
- isalnum
- isascii
- isprint
- toupper
- tolower


Libft Your first own library

### V.3 Part 2 - Additional functions

In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form. Some of these functions can be useful to write Part
1’s functions.

#### •

```
ft_memalloc
Prototype void * ft_memalloc(size_t size);
Description Allocates (withmalloc(3)) and returns a “fresh” memory
area. The memory allocated is initialized to 0. If the alloca-
tion fails, the function returnsNULL.
Param. #1 The size of the memory that needs to be allocated.
Return value The allocated memory area.
Libc functions malloc(3)
```
#### •

```
ft_memdel
Prototype void ft_memdel(void **ap);
Description Takes as a parameter the address of a memory area that needs
to be freed withfree(3), then puts the pointer toNULL.
Param. #1 A pointer’s address that needs its memory freed and set to
NULL.
Return value None.
Libc functions free(3).
```
#### •

```
ft_strnew
Prototype char * ft_strnew(size_t size);
Description Allocates (withmalloc(3)) and returns a “fresh” string end-
ing with’\0’. Each character of the string is initialized at
’\0’. If the allocation fails the function returnsNULL.
Param. #1 The size of the string to be allocated.
Return value The string allocated and initialized to 0.
Libc functions malloc(3)
```
#### •

```
ft_strdel
Prototype void ft_strdel(char **as);
Description Takes as a parameter the address of a string that need to be
freed withfree(3), then sets its pointer toNULL.
Param. #1 The string’s address that needs to be freed and its pointer set
toNULL.
Return value None.
Libc functions Free(3).
```
#### •

```
ft_strclr
Prototype void ft_strclr(char *s);
Description Sets every character of the string to the value’\0’.
Param. #1 The string that needs to be cleared.
Return value None.
Libc functions None.
```

Libft Your first own library

#### •

```
ft_striter
Prototype void ft_striter(char *s, void (*f)(char *));
Description Applies the functionfto each character of the string passed
as argument. Each character is passed by address tofto be
modified if necessary.
Param. #1 The string to iterate.
Param. #2 The function to apply to each character ofs.
Return value None.
Libc functions None.
```
#### •

```
ft_striteri
Prototype void ft_striteri(char *s, void (*f)(unsigned int,
char *));
Description Applies the functionfto each character of the string passed
as argument, and passing its index as first argument. Each
character is passed by address tofto be modified if necessary.
Param. #1 The string to iterate.
Param. #2 The function to apply to each character ofsand its index.
Return value None.
Libc functions None.
```
#### •

```
ft_strmap
Prototype char * ft_strmap(char const *s, char (*f)(char));
Description Applies the functionfto each character of the string given
as argument to create a “fresh” new string (withmalloc(3))
resulting from the successive applications off.
Param. #1 The string to map.
Param. #2 The function to apply to each character ofs.
Return value The “fresh” string created from the successive applications of
f.
Libc functions malloc(3)
```
#### •

```
ft_strmapi
Prototype char * ft_strmapi(char const *s, char
(*f)(unsigned int, char));
Description Applies the functionfto each character of the string passed
as argument by giving its index as first argument to create a
“fresh” new string (withmalloc(3)) resulting from the suc-
cessive applications off.
Param. #1 The string to map.
Param. #2 The function to apply to each character ofsand its index.
Return value The “fresh” string created from the successive applications of
f.
Libc functions malloc(3)
```

Libft Your first own library

#### •

```
ft_strequ
Prototype int ft_strequ(char const *s1, char const *s2);
Description Lexicographical comparison between s1 and s2. If the 2
strings are identical the function returns 1 , or 0 otherwise.
Param. #1 The first string to be compared.
Param. #2 The second string to be compared.
Return value 1 or 0 according to if the 2 strings are identical or not.
Libc functions None.
```
#### •

```
ft_strnequ
Prototype int ft_strnequ(char const *s1, char const *s2,
size_t n);
Description Lexicographical comparison betweens1ands2up tonchar-
acters or until a’\0’is reached. If the 2 strings are identical,
the function returns 1 , or 0 otherwise.
Param. #1 The first string to be compared.
Param. #2 The second string to be compared.
Param. #3 The maximum number of characters to be compared.
Return value 1 or 0 according to if the 2 strings are identical or not.
Libc functions None.
```
#### •

```
ft_strsub
Prototype char * ft_strsub(char const *s, unsigned int
start, size_t len);
Description Allocates (withmalloc(3)) and returns a “fresh” substring
from the string given as argument. The substring begins at
indexstartand is of sizelen. Ifstartandlenaren’t refer-
ing to a valid substring, the behavior is undefined. If the
allocation fails, the function returnsNULL.
Param. #1 The string from which create the substring.
Param. #2 The start index of the substring.
Param. #3 The size of the substring.
Return value The substring.
Libc functions malloc(3)
```
#### •

```
ft_strjoin
Prototype char * ft_strjoin(char const *s1, char const
*s2);
Description Allocates (withmalloc(3)) and returns a “fresh” string end-
ing with’\0’, result of the concatenation of s1ands2. If
the allocation fails the function returnsNULL.
Param. #1 The prefix string.
Param. #2 The suffix string.
Return value The “fresh” string result of the concatenation of the 2 strings.
Libc functions malloc(3)
```

Libft Your first own library

#### •

```
ft_strtrim
Prototype char * ft_strtrim(char const *s);
Description Allocates (withmalloc(3)) and returns a copy of the string
given as argument without whitespaces at the beginning or at
the end of the string. Will be considered as whitespaces the
following characters’ ’,’\n’and’\t’. If shas no whites-
paces at the beginning or at the end, the function returns a
copy ofs. If the allocation fails the function returnsNULL.
Param. #1 The string to be trimed.
Return value The “fresh” trimmed string or a copy ofs.
Libc functions malloc(3)
```
#### •

```
ft_strsplit
Prototype char ** ft_strsplit(char const *s, char c);
Description Allocates (withmalloc(3)) and returns an array of “fresh”
strings (all ending with’\0’, including the array itself) ob-
tained by spliting s using the character c as a delimiter.
If the allocation fails the function returns NULL. Example
: ft_strsplit("*hello*fellow***students*", ’*’) re-
turns the array["hello", "fellow", "students"].
Param. #1 The string to split.
Param. #2 The delimiter character.
Return value The array of “fresh” strings result of the split.
Libc functions malloc(3),free(3)
```
#### •

```
ft_itoa
Prototype char * ft_itoa(int n);
Description Allocate (withmalloc(3)) and returns a “fresh” string end-
ing with’\0’representing the integerngiven as argument.
Negative numbers must be supported. If the allocation fails,
the function returnsNULL.
Param. #1 The integer to be transformed into a string.
Return value The string representing the integer passed as argument.
Libc functions malloc(3)
```
#### •

```
ft_putchar
Prototype void ft_putchar(char c);
Description Outputs the charactercto the standard output.
Param. #1 The character to output.
Return value None.
Libc functions write(2).
```
#### •

```
ft_putstr
Prototype void ft_putstr(char const *s);
Description Outputs the stringsto the standard output.
Param. #1 The string to output.
Return value None.
Libc functions write(2).
```

Libft Your first own library

#### •

```
ft_putendl
Prototype void ft_putendl(char const *s);
Description Outputs the strings to the standard output followed by a
’\n’.
Param. #1 The string to output.
Return value None.
Libc functions write(2).
```
#### •

```
ft_putnbr
Prototype void ft_putnbr(int n);
Description Outputs the integernto the standard output.
Param. #1 The integer to output.
Return value None.
Libc functions write(2).
```
#### •

```
ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);
Description Outputs the charcto the file descriptorfd.
Param. #1 The character to output.
Param. #2 The file descriptor.
Return value None.
Libc functions write(2).
```
#### •

```
ft_putstr_fd
Prototype void ft_putstr_fd(char const *s, int fd);
Description Outputs the stringsto the file descriptorfd.
Param. #1 The string to output.
Param. #2 The file descriptor.
Return value None.
Libc functions write(2).
```
#### •

```
ft_putendl_fd
Prototype void ft_putendl_fd(char const *s, int fd);
Description Outputs the stringsto the file descriptorfdfollowed by a
’\n’.
Param. #1 The string to output.
Param. #2 The file descriptor.
Return value None.
Libc functions write(2).
```
#### •

```
ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);
Description Outputs the integernto the file descriptorfd.
Param. #1 The integer to print.
Param. #2 The file descriptor.
Return value None.
Libc functions write(2).
```

# Chapter VI

# Bonus part

If you successfully completed the mandatory part, you’ll enjoy taking it further. You can
see this last section as Bonus Points.

Having functions to manipulate memory and strings is very useful, but you’ll soon
discover that having functions to manipulate lists is even more useful.

You’ll use the following structure to represent the links of your list. This structure
must be added to yourlibft.hfile.

```
typedef struct s_list
{
void *content;
size_t content_size;
struct s_list *next;
} t_list;
```
```
Here is a description of the fields of thet_liststruct:
```
- content: The data contained in the link. Thevoid *allows to store any kind of
    data.
- content_size: The size of the data stored. Thevoid *type doesn’t allow you to
    know the size of the pointed data, as a consequence, it is necessary to save its size.
    For instance, the size of the string"42"is3 bytesand the 32bits integer 42 has a
    size of4 bytes.
- next: The next link’s address orNULLif it’s the last link.


Libft Your first own library

```
The following functions will allow you to manipulate your lists more easilly.
```
#### •

```
ft_lstnew
Prototype t_list * ft_lstnew(void const *content, size_t
content_size);
Description Allocates (withmalloc(3)) and returns a “fresh” link. The
variablescontentandcontent_sizeof the new link are ini-
tialized by copy of the parameters of the function. If the pa-
rametercontentis nul, the variablecontentis initialized to
NULLand the variablecontent_sizeis initialized to 0 even
if the parametercontent_sizeisn’t. The variablenextis
initialized toNULL. If the allocation fails, the function returns
NULL.
Param. #1 The content to put in the new link.
Param. #2 The size of the content of the new link.
Return value The new link.
Libc functions malloc(3),free(3)
```
#### •

```
ft_lstdelone
Prototype void ft_lstdelone(t_list **alst, void (*del)(void
*, size_t));
Description Takes as a parameter a link’s pointer address and frees the
memory of the link’s content using the functiondelgiven as
a parameter, then frees the link’s memory usingfree(3). The
memory ofnextmust not be freed under any circumstance.
Finally, the pointer to the link that was just freed must be
set toNULL(quite similar to the function ft_memdelin the
mandatory part).
Param. #1 The adress of a pointer to a link that needs to be freed.
Return value None.
Libc functions free(3)
```
#### •

```
ft_lstdel
Prototype void ft_lstdel(t_list **alst, void (*del)(void *,
size_t));
Description Takes as a parameter the adress of a pointer to a link and
frees the memory of this link and every successors of that link
using the functionsdelandfree(3). Finally the pointer to
the link that was just freed must be set toNULL(quite similar
to the functionft_memdelfrom the mandatory part).
Param. #1 The address of a pointer to the first link of a list that needs
to be freed.
Return value None.
Libc functions free(3)
```

Libft Your first own library

#### •

```
ft_lstadd
Prototype void ft_lstadd(t_list **alst, t_list *new);
Description Adds the elementnewat the beginning of the list.
Param. #1 The address of a pointer to the first link of a list.
Param. #2 The link to add at the beginning of the list.
Return value None.
Libc functions None.
```
#### •

```
ft_lstiter
Prototype void ft_lstiter(t_list *lst, void (*f)(t_list
*elem));
Description Iterates the listlstand applies the functionfto each link.
Param. #1 A pointer to the first link of a list.
Param. #2 The address of a function to apply to each link of a list.
Return value None.
Libc functions None.
```
#### •

```
ft_lstmap
Prototype t_list * ft_lstmap(t_list *lst, t_list *
(*f)(t_list *elem));
Description Iterates a listlstand applies the functionfto each link to
create a “fresh” list (usingmalloc(3)) resulting from the suc-
cessive applications off. If the allocation fails, the function
returnsNULL.
Param. #1 A pointer’s to the first link of a list.
Param. #2 The address of a function to apply to each link of a list.
Return value The new list.
Libc functions malloc(3),free(3).
```
If you successfully completed both the mandatory and bonus sections of this project,
we encourage you to add other functions that you believe could be useful to expand your
library. For instance, a version offt_strsplitthat returns a list instead of an array,
the function ft_lstfoldsimilar to the functionreduce inPython and the function
List.fold_leftinOCaml(beware of the memory leak !). You can add functions to
manipulate arrays, stacks, files, maps, hashtables, etc. The limit is your imagination.


# Chapter VII

# Submission and peer correction

Submit your work on yourGiTrepository as usual. Only the work on your repository
will be graded.

Once your have completed your defences, Deepthought (the “moulinette”) will grade
your work. Your final grade will be calculated taking into account your peer-correction
grades and Deepthought’s grade.

Deepthought will grade your assignments in the order of the subject : Part 1, Part 2
and Bonus. One error in one of the sections will automatically stop the grading.

```
Good luck to you and don’t forget your author file!
```

