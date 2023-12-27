// FOR LOOOP

// 1.print 'hello world' ten times (for loop)

/*#include<stdio.h>
int main(){
int i;
for (i=1;i<=1970;i++)
{printf("\n Appu kaise ho");
}}*/

// 2.print integer forom 1 to 10

/*#include<stdio.h>
int main(){
int i;
for(i=1;i<=10;i++);
{printf("\n%d",i);
}}*/

//3.print integer 10 to 1

/*#include<stdio.h>
int main(){
int i;
for(i=10;i>=1;i--)
{
    printf("\n %d",i);
}}*/

// 4.print multiplication table of given number

/*#include<stdio.h>
int main(){
int i,n,m;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
    m=i*n;
    printf("\n%d",m);
}}*/

// METHOD 2:

/*#include<stdio.h>
int main(){
     int i,no;
     printf("enter any number \n:");
     scanf("%d",&no);
     for(int i=1;i<=10;i++);
{
    printf("%d",i*no);
}}*/

// 5.print table of 1

/*#include<stdio.h>
int main(){
    int i;
    printf("Enter number one:\n");
    scanf("%d",&i);
    for(int i=1;i<=10;i++);
    {
        printf("%d\n",i);
    }}*/

    // 6.print sum of first 10 number using loop

    /*#include<stdio.h>
int main(){
    int i,sum=0; 
    for(i=1;i<=10;i++);
    {
        sum=i+sum;
    }
    printf("\n sum of first 10 natural =%d",sum);} */

    // METHOD 2:

    /*#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter any number");
    scanf("%d",&n);
    printf("natural number from 1 to %d is given below\n",n);
    for(int i=1;i<=10;i++)
    {printf("%d",i);
    sum=sum+i;}
    printf("\ntotal sum=%d",sum);}*/

// 7. print sum of natural number 1 to n

/*#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter any number");
    scanf("%d",&n);
    printf("natural number from 1 to %d is given below\n",n);
    for(int i=1;i<=n;i++)
    {printf("%d",i);
    sum=sum+i;}
    printf("\ntotal sum=%d",sum);}*/

    // 8.calcullate factorial

   /*#include<stdio.h>
int main(){
    int i,n,fact=1;
    printf("\n enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { fact =fact*i;}
    printf("\n %d!=%d",n,fact);}*/

    // METHOD 2:

    /*#include<stdio.h>
    int main()
    {
        int no,f=1;
        printf("Enter any number\n");
        scanf("%d",&no);
        for(int i=1;i<=no;i++){
            f=f*i;}
        printf("factoria=%d",f);
    }*/

    //9. CALCULATE POWER OF (X^y)

/*#include<stdio.h>
int main(){
    int i,x,y,p=1;
    printf("\n enter the base:");
    scanf("%d",&x,&y);
    printf("\n enter the power:");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {p=p*x;}
    printf("\n%d^%d=%d",x,y,p);}*/

    // METHOD 2:

    /*#include<stdio.h>
    int main()
    {
        int b,p,f=1;
        printf("Enter base:\n");
        scanf("%d",&b);
        printf("Enter power:\n");
        scanf("%d",&p);
        for(int i=1;i<=p;i++)
        {
            f=f*b;
        }
        printf("Result=%d",f);
    }*/

    // 10.check if the entered number is prime or not

    /*#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("\n Enter the number:");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {c++;}}
    if(c==0){
        printf("\n %d is a prime number",n);
    }
    else
    {
        printf("\n %d is not a prime number",n);
    }
    }*/

    // METHOD 2:

    /*#include<stdio.h>
    int main()
    {
        int no,m=0;
        printf("enter any number\n");
        scanf("%d",&no);
        for(int i=2;i=no-1;i++)
        {
            if(no%i==0)
        {
            printf("number is not prime");
            m=1;
            break;}}
            if(m==0)
    printf("number is prime");}*/

    // RANGE OF PRIME NUMBERS
    /*#include<stdio.h>
int main ()
{
    int i, prime, up, low, n;
    printf ("ENTER THE LOWER LIMIT : ");
    scanf ("%d", &low);
    printf ("ENTER THE UPPER LIMIT : ");
    scanf ("%d", &up);
    if(low>=2)
    {
        printf ("PRIME NUMBERS ARE : ");
        for (n = low + 1; n < up; n++)
        {
            prime = 1;
            for (i = 2; i < n/2; i++)
                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            if (prime)
                printf ("\t %d", n);
        }
    }
    else
    {
        printf("Enter lower number must be greater than 1");
    }
}*/



    // 11.print fibanocci series
    /*#include<stdio.h>
int main(){
    int i,x=0,y=1,s;
    printf("\n fibanocci series:");
    scanf("\n%d\t%d",&x,&y);
    for(i=1;i<20;i++)
{
    s=x+y;
    printf("\t%d",s);
    x=y;
    y=s;
}}*/
// OR, upto n terms fabonacci series
// #include<stdio.h>
// int main(){
//     int no,a,b=1,c=0;
//     printf("Enter any number upto you want to print fabonacci series\n:");
//     scanf("%d\t%d",&no);
//     for(int i=1;i<=no;i++)
//     {printf("%d",c);
//     a=b;
//     b=c;
//     c=a+b;}}

