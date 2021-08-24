
## Learning Objectives

This project is devoted to do some basic operations in the real line and the complex plane.

-   Algebra operations.
-   Absolute values.
-   Cosinus and Sinus.
-   The Cartesian plane.
-   The Complex plane.
-   Real part and Imaginary part of Complex Numbers.
-   Modulus
-   Argument

## Requirements

### C

Before doing this project, you need to know :

-   How to use structures

### General

-   Allowed editors: `vi`, `vim`, `emacs`
-   All your files will be compiled on Ubuntu 20.04 LTS
-   Your programs and functions will compiled with `gcc 9.3.0` using the flags `-Wall` `-Werror` `-Wextra` `-std=c89` `and -pedantic`
-   All your files should end with a new line
-   A `README.md` file, at the root of the folder of the project
-   There should be no errors and no warnings during compilation
-   Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")


## Tasks

### 0. Structure Complex

Build the structure “complex” where a complex number a + ib is represented by two doubles.

Write a function that displays the complex numbers, followed by a new line.

-   Prototype: `void display_complex_number(complex c);`
-   You can use `printf` in your code

```
julien@ubuntu:~/0x00-math_complex$ cat 0-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;

    c1.re = 1;
    c1.im = 2;
    display_complex_number(c1);
    c1.re = 1;
    c1.im = 0;
    display_complex_number(c1);
    return (0);
}
julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 0-main.c 0-display.c -o 0-complex
julien@ubuntu:~/0x00-math_complex$ ./0-complex
1 + 2i
1

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `0-display.c`

### 1. Conjugate

Write a function that returns the conjugate of a given complex number.

-   Prototype: `complex conjugate(complex c);`

```
julien@ubuntu:~/0x00-math_complex$ cat 1-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;

    c1.re = 1;
    c1.im = 2;
    c1 = conjugate(c1);
    display_complex_number(c1);
    c1 = conjugate(c1);
    display_complex_number(c1);
    return (0);
}
julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 1-main.c 1-conjugate.c 0-display.c -o 1-conjugate
julien@ubuntu:~/0x00-math_complex$ ./1-conjugate
1 - 2i
1 + 2i

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `1-conjugate.c`

### 2. Modulus

Write a function that returns the modulus of a given complex number.

-   Prototype: `double modulus(complex c);`
-   You can use the library `<math.h>` in your code

```
julien@ubuntu:~/0x00-math_complex$ cat 2-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;
    double mod;

    c1.re = 1;
    c1.im = 2;
    mod = modulus(c1);
    printf("%f\n", mod);
    return (0);
}

julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 -lm 2-main.c 2-modulus.c -o 2-modulus
julien@ubuntu:~/0x00-math_complex$ ./2-modulus
2.236068

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `2-modulus.c`

### 3. Argument

Write a function that returns the argument of a given complex number.

-   Prototype: `double argument(complex c);`
-   You can use the library `<math.h>` in your code

```
julien@ubuntu:~/0x00-math_complex$ cat 3-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1;
    double arg;

    c1.re = 1;
    c1.im = 2;
    arg = argument(c1);
    printf("%f\n", arg);
    return (0);
}

julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 3-main.c 3-argument.c -lm -o 3-argument
julien@ubuntu:~/0x00-math_complex$ ./3-argument
1.107149

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `3-argument.c`

### 4. Addition

Write a function that performs the addition operation to complex numbers.

-   Prototype: `void addition(complex c1, complex c2, complex *c3);`

```
julien@ubuntu:~/0x00-math_complex$ cat 4-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1, c2, c3;
    c1.re=1;
    c1.im=1;
    c2.re=1;
    c2.im=2;
    display_complex_number(c1);
    display_complex_number(c2);
    addition(c1,c2,&c3);
    display_complex_number(c3);
}

julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 4-main.c 4-addition.c 0-display.c -o 4-addition
julien@ubuntu:~/0x00-math_complex$ ./4-addition
1 + i
1 + 2i
2 + 3i

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `4-addition.c`

### 5. Substraction

Write a function that performs the substraction operation to complex numbers.

-   Prototype: `void substraction(complex c1, complex c2, complex *c3);`

```
julien@ubuntu:~/0x00-math_complex$ cat 5-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1, c2, c3;
    c1.re=1;
    c1.im=1;
    c2.re=1;
    c2.im=2;
    display_complex_number(c1);
    display_complex_number(c2);
    substraction(c1,c2,&c3);
    display_complex_number(c3);
}

julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 5-main.c 5-substraction.c 0-display.c -o 5-substraction
julien@ubuntu:~/0x00-math_complex$ ./5-substraction
1 + i
1 + 2i
0 - i

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `5-substraction.c`

### 6. Multiplication

Write a function that performs the multiplication operation to complex numbers.

-   Prototype: `void multiplication(complex c1, complex c2, complex *c3);`

```
julien@ubuntu:~/0x00-math_complex$ cat 6-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1, c2, c3;
    c1.re=1;
    c1.im=2;
    c2.re=2;
    c2.im=2;
    display_complex_number(c1);
    display_complex_number(c2);
    multiplication(c1,c2,&c3);
    display_complex_number(c3);
}

julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 6-main.c 6-multiplication.c 0-display.c -o 6-multiplication
julien@ubuntu:~/0x00-math_complex$ ./6-multiplication
1 + 2i
2 + 2i
-2 + 6i

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `6-multiplication.c`

### 7. Division

Write a function that performs the division operation to complex numbers.

-   Prototype: `void division(complex c1, complex c2, complex *c3);`

```
julien@ubuntu:~/0x00-math_complex$ cat 7-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1, c2, c3;
    c1.re=4;
    c1.im=3;
    c2.re=2;
    c2.im=1;
    display_complex_number(c1);
    display_complex_number(c2);
    division(c1,c2,&c3);
    display_complex_number(c3);
}

julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 7-main.c 7-division.c 0-display.c -o 7-division
julien@ubuntu:~/0x00-math_complex$ ./7-division
4 + 3i
2 + i
2.2 + 0.4i

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `7-division.c`

### 8. Real and imaginary

Write a function that update the real and the imaginary parts of a complex number given its modulus and arguments.

-   Prototype: `void complex_from_mod_arg (double m, double arg, complex *c3);`
-   You can use the library `<math.h>` in your code

```
julien@ubuntu:~/0x00-math_complex$ cat 8-main.c 
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(void)
{
    complex c1, c2;
    double mod, arg;
    c1.im = 2;
    c1.re = 2;
    mod = modulus(c1);
    arg = argument(c1);
    display_complex_number(c1);
    complex_from_mod_arg(mod, arg, &c2);
    display_complex_number(c2);
}

julien@ubuntu:~/0x00-math_complex$ gcc -Wall -Werror -pedantic -Wextra -std=c89 -lm 8-main.c 8-complex.c 0-display.c 2-modulus.c 3-argument.c -o 8-complex
julien@ubuntu:~/0x00-math_complex$ ./8-complex
2 + 2i
2 + 2i

```

**Repo:**

-   GitHub repository: `holbertonschool-math`
-   Directory: `0x00-math_complex`
-   File: `8-complex.c`
