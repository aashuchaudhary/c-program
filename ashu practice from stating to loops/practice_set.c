// code with harry

// area of rectangle

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter any number\n");
//     scanf("%d %d",&a,&b);
//     printf("The area of rectangle is %d",a*b);
// }

// Arra and volume of circle

// #include<stdio.h>
// int main(){
//     int r=4;
//     printf("The area of circle is %f",3.14*r*r);
//      int h=5;
//     printf("The volume of circle is %f",3.14*r*r*h);
// }

// celcius to faherinite

// #include<stdio.h>
// int main(){
//     int c=4;
//     float f=(c*(9.0/5.0))+32;
//     printf("The value of temperature in faherinite is %f\n",f);
// }

// simple intrest

// #include<stdio.h>
// int main(){
//     float P,T,R,SI;
//     printf("enter p,t and r value:\n");
//     scanf("%f%f%f",&P,&T,&R);

//     printf("\nSimple interst=%f", SI=P*T*R/100);}

// calculation....

// #include<stdio.h>
// int main(){
//     float a=3.0/9;
//     printf("the value is %f" ,a);
// }

// use order of prescedence

// #include<stdio.h>
// int main(){
//     // int a=9+3*5-5;
//     // int a=9/3*5-5;
//     int a=9/3*5/5;
//     printf("value of a is %d",a);
// }

// data types

// #include<stdio.h>
// int main(){
//     // there are four major type of data types in c
//     1.int -for storing integer
//     2.float-single precision point number
//     3.char-storing characters(enclosed in') "A" is invalid 'A'is valid
//     4.double- double precision floating point number
// }

// practice set ques

// #include<stdio.h>
// int main(){
//     float a=3.0/8-2;
//     printf("value of a is %f",a);
// }

// #include<stdio.h>
// int main(){
//   int a=194;
//   printf("%d",a);
// }

// program to take input from user

// #include<stdio.h>
// int main(){
//     int x=2,y=3,z=3,k=1;
//     int result=3*x/y-z+k;
//     // 6/3-3+1
//     // 2-3+1
//     // -1+1=0
//     printf("value of result is %d",result);
// }

// conditional statement

// if else
//  #include<stdio.h>
//  int main(){
//    int  a=32;
//    if(a>4)
//    {
//      printf("a is greater that 4");
//    }
//    else{
//      printf("a is not greater that 4");
//    }
//  }

// else if

// #include<stdio.h>
// int main(){
//     int age=17;
//     int palcecode=11;
//     if (age>=18){
//         printf("you are elligible to drive");
//     }
//     else if(age>15&& age<18){
//         printf("you are not elligible");
//     }
//     else{
//         printf("you are not valid");
//     }
// }

// logical operator

// #include<stdio.h>
// int main(){
//     int a=9;
//     int b=1;
//     if(a>4&&b<2){
//         printf("yes");
//     }
// }

// conditional operator

// #include<stdio.h>
// int main(){
//     int c=6;
//     int b=8;
//     int a= (c==b)?3:7;
//     printf("the value of a is %d",a);

// }

// switch case

// #include<stdio.h>
// int main(){
//     int age=76;
//     switch(age){
//         case 24:printf("you are 24"); break;
//         case 25:printf("you are 25"); break;
//         case 26:printf("you are 26"); break;
//         case 27:printf("you are 27"); break;
//         case 28:printf("you are 28"); break;
//         default:printf("no caase matched"); break;
//     }
// }

// practice set

// #include<stdio.h>
// int main(){
//     int a=10;
//     if(a=11){
//         printf("a is 11");
//     }
//     else{
//         printf("a is 10");
//     }
// }

// print marks input from user

// #include<stdio.h>
// int main(){
//     int m1,m2,m3;
//     printf("enter m1\n");
//     scanf("%d",&m1);

//     printf("enter m2\n");
//     scanf("%d",&m2);
//     printf("enter m3\n");
//     scanf("%d",&m3);
//      float total=(m1+m2+m3)/3;
//      if(total>=40){
//        if(m1<33||m2<33||m3<33){
//         printf("sorry you are  not passed becoz your marks in one sub is less than 40");
//        }
//        else{
//         printf("comgrutulations you are passed ");
//        }
//      }
//      else{
//         printf("not pass");
//      }
// }

// calculate tax paid (imp)

// #include<stdio.h>
// int main(){
//     int income;
//     float tax=0;
//     printf("enter your income \n");
//     scanf("%d",&income);
//     if(income<250000){
//         printf("your income is less  than 2.5 lakhs so no tax for you\n");
//     }
//     else if(income<500000 && income>250000){
//         printf("your income is between 2.5 lakh and 5 lakh\n");
//         tax=tax +0.05*(income-250000);

//     }
//     else if(income<1000000 && income>500000){
//         printf("your income is between 5 lakh and 10 lakh\n");
//         tax=tax +0.05*(income-250000);
//         tax=tax +0.2*(500000-250000);
//     }
//     else{
//         printf("your income is above 18 lakhs\n");
//         tax=tax +0.05*(500000-250000);
//         tax=tax +0.2*(1000000-500000);
//         tax=tax +0.3*(income-1000000);
//     }
//     printf("total tax is paid is %f\n",tax);
//     }

// leap year

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter a year you want to print:\n");
//     scanf("%d", & year);
//     if(year%4!=0){
//         printf("it is common year");
//     }
//     else if(year%100!=0)
//     {
//         printf("it is not a leap year");
//     }
//     else if(year%400!=0){
//         printf("it is a common year");
//     }
//     else{
//     printf("it is a leap year");
// }
// }

// lower case

// #include<stdio.h>
// int main(){
//     char ch;
//     printf(" enter your character:\n");
//     scanf("%c",&ch);
//     if (ch>='a' && ch<='z'){
//     printf("value is lower case");
//     }
//     else{
//         printf("not lower case");
//     }

// }

// greatest of 4 number

// #include<stdio.h>
// int main(){
//     int x,y,z,a;
//     printf("enter four numbers:\n");
//     scanf("%d %d %d %d",&x,&y,&z,&a);
//     if(x>y && x>z && x>a){
//         printf("x is greater");}
//     else if(y>x && y>z && y>a){
//         printf("y is greater");}
//     else if(z>x && z>y && z>a){
//         printf("z is greater");}
//     else if(a>y && a>z && a>x){
//         printf("a is greater");
//     }
// }

// chapter 4--loop

// while loop-check the condition and then execute

//   #include<stdio.h>
// int main(){
//     int i=0;  //initialize
//     while(i<34){   //condition
//         printf("the value of i is :%d\n",i);
//         i++; // updation
//         // i+=1;
//     }
// }

// use of if in while loop

//  #include<stdio.h>
// int main(){
//     int i=10;  //initialize
//     while(i<21){   //condition
//     if(i>=10){
//         printf("the value of i is :%d\n",i);
//         i++; // updation
//         // i+=1;
//     }
// }}

// increment and  decrement
//   #include<stdio.h>
//  int main(){
//      int i=9;
//      printf("%d\n",++i); // same as i++,i--,--i
//  }

// do while- execute the code and then check condition

//  #include<stdio.h>
// int main(){
//     int i=7; //initializes
//     do{
//         printf("the value of i is %d",i);
//     }
//     while(i<5); //condition
// }

