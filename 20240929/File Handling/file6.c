// 6. C Program to store item information in a file (item name, Quantity and Price). Read this information and display the inventory.
#include<stdio.h>
#include<stdlib.h>
struct iteminfo
{
    char name[10];
    int qty;
    float price;
};
int main()
{
    FILE *f1;
    struct iteminfo item;
    int i, n;
    f1 = fopen("iteminfo.txt", "w");
    if(f1 == NULL)
    {
        printf("Error opening file");
        exit(0);
    }
    printf("\nHow many items: ");
    scanf("%d", &n);
    printf("\nEnter details as name, qty and price: \n");
    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        fscanf(stdin, "%s %d %f", item.name, &item.qty, &item.price);
        fprintf(f1, "%s %d %f\n", item.name, item.qty, item.price);
    }
    fclose(f1);
    fprintf(stdout ,"\n\n");
    f1 = fopen("iteminfo.txt", "r");
    fprintf(stdout, "Item Qty Price Amount : \n");
    while(!feof(f1))
    {
        fscanf(f1, "%s %d %f", item.name, &item.qty, &item.price);
        fprintf(stdout, "%-10s %6d %10.2f %11.2f\n", item.name, item.qty, item.price, item.qty * item.price);
    }
    fclose(f1);
    return 0;
}