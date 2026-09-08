#include <stdio.h>

/* NANR */
void fun1()
{
    printf("NANR: Hello\n");
}

/* ANR */
void fun2(int a, int b)
{
    printf("ANR: Sum = %d\n", a + b);
}

/* NAWR */
int fun3()
{
    return 20;
}

/* AWR */
int fun4(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    fun1();

    fun2(10, 20);

    result = fun3();
    printf("NAWR: Returned value = %d\n", result);

    result = fun4(30, 40);
    printf("AWR: Sum = %d\n", result);

    return 0;
}
Output:
NANR: Hello
ANR: Sum = 30
NAWR: Returned value = 20
AWR: Sum = 70