//  #include<stdio.h>
// int main(){
//     int i=1; //initializes
//     do{
//         printf("the value of i is %d\n",i);
//         i++; //updation
//     }
//     while(i<5); //condition
// }

// for loop-

// print natural number by taking input from user

//  #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number:\n");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++) //for(initialise;condition;updation)
//     {
//         printf(" %d\n",i);
//     }
// }

// decrementing for loop
//   #include<stdio.h>
//  int main(){
//      for(int i =5;i;i--){
//          printf("the value of i is :%d\n",i);
//      }
//  }

// print reverse natural number using for loop

// #include <stdio.h>
// int main()
// {
//     int n=0;
//     printf("enter number:\n");
//     scanf("%d", &n);
//     for (int i =n; i>=0; i--) // for(initialise;condition;updation)
//     {
//         printf(" %d\n", i);
//     }
// }

// use of break statement

// #include<stdio.h>
// int main(){
//     int i=0;
//     while(i<=8){
//         if(i==5){
//             break;
//         }
//         printf("the value of i is %d\n",i);
//         i++;
//     }
//     printf("we are outside the loop");
// }

// use of continue statement
// #include<stdio.h>
// int main(){
//     for(int i=0;i<=7;i++){
//         if(i==3){
//             continue;
//         }
//         printf("The value of i is %d\n",i);
//     }
// }

// practice set
// table of any number

// #include<stdio.h>
// int main(){
//     // int n=3;
//     int n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);
//     for(int i=1;i<11;i++){
//         printf("%dX%d =%d\n",n,i,n*i);
//     }
// }

// table of 10 in reverse order

// #include<stdio.h>
// int main(){
//     // int n=10;
//     int n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);
//     for(int i=10;i>0;i--){
//         printf("%dX%d =%d\n",n,i,n*i);
//     }
// }
// same table with while loop

// #include<stdio.h>
// int main(){
//     // int n=10;
//     int n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);
//    int i=1;
//    while(i<=10){
//     printf("%dx%d=%d\n",i,n,n*i);
//     i++;
//    }
//     }

// sum of first 10 natural no using while loop

// #include<stdio.h>
// int main(){
//     int i=1;
//     int sum=0;
//     while(i<=10){
//         sum+=i;
//         i++;
//     }
//         printf("the value of first 10 natural  is %d",sum);

// }

// using for loop

// #include<stdio.h>
// int main(){
//     int sum=0;
//     for(int i=1;i<=10;i++){
//         sum+=i;
//     }

//         printf("the value of first 10 natural  is %d",sum);

// }

// form do while

// #include<stdio.h>
// int main(){
//     int sum=0;
//         int i=1; //initialize
//     do{
//         sum+=i;
//         printf("the value of first 10 natural  is %d\n",sum);
//         i++; //updation
//     }
//     while(i<=10);// condition
// }

// program to calculate the sum of the numbers occurs in the multiplication of table8 (consider 8*1 to 8*10)

// #include<stdio.h>
// int main(){
//      int sum=0;
//     for(int i=0;i<11;i++){
//         sum+=(i*8);
//     }
//     printf("the value of sum is %d " ,sum);
// }

// program to calculate factorial(imp ques)

// #include<stdio.h>
// int main(){
//     int n, fact=1;
//     printf("enter number n :\n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact*=i;
//     }
//         printf(" the value of fact is %d\n", fact);
// }

// using while loop

// #include<stdio.h>
// int main(){
//     int n, fact=1;
//     printf("enter number n :\n");
//     scanf("%d",&n);
//     int i=1;
//     while(i<=n)
//     {
//         fact*=i;
//         i++;
//     }
//         printf(" the value of fact is %d\n", fact);
// }

// check whether a given number is prime or not

// #include<stdio.h>
// int main(){
//     int n=10,isprime=1;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             isprime= 0;
//             break;
//         }
//     }
//     if(isprime){
//         printf("the number is prime\n");
//     }
//     else{
//         printf("the number is not prime");
//     }
// }

// using while loop

// #include<stdio.h>
// int main(){
//     int n=11,isprime=1;
//     int i=2;
//     while(i<n) {
//         if(n%i==0){
//             isprime= 0;
//             break;
//         }
//             i++;
//     }
//     if(isprime){
//         printf("the number is prime\n");
//     }
//     else{
//         printf("the number is not prime");
//     }
// }

// chapter 5--functions and recursion

// function

// #include<stdio.h>
// void display(); // function prototype
// // void average(int,float,int);
// int main(){  // main function
//     int a;
//     display(); //function call
// }
// void display(){ //function definition - body of function
//     printf("hello Appu1\n");
//     printf("hello Appu2\n");
//     printf("hello Appu4\n");
//     printf("hello Appu3\n");
//     printf("hello Appu5\n");
// }

// #include<stdio.h>
// void goodmorning();
// void goodafternoon();
// void goodnight();
// int main(){
//     goodmorning();
//     goodafternoon();
//     goodnight();
// }
// void goodmorning(){
//     printf("good morning Appu\n");
// }
// void goodafternoon(){
//     printf("good afternoon appu\n");
// }
// void goodnight(){
//     printf("GOOD NINGHT APPU\n");
// }

// passing  values in function (sum)

// #include<stdio.h>
// int sum(int ,int );
// int main(){
//     // int a=5;
//     // int b=7;
//     printf("The value pf 5+7 is: %d\n",sum(5,7));
//     // printf("The value pf 5+7 is: %d\n",sum(a,b));
// }
// int sum(int a,int b){
//     return a+b;
// }

// #include<stdio.h>
// int sum(int ,int ,int);
// int main(){
//     // int a=5;
//     // int b=7;
//     //int c=88;
//     printf("The value of 5+7 is: %d\n",sum(5,7,88));
//     // printf("The value pf 5+7 is: %d\n",sum(a,b));
//     printf("the value of c is %d",88);
// }
// int sum(int a,int b,int c){
//     c=9;
//     return a+b+c;
// }

// area of square

// #include<stdio.h>
// #include<math.h>
// int main(){
//     double a=2.2;
// printf("the area of square is %lf",pow(a,2));
// }

// recursion-a funtion in c can call itself called recursion,it is alternative of loop
// eg-factorial

// find factorial using recursion
//  #include<stdio.h>
//  int fact(int);
//  int main(){
//      printf("the value of factorial is %d",fact(5));
//  }
//  int fact(int n){
//      if(n==1|| n==0){
//          return 1;
//      }
//      return n* fact(n-1);
//  }

// dry run of factorial 4
// fact(4)
// 4*fact(3)
// 4*3*fact(2)
// 4*3*2*fact(1)
// 24

// how does it work
//        fact (5)
//    5     *      fact(4)
//    5     *     4 *   fact(3)
//    5     *     4 *   3 * fact(2)
//    5     *     4 *   3 *  2  * fact(1)
//    5     *     4 *   3 *   2  *  1

// practice set
// avg of 3 numbers

// #include<stdio.h>
// double average(int ,int ,int);
// int main(){
//     printf("The average of 1,4 ,3  is: %lf\n",average(1,4,3));
//     return 0;
// }
// double average(int a, int b , int c) {
//     return (a+b+c)/3.0;
// }

