#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int task1();
int task2();
int task3(int n);
int task4(int A, int B, int C);

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, ".UTF-8");

    printf("ПРАКТИЧЕСКАЯ РАБОТА\n");

    printf("\n===== ЗАДАНИЕ 1 =====\n");
    task1();

    printf("\n===== ЗАДАНИЕ 2 =====\n");
    task2();

    printf("\n===== ЗАДАНИЕ 3 =====\n");

    int n;

    printf("Введите целое трёхзначное число: ");
    scanf("%d", &n);

    task3(n);

    printf("\n===== ЗАДАНИЕ 4. ДОСТАВКА ГРУЗОВ =====\n");

    int A, B, C;

    printf("Введите вес груза A: ");
    scanf("%d", &A);

    printf("Введите вес груза B: ");
    scanf("%d", &B);

    printf("Введите вес груза C: ");
    scanf("%d", &C);

    int result = task4(A, B, C);

    printf("%s",
        result ? "Разрешение на погрузку получено.\n"
        : "Погрузка запрещена.\n");

    system("pause");

    return 0;
}

int task1()
{
    char c = '!';
    int i = 2;
    float f = 3.14f;
    double d = 5e-12;

    printf("Начальные значения:\n");
    printf("char:   %c\n", c);
    printf("int:    %d\n", i);
    printf("float:  %.2f\n", f);
    printf("double: %.12lf\n", d);

    printf("\nВвод значений\n");

    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("Введите целое число: ");
    scanf("%d", &i);

    printf("Введите вещественное число float: ");
    scanf("%f", &f);

    printf("Введите вещественное число double: ");
    scanf("%lf", &d);

    printf("\nВведённые значения:\n");
    printf("char:   %c\n", c);
    printf("int:    %d\n", i);
    printf("float:  %.2f\n", f);
    printf("double: %.12lf\n", d);

    float number;
    int integerPart;
    float fractionalPart;

    printf("\n--- Задача 1а ---\n");
    printf("Введите вещественное число: ");
    scanf("%f", &number);

    integerPart = (int)number;
    fractionalPart = number - integerPart;

    printf("Целая часть: %d\n", integerPart);
    printf("Дробная часть: %.2f\n", fractionalPart);

    printf("\n--- Задача 1б ---\n");
    printf("Введите символ: ");
    scanf(" %c", &c);

    printf("Символ: %c\n", c);
    printf("Десятичный код: %d\n", (unsigned char)c);
    printf("Шестнадцатеричный код: %X\n", (unsigned char)c);

    printf("\n--- Задача 1в ---\n");
    printf("Введите целое число i: ");
    scanf("%d", &i);

    printf("1 / i = ");
    printf("%s", i != 0 ? "" : "Деление на ноль невозможно.\n");
    if (i != 0)
        printf("%.6f\n", 1.0 / i);

    return 0;
}

int task2()
{
    int a = 11;
    int b = 3;
    int x;
    float y;
    double z;

    x = a / b;
    y = a / b;
    z = a / b;

    printf("a = %d, b = %d\n\n", a, b);

    printf("x = a / b, где x int:    %d\n", x);
    printf("y = a / b, где y float:  %.2f\n", y);
    printf("z = a / b, где z double: %.2lf\n", z);

    printf("\nОбъяснение:\n");
    printf("a и b имеют тип int, поэтому выполняется целочисленное деление.\n");
    printf("11 / 3 = 3, дробная часть отбрасывается.\n");

    printf("\n--- Явное преобразование ---\n");

    printf("(float)a / b  = %.2f\n", (float)a / b);
    printf("(double)a / b = %.6lf\n", (double)a / b);

    printf("\n--- Эксперимент со скобками ---\n");

    printf("(float)(a / b) = %.2f\n", (float)(a / b));
    printf("(float)a / b   = %.2f\n", (float)a / b);

    printf("\n(float)(a / b) сначала выполняет целочисленное деление.\n");
    printf("(float)a / b сначала преобразует a в float.\n");

    return 0;
}

int task3(int n)
{
    int last;
    int first;
    int middle;
    int sum;
    int reverse;

    last = n % 10;
    first = n / 100;
    middle = (n / 10) % 10;

    sum = first + middle + last;
    reverse = last * 100 + middle * 10 + first;

    printf("Последняя цифра: %d\n", last);
    printf("Первая цифра: %d\n", first);
    printf("Сумма цифр: %d\n", sum);
    printf("Число наоборот: %d\n", reverse);

    return 0;
}

int task4(int A, int B, int C)
{
    return (A % 5 == 0 &&
        B % 5 == 0 &&
        C % 5 == 0);
}