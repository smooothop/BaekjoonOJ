#include <iostream>
#include <math.h>
using namespace std;

int main() {

    long n;
    int ser = 1;
    long count = 1;
    int wall_count = 1;


    cin >> n;

    while(count != n+1) {        

        ser = 3 * pow(wall_count, 2) - 3 * wall_count + 1;

        if((count - 1) % ser == 0) {
            wall_count++;
        }
        
        count++;
    }
    cout << wall_count;


    return 0;
}