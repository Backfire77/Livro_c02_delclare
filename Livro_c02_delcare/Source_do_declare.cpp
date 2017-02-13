//: C02:Declare.cpp
// Declaration & definnition examples
#include <iostream> // alteração tua

extern int i;	//declaration without definiton
extern float f(float);	//function Declaration

float b; //Declaration & definition
float f(float a)
{
	return a + 1;//Definition
}

int i;	//Definition
int h(int x)	// Declaration % defenition
{
	return x + 1;
}

int main()
{
	b = 1.0;
	i = 2;
	f(b);
	h(i);
	//alteracao tua
	cout << b;
	cout << "\n";
	cout << i;
}