#include <stdio.h>
#include <stdlib.h>
int function(float);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float age;    /* user weight             */

	printf("Are you worth your age in second?\n");
	printf("Let's check it out.\n");
	printf("Please enter your age in years: ");/*get input from the user  */
	scanf("%f", &age);      /* assume platinum is $1700 per ounce          */
							   /* 14.5833 converts pounds  */
	printf("I will summon the butler function.\n");
	function(age);
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	getchar();
	return 0;
}

int function(float age)       /* start of function definition */
	{
		double value;     /* platinum equivalent     */

		value = 3.156E10 * age;
		printf("age = %f\n", age);
		//���⿡ �ڵ��ϴ� ���� �ʿ���
		printf("Your age in second is %Esecond.\n", value); // �Ҽ��� ���ڸ� ���
		system("pause");
		return 0;
	}
