#include <stdio.h>
#include <stdlib.h>
int function(float);

/* ANSI/ISO C function prototyping */
int main(void) 
{
	float weight;    /* user weight             */

	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");/*get input from the user  */
	scanf("%f", &weight);      /* assume platinum is $1700 per ounce          */
							   /* 14.5833 converts pounds  */
	printf("I will summon the butler function.\n");
	function(weight);
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	getchar();
	return 0;
}

int function(float weight)       /* start of function definition */
	{
		double value;     /* platinum equivalent     */

		int year, month, day, current_year, current_month, current_day, total;
		float convert;

		printf("Enter the date of birth.\n");
		printf("ex) YYYY MM DD\n");
		scanf("%d %d %d", &year, &month, &day);
		printf("The date of birth entered is %d %d %d\n\n", year, month, day);

		printf("Enter the current date.\n");
		printf("ex) YYYY MM DD\n");
		scanf("%d %d %d", &current_year, &current_month, &current_day);
		printf("The current date is %d %d %d\n\n", current_year, current_month, current_day);

		total = ((current_year * 365) + (current_month * 30) + current_day) - ((year * 365) + (month * 30) + day);
		printf("The date of your life is %d days.(I assumed a month for thirty days.)\n\n", total);
		convert = (float)total / 365;
		printf("%d days are %.5fyear.\n\n", total, convert);
		value = 3.156E10 * convert;
		printf("age(Unit:float year) = %.5f\n\n", convert);
		//여기에 코딩하는 것이 필요함
		printf("Your age in second is %Esecond.\n", value); // 소숫점 두자리 출력
		system("pause");
		return 0;
	}