// convert celsius into faherinite
//  #include<stdio.h>
//  float c2f(float); //function prototype
//  int main(){ // function call
//          float c=37 ;
//          float f=c2f(c);
//      printf("the value of %f degree celcius in faherinite %f",c,f);
//  }
//  float c2f(float c){
//          float f= (c*9/5.0)+32; //function definition
//          return f;
//  }

// calculate the force exerted by body of mass m exerted by earth

// f=m*a;

// (doubt)

// #include <stdio.h>
// float m2g( int,float);
// int main()
// {
//         int m = 2;
//         float g=9.8;
//         printf("the value of mass m is :%d\n and the value of force exerted by gravity is :%f\n", m,g);
// }
// float m2g(int m,float g)
// {
//         float f = m* g;
//         return f;
// }
// fabonacii number  using recursion

// #include<stdio.h>
// int fib(int);
// int main(){
//         int n=8;
// printf("the nth elemnt %d of fabonacci series is:%d",n, fib(n));
// }
// int fib(int n){
//         if(n==1 ||n==2){
//                 return 1;
//         }
//         return fib(n-1)+fib(n-2);
// }

//
// #include<stdio.h>
// int main(){
//         int a=4;
//         printf("%d %d %d \n ",a++,a,a++);
// }

// sum of first natural number
//  #include<stdio.h>
//  // sum(n)=1+2+3+4........(n-1)+n
//  //sum(n)= sum(n-1)+n
//  int sum(int);
//  int main(){
//          printf("sum of first 5 natural number is :%d\n",sum(5));
//  }
//  int sum(int n){
//          if(n==1){  //base condition -it is very imp
//                  return 1;
//          }
//          return sum(n-1)+n;
//  }

// printing star

// #include<stdio.h>
// void star(int);
// int main(){
//         star(4);

// }
// void star(int n){
//         for(int i=0;i<n;i++){
//                 //print 2i+1 stars
//                 for(int j=0;j<(2*i+1);j++){
//                         printf("*");
//                 }
//                 printf("\n");
//         }
// }

// guessing game
//  lec time 5 hr 30 min samajh nhi aya hai or isko ek bar phir se karna hai.
//  #include<stdio.h>
//  #include<stdlib.h>
//  #include<time.h>
//  int main(){
//          int number,guess,nguess=1;
//          srand(time(0));
//          // srand(1);
//          number = rand()%100+1;
//          do{
//                  printf("guess the number between 1 to 100 \n");
//                  scanf("%d,&guess");
//                  if(guess>number){
//                          printf("lower number please\n");
//                  }
//                  else if(guess<number){
//                          printf("greater number please\n");
//                  }
//                  else{
//                          printf("yayy yoy got it!\n you took %d attempts",nguess);
//                  }
//                          nguess++;
//          }while (guess!=number);
//  }

// chapter 6- pointer

// pointers-it is variable which stores the adress of another variable

// %u is format specifier of pointers

// #include<stdio.h>
// int main(){
//         int i=72;
//         int j=97;
//         printf("the address of i and j  and %u is %u \n",&i,&j);
//         printf("the  value of i and j  and %u is %u ",*(&i),*(&j));
// }

// creating pointers

// #include<stdio.h>
// int main(){
//      int i=72;// int*j -decalare a variable j of type int pointer
//      int *j=&i;  //stores address of i in j
//      printf("the address of i is %u\n",&i);
//      printf("the value of i is %u\n",j);
//      printf("the value of i is %u\n",*j);
//      printf("the value of i is %u\n",i );
// }

// demonstrate pointer

// #include<stdio.h>
// int main(){
//         int i=8;
//         int *j;
//         j=&i;
//         printf("address of i =%u \n",&i);
//         printf("address of i =%u \n",j);
//         printf("address of j =%u \n",&j);
//         printf("value of i =%d \n",i);
//         printf("value of i =%d \n",*(&i));
//         printf("value of i =%d \n",*j); }

// pointer to pointer- just like j is a pointer to i storing the address of i, we can have another variable k which can further store the address of j.
// #include<stdio.h>
// int main(){
//         int i=8;
//         int *j;
//         j=&i;
//         int **k;
//         k=*j;
// }

// types of function-ways  on the way to pass argunment to the functiion ,function are of two types.

//(a).call by value-sending the values of argunment
//(b).call by reference-sending the address of argunment

// call by value

// #include<stdio.h>
// int sum(int,int);
// int main(){
//         int x=4;
//         int y=8;
//       printf("the value of x+y is:%d\n",sum(x,y));
//       printf("the value of x and y is %d and %d",x,y);

// //       printf("the value of a+b is:%d",sum(3,6));
// }
// int sum(int a ,int b){
//         a=56;
//         return a + b;
// }

// call by reference

// #include<stdio.h>
// int sum (int*,int*);
// int main(){
//         int x=4;
//         int y=8;
//       printf("the value of x+y is:%d\n",sum(&x,&y));
//       printf("the value of x and y is %d and %d",x,y);

// //       printf("the value of a+b is:%d",sum(3,6));
// }
// int sum(int *a ,int *b){
//         *a=56;
//         return *a + *b;
// }

// swapping using call by reference
//  #include<stdio.h>
//  void swap(int*, int*);
//  int main(){
//          int a=5;
//          int b=7;
//         printf("value of a and b before swap:%d and %d\n",a,b);
//         swap(&a,&b);
//         printf("value of a and b after swap:%d and %d\n",a,b);
//  }
//  void swap(int * aptr, int *bptr){
//  //        printf("value of a and b before swap:%d and %d\n",a,b);
//          int temp =*aptr;   //a=5, temp=5, b=7
//          *aptr=*bptr;  //a=7, temp=5, b=7
//          *bptr=temp; //a=7, temp=5, b=7
//  //        printf("value of a and b after swap:%d and %d\n",a,b);
//  }

// practice set
// program to print address of a variable use this address to get the value of this variable

// #include<stdio.h>
// int main(){
//        int i =3;
//        printf("The address of i is %u\n",&i);
//        printf(" the value of i is %d",*(&i));
// }

// program having a variable i, print the address of i pass the variable to a function and print it address,are these address are same ?why?
// yes it will be same

// #include<stdio.h>
// void fun(int *);
// int main(){
//        int i=3;
//         fun(&i);
//        printf("the address of is %u\n",&i);
//        printf("the value of i is %d\n",*(&i));
// }
// void fun(int *ptr){
// printf("the value of address ptr frrom function is %u \n",ptr);
// }

// program to change the value of a variable to ((ten times)) of its current  value .write a function and pass the value by reference .

// #include<stdio.h>
// void change(int *);
// int main(){
//        int i=3;
//        printf("the address of i before change is %d\n",i);
//        change(&i);
//        printf("the value of i after change is %d\n",i);
// }
// void change(int *ptr){
//         *ptr=(*ptr) * 10;
// }

// calculate the sum and avg of two numbers. use pointer and print the values of sum and avg in main()---imp

