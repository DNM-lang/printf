# 0x11. C -printf( Enhanced printf Implementation)

Welcome to the repository showcasing an advanced implementation of the `printf` function in C. This custom printf offers expanded functionality beyond the standard library version, providing a robust and feature-rich solution for your projects. Explore the key features and details of each file below:

## 0. _printf.c - Core Functionality

- **Functionality**: Produces output based on a format.
- **Prototype**: `int _printf(const char *format, ...);`
- **Returns**: Number of characters printed (excluding the null byte).
- **Output**: Redirects output to `stdout`.
- **Supported Conversion Specifiers**: `c`, `s`, `%`.
- **Optimization**: No reproduction of C library `printf` buffer handling.
- **Simplicity**: No handling of flag characters, field width, precision, or length modifiers.
- **[Explore _printf.c](./_printf.c)**

## 1. print_i_d.c - Integer Handling

- **Supported Conversion Specifiers**: `d`, `i`.
- **Optimization**: No handling of flag characters, field width, precision, or length modifiers.
- **[Explore print_i_d.c](./print_i_d.c)**

## 2. custom_specifiers.c - Binary Conversion

- **Custom Conversion Specifier**: `b` (unsigned int to binary).
- **[Explore custom_specifiers.c](./custom_specifiers.c)**

## 3. more_conversion_specifiers.c - Additional Formats

- **Supported Conversion Specifiers**: `u`, `o`, `x`, `X`.
- **Optimization**: No handling of flag characters, field width, precision, or length modifiers.
- **[Explore more_conversion_specifiers.c](./more_conversion_specifiers.c)**

## 4. buffer_handling.c - Optimized Buffer Usage

- **Optimization**: Utilizes a local buffer of 1024 chars for efficient `write` calls.
- **[Explore buffer_handling.c](./buffer_handling.c)**

## 5. custom_specifiers_extended.c - Extended String Printing

- **Custom Conversion Specifier**: `S` (prints strings).
- **Representation**: Non-printable characters shown as `\x` followed by ASCII code value in hexadecimal.
- **[Explore custom_specifiers_extended.c](./custom_specifiers_extended.c)**

...

*Additional features and conversion specifiers may be explored within the repository.*

Feel free to delve into this enhanced `printf` implementation, designed to elevate your C programming experience. For inquiries or suggestions, please reach out to the contributors:

- **Dennis Njoroge (DNM_lang)**
- **Blessi3Ong**

