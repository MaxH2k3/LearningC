#include <stdio.h>
    
int examplePointer()
{   
    
    // ? -> address , value = ?, data-type = ?

    int num = 12; 
    int *ptr = &num;
    //ptr -> address = 0x1, value = 0x2, data-type = int*
    //num -> address = 0x2, value = 12, data-type = int

    int numCopy = *ptr;
    //ptr -> address = 0x1, value = 0x2, data-type = int*
    //numCopy -> address = 0x3, value = 12, data-type = int
    //num -> address = 0x2, value = 12, data-type = int

    num = 15;
    //ptr -> address = 0x1, value = 0x2, data-type = int*
    //num -> address = 0x2, value = 15, data-type = int
    //numCopy -> address = 0x3, value = 12, data-type = int

    *ptr = 10;
    //ptr -> address = 0x1, value = 0x2, data-type = int*
    //num -> address = 0x2, value = 10, data-type = int
    //numCopy -> address = 0x3, value = 12, data-type = int
    
    ptr = &numCopy;
    //ptr -> address = 0x1, value = 0x3, data-type = int*
    //num -> address = 0x2, value = 10, data-type = int
    //numCopy -> address = 0x3, value = 12, data-type = int

    num = *ptr;
    //ptr -> address = 0x1, value = 0x3, data-type = int*
    //num -> address = 0x2, value = 12, data-type = int
    //numCopy -> address = 0x3, value = 12, data-type = int
    
    int *ptrCopy = &num;
    //ptrCopy -> address = 0x4, value = 0x2, data-type = int*
    //num -> address = 0x2, value = 12, data-type = int
    //numCopy -> address = 0x3, value = 12, data-type = int
    
    int **ptr2 = &ptr;
    //ptr2 -> address = 0x5, value = 0x1, data-type = int**
    //ptr -> address = 0x1, value = 0x3, data-type = int*
    
    int *num2 = *ptr2;
    //ptr2 -> address = 0x5, value = 0x1, data-type = int**
    //num2 -> address = 0x6, value = 0x3, data-type = int*

    int num3 = **ptr2;
    //ptr2 -> address = 0x5, value = 0x1, data-type = int**
    //num3 -> address = 0x7, value = 12, data-type = int


}

int main()
{
    examplePointer();
    return 0;
}