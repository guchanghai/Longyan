//
//  main.c
//  CTutorial
//
//  Created by chgu on 1/23/17.
//  Copyright © 2017 chgu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//定义一个结构体，这是自定义数据类型，表示“学生”的数据
struct student {
    int nID; //学号
    short grade;
    //....
    short classNo;
};

//全局变量
struct student students[60];

void prepareStudentInfo()
{
    for(int i = 0; i < 60; i++)
    {
        students[i].nID = 1000+i;
        students[i].grade = random() % 10 + 1;
        students[i].classNo = random() % 2 + 1;
    }
}

//search
int findGradeForStudent( int idToFind )
{
    for(int i = 0; i < 60; i++)
    {
        // 得到当前学生的ID
        int currentStudentID = students[i].nID;
        
        // 判断是否是当前要找的学号
        
        // 如果是要找到的学号
        if( currentStudentID == idToFind )
        {
            printf("学好一样，找到了，可以返回了。停止查找!\n");
            // 返回当前学生的年纪
            return students[i].grade;
        }
        else
        {
            printf("学号不一样!\n");
        }
        
        printf("没找到，继续下一个!\n");
    }
    
    return -1;
}

/**
 * 从所有的学生中查找到第一个学生，其班级号为所要查找的班级号
 **/
int findFristStudent(int nGradeID)
{
    for (int i=0; i<60;i++)
    {
        //de dao dangqian banji de di yi ge xuesheng
        int currentStudentGradeID = students[i].grade;
        
        //pan duan shifou shi yao zhao de banji di yige xuesheng
        if (currentStudentGradeID == nGradeID)
        {
            printf("找到那个学生了\n");
            return students[i].nID;
        }
        else
        {
            printf("这个学生的班级号不是你要找的\n");
        }
        
        printf("没找到，接着找下一个！\n");
    }
    
    return -1;
}

//function
void printChead(){
    for (int i = 0; i < 8; i++) {
        if (i<2) {
            printf(" ");
        }
        else
            
            printf("#");
    }
    
    printf("\n");
}

//function
void printCsecond(){
    
    for (int i = 0; i < 10; i++) {
        if (i<2||i>7) {
            printf("#");
        }
        else {
            printf(" ");
        }
    }
    
    printf("\n");
}

void printHorLine( int length ){
    for (int i = 0; i < length; i++) {
        printf("#");
    }
}

//printf Cheight
void printHeight(int Clength){

     for (int i = 0; i < Clength; i++) {
    
         printf("#\n");
      }
}

// Print top F body
void printFheight(int Fheight){
     for (int i = 0; i < Fheight; i++) {
         printf("#\n");
     }
}


//print reverse
void printReverse(char charter){
    for (int i = 0; i < 3; i++) {
    }
}

//the perimeter and the rectangle
void perRec(int Nheight ,int Nwidth){
    int perimeter;
    int rectangle;
    
    perimeter = 2*(Nheight+Nwidth);
    rectangle =Nheight*Nwidth;

    printf("the perimeter is %d\n",perimeter);
    printf("the perimeter is %d\n",rectangle);
}

void revertCharacters( char a, char b, char c){
    printf("the %c%c%c reverse is %c%c%c\n",a, b, c, c, b, a);
}

int main(int argc, const char * argv[])
{
    //我们班有
    /*
    prepareStudentInfo();
    
    int rerultGrade = findGradeForStudent(1003);
    printf( "The grade is :%d\n", rerultGrade );
    
    int resultStudentID = findFristStudent(1);
    // insert code here...
    printf( "Find the student ID : %d\n", resultStudentID );
    */
    
    // Print the F head
    int nFHeadLength = 6;
    printHorLine( nFHeadLength );
    
    printf("\n");
    
    // Print top F body
    printFheight(2);
    
    // Print the F middle
    printHorLine( 5 );
    
    printf("\n");
    
    // Print the F foot
    printFheight(3);
    
    // Print C
    
    // call the function to print the c header
    printChead();
    
    // Print C seond head
    printCsecond();
    
    //body
    printHeight(5);
    
    //Print C seond
    printCsecond();
    
    //Printf head
    printChead();
    
    printf("\n");
    
    //number 4 print the following characters in a reverse
    
    
    char aChar = 'X';
    char bChar = 'Y';
    char cChar = 'L';
    
    revertCharacters(cChar, bChar, aChar);
    
    printf("\n");
    
    //number 5  the perimeter and the rectangle
    
    perRec(7,5);
    
    //number 7
    //convert specified days into years, weeks and days
    
    int Edays = 1329;
    int years;
    int weeks;
    int days;
    int daysInAYear = 365;
    
    years = Edays / daysInAYear;
    weeks = (Edays % daysInAYear)/7;
    days = (Edays % daysInAYear)%7;
    printf("Years:%d weeks:%d days:%d\n",years,weeks,days);
}
