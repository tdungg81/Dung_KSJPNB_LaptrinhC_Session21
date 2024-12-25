#include<stdio.h>

int main() {
   FILE *file = fopen("bt01.txt", "r"); 
	if(file == NULL) {
    	printf("Khong mo duoc file");
    	return 1; 
}
char firstCharacter;
    if(firstCharacter != EOF) {
	    printf("Ki tu dau tien trong tep la: %c\n", firstCharacter);
    } else {
        printf("Khong tim thay\n"); 
    } 
fclose(file); 

   return 0;
}