// #include<stdio.h>
// void avgandsum(float,float,float *,float *);
// int main(){
//       float a=6;
//       float b=423;
//       float sum,avg;
//       avgandsum(a,b,&sum,&avg);
//       printf("The value of sum is %f and value of average is %f",sum,avg);
// }
// void avgandsum(float a,float b,float *ptr1,float *ptr2){
//          *ptr1=a+b;
//          *ptr2=(a+b)/2.0;
// }

// pointer to pointer

// #include<stdio.h>
// int main(){
//        int i=3;
//        int *ptr1 =&i;
//        int **ptr2 =&ptr1;
//        printf("the value of i is %d \n",i);
//        printf("the value of i is %d \n",*ptr1);
//        printf("the value of i is %d \n",**ptr2);
// }

// ques 3. using call by value

// #include<stdio.h>
// void change(int );
// int main(){
//        int i=3;
//        printf("the value of i before change is %d\n",i);
//        change(i);
//        printf("the value of i  after change is %d\n",i);
// }
// void change(int i){
//         i=i* 10;
// }

// chapter 7
// Arrays- colection of similar elements

// one variable -capable of storing multiple values

// #include<stdio.h>
// int main(){
//         //store marks of 8 students
//        int a1,a2,a3,a4,a5,a6,a7,a8;
//        a1=45;
//        a2=27;
//        a3=37;
//        a4=87;
//        a5=77;
//        a6=73;
//        a7=72;
//        a8=21;

//        //better way:store marks of 8 students
//        int a[8];
//        a[0]=45;
//        a[1]=27;
//        a[2]=37;
//        a[3]=87;
//        a[4]=77;
//        a[5]=73;
//        a[6]=72;
//        a[7]=21;
//        printf("the value of student number 0 is %d\n",a[0]);
//        printf("the value of student number 0 is %d",a[1]);
//        printf("the value of student number 0 is %d\n",a[2]);
//        printf("the value of student number 0 is %d\n",a[3]);
//        printf("the value of student number 0 is %d\n",a[4]);
//        printf("the value of student number 0 is %d\n",a[5]);
//        printf("the value of student number 0 is %d\n",a[6]);
//        printf("the value of student number 0 is %d\n",a[7]);
// }

// note :it is imp to note that array index starts with zero

// acessing element:elemts of an aray can be accesing using
// scanf("%d",&marks[0]);
// prinf("%d",marks[0]);

// program to accept the marks of 5 student in an array and print

// old method

// #include<stdio.h>
// int main(){
//        int m1,m2,m3,m4,m5;
//        printf("enter the marks of student 1\n");
//        scanf("%d",&m1);
//        printf("enter the marks of student 1\n");
//        scanf("%d",&m2);
//        printf("enter the marks of student 1\n");
//        scanf("%d",&m3);
//        printf("enter the marks of student 1\n");
//        scanf("%d",&m4);
//        printf("enter the marks of student 1\n");
//        scanf("%d",&m5);

//        printf("the  marks obtained by student 1 is %d \n",m1);
//        printf("the  marks obtained by student 2 is %d \n",m2);
//        printf("the  marks obtained by student 3 is %d \n",m3);
//        printf("the  marks obtained by student 4 is %d \n",m4);
//        printf("the  marks obtained by student 5 is %d \n",m5);

// }

// new method using array(use alwAYS NEw method)

// #include<stdio.h>
// int main(){
//        int marks[5];
//        for(int i=0;i<5;i++){
//         printf("Enter the marks of student  is %d \n",i);
//         scanf("%d",&marks[i]);
//        }
//        for(int i=0;i<5;i++){
//         printf("The marks stored by student %d is %d \n",i,marks[i]);
//        }
// }

// initialization of array

// #include<stdio.h>
// int main(){
//    int marks[3]={34,2,12};
//    for (int i=0;i<3;i++){
//     printf("The score scored by the student %d is %d \n",i+1,marks[i]);
//    }
// }

// #include<stdio.h>
// int main(){
//    float marks[3]={34.4,2.98,12.67};
//    for (int i=0;i<3;i++){
//     printf("The score scored by the student %d is %f \n",i+1,marks[i]);
//    }
// }

// pointer arithematic

// #include<stdio.h>
// int main(){
//        int marks[3]={1,2,4};
//     //    &marks[0]=>marks ------------>[important]
//     // int* ptr =&marks;
//     int* ptr= marks;
//     *ptr =89;
//     ptr++;  //NEXT ELEMENT/value
//     *ptr =69;
//     ptr++;
//     *ptr =32;
//     ptr++;
//     printf("the marks scored by student 0 is %d \n",marks[0]);
//     printf("the marks scored by student 1 is %d \n",marks[1]);
//     printf("the marks scored by student 2 is %d \n",marks[2]);
// }

// using operation performrd by pointers
// 1.addition of a number to pointer
// 2.substraction of a number from pointer
// 3. substraction of one pointer from another
// comparision of two pointer variables

// by using all above operation

//
/*#include<stdio.h>
int main(){
       int i=5;
       int* ptr= &i;
       printf("the value of i is %d\n",i);
       printf("the value of ptr is %u\n",ptr);
       printf("the address of i is %d\n",&i);
    //    ptr++;

    //    ptr = ptr+2;    //addition //ptr is greater
       ptr = ptr-2;     //substraction//ptr is not greater
       printf("the value of ptr after ptr is incremented of i is %u\n",ptr);
       if(ptr>&i){
        printf("ptr is greater");
       }
       else{
        printf("ptr is not greater");
       }
    //    printf("the value of ptr after ptr is incremented of i is %d\n",ptr -&i);
    //    printf("the address of i after ptr is incremented  is %u\n",&i);
}*/

// passing array to function
//  arrays can be passed too a function like this--->

// printarray(arr,n); //function call

// void printarray(int*,int n);//function prototype
// or,
// void printarray(inti[],int n);

// pasing function to array

// #include<stdio.h>
// void fun(int*);
// int main(){
//         int marks[3] ={1,2,4};
//         fun(marks);
//     for(int i=0;i<3;i++){
//               printf("THe value of marks[%d] is %d \n ",i,marks[i]);
//     }

// }
// void fun(int *ptr){
//     for(int i=0;i<3;i++){
//         *ptr =56;
//          ptr++;
//         // printf("THe value of marks[%d] is %d \n ",i,*(ptr++));
//     }
// }

// display function to print the content of the 2d array on the screem

// #include <stdio.h>
// int main()
// {
// int marks[2][4]
// marks[0][0]=98;
// marks[0][1]=98;
// marks[0][2]=99;
// marks[0][3]=88;

// marks[1][0]=58;
// marks[1][1]=38;
// marks[1][2]=48;
// marks[1][3]=68;
//  or.
//     int marks[2][4]={
//     {98,98,99,88} ,
//     {58,38,48,68} };

//     for (int i = 0; i < 2; i++) // for rows
//     {
//         for (int j = 0; j < 4; j++) // for column
//         {
//             printf("%d ", marks[i][j]);
//         }
//         printf("\n");
//     }
// }

// Practice set

// create an array of 10 numbers verify using pointer arithematic that (ptr+2) points to the third element when ptr is a pointer pointing to the first elememt of the array.

// #include<stdio.h>
// int main(){
//        int arr[10];
//        arr[0]=7;
//        arr[1]=5;
//        arr[2]=8;
//        int *ptr= arr;  //int *ptr =&arr[0];
//        printf("the value at ptr is %d \n",*ptr);
//        ptr =ptr+2;
//        printf("the value at ptr is %d \n",*ptr);
// }

