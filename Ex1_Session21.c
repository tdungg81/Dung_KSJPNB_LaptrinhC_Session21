#include<stdio.h>

int main() {
	FILE *file = fopen("bt01.txt", "w"); 
	if(file == NULL) {
    	printf("Khong mo duoc file");
    	return 1; 
}
    char character[100];
	printf("Hay nhap 1 chuoi bat ki: ");
	fgets(character, sizeof(character), stdin);
	fputs(character, file);
	fclose(file);
	printf("Chuoi da duoc luu vao  tep bt01.txt\n"); 
	 
	

   return 0;
}

