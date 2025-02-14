#include<stdio.h>
#define MAX 1000
int arr[MAX],num;
void create()
{   printf("Enter the size:");
    scanf("%d\n",&num);
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void insert()
{   int val,pos;
    printf("Enter the element to be inserted:");
    scanf("%d",&val);
    printf("Enter the position");
    scanf("%d",&pos);
    for(int i=num;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }num++;
    arr[pos-1]=val;
}
void delete_ele()
{   int pos1;
    printf("Enter the position");
    scanf("%d",&pos1);
    for(int i=pos1;i<num;i++)
    {
        arr[i-1]=arr[i];
    }num--;
}
void display()
{
    for(int i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }printf("\n");
}

int main()
{
  int n;
  while(n>0)
  {printf("1.CREATE\n");
  printf("2.INSERT\n");
  printf("3.DELETE\n");
  printf("4.DISPLAY\n");
  printf("Enter the choice:\n");
  scanf("%d",&n);

      switch(n)
      {
        case 1:
            create();
            break;
        case 2:
            insert();
            break;
        case 3:
            delete_ele();
            break;
        case 4:
            display();
            break;
        default:
            printf("INVALID CHOICE");
      }
  }
  return 0;
}

