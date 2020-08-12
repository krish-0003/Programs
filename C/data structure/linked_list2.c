#include<stdio.h>
#include<stdlib.h>

struct node
{
    int item;
    struct node *link;
};
struct node *START = NULL;
struct node *make_node()
{
    struct node *p = (struct node *)malloc(sizeof(struct node));;
    return p;
}
struct node inserte_node()
{
    int number;
    while(1)
    {
        struct node *test, *ptr;
        ptr = make_node();
        printf("Enter element {Press '0' to close} : ");
        scanf("%d",&number);
        if(number == 0){
            break;
        }
        if(ptr == NULL)
            printf("OVERFLOW .. \n");
        else
        {
            ptr->item = number;
            if(START==NULL)
            {
                START = ptr;
                ptr->link = NULL;
                printf("Element inserted ... \n");
            }
            else
            {
                test = START;
                while(test->link!=NULL)
                    test = test->link;
                test->link = ptr;
                ptr->link = NULL;
                printf("Element inserted .. \n");
            }
        }
    }
}
void view_node()
{
    struct node *ptr = START;
    if(START == NULL)
        printf("No data available\n");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->item);
            ptr = ptr->link;
        }
    }
}
void delete_node()
{
    if(START == NULL)
        printf("No data found\n");
    else
    {
        struct node *ptr;
        ptr = START;
        START = ptr->link;
        free(ptr);
        printf("First element deleted");
    }
}
int main()
{
    int choise;
    while(1)
    {
        printf("\n1. To insert value\n");
        printf("2. To view data\n");
        printf("3. To delete element\n");
        printf("4. To exit\n");
        printf("Enter your choise :: ");
        scanf("%d",&choise);
        switch (choise)
        {
        case 1:
            inserte_node();
            break;
        case 2:
            view_node();
            break;
        case 3:
            delete_node();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalide choise .. ");
            break;
        }
    }
}