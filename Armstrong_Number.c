#include <stdio.h>
int main()
{
int num, original, rem, sum = 0;
printf("Enter a three-digit Number: ");
scanf("%d", &num);
original = num;
while(original != 0)
{
rem = original%10;
sum =sum + rem*rem*rem;
original=original/ 10;
}
if(sum == num)
printf("%d is an Armstrong number.",num);
else
printf("%d is not an Armstrong number.",num);
return 0;
}
/*153 = (1*1*1)+(5*5*5)+(3*3*3)
where:
(1*1*1)=1
(5*5*5)=125
(3*3*3)=27
So:
1+125+27=153
Let's try to understand why 371 is an Armstrong number.

371 = (3*3*3)+(7*7*7)+(1*1*1)
where:
(3*3*3)=27
(7*7*7)=343
(1*1*1)=1
So:
27+343+1=371
*/
