#include <stdio.h>
#include <stdlib.h>
#include "date.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Date d;
	inputDate(&d);
	outputDate(d);
	return 0;
}
