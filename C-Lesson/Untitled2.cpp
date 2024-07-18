#include <stdio.h>
int main(){
	FILE *pF = fopen("E:\\C Program\\text.txt","r");
//	fprintf(pF,"\nĐi ăn liền đi ");
	char buffer[255];
	while(fgets(buffer,255,pF) !=NULL){
			printf("%s",buffer);
	};

	fclose(pF);
	return 0;
}