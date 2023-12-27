// 1.determine entered number is possitive or negative or zero
/*#include<stdio.h>
    int main(){
        int x;
        printf("entered the number");
        scanf("%d",&x);
        if(x>0)
        {
            printf("\n %d is positive integer",x);
        }
        if(x<0)
        {
            printf("\n %d is negative integer",x);
        }
        if(n==0)
        {
            printf("\n %d is zero"'x)
        }
     } */

    //  2.find greatest number
    /*#include<stdio.h>
    int main(){
        int x,y;
        printf("enter two integer");
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            // printf("x is greater"); or
            printf("\n%d is greatest number",x);
        }
        if(x<y)
        {
            // printf("y is greater"); or
            printf("\n%d is greater number",y);
        }
     } */

    //  3.print appropriate message
    /*#include<stdio.h>
    int main(){
        char c;
        printf("enter the character:");
        scanf("%c",&c);
        if(c=='A')
        {
            printf("\n Excellent");
            }
        if(c=='B')
        {
            printf("\n Good");
        }
        if(c=='C')
        {
            printf("\n Fair");
        }
        if(c=='D')
        {
            printf("\n Worse");
        }
     } */

    //  4.Determine even odd integer
   /* #include<stdio.h>
    int main(){
        int n=2;
        printf("enter the number:");
        scanf("%d",&n);
        if(n%2==0)
        {
            printf("n is even number"); //printf("\n%d is even numver",n);
        }
        else{printf("n is odd number"); //printf("\n%d is odd number",n);
        }
     } */

    //  5.check divisibility
    /*#include<stdio.h>
    int main(){
        int n,div;
        printf("\n enter the number:");
        scanf("%d",&n);
        printf("\n enter the divisor");
        scanf("%d",&div);
        if(n%div==0)
        {
            printf("\n%d is completly divisible by %d",n,div);
        }
        else 
        {
            printf("\n %d is not copletly divisible by %d ",n,div);
        }
     } */

    //  6.check character is vowel or not
    /*#include<stdio.h>
        int main(){
    char c;
    printf("\nEnter The Alphabet :");
    scanf("%c",&c);
    if(c=='A'||c=='E'||c=='I'|| c=='O'||c=='U')
    {
        printf("\n%c is vowel",c); //printf("vovel");//printf("c is vovel");
    }
    else
    {
        printf("\n%c is not vowel",c); //printf("consonent");//printf("c is not vovel");
        }
}*/

    //  7.print message according to age
    /*#include<stdio.h>
    int main(){
        int age;
        printf("enter the age\n");
        scanf("%d",&age);
        if(age<18)
        {
            printf("you are children");
        }
        else if(age>=18 &&age<=60)
        {
            printf("you are young");
        }
        else if(age>=60 && age<=100)
        {
            printf("you are old");
        }
        else{
            printf("invalid age");
        }}*/

        // 8. read marks and input garde
        /*#include<stdio.h>
        int main(){
            int m;
            printf("\nEnter The Marks:");
            scanf("%d",&m);
            if(m<40)
            {
                 printf("\nFail");
                  }
                  else if(m>=40 && m<60) 
            {
                printf("\nPass");
    }
    else if(m>=60 && m<=80)
    {
        printf("\nFirst Class");
        }
    else if(m>=80 && m<=100)
    {
        printf("\nDistinction");
        }
    else
    {
        printf("\nInvalid Marks Input");
        }}*/

        // 9.determine largest among three number(if else)
       /* #include<stdio.h>
        int main(){
        int x,y,z;
        printf("\n enter three number");
        scanf("%d%d%d",&x,&y,&z);
        if(x>y && x>z)
        {
            printf("x is greater number");
        }
        else if(y>z && y>x)
        {
            printf("yis greater number");
        }
        else{
            printf("z is greater number");
        }}*/

        // 10. greater among three number (if)
        /*#include<stdio.h>
        int main(){
        int x,y,z;
        printf("\nenter three number");
        scanf("%d%d%d",&x,&y,&z);
        if(x>y && x>z){
            printf("x is greater");
        }
        if(y>x && y>z)
        {
            printf("y is greater");
        }
        if(z>x && z>y ){
            printf("z is greater");
        }}*/

        //11.Voting
/*#include<stdio.h>
int main(){
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you are eligible");
    }
    if(age<=18)
    {
        printf("you are not eligible");
    }
} */
        //    or,
 /*#include<stdio.h>
 int main(){
    int age;
    printf("enter age\n");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible");
    }
    else{
        printf("you are not eligibele");
    }
 }*/

// 12.login programe
/*#include<stdio.h>
#include<string.h>
int main(){
    char u[200]="sahanaafreen17@gmail.com",p[200]="Appu17";
    char u1[200],p1[200];
    printf("Enter username\n and enter password\n");
    scanf("%s%s",&u1,&p1);
    if (strcmp(u,u1) && strcmp(p,p1)==0)
    {
        printf("login sucessful");
    }
    else{
        printf("wrong username or password");
    }
}*/

// 13.check alphabhet is uper case or lower  case
/*#include<stdio.h>
int main(){
    char c;
    printf("enter any alphbhet\n");
    scanf("%c",&c);
    if(c>=65&&c<=90){
        printf("uppercase\n");
    }
    else{
        printf("lowercase");
        }
}*/

// 14.input three angle of triangle and check traingle is valid or not
/*#include<stdio.h>
#include<string.h>
int main(){
    float a,b,c;
    printf("enter three angle\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b+c==180){
        printf("trinagle is valid");
    }
    else{
        printf("tringle is not valid");
    }
}*/

