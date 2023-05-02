#include<stdio.h>
#include<conio.h>
 
 struct student 
 {
        char name[120];
       int roll,math,datas,ca,sa,pdata,pwin;
        char college[100];
 };
 
 
int main()
{
           struct student s[5];
           
          float percentage;
           float total;
           int i;
           
           printf("**************Five student record containing help of c languiage*******\n");
           
           for(i=0; i<2; i++)
           {
              printf("Enter name of student\n");
              scanf("%s",&s[i].name);
              
              printf("Enter Roll number\n");
              scanf("%d",&s[i].roll);
              
              printf("Enter data stracture marks\n");
              scanf("%d",&s[i].datas);
              
              printf("Enter computer architracure marks \n");
              scanf("%d",&s[i].ca);
              
              printf("Enter system analysics marks \n");
              scanf("%d",&s[i].sa);
              
              printf("Enter math marks\n");
              scanf("%d",&s[i].math);
              
              printf("Enter data stracture pratical marks\n");
              scanf("%d",&s[i].pdata);
              
              printf("Enter windows pratical marks\n");
              scanf("%d",&s[i].pwin);
          
              
              printf("Enter college name\n");
              scanf("%s",&s[i].college);
              }
              printf("\n");
              
              printf("********FiVE STUDENT RECORD CONTAINING IS SUCSSSFULLY******");
              
              
              printf("record five stgudent \n");
              for(i=0; i<2; i++)
              {
                       printf("NAME:%s\n",s[i].name);
                       printf("ROLL:%d\n",s[i].roll);
                       printf("DATA-STRACTURE MARKS:%d\n",s[i].datas);
                       printf("COMPUTER_ARCHITRACTURE_MARKS:%d\n",s[i].ca);
                       printf("SYSTEM ANALYSIS- MARKS:%d\n",s[i].sa);
                       printf("MATH-MARKS:%d\n",s[i].math);
                       printf("PRATICl-DATASTRACTURE-MARKS:%d\n",s[i].pdata);
                       printf("PRATICAL-WINDOW-MRAKS:%d\n",s[i].pwin);
                       printf("COLLEGE-NAME:%s\n",s[i].college);
                       printf("\n\n\n");
                      
              }
              getch();
              return 0;
          }
           
