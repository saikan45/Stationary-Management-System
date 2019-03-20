#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

char date[20];
char uname[20];
char bname[20];
char mno[15];
int cost;
int n,i;


char dat[20];
char unam[20];
char bnam[20];
char mn[15];
int coos;

void write()
{
    FILE *fp;
    printf("enter data ::");
    scanf("%s",dat);


     printf("enter name ::");
    scanf("%s",unam);

     printf("enter bookname::");
    scanf("%s",bnam);
     printf("enter mob no ::");
    scanf("%s",mn);

     printf("enter cost ::");
    scanf("%d",&coos);

    fp=fopen("book.txt","a");
    fprintf(fp,"%s %s %s %s %d\n",dat,unam,mn,bnam,coos);
    printf("data written successfully\n");
    fclose(fp);
    getch();
}
void display(char da[])
{

    FILE *fp;
    int res;
    fp=fopen("book.txt","r");
    while(fscanf(fp,"%s %s %s %s %d\n",date,unam,mn,bnam,&coos)!=EOF)
    {
        res=strcmp(date,da);
        if(res==0)
        {
            printf("\n\n Customer name=%s",unam);
               printf("\n\n mobile number=%s",mn);
                  printf("\n\n book name=%s",unam);

                        printf("\n\n book cost=%d",coos);
        }
    }
     if (res==1)
     {
         printf("No record Found");
     }
            fclose(fp);
            getch();
        }


    void main()
    {
      char ch;
      char lm[20];
      //textcolour(4);
     // textbackground(10);

      do
      {
          printf("\t **** welcome to our shop\n");
          printf("Press<1> to create entry for the book \n");
          printf("Press <2> to display specific date\n");
          printf("\n\n Enter choice");
          scanf("%d",&ch);

          switch(ch)
          {
          case 1:
         {
         write();
        printf("data entered successfully");
        break;
              }
        case 2:
        printf("\n Enter data ::");
        scanf("%s",&lm);
        display(lm);
        break;
        }
//case 0:{
//exit(0);}

//default: printf("\n invalid selection");


//}
//}
}
while(ch!=0);
getch();

}




















