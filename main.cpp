#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double M[12][12], sum = 0, mean = 0, result = 0;
    int Op=0, count=0;
    string Operation;
    std::cin >> Operation;
    if (Operation == "S"){
        Op = 1;
    }
    if (Operation == "M"){
        Op = 2;
    }
    for (int x = 0; x < 12;x++){
        for (int y = 0;y<12;y++){
            std::cin >> M[x][y];
        }
    }
    switch (Op){
        case 1:
            for (int x=0; x<12;x++){
                for (int y=0; y<12; y++){
                    if ((x+y)>11 && x<y){
                        sum = sum + M[x][y];
                    }
                }
            }
            result = sum;
            break;
        case 2:
            for (int x=0; x<12;x++){
                for (int y=0; y<12; y++){
                    if ((x+y)>11 && x<y){
                        sum = sum + M[x][y];
                        count++;
                    }
                }
            }
            mean = sum/count;
            result = mean;
            break;
        default:
            return 0;
            break;
    }
    std::cout << setprecision(1) << fixed << result << std::endl;
    return 0;
}
