#include <bits/stdc++.h>
using namespace std;
// C program when i am assuming that you are giving the weekno(w) on the basis of the year, that is
// the number of weeks since the start of the year.
bool isLeap(int year)
{
    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
        return true;
 
    return false;
}
 
int daysInAMonth(int month)
{
    switch (month)
    {
    case 12:
        return 31;
    case 11:
        return 30;
    case 10:
        return 31;
    case 9:
        return 30;
    case 8:
        return 31;
    case 7:
        return 31;
    case 6:
        return 30;
    case 5:
        return 31;
    case 4:
        return 30;
    case 3:
        return 31;
    case 2:
        return 28;
    case 1:
        return 31;
    }
}
 
int date(int week_day, int week, int month, int year)
{
    int total_days = 0;
    if (isLeap(year))
        total_days += 1;
 
    total_days = week * 7 + week_day;
    for(int i=1; i<month; i++) {
        total_days -= daysInAMonth(i);
    }
    return total_days;
}
 
int main()
{
    int w, m, y;
    int w_day;
    cin>>w;
    cin>>m;
    cin>>y;
    cin>>w_day;
 
    cout<<date(w_day, w, m, y)-1<<endl;
 
    return 0;
}

