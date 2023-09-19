/*
 * Creator: Fasih Hasan
 * Date: 19/9/23
 * Description: Give appropriate greetings for certain times
 */

#include <stdio.h>

void main() {
	int time;

	printf("Input time: ");
	scanf("%d", &time);

	if (time >= 5 && time <= 11) {
		printf("Good Morning");
	} else if (time >= 12 && time <= 18) {
		printf("Good Afternoon");
	} else {
		printf("Good Night");
	}
} // end main
