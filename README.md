# _This project has been created as part of the 42 curriculum by lucferre_

## Description

The goal of this project is to recode the printf() from libc, a great exercise to improve programming skills and discover __variadic funcions__ in C.

Once completed, this ft_printf() function is allowed to be added to the libft so it can be used on next C projects at 42.

## Details

The following conversions were recoded in this project:

* __%c__:
  * Prints a single character.

* __%s__:
  * Prints a string (as defined by the common C convention).

* __%p__:
  * The void * pointer argument has to be printed in hexadecimal format.

* __%d__:
  * Prints a decimal (base 10) number.

* __%i__:
  * Prints an integer in base 10.

* __%u__:
  * Prints an unsigned decimal (base 10) number.

* __%x__:
  * Prints a number in hexadecimal (base 16) lowercase format.

* __%X__:
  * Prints a number in hexadecimal (base 16) uppercase format.

* __%%__:
  * Prints a percent sign

***

Since this generates a somewhat long list of _else ifs_, it was implemented and added a different function to each of the conversions on the __detect_format()__ function - with exceptions for 'x' & 'X', and 'd' & 'i', where each pair could be solved by the same function, and 'c' & '%', which could be solved on __detec_format()__ itself.

All of them returns a int representing the length of the printed string by each, so the main function __ft_printf()__ can return the sum, as does the original from libc. These functions are:

* __f_string()__: To solve '%s'.

* __f_pointer()__: To solve '%p'.

* __f_int()__: To solve '%d' and '%i'.

* __f_unsigned()__: To solve '%u'.

* __f_hex()__: To solve '%x' and '%X'.

***

Other auxiliary functions implemented to solve the core of some conversions are:

* __ft_putstr()__:
  * Prints a string.

* __ft_puthex()__:
  * Prints a number in hexadecimal format in a chosen case style (upper or lower).

* __ft_utoa()__:
  * Prints an unsigned integer number.

## Instructions

To use the function, clone on your project folder with:

```bash
git clone https://github.com/42-lucferre/ft_printf.git ft_printf
```

### Command lines

```bash
make
```

or

```bash
make all
```

* Compiles everything and creates __libftprintf.a__.

***

```bash
make clean
```

* Removes object (__.o__) files;
* Removes precompiled headers (__.gch__).

***

```bash
make fclean
```

* Calls _make clean_;
* Removes __libftprintf.a__.

***

```bash
make re
```

* Calls _make fclean_;
* Calls _make all_.

***

To use the function, compile with:

```bash
cc <your_file.c> -I./ft_printf -L./Libft -lftprintf -o <output_name>
```

## Resources

"__man__" used on Linux terminal and internet forums such as Stack Overflow were the primary sources of information.

AI was used as a secondary learning tool.
