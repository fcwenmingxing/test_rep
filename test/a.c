#include <stdio.h>

int main()
{
	int i = 0;
	int cnt = 0;
	for (cnt = 0; cnt < 10; ++cnt) {
		i = i++;
		printf ("i is:%d\n",i);
	}
	return 0;
}
