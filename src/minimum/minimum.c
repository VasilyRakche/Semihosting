#include <stdio.h>
#ifndef __NO_SYSTEM_INIT
void SystemInit()
{}
#endif
int __stack=3;
void main()
{
	__stack+=3;
	for (;;);
}