// is s[3] is a 1-d array of integers then *(s+3) refers to the third element

// a.true
// b. false
// c.depend

// ans.it is false  because it stores 4th element brcause s+3 represent 4th elemnt  s+0 represent  1st element

// WAP to create a array of 10 integers and store multiplication tablr of 5 in it.

// #include<stdio.h>
// int main(){
//        int arr[10];
//       for (int i = 0; i < 10; i++)
//       {
//         arr[i]=5*(i+1);
//         printf("the value pf 5 x %d is %d \n",(i+1),arr[i]);
//       }
// }

// take same above ques for a gemneral input provided by the user using scsnf

// #include<stdio.h>
// int main(){
//        int arr[10];
//     //    int n=6;
//     int n;
//     printf("enter the value of n:\n");
//     scanf("%d",&n);
//       for (int i = 0; i < 10; i++)
//       {
//         arr[i]=n*(i+1);
//         printf("the value pf %d x %d is %d \n",n,(i+1),arr[i]);
//       }
// }

// program containing a function which reverse the array passed to it.

// #include<stdio.h>
// int reverse(int a[],int n){
// // swap 0 with n-1
// // swap 1 with n-2
// // swap 2 with n-3
// // .
// // .
// // .
// // swap i with n-i-1
// //
// // till n/2 -1 starting from 0

// int temp ;
// for (int i = 0; i <n/2; i++)
// {
// // swap i with n-i-1
//    temp=a[i];
//    a[i]=a[n-i-1];
//    a[n-i-1]=temp;
// }

// }
// void display(int *ptr,int n){
//     for( int i=0;i<n;i++){
//         printf("%d ",*ptr);
//         ptr++;
//     }
//     printf("\n");
// }

// int main(){
//     // int arr[]={1,2,3,4,5,6,7,8,9,10};  //for even
//     int arr[]={1,2,3,4,5,6,7,8,9,9};  //for odd

//     // display(arr,10); //for even
//     // reverse(arr,10);
//     // display(arr,10);

//     display(arr,9);
//     reverse(arr,9);
//     display(arr,9);
// }

//  program containing function which counts the number of positive integers is an arry

// #include <stdio.h>

// int count_positive_integers(int arr[], int size) {
//     int count = 0;

//     for (int i = 0; i < size; i++) {
//         if (arr[i] > 0) {
//             count++;
//         }
//     }

//  return count;
// }

// int main() {
//     int arr[] = {1, -2, 3, 0, 4, -5, 6};
//     int size = sizeof(arr) / sizeof(arr);

//     int result = count_positive_integers(arr,size);

//     printf("Number of positive integers in the array: %d\n", result);

//     return 0;
// }

// // explaination:

// // The 'count_positive_integers' function takes an integer array 'arr' and its size 'size' as input arguments.

// // Inside the function, we initialize a variable 'count' to 0.

// // We then loop through the elements of the array using a 'for' loop and check if each element is greater than 0. If it is, we increment the 'count' variable.

// // Finally, the function returns the count of positive integers.

// // In the 'main' function, we define an example array 'arr', calculate its size, call the 'count_positive_integers' function, and print the result to the console.

// // When you run this program, it will count the number of positive integers in the arr' and display the result.

// // creating an array of size 3x10 containing multiplication tablles of the number 2,7 and 9 respectively

// #include<stdio.h>

// int main(){
//     int mulTable[3][10];
//     int num[] = {2, 7, 9};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             mulTable[i][j] = num[i] * (j+1);
//             // printf("%u ", &mulTable[i][j]);
//         }
//     }

//         for (int i = 0; i < 3; i++) // For rows
//     {
//         for (int j = 0; j < 10; j++) // For Columns
//         {
//             printf("%d ", mulTable[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// repete problem for a custom input given by tht user

// note: something need to search ache se smjh nhi aya hai phr se dekhna haior smjhna hai

// #include<stdio.h>

// int main(){
//     int num=3;
//     int table_size=10;
//    //declare array to store the table
// int mulTable[num][table_size];
// //input the number to table
//     for (int i = 0; i < num; i++)
//     {
//         printf("Enter a number for the multiplication table %d:",i+1);
//         scanf("%d", &num[i]);
//     }

// //populate arrays with multiplication table value
//     for (int i = 0; i < num; i++)
//     {
//         for (int j = 0; j < table_size; j++)
//         {
//             mulTable[i][j] = num[i] * (j+1);

//         }
//     }
// //display the multiolaication tables
//         for (int i = 0; i < num; i++) // For rows
//     {
//         printf("multiblication table for %d:\n",num[i]);
//         for (int j = 0; j < table_size; j++) // For Columns
//         {
//             printf("%d x %d =%d \n ", num[i],j+1,mulTable[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// create a 3-D array and orint the address of its element in increasing order.

// #include<stdio.h>

// int main(){
//     int mulTable[3][10];
//     int num[] = {2, 7, 9};

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             mulTable[i][j] = num[i] * (j+1);
//             printf("%u\n ", &mulTable[i][j]);  // for address of element in inreasing order
//         }
//     }

//         for (int i = 0; i < 3; i++) // For rows
//     {
//         for (int j = 0; j < 10; j++) // For Columns
//         {
//             printf("%d ", mulTable[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// game 2:smake water gun

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int SnakeWaterGun(char you, char comp)
// {
//     if (you == comp)
//     {
//         return 0;
//     }
//     else if ((you == 's' && comp == 'w') || (you == 'w' && comp == 'g') || (you == 'g' && comp == 's'))
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }
// int main()
// {
//     char you, comp;
//     srand(time(0));
//     int number = rand() % 100 + 1;
//     if (number < 33)
//     {
//         comp = 's';
//     }
//     else if (number < 66)
//     {
//         comp = 'w';
//     }
//     else
//     {
//         comp = 'g';
//     }
//     printf("wnter 's' for snake,'w' for water,'g' for gun \n");
//     scanf("%c", &you);
//     int result = SnakeWaterGun(you, comp);
//     if (result == 0)
//     {
//         printf("game drawn\n");
//     }
//     else if (result == 1)
//     {
//         printf("you win\n");
//     }
//     else
//     {
//         printf("you lose\n");
//     }
//     printf("you chose %c and the computer chose %c\n", you, comp);
// }

// chapter 8 : strings

// strings: a sytring is a 1-D character array terminated by a null('\0')

// ('\0'): it s a null character

// null character is used to denote string termination character are stored in a contigious memory location

// Initialisation of string:since string is an array of character it can be initialise as follows

// char s[]={'A','p','p','u','\0'}; or,
// another way to write a string:

// char s[]='Appu';  :--> In this way add a null character is automatically

// #include<stdio.h>
// int main(){
//     // char str1[]={'A','p','p','u','\0'};
//     char str1[]="Appu";

//     printf("%s",str1);
// }

// quick quiz
// #include<stdio.h>
// int main(){
//     char str1[] = "APPU";
//     for (int i = 0; i < 4; i++)
//     {
//      printf("%c",str1[i]);

//      }
// }

