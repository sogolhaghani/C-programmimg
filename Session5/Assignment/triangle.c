/*
برنامه ای بنویسید که 
1- با دریافت کدی از کاربر یکی از این 4 مثلث را در خروجی چاپ کند.
2- همچنین کاربر اندازه مثلث را نیز وارد کند.
3- کاربر تعیین کند که با چه کارکتری می خواهد مثلث چاپ شود.



نوع | مثلت
----------------------
*       |
**      |   A
***     |
****    |
----------------------
****    |
***     |
**      |   B
*       |
----------------------
****    |
 ***    |
  **    |   C
   *    |
---------------------
   *    |    
  **    |
 ***    |   D
****    |
--------------------
*/

#include <stdio.h>
#include <math.h>

void drawA(int size, char point);
void drawB(int size, char point);
void drawC(int size, char point);
void drawD(int size, char point);

void main()
{
   int size = 0;
   int code = 0;
   char point;

   printf("Please enter the symbol, code and size  of triangle to draw ( 1, 2, 3, 4)\n");
   scanf("%c%d%d", &point);

   scanf("%d%d", &code, &size);

   if (size <= 0)
   {
      printf("wrong size!!!\n");
      return;
   }
   switch (code)
   {
   case 1:
      drawA(size, point);
      break;
   case 2:
      drawB(size, point);
      break;
   case 3:
      drawC(size, point);
      break;
   case 4:
      drawD(size, point);
      break;
   default:
      printf("Wrong Code");
   }
}

void drawA(int size, char point)
{
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         printf("%c", point);
      }
      printf("\n");
   }
}

void drawB(int size, char point)
{
   for (int i = 0; i < size; i++)
   {
      for (int j = i; j < size; j++)
      {
         printf("%c", point);
      }
      printf("\n");
   }
}

void drawC(int size, char point)
{
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      {
         if (i > j)
         {
            printf(" ");
         }
         else
         {
            printf("%c", point);
         }
      }
      printf("\n");
   }
}

void drawD(int size, char point)
{
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      {
         if (i + j >= size)
         {
            printf("%c", point);
         }
         else
         {
            printf(" ");
         }
      }
      printf("\n");
   }
}
