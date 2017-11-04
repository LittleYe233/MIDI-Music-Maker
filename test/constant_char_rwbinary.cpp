#include <stdio.h>
using namespace std;
int main()
{
	char ch;
	freopen("data.bin","wb",stdout);
	while (1)
	{
		scanf("%c",&ch);
		if (ch=='\n') break;
		printf("%c",ch);
	}
	fclose(stdout);
	return 0;
}
