#include <stdio.h>
int lcm(int, int);
int main()
{
    int a, b, result;
    printf("INPUT \nInput first number:");
    scanf("%d",&a);
    printf("Input second number:");
    scanf("%d",&b);
    result = lcm(a, b);
    printf("OUTPUT \nLCM of %d and %d = %d\n", a, b, result);
    return 0;
}
int lcm(int a, int b)
{ 
    static int temp = 1; 
    if (temp % a == 0 && temp % b == 0)
    {
        return temp;
    }
    else
    {
    	temp++;
    	lcm(a, b);
    	return temp;
	}
}
