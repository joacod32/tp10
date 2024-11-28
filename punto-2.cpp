#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){


srand(time(0));


int randomNum = rand() % 50;

cout << randomNum;
return 0;
}
