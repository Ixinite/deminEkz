
#include <string.h>
#include <stdio.h>
void Reverse(char a[]);     //объявляем функцию

int main()
{
    char inp[20];   //переменная где будем хранить наше слово
    scanf("%s", inp);       //получаем слово, сохраняем в переменную
    Reverse(inp);   //переворачиваем
    printf("%s", inp);  //выводим перевертыш
    return 0;
}

void Reverse(char a[])
{
    int j = 0;      //индекс первой позиции( с начала)
    int i = strlen(a) - 1;  //индекс второй позиции (с конца)
    int temp;   //временная переменная
    while(i > ((strlen(a) - 1)) / 2)        //зеркально заменяем символы в слове, пока индекс не достигнет середины строки
    {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
        j++;
        i--;
    }
}