// input from user
// #include<stdio.h>
// int main(){
//     char ch1[45];
//     printf("Enter your name and see the magic:\n");
//     scanf("%s",ch1);
//     printf("your name is %s ",ch1);
// }

// NOTE: (a).the string should be short enough to fit into the array
// (b).scanf can't be used to inpt multi-word strings with space

// Gets and Puts
// :gets() is a fi=unction which can be used to recive a multi-word string

// char[30];
// gets(st);-->the interd srting is stored in st

// multi gets() call will be needed for multiplying strings

// like wise puts() can be used to output a string

// puts():---> prints the string place the user on the next line

// use of gets()
// #include<stdio.h>
// int main(){
//     char ch1[45];
//     printf("Enter your name and see the magic:\n");
//     gets(ch1);
//     // printf("ch1",ch1)
//     puts(ch1);
//     // printf("your name is %s ",ch1);
//     printf("done printing string ");
// }

// declaring a string using pointers we can declare string using pointers..

// char *ptr="harry";

//  this tells the compiler to store the string in memory and assinged address is stored in a char pointer

// NOTE:1. once a string is defined using st[]='appu'; it cannot be initialise to something else.
// 2. a string is defined using pointers can be reinitialised
// ptr='ding dong'

// using stlen():count length of string

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[]="Appu";
//     printf("The length of this string is %d ",strlen(str1));
// }

// using strcpy() :copy string

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char source[]="Appu";
//     char target[45];
//     strcpy(target,source);
//     printf("The target string is %s ",target);
// }

// NOTE: target string have enough capacity to store the source string

// usinng strcat():the function is used to concatenate(merge to string)

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char source[56]="Appu ";
//     char target[]="she is so beautiful ";
//     strcat(source,target);
//     // source =source +target //roughly
//     printf("The source string is %s ",source);
// }

// using strcmp():compare two string
// compare in imcreasing order of ASCII value

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char source[56]="doremon ";
//     char target[]="ding dong";
//     printf("The strcmp returns %d ",strcmp(source,target));
//     return 0;
// }

// practice set

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char st[6];
//    printf("enter the string of length 5 you want to input using percent c:\n");
//    for (int i = 0; i < 5; i++)
//    {
//    scanf("%c",&st[i]);
//    fflush(stdin);
//    }
//    st[5]='\0';
//    printf("compare this string appu gives %d",strcmp("appu",st));
// }

// write your own version of strlen function from <string.h>

// #include<stdio.h>
// #include<string.h>
//     int mystrlen(char* st){
//         int length= 0;
//         char* ptr =st;
//         while(*ptr!='\0'){
//             length++;
//             ptr++;

//         }
//         return length;
//     }
// int main(){
//     char st[]="sunder appu";
//     printf("The length of string is %d",mystrlen(st));
// }
// write a function slice() to a slice a string it should change the original string such total it is now a sliced string .take m and n as the start and ending  position for slice.

// #include <stdio.h>
// #include <string.h>

// char slice(char str[], int m, int n) {
//     int length = strlen(str);

//     if (m < 0 || n >= length || m > n) {
//         printf("Invalid slice indices.\n");
//         return;
//     }

//     int i, j;
//     for (i = m, j = 0; i <= n; i++, j++) {
//         str[j] = str[i];
//     }

//     str[j] = '\0'; // Null-terminate the sliced string
// }

// int main() {
//     char myString[] = "Hello, World!";
//     int start = 7; // Starting position
//     int end = 11;  // Ending position

//     printf("Original string: %s\n", myString);
//     slice(myString, start, end);
//     printf("Sliced string: %s\n", myString);

//     return 0;
// }

// write your own version of strcpy function from <string.h>
// doubt

// #include<stdio.h>
// #include<string.h>
//     char strcpy(char* st){
//         int length= 0;
//         char* ptr =st;
//         while(*ptr!='\0'){
//             length++;
//             ptr++;

//         }
//     }
// int main(){
//  char source[]="Appu";
//     char target[45];
//     strcpy(target,source);
//     printf("The target string is %s \n ",target);
// }

// write a program to encrypt a string by adding 1 to the ascii value of its characters

// #include<stdio.h>
// int main(){
//     char name[]="Appu";
//     for (int i = 0; i < 4; i++)
//     {
//         name[i] ++;
//     }
//     printf("THe string is %s",name);
// }

// write a program to decrypt a string by adding 1 to the ascii value of its characters

// #include<stdio.h>
// int main(){
//     char name[]="Appu";
//     for (int i = 0; i < 4; i++)
//     {
//         name[i] --;
//     }
//     printf("THe string is %s",name);
// }

// write a program to count accurance of a given character in a string

// #include<stdio.h>
// int main(){
//    char str1[100];
//    char char_count;
//    int count=0;
//    printf("Enter a string and character to count :");
//    gets(str1);
//    scanf("%c",&char_count);
//    for (int i = 0; str1[i]!='\0'; i++)
//    {
//       if(str1[i]==char_count){
//          count++;
//       }
//    }
//    printf("The character %c appears %d times in the string\n",char_count,count);
// }

// CHAPTER 9:structure....:it can holds disimilar data

// grouping disimillar fata types

// #include<stdio.h>
// #include<string.h>
// struct employee{
//    int salary;   //this declare a new user defined data type
//    float hike;
//    char name[10];
// }; //semicolon is important
// int main (){
//    int a=45;
//    struct employee Appu;
//    strcpy(Appu.name,"Appu");
//    Appu.hike =5.7;
//    Appu.salary =10000000;

//    printf("The name of the employee is %s ",Appu.name);
//    printf("The salary of the employee is %d ",Appu.salary);
//    printf("The hike of the employee is %f ",Appu.hike);
// }

// wap to store a detail of 3 employes from user defined data use the structure dcclare above

// #include<stdio.h>
// #include<string.h>
// struct employee{
//    int salary;   //this declare a new user defined data type
//    float hike;
//    char name[10];
// }; //semicolon is important
// int main (){
//    int a=45;
//    struct employee Appu ,Ashu,Asac;
//    printf("Enter the details of Appu\n");
//    printf("Enter the Name of Appu\n");
//    scanf("%s",Appu.name);
//    printf("Enter salary of Appu\n");
//    scanf("%d",&Appu.salary);
//    printf("Enter hike of Appu\n");
//    scanf("%f",&Appu.hike);

//    printf("Enter the details of Ashu\n");
//    printf("Enter the Name of Ashu\n");
//    scanf("%s",Ashu.name);
//    printf("Enter salary of Ashu\n");
//    scanf("%d",&Ashu.salary);
//    printf("Enter hike of Ashu\n");
//    scanf("%f",&Ashu.hike);

//    printf("Enter the details of Asac\n");
//    printf("Enter the Name of Asac\n");
//    scanf("%s",Asac.name);
//    printf("Enter salary of Asac\n");
//    scanf("%d",&Asac.salary);
//    printf("Enter hike of Asac\n");
//    scanf("%f",&Asac.hike);

//    strcpy(Appu.name,"Appu");
//    Appu.hike =5.7;
//    Appu.salary =10000000;

//    printf("The name of the employee is %s \n",Appu.name);
//    printf("The salary of the employee is %d \n",Appu.salary);
//    printf("The hike of the employee is %f ",Appu.hike);