// 12.print natural number from 1 to n 
/*#include<stdio.h>
int main(){ 
    int no;
    printf("enter any number:\n");
    scanf("%d",&no);
    printf("natural number from 1 to %d is given below\n",no);
    for(int i=1;i<=no;i++);
    {
        printf("%d",no);
    }}*/
   
    // 13.print natural number in reverse order
   /*#include<stdio.h>
int main(){
    int no;
    printf("Enter any number\n");
    scanf("%d",&no);
    printf("natural number from 1 to %d in revese order is given below\n",no);
    for(int i=no;i>=1;i--)
    {
        printf("%d",i);
    }}*/

    //14.print alpahbhet ftom A to Z
    /*#include<stdio.h>
int main(){
   for(int i=65;i<=90;i++)
   {
    printf("%c",i);
   }}*/

//    OR,
 /*#include<stdio.h>
    int main(){
        for(char ch='A';ch<='Z';ch++)
        { printf("%c",ch);}
    }*/

//15.print all even number  between 1 to 20
/*#include<stdio.h>
int main(){ 
    printf("enter number between 1 to 20 is given below:\n");
    for(int i=2;i<=20;i+2)
    { 
    printf("%d",i);}}*/
    // OR
    /*#include<stdio.h>
    int main(){
        printf("enter amy number between 1 to 20 is given below:\n");
        for(int i=2;i<=20;i+1);
        {
            if(i%2==0)
            printf("%d",i);
        }
    }*/

    // 16.print all odd number between to 20
   /*#include<stdio.h>
int main(){ 
    printf("odd number between 1 and 20 is given below:\n");
    for(int i=2;i<=20;i+1)
    {
        if(i%2!=0)
        printf("%d",i);}}*/
        // OR
        /*#include<stdio.h>
int main(){ 
    printf("odd number between 1 and 20 is given below:\n");
    for(int i=1;i<=20;i+2)
    {
        printf("%d",i);}}*/

        // 17.find factor of any  number 
        /*#include<stdio.h>
int main(){
    int no,f=1;
    printf("enter any number\n");
    scanf("%d",&no);
    printf("factor is given below\n");
    for(int i=1;i<=no;i++)
    {
        if(no%i==0);
        printf("%d",i);
    }}*/

    // 18. LCM OF TWO NUMBERS
    /*#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter 1st number:\n");
    scanf("%d",&n1);
    printf("enter second number: \n");
    scanf("%d",&n2);
    for(int i=1;;i=i++)
    {
        if(i%n1==0&&i%n2==0){
        printf("lcm of%d and %d is %d",n1,n2,i);
        break;
    }}}*/

    // 19.HCF OF TWO NUMBERS
    /*#include<stdio.h>
    int main()
    {
        int no1,no2,m=1;
        printf("enter first number:\n");
        scanf("%d",&no1);
        printf("enter second number :\n");
        scanf("%d",&no2);
        for(int i=1;i<=no1;i=i+i)
        {
            if(i%no1==0&&i%no2==0){
                m=i;
            }}
            printf("hcf of %d and %d is %d",no1,no2,m);
    }*/

    // WHILE LOOP

    // 1.SUM OF DIGITS IN NUMBER
    /*#include<stdio.h>
    int main()
    {
        int n,r,sum=0;
        printf("\n Enter the number:");
        scanf("%d",&n);
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;}
            printf("\n sum of digits of number=%d",sum);
        }*/
    
    // 2. calculate occurance of given digit in number
   /*#include<stdio.h>
    int main()
    {
        int n,r,s,c=0;
        printf("\n Enter the number:");
        scanf("%d",&n);
        printf("\n Enter the digit to count:");
        scanf("%d",&s);
        while(n!=0)
        {
            r=n%10;
            if(r==s)
            {
                c++;
            }
            n=n/10;}
            printf("\n%d occurs%d times ",s,c);
    }*/

