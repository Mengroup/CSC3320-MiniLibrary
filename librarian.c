#include "pch.h"
#include<stdio.h>
#include<string.h>
#define MAX 256

/*keep track of number of books in the library*/
int counter = 0;

void addBook() {
	char author[MAX] = {0};
	char title[MAX] = {0};
	int a, b;

	printf("Book Title\n");
//	fgets(title, MAX, stdin);
	scanf("%[^\n]%*c", title); 
	/*input string with whitespace. 
	[^\n]take input until newline;
	*c reads newline and discard it to prevent further problem for next input*/
	printf("Name of The Author\n");
//	fgets(author, MAX, stdin);
	scanf("%[^\n]s%*c", author);

	if (strlen(author) == 0 || strlen(title) == 0) {
		printf("Invalid Entry! Try again");
		/*here go back to main menu*/
	}
	else {
		FILE *bookInfo = fopen("MyLibrary.txt", "a+");

		counter++;

		fprintf(bookInfo, "%d, %s, %s, Library, null, null", counter, title, author);
		fprintf(bookInfo, "\n");
//		fclose(bookInfo);
		printf("Success!\n");
		/*go back to main menu or ask for enter more book*/
	}
}

void removeBook() {
	int id;
	printf("Enter Book ID\n");
	scanf("%d", &id);


}




int main() {
	addBook();
	return 0;
}