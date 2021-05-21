#include <stdio.h>
#include <string.h>
#include <iostream> 
using namespace std;
void main(int argc, char* argv[])
{

	char str[128];
	int count[26];
	int num = 0; 

	cout<<"attention!! \nThe program understands only Latin symbols \nin the number of no more than 127 characters.\nEnter the line: ";
	gets_s(str);//gets_s преобразовывает символы строки в элементы массива str после сохраня в типе char.
	for (int elem = 0; elem < 26; elem++)
		count[elem] = 0;
	for (int elem = 0; elem < strlen(str); elem++)//  цикл смены регистра и подсчета букв 
	{
		num = -1;
		if (str[elem] >= 'a' && str[elem] <= 'z')
			num = str[elem] - 'a';
		if (str[elem] >= 'A' && str[elem] <= 'Z')
			num = str[elem] - 'A';
		if (num >= 0)
			count[num] ++;
	}
	
	for (int elem = 0; elem < 26; elem++)//цикл выводящий результат
	{
		if (count[elem] > 1)//ограничение по выводу
			printf("%c - %d\n", 'A' + elem, count[elem]);//( %c-выводит символ %d- число)- спецификаторы printf
	}

	system("pause");
}
