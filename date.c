#include <stdio.h>
#include "date.h"
void inputDate(Date *d)
{
	printf("Nhap ngay thang nam: "); scanf("%d %d %d",&d->day,&d->month,&d->year);
}
void outputDate(Date d)
{
	printf("%d - %d - %d",d.day,d.month,d.year);
}
