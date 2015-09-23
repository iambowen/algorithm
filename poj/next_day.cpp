#include <iostream>
#include <cstdio>

using namespace std;
int leapYear(int year){
    if( (year % 4 != 0) || (year % 100 == 0 && year % 400 != 0) || year % 3200 == 0){
      return 0;
    } else {
      return 1;
    }

}

int main(){
  int year, month, day;

  scanf("%d-%d-%d",&year,&month,&day);
  switch (month) {
    case 12:
        year = year + (month + day / 31) / 12;
        month = (month + day / 31) % 12;
        day = day + 1 > 31 ? 1 : day + 1;
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        month = month + day / 31;
        day = day + 1 > 31 ? 1 : day + 1;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        month = (month + day / 30);
        day = day + 1 > 30 ? 1 : day + 1;
        break;
    case 2:
        if(leapYear(year) == 1){
          month = (month + day / 29);
          day = day + 1 > 29 ? 1 : day + 1;
        } else {
          month = month + day / 28;
          day = day + 1 > 28 ? 1 : day + 1;
        }
        break;
    default: break;
  }

  printf("%d-%02d-%02d\n", year, month, day);

  return 0;
}
