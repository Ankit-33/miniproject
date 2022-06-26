#include <stdio.h>
#include<stdlib.h>
int main()
{
   char name[50];
   int marks, i, num,a;

   printf("Enter number of students: ");
   scanf("%d", &num);

   FILE *fptr;
   fptr = (fopen("C:\\student.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }

   for(i = 0; i < num; ++i)
   {
      printf("For student%d\nEnter name: ", i+1);
      scanf("%s", name);

      printf("Enter marks out of 100: ");
      scanf("%d", &marks);
      
   

      fprintf(fptr,"Student %d:\nName: %s \nMarks :%d \n ", i+1, name, marks);
        
         if(marks>50 && marks<=100){
          fprintf(fptr,"RESULT:PASS\n\n");
      }  
      else if(marks>100 || marks<0){
          fprintf(fptr,"Invalid marks\n\n");
      }
      else{
      fprintf(fptr,"RESULT:FAIL\n\n");
          }
   }

   fclose(fptr);
   return 0;
}
