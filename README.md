# Welcome to _printf

This a interpretation and application of the original printf function in the standard library. This interpretation intends to satisfy a given list of conditions by which the standard library printf is able to fulfill. These condtions are as follows:

 - Print a character
 - Print a string
 - Print a %
 - Print an Integer
### Format Specifiers:
Format specifiers tell _printf which data type the user would like to print to the standard output. A format specifier is marked with a percent symbol (%). To use the format specifier you much use a designating variable after the percent symbol to specify which type of data you could like to output.
### Printing Characters:
__Format Specifier:__ %c
>Example: _printf("%c", 'r')\
>Output: r
### Printing Strings:
__Format Specifier:__ %s
>Example: _printf("%s", "Holberton Rocks")\
>Output: Holberton Rocks
### Print Integers:
__Format Specifier:__ %d or %i
>Example: _printf("Michael Jordan wore numbers %d and %i in his career"), 23, 45)\
>Output: Michael Jordan wore 23 and 45 in his career


## Project Authors:
**Nathan Hall** | [Github](https://github.com/NathanHall762)\
**Taylor Joyner** | [Github](https://github.com/TJonCanon)
