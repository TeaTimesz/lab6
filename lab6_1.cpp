#include<iostream>
using namespace std;

int main(){
    int temp;
    int num[2]={};
    
    cout << "Enter an integer: ";
    cin >> temp;

    while(temp != 0){
        if(temp % 2 == 0){
            num[0]++;
        }else{
            num[1]++;
        }
        cout << "Enter an integer: ";
        cin >> temp;
    }   

    cout << "#Even numbers = " << num[0] << endl;
    cout << "#Odd numbers = " << num[1] << endl;
    return 0;
}
