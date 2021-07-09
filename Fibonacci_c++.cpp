#include <iostream>
using namespace std;

int main() {
    
    int a;
    cout << "Masukkan angka: ";
    cin >> a;
    
    int n1 = 0; int n2 = 1;
    
    if(a == 1){
        cout << n2 << endl;
    }
    
    else if(a > 1){
        for(int i = 0; i < a; i++){
            cout << n2 << endl;
            int temp = n1+n2;
            n1 = n2;
            n2 = temp;
        }
    }
    
}