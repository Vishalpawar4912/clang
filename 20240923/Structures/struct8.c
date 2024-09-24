// 8. Write a C program creating a structure, item with item no, item name, item qty, and price as fields. Accepts the details of n and display them.
#include <stdio.h>
struct Item 
{
    int item_no;
    char item_name[50];
    int item_qty;
    float price;
};
void inputItemDetails(struct Item items[], int n);
void displayItemDetails(struct Item items[], int n);
int main() 
{
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    struct Item items[n];
    inputItemDetails(items, n);
    displayItemDetails(items, n);
    return 0;
}
void inputItemDetails(struct Item items[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("\nEnter details for item %d\n", i + 1);
        printf("Enter Item Number: ");
        scanf("%d", &items[i].item_no);
        printf("Enter Item Name: ");
        scanf("%s", items[i].item_name);
        printf("Enter Item Quantity: ");
        scanf("%d", &items[i].item_qty);
        printf("Enter Item Price: ");
        scanf("%f", &items[i].price);
    }
}
void displayItemDetails(struct Item items[], int n) 
{
    printf("\nItem Details:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("Item No: %d\n", items[i].item_no);
        printf("Item Name: %s\n", items[i].item_name);
        printf("Item Quantity: %d\n", items[i].item_qty);
        printf("Item Price: %.2f\n", items[i].price);
    }
}