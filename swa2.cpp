#include<iostream>
using namespace std;
int main() {
    int i, t;
    int arr[6]={2,4,3,5,8,7};
   for (i = 0; i<=5; i++) {
        cout<<"  "<<arr[i];
    }
    cout<<"\n";
    //swapping
    for(i=0;i<=6;i+=2){
    if(i+1<5){
        swap(arr[i+1],arr[i]);
    }
    }
    cout << "Array List after Swapping:";
    for (i = 0; i<=6; i++) {
        cout << arr[i] << "   ";
    }
    return 0;
}
