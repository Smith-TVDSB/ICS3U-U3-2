#include <iostream>
#include <string>
using namespace std;

bool inArray(int arr[25], int key)
{
    for(int k = 0; k < 25; k++){
        if(arr[k] == key){
            return true;
        }
    }
    return false;
}