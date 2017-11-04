#include <stdio.h>
using namespace std;
int main()
{
	int l,r;
	scanf("%d%d",&l,&r);
	freopen("data.bin","wb",stdout);
	for (int i=l;i<=r;i++) printf("%c",i);
	fclose(stdout);
	return 0;
}