//    printf("The name of the employee is %s \n",Ashu.name);
//    printf("The salary of the employee is %d \n",Ashu.salary);
//    printf("The hike of the employee is %f \n",Ashu.hike);

//    printf("The name of the employee is %s \n",Asac.name);
//    printf("The salary of the employee is %d \n",Asac.salary);
//    printf("The hike of the employee is %f\n ",Asac.hike);
// }

// note : structure keep the data organised
// note 2: structures make data management easy fior the programmers

// array to structure :just like array of integer ,an array of floats and an array of characters , we can create an  array of structure

// ARRAY OF STRUCTURE

// #include<stdio.h>
// #include<string.h>
// struct employee{
//    int salary;
//    float hike;
//    char name[10];

// };
// int main(){
//    int a=45;
//    struct employee facebook[3];
//    printf("Enter the details of Appu\n");
//    printf("Enter the Name of Appu\n");
//    scanf("%s",facebook[0].name);
//    printf("Enter salary of Appu\n");
//    scanf("%d",&facebook[0].salary);
//    printf("Enter hike of Appu\n");
//    scanf("%f",&facebook[0].hike);

//    printf("Enter the details of Ashu\n");
//    printf("Enter the Name of Ashu\n");
//    scanf("%s",facebook[2].name);
//    printf("Enter salary of Ashu\n");
//    scanf("%d",&facebook[2].salary);
//    printf("Enter hike of Ashu\n");
//    scanf("%f",&facebook[2].hike);

//    printf("Enter the details of Asac\n");
//    printf("Enter the Name of Asac\n");
//    scanf("%s",facebook[1].name);
//    printf("Enter salary of Asac\n");
//    scanf("%d",&facebook[1].salary);
//    printf("Enter hike of Asac\n");
//    scanf("%f",&facebook[1].hike);
//    strcpy(facebook[0].name,"Appu");

//    facebook[0].hike=5.3;
//    facebook[0].salary =100000;
//    printf("The name of the employee is %s \n",facebook[0].name);
//    printf("The salary of employee is %d \n",facebook[0].salary);
//    printf("The hike of the employee is %f \n",facebook[0].hike);

//    printf("The name of the employee is %s \n",facebook[2].name);
//    printf("The salary of employee is %d \n",facebook[2].salary);
//    printf("The hike of the employee is %f \n",facebook[2].hike);

//    printf("The name of the employee is %s \n",facebook[1].name);
//    printf("The salary of employee is %d \n",facebook[1].salary);
//    printf("The hike of the employee is %f \n",facebook[1].hike);
// }

// #include<stdio.h>
// #include<string.h>
// struct employee{
//    int salary;
//    float hike;
//    char name[10];

// };
// int main(){
//    int a=45;
//    struct employee Appu={34,5.2,"Appu"};
//    printf("The name of the employee is %s \n",Appu.name);
//    printf("The salary of employee is %d \n",Appu.salary);
//    printf("The hike of the employee is %f \n",Appu.hike);
// }

// structure in memory :
// structure are stored in contigious memopry locations for the structure e1 of type struct employee ,mermory layout looks like this:
// in a array of structure are stored adjacent to each other

// pointer to structure :

// A pointer to structure can be created as follows:

// struct employee*ptr;
// ptr=&e;
// now we can use printf
// printf("%d",*ptr.code);

// pointer to structure program

// #include<stdio.h>
// #include<string.h>
// struct employee{
//    int salary;
//    float hike;
//    char name[10];

// };
// int main(){
//    int a=45;
//    struct employee Appu={34,5.2,"Appu"};
//    struct employee *ptr = &Appu;
//    // using structure
//    printf("The name of the employee is %s \n",Appu.name);
//    printf("The salary of employee is %d \n",Appu.salary);
//    printf("The hike of the employee is %f \n",Appu.hike);
//    // using pointer
//    printf("The name of the employee is %s \n",(*ptr).name);
//    printf("The salary of employee is %d \n",(*ptr).salary);
//    printf("The hike of the employee is %f \n",(*ptr).hike);
// }

// arrow operator :instead of writing *(ptr).code,we can use arrow structure properties ass folow
// (*ptr).code or ptr->code

// #include<stdio.h>
// #include<string.h>
// struct employee{
//    int salary;
//    float hike;
//    char name[10];

// };
// int main(){
//    int a=45;
//    struct employee Appu={34,5.2,"Appu"};
//    struct employee *ptr = &Appu;
//    // using structure
//    printf("The name of the employee is %s \n",Appu.name);
//    printf("The salary of employee is %d \n",Appu.salary);
//    printf("The hike of the employee is %f \n",Appu.hike);
//    // using pointer
//    printf("The name of the employee is %s \n",(*ptr).name);
//    printf("The salary of employee is %d \n",(*ptr).salary);
//    printf("The hike of the employee is %f \n",(*ptr).hike);

//    printf("The name of the employee is %s \n",ptr->name);
//    printf("The salary of employee is %d \n",ptr->salary);
//    printf("The hike of the employee is %f \n",ptr->hike);
// }

// passing function to structure :a structure can be passed to afunctioin just like any other data type

// void show(struct employee e);  // function prototype

// quiz 08:complete the show function to display the content of employee

// #include<stdio.h>
// #include<string.h>
// struct employee{
//    int salary;
//    float hike;
//    char name[10];

// };
// void show (struct employee e){
//    e.name[0]='p';
//    printf("The name of the employee is %s \n",e.name);
//    printf("The salary of employee is %d \n",e.salary);
//    printf("The hike of the employee is %f \n",e.hike);
//    e.hike=4.55;
// }
// void showRef(struct employee *e){
//    (*e).name[0]='p';
//    printf("The name of the employee is %s \n",e->name);
//    printf("The salary of employee is %d \n",e->salary);
//    printf("The hike of the employee is %f \n",e->hike);
//    (* e).hike=4.55;
// }
// int main(){
//    struct employee Appu={34,5.2,"Appu"};
//    showRef(&Appu);
//    printf("The name of the employee is %s \n",Appu.name);
//    printf("The salary of employee is %d \n",Appu.salary);
//    printf("The hike of the employee is %f \n",Appu.hike);

// }

// Type def:we can use the type def keyboard to create an alias name for data type in c.    Type def is more common in c

// struct complex c1 amd c2; for defining complex numbers:

// struct complex{
// float real;
//    float img;
// };

// complex no c1 and c2 for defining complex number :

// typedef struct complex{
//    float real;
//    float img;
// }complex no;

// typedef program

// #include<stdio.h>
// #include<string.h>
// typedef struct employee{      //using type def for structure
//    int salary;
//    float hike;
//    char name[10];
// }emp;
// int main(){
//    int a=45;
//    emp Appu={34,5.2,"Appu"};
//    emp *ptr = &Appu;
//    // using structure
//    printf("The name of the employee is %s \n",Appu.name);
//    printf("The salary of employee is %d \n",Appu.salary);
//    printf("The hike of the employee is %f \n",Appu.hike);
//    // using pointer
//    printf("The name of the employee is %s \n",(*ptr).name);
//    printf("The salary of employee is %d \n",(*ptr).salary);
//    printf("The hike of the employee is %f \n",(*ptr).hike);

