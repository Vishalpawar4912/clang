// 3. Write a C program to accept a book details of n books viz, book title, author, publisher and cost. 
//    Assign an accession number to each book in incresing order. Display these details:
//     1. Books of Specific Author
//     2. Books by specific publisher
//     3. All books costing Rs. 500 and above.
//     4. Information about particular book (accept the title)
//     5. All books.
//    The above five should be options for the user.
#include<stdio.h>
#include<string.h>
struct Book
{
    int accession_no;
    char title[100];
    char author[100];
    char publisher[100];
    float cost;
};
void dispBooksbyAuthor(struct Book books[], int n, char author[]);
void dispBooksByPublisher(struct Book books[], int n, char publisher[]);
void dispBooksCost(struct Book books[], int n);
void searchBookByTitle(struct Book books[], int n, char title[]);
void dispAllBooks(struct Book books[], int n);

int main()
{
    int n, i, ch;
    char searchAuthor[100], searchPublisher[100], searchTitle[100];
    printf("Enter the Number of Books: ");
    scanf("%d", &n);
    struct Book books[n];
    for(i = 0; i < n; i++)
    {
        books[i].accession_no = i + 1;
        getchar();
        printf("\nEnter details of Book %d:\n", books[i].accession_no);
        printf("Title: ");
        fgets(books[i].title, 100, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0;
        printf("Author: ");
        fgets(books[i].author, 100, stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;
        printf("Publisher: ");
        fgets(books[i].publisher, 100, stdin);
        books[i].publisher[strcspn(books[i].publisher, "\n")] = 0;
        printf("Cost: ");
        scanf("%f", &books[i].cost);
    }
    do
    {
        printf("\nChoose an option:\n");
        printf("1. Display books by a specific author\n");
        printf("2. Display books by a specific publisher\n");
        printf("3. Display books costing Rs. 500 or more\n");
        printf("4. Search for a book by title\n");
        printf("5. Display all books\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                getchar();
                printf("Enter Author Name: ");
                fgets(searchAuthor, 100, stdin);
                searchAuthor[strcspn(searchAuthor, "\n")] = 0;
                dispBooksbyAuthor(books, n, searchAuthor);
                break;
            case 2:
                getchar();
                printf("Enter Publisher Name: ");
                fgets(searchPublisher, 100, stdin);
                searchPublisher[strcspn(searchPublisher, "\n")] = 0;
                dispBooksByPublisher(books, n, searchPublisher);
                break;
            case 3:
                dispBooksCost(books, n);
                break;
            case 4:
                getchar();
                printf("Enter Book Title: ");
                fgets(searchTitle, 100, stdin);
                searchTitle[strcspn(searchTitle, "\n")] = 0;
                searchBookByTitle(books, n, searchTitle);
                break;
            case 5:
                dispAllBooks(books, n);
                break;
            case 6:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }while(ch != 6);
    return 0;
}
void dispBooksbyAuthor(struct Book books[], int n, char author[]) 
{
    int found = 0;
    printf("\nBooks by author %s:\n", author);
    for(int i = 0; i < n; i++) 
    {
        if(strcmp(books[i].author, author) == 0) 
        {
            printf("\nAccession No: %d\nTitle: %s\nPublisher: %s\nCost: %.2f\n",
                   books[i].accession_no, books[i].title, books[i].publisher, books[i].cost);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No books found by this author.\n");
    }
}
void dispBooksByPublisher(struct Book books[], int n, char publisher[]) 
{
    int found = 0;
    printf("\nBooks by publisher %s:\n", publisher);
    for(int i = 0; i < n; i++) 
    {
        if(strcmp(books[i].publisher, publisher) == 0) 
        {
            printf("\nAccession No: %d\nTitle: %s\nAuthor: %s\nCost: %.2f\n",
                   books[i].accession_no, books[i].title, books[i].author, books[i].cost);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No books found by this publisher.\n");
    }
}
void dispBooksCost(struct Book books[], int n) 
{
    int found = 0;
    printf("\nBooks costing Rs. 500 or more:\n");
    for(int i = 0; i < n; i++) 
    {
        if(books[i].cost >= 500) 
        {
            printf("\nAccession No: %d\nTitle: %s\nAuthor: %s\nPublisher: %s\nCost: %.2f\n",
                   books[i].accession_no, books[i].title, books[i].author, books[i].publisher, books[i].cost);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No books found costing Rs. 500 or more.\n");
    }
}
void searchBookByTitle(struct Book books[], int n, char title[]) 
{
    int found = 0;
    printf("\nSearching for book titled '%s':\n", title);
    for(int i = 0; i < n; i++) 
    {
        if(strcmp(books[i].title, title) == 0) 
        {
            printf("\nAccession No: %d\nAuthor: %s\nPublisher: %s\nCost: %.2f\n",
                   books[i].accession_no, books[i].author, books[i].publisher, books[i].cost);
            found = 1;
        }
    }
    if (!found) 
    {
        printf("No book found with this title.\n");
    }
}
void dispAllBooks(struct Book books[], int n) 
{
    printf("\nAll Books:\n");
    for(int i = 0; i < n; i++) 
    {
        printf("\nAccession No: %d\nTitle: %s\nAuthor: %s\nPublisher: %s\nCost: %.2f\n",
               books[i].accession_no, books[i].title, books[i].author, books[i].publisher, books[i].cost);
    }
}