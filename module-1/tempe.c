#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	/* code */
	char arr[100];
	char arrr[100];
	int  l = 0;
	scanf("%s",arr);
	for (int i = strlen(arr)-1; i>=0 ; i--){
		arrr[l++] = arr[i];
	}
	arrr[l] = '\0';
	printf("%s\n", arrr);
	return 0;
}