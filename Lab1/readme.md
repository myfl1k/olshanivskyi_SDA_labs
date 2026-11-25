# olshanivskyi_lab1 (Ольшанівський Максим)
SDA first lab
### Національний технічний університет України
### «Київський політехнічний інститут імені Ігоря Сікорського»
### Факультет інформатики та обчислювальної техніки
### Кафедра обчислювальної техніки
---
### Cтруктури даних і алгоритми
### Лабораторна робота №1
### «Розгалужені алгоритми»
---
#### Виконав:
#### студент групи ІО-61
#### Ольшанівський М. В.
#### Номер у списку групи: 20
#### Перевірив
#### Русінов В. В.



# Лабораторна робота №1
### Мета лабораторної роботи:
#### Метою лабораторної роботи №1.1 «Розгалужені алгоритми» є засвоєння теоретичного матеріалу та набуття практичних навичок використання керуючих конструкцій розгалуження та булевих (логічних) операцій.
### Постановка задачі
#### Задано дійсне число x. Визначити значення заданої за варіантом кусочно-безперервної функції y(x), якщо воно існує, або вивести на екран повідомлення про неіснування функції для заданого x.

Розв’язати задачу двома способами (написати дві програми):
1)	У програмі дозволяється використовувати тільки одиничні операції порівняння (=, <>, <, <=, >, >=)  і не дозволяється використовувати булеві (логічні) операції (not, and, or, тощо)
2)	У програмі необхідно обов'язково використати булеві (логічні) операції (not, and, or тощо); використання булевих операцій не повинно бути надлишковим.
## Варіант 20
Для заданого дійсного x обчислити: 
#### y(x) = f1(–5x³ + 10), x ∈ [8,23)
#### y(x) = f2(2x³ + 8x²), x ∈ (–∞, –19) ∪ (–3,0]

## Блок схеми
![](/../Lab1_pictures/Lab1_ex1_method1.drawio.png)
![](https://github.com/myfl1k/olshanivskyi_lab1/blob/main/pictures_for_lab/Lab1_ex1_method2.drawio.png)
![](https://github.com/myfl1k/olshanivskyi_lab1/blob/main/pictures_for_lab/Lab1_ex2_method1.drawio.png)
![](https://github.com/myfl1k/olshanivskyi_lab1/blob/main/pictures_for_lab/Lab1_ex2_method2.drawio.png)

## Програмний код
#### Перша прогама перший метод (Lab1_ex1_method1)
```c
#include <stdio.h>

int main()
{
    int x1, functionY1;
    printf("Enter value of x: ");
    scanf("%d", &x1);

    if (x1 >= 8)
    {
        if (x1 < 23)
        {
            functionY1 = -5 * (x1*x1*x1) + 10;
            printf("Fuction f(-5x^3+10) takes the value %d when x equals %d", functionY1, x1);
            return 0;
        }
        printf("x(%d) lies outside the range [8; 23)", x1);
        return 0;
    }
    printf("x(%d) lies outside the range [8; 23)", x1);
    
}
```
#### Перша прогама другий метод (Lab1_ex1_method2)
```c
#include <stdio.h>

int main()
{
    int x1, functionY1;
    printf("Enter value of x: ");
    scanf("%d", &x1);

    if (x1 >= 8 && x1 < 23)
    {
        functionY1 = -5 * (x1*x1*x1) + 10;
        printf("Fuction f(-5x^3+10) takes the value %d when x equals %d", functionY1, x1);
        return 0;
    }
    printf("x(%d) lies outside the range [8; 23)", x1);
    
}
```
#### Друга прогама перший метод (Lab1_ex2_method1)
```c
#include <stdio.h>

int main()
{
    int x2, functionY2;
    printf("Enter value of x: ");
    scanf("%d", &x2);

    if (x2 < -19)
    {
        functionY2 = 2 * (x2*x2*x2) + 8 * (x2*x2);
        printf("Fuction f(2x^3+8x^2) takes the value %d when x equals %d", functionY2, x2);
        return 0;
    }
    else
    {
        if (x2 > -3)
        {
            if (x2 <= 0)
            {
                functionY2 = 2 * (x2*x2*x2) + 8 * (x2*x2);
                printf("Fuction f(2x^3+8x^2) takes the value %d when x equals %d", functionY2, x2);
                return 0;
            }
        }    
    }
    printf("x(%d) lies outside the range [-inf; -19) U (-3; 0]", x2);
    return 0;
    
}
```
#### Друга прогама другий метод (Lab1_ex2_method2)
```c
#include <stdio.h>

int main()
{
    int x2, functionY2;
    printf("Enter value of x: ");
    scanf("%d", &x2);

    if (x2 < -19 || (x2 > -3 && x2 <= 0))
    {
        functionY2 = 2 * (x2*x2*x2) + 8 * (x2*x2);
        printf("Fuction f(2x^3+8x^2) takes the value %d when x equals %d", functionY2, x2);
    }
    else
    {
        printf("x(%d) lies outside the range [-inf; -19) U (-3; 0]", x2);
    }
    return 0;
}
```
## Перевірка правильності виконання коду
### Набір різноманітних чисел для першої програми
| X1  |                         functionY1                                 |
| --- | ------------------------------------------------------------       |
| -2  | x(-2) lies outside the range [8; 23)                               |
| 8   | Fuction f(-5x^3+10) takes the value **-2550** when x equals _8_    |
| 15  | Fuction f(-5x^3+10) takes the value **-16865** when x equals _15_  |
| 23  | x(23) lies outside the range [8; 23)                               |
| 50  | x(50) lies outside the range [8; 23)                               |
---
### Відповідно скрін з прикладами
![](https://github.com/myfl1k/olshanivskyi_lab1/blob/main/pictures_for_lab/different_num_for_ex1.png)

### Набір різноманітних чисел для другої програми
| X1  |                         functionY1                                     |
| --- | ---------------------------------------------------------------------- |
| -50 | Fuction f(2x^3+8x^2) takes the value **-230000** when x equals _-50_   |
| -19 | x(-19) lies outside the range [-inf; -19) U (-3; 0]                    |
| -10 | x(-10) lies outside the range [-inf; -19) U (-3; 0]                    |
| -3  | x(-3) lies outside the range [-inf; -19) U (-3; 0]                     |
| -1  | Fuction f(2x^3+8x^2) takes the value **6** when x equals _-1_          |
|  0  | Fuction f(2x^3+8x^2) takes the value **0** when x equals _0_           |
|  5  | x(5) lies outside the range [-inf; -19) U (-3; 0]                      |
---
### Відповідно скрін з прикладами
![](https://github.com/myfl1k/olshanivskyi_lab1/blob/main/pictures_for_lab/different_num_for_ex2.png)

