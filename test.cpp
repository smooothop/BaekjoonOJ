#include <iostream>
#include <math.h>
#include <cstring>
#include <chrono>
using namespace std;
using namespace chrono;

int main () {


    system_clock::time_point start_time = system_clock::now();

    char a[100] = {0};
    int b[100] = {0};
    int sum = 0;
    cin >> a;

    int len = strlen(a);
    for(int i = len - 1; i >= 0; i--) {
        if(65 <= a[i] && a[i] <= 70) {
            
        }
        else if (48 <= a[i] && a[i] <= 57){
            sum += (a[i] - 48) * pow(16, len - i - 1);
        }
    } 
    // char s = '0';
    cout << sum;









    system_clock::time_point end_time = system_clock::now();

    milliseconds ms = duration_cast<milliseconds>(end_time - start_time);
    seconds sec = duration_cast<seconds>(end_time - start_time);

    cout << endl << ms.count() << "ms" << endl << sec.count() << "s";
}