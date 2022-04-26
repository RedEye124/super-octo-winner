#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a,b,c,result;
    int ch;
        printf("Enter the 3 numbers:\n");
    scanf(" %d\n %d\n %d\n",&a,&b,&c);
      
 printf("1-Arithmetic operators\n2-Increment and Decrement operator\n3-Assignment operator\n4-Relational operator\n5-Logical operator\n6-Conditional operators\n7-Bitwise Operators");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        if(c=0)
        printf("a+b = %d",a+b);
        printf("a-b = %d",a-b);
        printf("a*b = %d",a*b);
        printf("a/b =%d",a/b);
        printf("a modulus b = %d",a%b);
        break;
        
        case 2:
        if(b==0&&c==0)
        printf("++a = %d",++a);
        printf("a++ = %d",a++);
        printf("a-- = %d",a--);
        printf("--a = %d",--a);
        break;
        
        case 3:
        c = a;      // c is 5
        printf("c = %d\n", c);
        c += a;     // c is 10 
        printf("c = %d\n", c);
        c -= a;     // c is 5
        printf("c = %d\n", c);
        c *= a;     // c is 25
        printf("c = %d\n", c);
        c /= a;     // c is 5
        printf("c = %d\n", c);
        c %= a;     // c = 0
        printf("c = %d\n", c);
        break;
        
        case 4:
        
        printf("%d == %d is %d \n", a, b, a == b);
        printf("%d == %d is %d \n", a, c, a == c);
        printf("%d > %d is %d \n", a, b, a > b);
        printf("%d > %d is %d \n", a, c, a > c);
        printf("%d < %d is %d \n", a, b, a < b);
        printf("%d < %d is %d \n", a, c, a < c);
        printf("%d != %d is %d \n", a, b, a != b);
        printf("%d != %d is %d \n", a, c, a != c);
        printf("%d >= %d is %d \n", a, b, a >= b);
        printf("%d >= %d is %d \n", a, c, a >= c);
        printf("%d <= %d is %d \n", a, b, a <= b);
        printf("%d <= %d is %d \n", a, c, a <= c);
        break;
        
        case 5:
        result = (a == b) && (c > b);
        printf("(a == b) && (c > b) is %d \n", result);

        result = (a == b) && (c < b);
        printf("(a == b) && (c < b) is %d \n", result);

        result = (a == b) || (c < b);
        printf("(a == b) || (c < b) is %d \n", result);

        result = (a != b) || (c < b);
        printf("(a != b) || (c < b) is %d \n", result);

        result = !(a != b);
        printf("!(a != b) is %d \n", result);

        result = !(a == b);
        printf("!(a == b) is %d \n", result);
        break;
        
        case 6:
        printf("Bitwise And = %d",a&b);
        printf("Bitwise OR = %d",a|b);
        printf("Bitwise XOR = %d",a^b);
        break;
    }
    return 0;
}