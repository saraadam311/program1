#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
    cout << "Task 6 "<<endl;
    cout << "Enter a number : ";
    int n ;
    cin >> n;
    cout << "Enter a string : ";
    string name;
    cin >> name;
    for (int i=0;i<n;i++){
        cout << name;
    }cout << endl;
    cout << "Task 7-(a)"<<endl;
    for (int i=0;i<10;i++){
        for (int j=0;j<i;j++){
            cout << "*";
        }cout << endl;
    }
        cout << "Task 7-(b)"<<endl;
        int x,nfr=10,noc=nfr-1;
        for (int x=1;x<nfr;x++){
        for (int z=1;z<noc;z++){
            cout << " ";
        }noc--;
        for (int y=1;y<=x;y++){
            cout << "*";
        }cout << endl;
    }
            cout << "Task 7-(d)"<<endl;
            for (int n=0;n<10;n++){
                for (int m=n;m<10;m++){
                    cout << "*";
                }cout << endl;
            }
            cout << "Task 8 (ASCII)"<<endl;
            for (int num = 0 ;num<=255;num++){
                cout << "  "<<num <<" = "<<(char) num<<endl;
            }




}
