// C program when i am assuming that you have given the weekno(w) from the start of the month, that is the number of weeks
// since the start of the month
#include <bits/stdc++.h>
using namespace std;
// Function to find first day of month using century code,month code and day code
int dayofweek(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}
int main() {
    int m,y,w,w_no,date=0;
    cin>>m;
    cin>>y;
    cin>>w;
    cin>>w_no;
    int firstday = dayofweek(01, m, y);
    // Calculating date on the basis of first day of month
    int remdays = 7 - firstday;
    if(w>1)
    {
        w = w-2;
        if(w>0)
            date = w*7;
        date = date + remdays + w_no ;


    }
    else 
    date = w_no;
    cout<<date<<"/"<<m<<"/"<<y<<endl;
    return 0;
}


/*
 input: 1
	2019
	2
	1
output: 6/1/2019

Explanation: i have assumed it on the basis of the example like if i want to know the date of the second saturday pf the
month then i would give w = 2 and w_no = 7
*/
