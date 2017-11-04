#include <stdio.h>
using namespace std;
int main()
{
	int id;
	freopen("data.bin","wb",stdout);
	while (1)
	{
		scanf("%d",&id);
		if (id<0) break;
		printf("%c",id);
	}
	fclose(stdout);
	return 0;
}
