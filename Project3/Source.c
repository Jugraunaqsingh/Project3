//print the first capital letter
#include <stdio.h>
#include <string.h>
int firstcap(char str[], int pos, int len) {
	if (len == pos) {
		return -1;
	}
	if (str[pos] >= 'A' && str[pos] <= 'Z') {
		return pos;
	}
	else
		return firstcap(str, pos + 1, len);
}
int main() {
	int pos;
	char str[50];
	fgets(str, 50, stdin);
	pos = firstcap(str, 0, strlen(str));
	if (pos == -1) {
		printf("no capital letters found");
	}
	else
		printf("the first capital letter is %c", str[pos]);
	return 0;
}