//    printf("The name of the employee is %s \n",ptr->name);
//    printf("The salary of employee is %d \n",ptr->salary);
//    printf("The hike of the employee is %f \n",ptr->hike);
// }

// practice set

// craete a 2-D vector using structure
// #include<stdio.h>

// struct twoDimVector{
// int x;
// int y;
// };
// int main(){
//    struct twoDimVector v1 ={1,4};
//    struct twoDimVector v2 ={11,54};
//    printf("%di +%dj",v1.x,v1.y);
// }

// 1. write a function sumvector wghich returns  the  sum of two vector passed to it .the vector must be two dimensional

// #include<stdio.h>

// struct twoDimVector{
// int x;
// int y;
// };

// 2.struct twoDimVector sum(struct twoDimVector first,struct twoDimVector second){
//    int a,b;
//    a=first.x + second.x;
//    b=first.y + second.y;
//    struct twoDimVector result ={a,b};
//    return result;
// };

// int main(){
//    struct twoDimVector v1 ={1,4};
//    struct twoDimVector v2 ={11,54};
//    struct twoDimVector v3 =sum(v1,v2);
//    printf("%di +%dj",v3.x,v3.y);
//    return 0;
// }

// 3. 20 integer are to be stored in memory what will you prefer : array or structure
// Ans:Array becoz it is a type of similar data type

// 4.write aprogram to illustrate the use of arrow operator in c.

// done above already go and revise

// 5.write aprogram with astructure representing a complex number .

// #include <stdio.h>

// struct complex
// {
//    float r;
//    float c;
// };

// int main()
// {
//    struct complex v1 = {1.1, .4};
//    struct complex v2 = {11.2, 5.4};
//    printf("%fi +%fj \n", v1.r, v1.c);
//    printf("%fi +%f \n", v2.r, v2.c);
// };    //remember semi-colon here very important to understand

// 6. create an array of 5 complex numbers created in problem 5 and display them with the help of a display function .the value must be taken as an input from the user
//  7. ques f structure using typedef keyboard
// 8. write a structure representing a bank account of a customer .what field did youi use and why

// #include <stdio.h>

// struct bank
// {
//    int accountNo;
//    char name[20];
//    float balance ;
//    char branchCODE[15];
// };

// int main(){

// }

// 9.WRITE ASTRUCTURE CAPABLE OF STORING DATA .WRITE A FUNCTION TO COMPARE THOSE DATA
// 10.solve prblm for time  using typedef keyword

// chapter 10:FILE I/O

// THE RAM IS VOLATILE AND ITS CONTENT IS LOST ONCE PROGRAM TERMINATES .IN ORDER5 TO PERSIST THE DATA FOREVER WE USE FILES.
// A FILE IS A DATA STORED IN A StORAGE DEVICE .A C PROGRAM CAN TALK TO FILE BY READING CONTENT FROM IT  AND WRITING CONTENT TO IT.

//                         WRITE
//  PROGRAMMER->C PROGRAM --------->FILE
//                        <----------
//                         READ

// FILE POINTER:An file is a structure which need to be created for opening the file.
// A file pointer is a pointer to this structure of the file.

// note: File pointer is needed for communication between the file and the program

// A file pointer can be created as follows:
// file *ptr;
// ptr=fopen("filename.ext","mode");

// read file

//  #include<stdio.h>
//  int main(){
//    FILE *ptr;
//    ptr = fopen("sample.txt","r");
//  }

// file opening modes in c : c offers the programmers to select a mode for file opening  a file.

// following modes are primirily used in c file I/O

// "r"  : open for read       //if the file doesnt exist ,fopen return NULL

// "rb" : open for reading in binary   //if the file doesnt exist ,fopen return NULL

// "w": open for writing               //if the file doesnt exist ,the content will be overwrite

// "wb": open for writing in binary    //if the file doesnt exist ,the content will be overwrite

// "a" :open for append                  //if the file doesnt exist ,it will be created

// types of files :there are two types of files
// 1. text file(.txt,.c)
// 2. bianary file(.jpg,.dat)

// READING A FILE: A file can be opened for reading as follow

// FILE *ptr;
// ptr= fopen("Appu.txt","r");
// int num;

// let assume that "Appu.txt" contains an integer we can read that integer using

// fscanf(ptr,"%d",&num);   --->  fscanf is file counterpart of scanf

//  #include<stdio.h>
//  int main(){
//    FILE *ptr;
//    ptr = fopen("sample.txt","r");
//    int i;
//    fscanf(ptr ,"%d",&i);
//    printf("The vaue of i is %d",i);
//    // char ch;
//    // fscanf(ptr ,"%c",&ch);
//    // printf("The Character ch is %c",ch);
//  fclose(ptr)
//  }

// this will read an integer from file in num, variable

// quiz : modify  the  program above to check whether the file exist or not before opening the file

// CLOSING THE FILE IN C :It is very important to lose the file after read or write.this is achived using fclose as follow -->  fclose(ptr);
// This will tell the compiler that we are done working withg this file and the associated resource could be freed.

// WRITING TO A FILE:WE CAN WRITE TO A FILE IN A VERY SIMILAR MANNER LIKE WE READ THE FILE

// FILE *ptr
// fptr =fopen("Appu.text","w"); int num =432;
// fprint(fptr);

// or

// #include <stdio.h>
// int main()
// {
//    FILE *ptr;
//    ptr = fopen("WriteFile.txt", "w");
//    int i=89;
//    fprintf(ptr, "%d", i);

//    fclose(ptr);
// }

// fgetc() and fputc(): fgetc nad foutc are used to read and write a character from / to a file

// fgetc(ptr)     //used to read the character from file
// fputc('c',ptr);    // used to write character 'c to the file
// PROGRAME

// #include <stdio.h>
// int main()
// {
//    FILE *ptr;
//    //   ptr = fopen("fgetcputc.txt", "w");
//    // fputc('c', ptr);

//    ptr = fopen("fgetcputc.txt", "r");
//    char ch = fgetc(ptr);
//    printf("the value of ch is %c \n", ch);
//    ch = fgetc(ptr);
//    printf("the value of ch is %c \n", ch);
//    ch = fgetc(ptr);
//    printf("the value of ch is %c \n", ch);
//    fclose(ptr);
// }

// EOF: END OF FLE
//  fgetc returns EOF when all the character from a file have been read . so we write a check like below to detect end of __FILE.

// while(1){
//    ch= fgetc(ptr);
//    if(ch==EOF){                              ======> when all the controls of file has not been read break the loop!
//       break;
//    }
//    //code
// }


//programe:

// #include <stdio.h>
// int main()
// {
//    FILE *ptr;
//    //   ptr = fopen("fgetcputc.txt", "w");
//    // fputc('c', ptr);

//    ptr = fopen("fgetcputc.txt", "r");
//    char ch;
//    while(ch!=EOF){
//    ch = fgetc(ptr);
//    if(ch!=EOF)
//    printf("the value of ch is %c \n", ch);
//    }
//    // ch = fgetc(ptr);
//    // printf("the value of ch is %c \n", ch);
//    // ch = fgetc(ptr);
//    // printf("the value of ch is %c \n", ch);
//    // fclose(ptr);
// }


//  practice set:

 