////25.จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นปิระมิดที่มีความสูงเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง (Level 3)
#include<stdio.h>
int main()
{
    int row,j,totalRow,space,symbol;
    scanf("%d",&totalRow); 
    for(row = 1;row<=totalRow;row++)
    {
      for(space = 1;space <=(totalRow - row);space++)
      {
        printf(" ");
      }
      for(symbol = 1;symbol<=((2*row)-1);symbol++)
      {
        printf("*");
      }
      printf("\n\n");
    }
    
    return 0;
}