#include<stdio.h>

int main() {
	FILE *file = fopen("bt01.txt", "a"); 
	if(file == NULL) {
    	printf("Khong mo duoc file");
    	return 1; 
    }
    char character[100];
	
	printf("Nhap chuoi vao file: ");
	fgets(character, sizeof(character), stdin);
	fprintf(file, "%s", character);
	fclose(file);
	printf("Chuoi da duoc luu vao file"); 

   return 0;
}

