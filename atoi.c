#include <stdio.h>
#include <string.h>
int atoi(const char*);
int main(void){
	char str[5];
	strcpy(str,"12345576");
	printf("%d\n",atoi(str));
	//printf("%d\n",atoi(str));
	return 0;
}
int atoi(const char *str){
	unsigned int i;
	size_t len = strlen(str);
	int intergerNumber = 0;
	for(i=0;i<len;i++){
		int charToint = str[i] - '0';
		intergerNumber = charToint + intergerNumber * 10;
	}
	return intergerNumber;
}