// 3.calculate reverse of number
/*#include<stdio.h>
int main()
{
    int n,r,rev=0;
    printf("\n enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("\n reverse number =%d",rev);
} */
// mehod2:
/*#include<stdio.h>
int main()
{
    int no,b;
    printf("enter the number \n");
    scanf("%d",&no);
    printf("reverse is given below\n");
    while(no!=0)
    {
        b=no%10;
        printf("%d",b);
        no=no/10;
    }
}*/

// 4.tale of one
/*#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
{
    printf("%d\n",i);
    i++;
}
}*/

// 4.check number is palindrome or not
/*#include<stdio.h>
int main(){
    int no,b,rev=0,cpy;
    printf("Enter any number:\n");
    scanf("%d",&no);
    cpy=no;
    while(no!=0)
    {
        b=no%10;
        rev=rev*10+b;
        no=no/10;
    }
    if(cpy==rev)
    printf("palindrome");
    else
    printf("not palindrome");
}*/

// 5.find multiplication of digits of integer value
/*#include<stdio.h>
int main(){
    int no,b,m=1;
    printf("Enter any number:\n");
    scanf("%d",&no);
    while(no!=0)
    {
        b=no%10;
        m=m*b;
        no=no/10;
    }
    printf("total multiply of digits=%d",m);
}*/

// 6.print first and last digit of integer value
/*#include<stdio.h>
int main(){
    int n,a,l;
    printf("enter any number:\n");
    scanf("%d",&n);
    l=n%10;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
    }
    printf("first digit=%d and last digit=%d",a,l);
}*/

// DO-WHILE

// 1.table of one
/*#include<stdio.h>
int main(){
    int i=1;
    do{
        printf("%d\n",i);
        i++;
        }
        while(i<=10);
}*/

// 2.print table of given number 
/*#include<stdio.h>
int main(){
    int n,i=1,m;
    printf("\n Enter the number:");
    scanf("%d",&n);
    printf("\n Multiplication table of %d:",n);
    do{
        m=n*i;
        printf("\n%d",m);
        i++;}
        while(i<=10);
        }*/

// 3. calculate untill addition becomes 100;
/*#include<stdio.h>
int main(){
    int n,i=1,sum=0;
    do{
        printf("\n Enter the number :");
        scanf("%d",&n);
        sum=sum+n;}
        while(sum<100);
        printf("\n sum%d ",sum);
}*/

// 4.print digit of integer value in reverse order
/*#include<stdio.h>
int main(){
    int n,b;
    printf("Enter any number:\n");
    scanf("%d",&n);
    printf("reverse is giveen below\n");
    do{
        b=n%10;
        printf("%d",b);
        n=n/10;}
        while(n!=0);
    }*/

// 5.check number is palindrome or not
/*#include<stdio.h>
int main(){
    int n,b,rev=0,cpy;
    printf("Enter any number\n");
    scanf("%d",&n);
    cpy=n;
    while(n!=0)
    {
        b=n%10;
        rev=rev*10+b;
        n=n/10;}
        if(cpy==rev)
        printf("palindrome");
        else
        printf("not palindrome");}*/
        
        // 6.find sum of digit of integer value
        /*#include<stdio.h>
int main(){
    int n,b,sum=0;
    printf("Enter any number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        sum=sum+10;
        n=n/10;}
        printf("total sum of digits =%d",sum);
    }*/

    // 7. find multiplication of digit of integer value
    /*#include<stdio.h>
int main(){
    int n,b,m=1;
    printf("enter any number\n");
    scanf("%d",&n);
    while(n!=0){
    b=n%10;
    m=m*b;
    n=n/10;
}
printf("total multiply of digits=%d",m);}*/

