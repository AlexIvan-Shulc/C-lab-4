#include "task3.h"

int main() {
	setlocale(LC_ALL, "russian");

	char str[SIZE] = { 0 };

	printf("������� ������:\n");
	fgets(str, SIZE, stdin);

	size_t len = strlen(str);
	if(str[len - 1] == '\n') {
		str[len - 1] = '\0';
	}

	if(isPalindrome(str))
		printf("������ �������� �����������\n");
	else
		printf("������ �� �������� �����������\n");

}