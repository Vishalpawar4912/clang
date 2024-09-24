// 6. Write a C program which creates a structure book_bank containing the fields book id, book name, author and price. 
//    Read the records of n books and display the list of books having price between 500 to 1000.
#include<stdio.h>
#include<string.h>
struct book_bank {
    int book_id;
    char book_name[100];
    char author[100];
    float price;
};
void displayBooks(struct book_bank books[], int n);
int main() 
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct book_bank books[n];
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details of book %d:\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &books[i].book_id);
        getchar();
        printf("Book Name: ");
        fgets(books[i].book_name, 100, stdin);
        books[i].book_name[strcspn(books[i].book_name, "\n")] = 0; 
        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    displayBooks(books, n);
    return 0;
}
void displayBooks(struct book_bank books[], int n) 
{
    int found = 0;
    printf("\nBooks with price between 500 and 1000:\n");
    for (int i = 0; i < n; i++) 
    {
        if (books[i].price >= 500 && books[i].price <= 1000) 
        {
            printf("Book ID: %d\n", books[i].book_id);
            printf("Book Name: %s\n", books[i].book_name);
            printf("Author: %s\n", books[i].author);
            printf("Price: %.2f\n\n", books[i].price);
        }
    }
    if (!found) 
    {
        printf("No books found with price between 500 and 1000.\n");
    }
}