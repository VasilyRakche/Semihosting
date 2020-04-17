#include <stdio.h>

float f=1.11;
double d=3.14;

char s[] = "2.22,1.234567";
int __StackTop =3;
int main()
{
	__StackTop+=1;
	sscanf(s, "%f,%lf", &f, &d);
    printf("f=%f, d=%lf\n", __StackTop, d);
	return 0;
}

#ifndef __NO_SYSTEM_INIT
void SystemInit()
{}
#endif
