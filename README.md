<h1 align="center">Holberton School Printf Project</h1>
<p align= "justify">This is the first group project, carried out by Holberton students. The goal of this assignment is to recreate the printf function, a basic version of the standard function. It also encourages group and team work with a randomly assigned partner.</p>
<p align= "justify">The printf() function in C is a standard library function that is used to output (print) formatted text on the console or terminal (Hence the "f" in the name stands for "formatted"). It is used to print text, numbers, and other data types to the console by using the appropriate format specifiers in the format string. The format string is a string of characters that can contain placeholders, called format specifiers, which are used to specify the type and format of the data that needs to be printed. The arguments to the printf() function are the values that need to be printed in place of the format specifiers.</p>

<details>
<summary><h2>Project requirements</h2></summary>
  <h3>General</h3>
  <ul>
    <li>Allowed editors: vi, vim, emacs</li>
    <li>All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89</li>
    <li>All files should end with a new line</li>
    <li>A README.md file, at the root of the folder of the project is mandatory</li>
    <li>The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl</li>
    <li>It is not allowed to use global variables</li>
    <li>No more than 5 functions per file</li>
    <li>The main.c files are shown as examples can be used to test the functions, but you don’t have to push them to your repo</li>
    <li>The prototypes of all functions should be included in your header file called main.h</li>
    <li>Don’t forget to push your header file</li>
    <li>All your header files should be include guarded</li>
    <li>Note that we will not provide the _putchar function for this project</li>
  </ul>
  <h3>Authorized functions and macros</h3>
  <ul>
    <li>write (man 2 write)</li>
    <li>malloc (man 3 malloc)</li>
    <li>free (man 3 free)</li>
    <li>va_start (man 3 va_start)</li>
    <li>va_end (man 3 va_end)</li>
    <li>va_copy (man 3 va_copy)</li>
    <li>va_arg (man 3 va_arg)</li>
  </ul>
 </details>
 
<details>
<summary><h2>How does it work?</h2></summary>
<p align= "justify">When printf processes its arguments, it starts printing the characters it finds in the first argument, one by one. When it finds a percent ('%') it knows it has a format specification. If the following character is a valid format indicator, it replaces it with the input given according to that format specification. If the '%' is followed by an invalid character for format indication, it simply prints '%' followed by the character. If no format specifier is given, the '%' is simply ignored.</p>
</details>

<details>
<summary><h2>Syntax</h2></summary>

```ruby
_printf("%[format indicator]", input);
```

| Format indicator | Description |
| --- | --- |
| %c | Prints a single character |
| %s | Prints a string of characters |
| %i | Prints an integer in base 10 |
| %d | Prints a decimal number in base 10 |
| %% | Prints a percent sign |

#### Example:

Input

```ruby
int main()
{
	_printf("Character:[%c]\n", 'H');
	return(0);
}
```

Output

```ruby
Character:[H]
```

</details>

<details>
<summary><h2>Files</h2></summary>
  
### [_printf.c](/_printf.c/)
<p align= "justify">This file contains the main code of the printf function. This function is in charge of checking for possible error cases such as the format given being null, or there being no format specifier given after the '%'. It also is in charge of calling the get_functions function when the conditions are met, as well as sending the format to the print function that will be used. Finally, it is also in charge of returning the the number of characters printed (excluding the null byte used to end output to strings).</p>
<p>Prototype:</p> 
  
 ```ruby
 int _printf(const char *format, ...);
 ```
 <details>
   <summary><h3>Flowchart</h3></summary>
   
   ![Diagrama sin título](https://user-images.githubusercontent.com/124692695/229196886-cd213d01-1be9-4e5f-b66c-db10ef842a81.jpg)
   
  </details>
  
### [get_functions.c](/get_functions.c/)
<p align= "justify">This file contains the function that will return the print function associated with the format specifier given. It will do so by comparing the items enlisted in a structure.</p>
<p>Prototype:</p>

```ruby
int (*get_functions(char format))(va_list)  
```

### [functions.c](/functions.c/)
This file contains the different print functions pertainting to each printing format:
<ul>
  <li><b>print_string</b> - Writes the characters of the string specified by an argument of type char * up to (but not including) the NULL character ('\0'). If the string is null, it simply writes (null). When it is finished printing, it returns the amount of characters printed.</li>
  <p>Prototype:</p>
  
  ```ruby
  int print_string(va_list args); 
  ```
  
  <li><b>print_char</b> -  Converts an argument of type int to a value of type unsigned char and writes the resulting character. When finished, it returns 1 (beacuse one character is printed).</li>
  <p>Prototype:</p>
  
  ```ruby
  int print_char(va_list args); 
  ```
  
  <li><b>print_percentage</b> - A '%' is written, and a 1 is returned (beacuse one character is printed).</li>
  <p>Prototype:</p>
  
  ```ruby
  int print_percentage(va_list args); 
  ```
  
  <li><b>print_int</b> - Converts an int argument to signed decimal notation and writes the resulting integers. When finished, it returns a counter that held the amount of characters printed.</li>
  <p>Prototype:</p>
  
  ```ruby
  int print_int(va_list args); 
  ```
</ul>

### [aux_functions.c](/aux_functions.c/)
This file contains the auxiliary functions used by other functions, such as _strlen and _putchar.
  
### [main.h](/main.h/)
This file contains all the libraries used, as well as the definition of the structure and the prototypes of each function.
</details>

<p align="center">Authors:</p>
<p align="center"><a href= "https://github.com/solp22">Sol Puente</a></p>
<p align="center"><a href= "https://github.com/JoaquinGarcia2408">Joaquin Garcia</a></p>
  