// 15.calculate profit or loss
/*#include<stdio.h>
#include<stdio.h>
int main(){
    float sp,cp,p,l;
    printf("\nEnter cp and \n enter sp");
    scanf("%f%f",&cp,&sp);
    if(sp>cp){
        p=sp-cp;
        printf("profit is %f rupee",p);
    }
    else{
        l=cp-sp;
        printf("loss is %f rupee",l);
    }
}*/

//16. check given character is alphabhet ,digit or special symbol
/*#include<stdio.h>
int main(){
    char c;
    printf("enter any character\n");
    scanf("%c",&c);
    if(c>=65&&c<=97||c>=97&&c<=122)
    {
        printf("it is alphabhet");
    }
    else if(c>=48&&c<=57){
        printf("it is a digit");
    }
    else{
        printf("it is special symbol");
    }}*/

    // 17.show result according to percentahe useing if else
    /*#include<stdio.h>
int main(){
    float p;
    printf("Enter your percent");
    scanf("%f",&p);
    if(p>=60){
        printf("1st divi");
    } 
    else if(p>=45)
    {
        printf("2nd div");
    }
    else if(p>=33){
        printf("3rd div");
    }
    else
    {
        printf("fail");
    }}*/
    

    // switch case program

    //1.input any number and print day and week 
   /* #include<stdio.h>
int main(){
    int n;
    printf("enter integer\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("monday"); break;
        case 2:printf("tuesday"); break;
        case 3:printf("wednesday"); break;
        case 4:printf("thrusday"); break;
        case 5:printf("friday"); break;
        case 6:printf("saturday"); break;
        case 7:printf("sunday"); break;
        default:printf("invalid input");
    }}*/

    // 2.input any number and print month name and number
    /*#include<stdio.h>
int main(){
    int n;
    printf("enter any no\n");
    scanf("%d",&n);
    switch(n){
        case 1:printf("jan-31"); break;
        case 2:printf("feb-28/29"); break;
        case 3:printf("mar-31"); break;
        case 4:printf("april-30"); break;
        case 5:printf("may-31"); break;
        case 6:printf("jun-30"); break;
        case 7:printf("jul-31"); break;
        case 8:printf("aug-31"); break;
        case 9:printf("sep-30"); break;
        case 10:printf("oct-31"); break;
        case 11:printf("nov-30"); break;
        case 12:printf("dec-31"); break;
        }}*/

        // 3.check alphabet is cosonent or vowel
        // method 1:
        /*#include<stdio.h>
int main(){
    char c;
    printf("enter any alphabet\n");
    scanf("%c",&c);
    switch(c){
        case 'A':printf("vowel"); break;
        case 'E':printf("vowel"); break;
        case 'I':printf("vowel"); break;
        case 'O':printf("vowel"); break;
        case 'U':printf("vowel"); break;
        default:printf("consonent"); break;
    }}*/
    // method 2:
    /*#include<stdio.h>
int main(){
    char c;
    printf("Enter any alphabet\n");
    scanf("%c",&c);
    switch(c){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        printf("vowel");break;
        default:printf("cosonent");break;
    }}*/

    // 4. simple calculator program
    /*#include<stdio.h>
int main(){
    float x,y;
    char c;
    printf("\nenter 1st no and \n Enter second no");
    scanf("%f%f",&x,&y);
    printf("\n+ for add \n- for sub \n* for multiply\n/for division\n");
    scanf("\n%c",&c);
    switch(c){
        case '+':printf("add=%f",(x+y));break;
        case '-':printf("sub=%f",(x-y));break;
        case '*':printf("mul=%f",(x*y));break;
        case '/':printf("div=%f",(x/y));break;
        default:printf("invalid input");
    }}*/

    // 5.simple atm progrmam
    /*#include<stdio.h>
int main(){
    float amt,camt,damt;
    char c;
    printf("enter initial amount\n");
    scanf("%f",&amt);
    printf("enter\n c for credit \n for debit \n b for balance\n");
    scanf("\n%c",&c);
    switch(c){
        case 'c':printf("enter credit amt\n");
        scanf("%f",&camt);
        amt=amt+camt;
        printf("new acc=%f",amt);break;
        case 'd':printf("enter debit amt\n");
        scanf("%f",&damt);
        if(amt>=damt){
            amt=amt-damt;
            printf("new acc=%f",amt);break;
        }
        else{
            printf("insufficient balance");break;
        }
        case 'b':printf("amt in your acc=%f",amt);break;
        default:printf("invalid input!!");
    }}*/

    // 6. to read digits from user and print in word
/*#include<stdio.h>
int main()
{
    int n;
    printf("\nEnter The Number : ");
    scanf("%d",&n);
    switch(n)
    {
        case 0:printf("\nZERO");break;
        case 1:printf("\nONE");break;
        case 2:printf("\nTWO");break;
        case 3:printf("\nTHREE");break;
        case 4:printf("\nFOUR");break;
        case 5:printf("\nFIVE");break;
        case 6:printf("\nSIX");break;
        case 7:printf("\nSEVEN");break;
        case 8:printf("\nEIGHT");break;
        case 9:printf("\nNINE");break;
        default :printf("\nEnter No. between 0-9");
    }
}*/

// 7. To read character from user to print appropriate message
/*#include<stdio.h>
int main()
{
    char c;
    printf("\nEter the character ");
    scanf("%c",&c);
    switch(c)
    {
        case 'A':printf("\n Distinction");break;
        case 'B':printf(" 1st div");break;
        case 'C':printf("\n Pass");break;
        case 'D':printf("\nfail");break;
        default:printf("invalid input");
    }}*/

// 