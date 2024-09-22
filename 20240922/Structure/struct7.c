// 7. Union within structure.
#include<stdio.h>
enum type {batsman = 1, bowler = 2, wicketkeeper = 3};
struct player
{
    char name[20];
    enum type ptype;
    union
    {
        float batavg;
        int wickets;
        int stumping;
    }info;
};
int main()
{
    struct player p[11];
    accept(p);
    dispsummary(p);
    return 0;
}
void accept(struct player p[])
{
    int i;
    for(i = 0; i < 11; i++)
    {
        printf("Enter the Name: ");
        gets(p[i].name);
        printf("Enter the Player Type(1 - Batsman, 2 - Bowler, 3 - Wicketkeeper)");
        scanf("%d", &p[i].ptype);
        switch(p[i].ptype)
        {
            case 1:
                printf("Enter the Batting Average: ");
                scanf("%f", &p[i].info.batavg);
                break;
            case 2:
                printf("Enter the Wickets Taken: ");
                scanf("%f", &p[i].info.wickets);
                break;
            case 3:
                printf("Enter the Stumpings: ");
                scanf("%f", &p[i].info.stumping);
                break;
        }
    }
}
void dispsummary(struct player p[])
{
    int i;
    printf("\n All Batsman \n");
    for(i = 0; i < 11; i++)
    {
        if(p[i].ptype == 1)
        {
            printf("%s\t", p[i].name);
            printf("%f\n", p[i].info.batavg);
        }
    }
    printf("\n All Bowlers \n");
    for(i = 0; i < 11; i++)
    {
        if(p[i].ptype == 2)
        {
            printf("%s\t", p[i].name);
            printf("%f\n", p[i].info.wickets);
        }
    }
    printf("\n Wicketkeeper \n");
    for(i = 0; i < 11; i++)
    {
        if(p[i].ptype == 3)
        {
            printf("%s\t", p[i].name);
            printf("%f\n", p[i].info.stumping);
        }
    }
}