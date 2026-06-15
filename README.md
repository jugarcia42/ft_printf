# ft_printf

## About

ft_printf is a project from the 42 School curriculum that consists of recreating the behavior of the standard C `printf()` function. The objective is to gain a deeper understanding of variadic functions, formatted output, data conversion, and low-level character handling.

By implementing a custom version of `printf`, this project strengthens knowledge of argument parsing, type management, and output formatting while reproducing the behavior of one of the most widely used functions in the C standard library.

## The Challenge

The goal is to implement the following function:

```c
int	ft_printf(const char *format, ...);
```

The function must parse a format string, process conversion specifiers, print the corresponding arguments, and return the total number of characters written.

The implementation should closely mimic the behavior of the original `printf()` while using only the functions allowed by the project subject.

## Supported Conversions

### Character

```text
%c
```

Prints a single character.

### String

```text
%s
```

Prints a null-terminated string.

### Pointer

```text
%p
```

Prints a memory address in hexadecimal format.

### Decimal Integer

```text
%d
%i
```

Prints a signed decimal integer.

### Unsigned Integer

```text
%u
```

Prints an unsigned decimal integer.

### Hexadecimal

```text
%x
%X
```

Prints a number in hexadecimal format using lowercase or uppercase letters.

### Percent Sign

```text
%%
```

Prints a literal percent sign.

## Features

- Variadic argument handling.
- Custom format string parsing.
- Support for all mandatory conversions.
- Decimal and hexadecimal number conversion.
- Pointer address formatting.
- Character and string output.
- Accurate character count return value.
- Memory-safe implementation.

## Usage

Compile the project:

```bash
make
```

Include the header in your source code:

```c
#include "ft_printf.h"
```

Example:

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello %s!\n", "World");
	ft_printf("Number: %d\n", 42);
	ft_printf("Hex: %x\n", 255);
	return (0);
}
```

Output:

```text
Hello World!
Number: 42
Hex: ff
```

## Project Structure

```text
ft_printf/
├── includes/
│   └── ft_printf.h
├── src/
│   ├── conversions/
│   ├── printing/
│   ├── parsing/
│   └── utils/
├── Makefile
└── README.md
```

## Compilation

Available Makefile rules:

```bash
make
make clean
make fclean
make re
```

The compilation generates:

```bash
libftprintf.a
```

## How It Works

### Format Parsing

The function scans the format string character by character. When a `%` symbol is found, the following character determines the conversion to apply.

### Variadic Arguments

Arguments are accessed using the `<stdarg.h>` library:

```c
va_start()
va_arg()
va_end()
```

These macros allow the function to process an unknown number of arguments.

### Number Conversion

Integers are converted to their string representation before being written to the standard output.

### Output Management

All characters are written directly to the standard output while maintaining an accurate count of printed characters.

## Learning Objectives

Through this project, I gained experience with:

- Variadic functions.
- Format string parsing.
- Data type conversions.
- Number representation systems.
- String manipulation.
- Output management.
- Modular programming.
- Memory management.

## Technologies

- C
- Standard Library Macros (`stdarg.h`)
- Unix/Linux System Calls
- Makefile

Developed as part of the 42 School curriculum.
