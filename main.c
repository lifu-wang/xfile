#include <stdio.h>


void check_xmas(int month, int day) 
{
	if (month == 12 && day == 25) 
		printf("Merry X'mas!!!\n");
	else 
		printf("%d/%d is not Xmas yet\n", month, day);
	return;
}


int main(int argc, char **agrv) {
	printf("main(): Just Started...\n");
	check_xmas(12, 10);
	check_xmas(12, 25);
	printf("Completed\n");
	return 0;
}
