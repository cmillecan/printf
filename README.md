# [Printf](./_printf.c)

## Description
The goal of this project was to re-create the function printf. Printf writes output to the standard output stream and returns the number of characters printed.

**Prototype:**
```
int _printf(const char *format, ...);
```
**Format** is the string that contains the text to be written to standard output.

## Format Specifiers
* **c** - Specifies a character
* **s** - Specifies a string of characters
* **d, i** - Specifies a signed decimal integer

## [Functions](./helpers.c)
* **\_putchar** - writes the character to stdout
* **\_putstring** - prints a string
* **is\_valid** - checks if format is valid
* **\_putnum** - prints a number

## Authors
* Constance Millecan
* **[Daniel So](https://github.com/djso89)**
