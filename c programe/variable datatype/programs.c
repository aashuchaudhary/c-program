/* 1.print value of variable using format specifier
#include<stdio.h>
int main(){
    int x=10;
    float f=10.8;
    char c='A';
    printf("x=%d\nf=%f\nc=%c",x,f,c);
}
*/
//2.Get input from user nad print user input values
/*#include<stdio.h>
int main(){
    int x;
    float f;
    char c;
    printf("Enter the int,float,char values:");
    scanf("%d%f%c",&x,&f,&c);
    printf("\n X=%d\nF=%f\n%c",c,f,c);
}*/
//3.To swap values between two variables method1:
/*#include<stdio.h>
int main(){
    int a,b,t;
    printf("enter values of 'a' and 'b'=");
    scanf("%d%d",&a,&b);
    t=a;
    a=b;
    b=t;
    printf("a=%d b=%d",a,b);
}*/
//method 2:
/*#include<stdio.h>
int main(){
    int a=10 ,b=20,c;
    printf("before swapping a=%d and b=%d\n",a,b);
    c=a+b;
    a=c-a;
    b=c-b;
    printf("after swapping a=%d and b=%d\n",a,b);
}*/
//4.Adiition and substraction
/*#include<stdio.h>
int main(){
   int x,y,sum,sub;
   printf("enter two integers:");
   scanf("%d%d",&x,&y);
   sum=x+y;
   sub=x-y;
   printf("\nAddition=%d\nSubstraction=%d",sum,sub);
}*/
//5.multiplicaton and division
/*#include<stdio.h>
int main(){
    int x,y,mul;
    float div;
    printf("enter two integer:");
    scanf("%d%d",&x,&y);
    mul=x*y;
    div=x/y;
    printf("\nMultiplication=%d\ndivision=%f",mul,div);
}*/
//6.calculate square from user input integer
/*#include<stdio.h>
int main(){
    int x,sq;
    printf("enter a inerger:");
    scanf("%d",&x);
    sq=x*x;
    printf("\nsquare=%d",sq);
}*/
//7. to calculate area and perimeter of circle from user and input radius
/*#include<stdio.h>
int main(){
    int r;
    float area,perimeter;
    printf("enter the radius of circle:");
    scanf("%d",&r);
    area=3.14*r*r;
    perimeter=2*3.14*r;
    printf("\nArea=%f\nperimeter=%f",area,perimeter);
}*/
//8.calculate sum and average by reading 3 integer
/*#include<stdio.h>
int main(){
    int x,y,z,sum;
    float avg;
    printf("enter three integer:");
    scanf("%d%d%d",&x,&y,&z);
    sum=x+y+z;
    avg=sum/3.0;
    printf("\nsum=%d\navg=%f",sum,avg);
}*/
//9.to calculate simple interest from user input principle amount,period in number of year and rate of interest.
/*#include<stdio.h>
int main(){
    float P,T,R,SI;
    printf("enter p,t and r value\n");
    scanf("%f%f%f",&P,&T,&R);
    SI=P*T*R/100;
    printf("\nSimple interst=%f",SI);
}*/
//10.to read celcius from user input and  converted it into fahrenheit.
 /*#include<stdio.h>
 int main(){
    float c,f;
    printf("enter temperature in celcius :");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("\ncelcius=%f\nfahrenheit=%f",c,f);}*/
    //11.Area of triangle
    /*#include<stdio.h>
    int main(){
        int a,l,b;
        printf("enter length of rectagle\n");
        scanf("%d",&l);
        printf("enter with of rectangle\n");
        scanf("%d",&b);
        a=l*b;
        printf("\n Area of recatngle=%d",a);
    }*/
    //12.Area of rectagle
    /*#include<stdio.h>
    int main(){
        float a,b,h;
        printf("enter b,h\n");
        scanf("%f%f",&b,&h);
        a=0.5*b*h;
        printf("area of triangle=%f",a);
    }*/
    //13.input marks of five subject like maths,phy,chem,hindi,english and find average
    /*#include<stdio.h>
    int main(){
        float P,C,M,E,H,Avg;
        printf("enter marks in p,c,m,e,h\n");
        scanf("%f%f%f%f%f",&P,&C,&M,&E,&H);
        Avg=(P+C+M+E+H)/5;
        printf("Average=%f",Avg);
    }*/
    //14.swappin of two variable without usnig third variable
    /*
    #include<stdio.h>
    int main(){
        int a=10,b=20;
        printf("before swapping a=%d and b=%d\n",a,b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("after swapping a=%d and b=%d\n",a,b);
    }*/
    // 15.program using conditional operator
    /*#include<stdio.h>
int main(){
    int n,x;
    printf("enter 1 or 2:");
    scanf("%d",&n);
   x=((n==1)?10:20);
    printf("\nx=%d",x);
}*/