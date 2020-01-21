#include <iostream>
#include<sstream>
using namespace std;




int DectoBin(int dec){
    int byte[8]={};
    //byte[8]=bin;
    int usenum=dec;
    for(size_t i=0; i<8;i++){
        int bin;
        if(usenum %2==0){
            bin =0;
            byte[i]=bin;
        }
        else{
            bin=1;
            byte[i]=bin;
        }
        usenum=usenum/2;
    }
    cout<<"byte[3]"<<byte[3];
    cout<<"byte[8]"<<byte[8];
    cout<<"binary="<<byte[0]<<byte[1]<<byte[2]<<byte[3]<<byte[4]<<byte[5]<<byte[6]<<byte[7];
    string binarynum;
    for(int i=7;i>-1;i--){
     binarynum+=std::to_string(byte[i]);
    }
    cout<<"binary string="<<binarynum;


    //int n =sizeof(byte);
    //std::ostringstream os;
    //for(unsigned i; i<n;i++){
      //  if(i){
        //    os<<byte[i];
        //}
        //std::string s(os.str());
       // cout<<s;

    }
    

int main(){
    int int2;
    cout<<"Please enter a decimal number to convert";
    cin>>int2;
    DectoBin(int2);
    return 1;
    

}