// 8.print first and last digit of integer number
/*#include<stdio.h>
int main()
{
    int n,a,l;
    printf("\n enter any number:");
    scanf("%d",&n);
    l=n%10;
    do{
        a=a%10;
        n=n/10;
    }
    while(n!=10);
    printf("first digit=%d and last digit=%d",a,l);
    }*/

    // GOTO LOOP
    // EXAMPLE
   /*#include<stdio.h>
int main(){
    int n;
    zero:
    printf("\nenter the number:");
    scanf("%d",&n);
    if(n==0){
    goto zero;}
    printf("\n you entered %d",n);
}*/
// character data type(ASCII)
// 1.print alphabhet from A to Z IN UPPER AND LOWER CASE
/*#include<stdio.h>
int main(){
      char ch;
printf("Uppercase Alphabets are: \n");
for(ch=65; ch<=90; ch++){
printf("%c",ch);
printf(" ");
}
printf("\n");
printf("\nLowercase Alphabets are: \n");
for(ch=97; ch<=122; ch++){
printf("%c",ch);
printf(" ");
}
    return 0;
}*/

// 2.PRINT ASCII VALUE OF ALPHABHET FROM A TO Z
/*#include<stdio.h>
int main(){
    char ch;
    for(char ch=65;ch<=90;ch++);
    {
        printf("%c=%d\n",ch,ch);
    }
}*/

// 3.PRINT ASCII TABLE
/*#include<stdio.h>
int main(){
    int i;
for(int i=0;i<=225;i++){
    printf("%d=%c\t",i,i);
}}*/

// 4. PRINT UPPER CASE ALPHABHET
/*#include<stdio.h>
int main(){
    int i;
    for(i='A';i<='Z';i++){
        printf("%c\t",i);
    }
}*/

// 5. PRINT LOWER CASE ALPHABHET
/*#include<stdio.h>
int main(){
int i;
    for(i='a';i<='z';i++){
        printf("%c\t",i);
    }
}*/

//6. DETERMINE WHEATHER IT  IS UPPER CASE OR LOWER CASE
/*#include<stdio.h>
int main(){
    char c;
    printf("\n Enter the charater ");
    scanf("%c",&c);
    if(c>='A'&& c<='Z'){
        printf("\n %c is Upper Case Alphabhet",c);
    }
    else{
        printf("\n %c is Lower Case Alphabhet",c);
    }
}*/

// NESTING OF LOOP(PATTERN PROBLEM)
// 1.print symbollic pattern
/*#include<stdio.h>
int main(){
    int i,j;
    printf("\n symbollic pattern\n\n");
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");}
            printf("\n");
    }
}*/
// OR
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        { if(i>=j)
        printf("* ");
        else 
        printf("   ");}
        printf("\n");
    }
}*/ 

// 2.pattern 2
/*#include<stdio.h>
int main(){ 
    int i,j;
    printf("\n symbolic pattern\n\n");
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++)
        {printf("* ");}
        printf("\n");
    }
}*/

// pattern 3
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=5;j++)
        { if(i<=j)
        printf("* ");
        else 
        printf("   ");}
        printf("\n");
    }
}*/
// OR
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
               if((i+j)<=6)
            printf("* ");
            else 
            printf("  ");
            }
            printf("\n");
    }
}*/

// PATTERN 4
  /*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
               if((i+j)>=6)
            printf("* ");
            else 
            printf("  ");
            }
            printf("\n");
    }
} */

// PATTERN 5 (special)(+)
/*#include<stdio.h>
int main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==3||j==3)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}*/

// PATTERN 6(X)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==j||(i+j)==6)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}*/

// PATTERN 7(O)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i==1||i==5||j==1||j==5)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}*/

// PATTERN 8(6)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++){
            if(i==1||i==3||i==5||i==1)
            printf("* ");
            else 
            printf("  ");
        }
        printf("\n");
    }
}*/

