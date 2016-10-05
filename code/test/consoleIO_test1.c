#include "syscall.h"

int
main()
{
	int n;
	for (n=111;n>=-2;n--) {
		PrintInt(n);
	}
    PrintInt(1 << 31);
    PrintInt(-((1 << 31) + 1));
    Halt();
}

