#include<stdio.h>

void main(){
    int i = 0xAA;
    int c = 3;

    int x;
    
//case 1: & use as a logical AND operator
    // x = i & c;
    // printf("x = %d\n",x);

//case 2 : & use as a address operator
    int *cptr = &c;
    // x = i & cptr; // error aapshe 
   
    // x = i & &cptr; // error aapshe
    // because first & is logical AND and i is int and &cptr is address of pointer to int, so it will give error

    //but if we  typecast the &cptr to int then it will work
    // x = i & (int)&cptr; // typecasting &cptr to int
    // printf("&cptr = %p\n",&cptr);
    // printf("x = %d\n",x);
    
//case 3 :the use of * with pointer
    i = 2;
    // x = i * cptr; // here * is used as a multiplication operator and cptr is a pointer to int, so it will give error

    c =3;
    x = i * (*cptr); // here * is used as a dereference operator and cptr is a pointer to int, so it will give the value of c which is 3
    printf("x = %d\n",x); //x =6;

    x = i **cptr; // x =6
    printf("x = %d\n",x);


}