// Or(E)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++){
            if(i==1||i==3||i==5||(i==2&&j==1)||(i==1||j==1))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}*/

// PATTERN 9(A)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++){
            if(i==1||i==3||j==1||j==4)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}*/

// PATTERN 10(9)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++){
            if(i==1||i==3||i==5||(i==2&&j==1)||(i==1||j==4))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}*/

// pattern 11(S)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++){
            if(i==1||i==3||i==5||(i==2&&j==1)||(i==4||j==4))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}*/

// PATTERN 12(Y)
/*#include<stdio.h>
int main(){
    int i,j;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++){
            if(i==j&&i<=3||((i+j)==6&&i<=3)||(j==3&&i>=3))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
}*/

// PRINT NUMBER PATTERN
/*#include<stdio.h>
int main()
{
    int i,j;
    printf("\n Numeric Pattern\n\n");
    for(i=5;i>=1;i--){
        for(j=5;j>=i;j--){
            printf(" %d ",j);
        }
        printf("\n");
    }
}*/

// PATTERN 1
/*#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i>=j)
            printf(" %d ",i);
            else 
            printf(" ");
        }
        printf("\n");
    }
}*/

// PATTERN 2
/*#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i>=j)
            printf("%d ",j);
            else 
            printf("  ");
        }
        printf("\n");
    }
}*/

// ALPHABHET PATTERN
/*#include<stdio.h>
int main(){
    int i,j;
    printf("\n Alphabhetical pattern\n\n");
    for(i='A';i<='Z';i++){
        for(j='A';j<=i;j++){
            printf(" %c ",j);
        }
        printf("\n");
    }
}*/

// PATTERN 1:
/*#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i>=j)
            printf(" %c ",(i+64));
            else
            printf("  ");
        }
        printf("\n");
    }
}*/

// PATTERN 2:
/*#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(i>=j)
            printf(" %c ",(j+64));
            else
            printf("  ");
    }
    printf("\n");
}}*/

// PATTERN 3:(important)
/*#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if((i+j)>=6)
            printf("  %d  ",(i));
            else
            printf("  ");
        }
        printf("\n");
    }
}*/




//  very important armstrong number
// (USING FOR LOOP)
/*#include<stdio.h>
int main (){
    int n,a,sum=0,r;
    printf("enter number: \n");
    scanf("%d",&n);
   
    for(a=n;n!=0;n=n/10){
        r=n%10;
        sum=sum+(r*r*r);
    }if(sum==a){
        printf("%d armstrong number: ",a);}
        else{
        printf("%d not armstrong number",a);
    }
}*/

// (USING WHILE LOOP)
/*#include<stdio.h>
int main(){
    int n,a,sum=0,r;
    printf("enter number: \n");
    scanf("%d",&n);
    a=n;
  while(n>0){
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;}
        if(sum==a){
            printf("%d armstrong number\n ",a);
        }else{
        printf("%d not armstrong number \n",a);
    }}*/




// sum of n number

    /*#include<stdio.h>
    int main()
    {
        int n,sum=0;
        printf("enter number:");
        scanf("%d",&n);
        
        for(int i=1;i<=n;i++){
        sum=sum+i;
        printf("%d\n",i);
        }
        printf("sum is:%d",sum);
    }*/


    //doubt in for loop armstrong number

    // #include<stdio.h>
    // int main(){
    //     int n,a,sum=0,r;
    //     printf("enter an number:\n");
    //     scanf("%d",&n);
    //     for(a=n;n!=0;n=n/10){
    //         r=n%10;
    //         sum+=(r*r*r);
    //         if(sum==a){
    //             printf("%d is armstrong number",a);
    //         }
    //         else{
    //         printf("%d is not armstrong number",a);
    //     }
    //     }
    // }

    // #include<stdio.h>
    // int main(){
    //     int n,a,sum=0,r;
    //     printf("enter an number:\n");
    //     scanf("%d",&n);
    //    a=n;
    //    while(n>0){
    //        r=n%10;
    //        sum+=(r*r*r);
    //        n=n/10;
    //    }
    //    if(sum==a){
    //        printf("%d is armstrong number",a);
    //    }
    //    else{
    //        printf("%d is not armstrong number",a);
    //    }
    // }