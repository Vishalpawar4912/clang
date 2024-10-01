// 8. Write a C program to accept item information (item no, item name, qty and price) for n items. Store this in file and display this in well defined format 
//    (use of structure and fwrite and fread functions are expected).
#include<stdio.h>
struct item
{
    int itemno;
    char itemname[20];
    int qty;
    int price;
};
int main()
{
    struct item data[10];
    FILE *fp;
    int i, n;
    printf("Enter Number of Records: ");
    scanf("%d", &n);
    fp = fopen("item.txt", "w");
    for(i = 0; i < n; i++)
    {
        printf("Enter Item Number: ");
        scanf("%d", &data[i].itemno);
        printf("Enter Item Name: ");
        scanf("%d", &data[i].itemname);
        printf("Enter Item Quantity: ");
        scanf("%d", &data[i].qty);
        printf("Enter Item Price: ");
        scanf("%d", &data[i].price);
    }
    fwrite(data, sizeof(struct item), n, fp);
    fclose(fp);
    fp = fopen("item.txt", "r");
    fread(data, sizeof(struct item), n, fp);
    printf("\n    ITEM DETAILS    \n");
    for(i = 0; i < n; i++)
    {
        printf("\nItem Nmber : %d", data[i].itemno);
        printf("\nItem Name : %s", data[i].itemname);
        printf("\nQuantity : %d", data[i].qty);
        printf("\nPrice : %d", data[i].price);
    }
    return 0;
}