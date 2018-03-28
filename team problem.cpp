#include <iostream>
#include <string>
using namespace std;

int main()
{    // FCI – Programming 1 – 2018 - Assignment 2
// Program Name: call cost
// Last Modification Date: 1/3/2018
// Author1 and ID and Group: sara zakareia adam .. 15 .. 20170384
// Author2 and ID and Group: nadia idris .. 16 .. 20170382
// Author3 and ID and Group: malaz salah .. 15 .. 20170415
// Teaching Assistant: Samar and Aliaa for 16
// Purpose: calculate the costs of a call

    string day;
    char B ;
    int hours_time,minutes_time,length_minutes;
    float cost;
    do {
    cout << "Enter the first two characters of the day of the week : ";
    cin >>day;
    cout <<"Enter the time the call started in 24 hours notation (hours : minutes) "<<endl ;
    cout << "Hours : ";
    cin >> hours_time;
    cout << "Minutes : ";
    cin >> minutes_time;
    cout << "So the call time was => " << hours_time << " : " << minutes_time <<endl;
    cout << "Enter the length of call in minutes please! : " ;
    cin >> length_minutes;
    if (day=="mo"||"th"||"we"||"tu"||"fr"||"MO"||"TH"||"WE"||"TU"||"FR"||"Mo"||"Th"||"We"||"Tu"||"Fr"||"mO"||"tH"||"wE"||"tU"||"fR")
           {
            if (8 <= hours_time <18 )
                cost=0.4*length_minutes;
            else if (hours_time==18 && minutes_time==0)
                 cost=0.4*length_minutes;
            else
                cost = 0.25 * length_minutes;

    }else{
       cost = 0.15 * length_minutes;
       }
       cout << "your call costs : " << cost << " $" <<endl;
     cout << "If you want to restart Enter Y ,if not Enter N"<< endl;
     cin >> B;}
    while (B=='Y');



}
