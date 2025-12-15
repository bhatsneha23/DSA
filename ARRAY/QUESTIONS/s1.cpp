#include<iostream>
using namespace std;
int main () {
    int n ;
    cout<<"ENTER TOTAL NUMBER OF ELEMENTS PRESENT IN AN ARRAY: ";
    cin>>n;

    int arr[n];
    cout<<"ENTER "<<n<<" COMPONENTS PRESENT IN ARRAY: " ;  
    for(int i = 0 ; i<=n-1 ; i++ ) {
        cin>>arr[i];
    }

    int multiply = 1;
    for(int i = 0 ; i<=n-1 ; i++ ) {
        multiply = multiply*arr[i];
    }
    cout<<multiply;
}
