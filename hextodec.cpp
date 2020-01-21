#include <iostream>
using namespace std;
int DectoBin(int dec){
    int bin;
    if (dec %2 ==0){ //if dec is even first no is 0
        bin=0;
        int newdec = dec/2;
       cout<<bin;
    }
    else{
        bin=1;
        cout<<bin;
        int newdec= dec/2
    }
       

    int byte[8]={};
    byte[8]=bin;
    cout<<"byte="<<byte[8];
    
    
    
}
int main(){
    int int2;
    cout<<"Hello World";
    cout<<"Please enter 2 in binary";
    cin>>int2;
    DectoBin(int2);
    return 1;
    

}
