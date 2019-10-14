//apakah boleh membeli tiket bioskop jika berumur 18? 

#include <iostream>
using namespace std;
     
     int main(){
       
        int umur;
       
        cout<<"berapakah Umur anda :" ;
        cin>>umur;
       
        if(umur >= 18){
            cout<<"--------------------------------"<<endl;
            cout<<"Anda bisa membeli tiket bioskop"<<endl;
         }else{
            cout<<"--------------------------------"<<endl;
            cout<<"Anda masih di bawah umur"<<endl;
           
         }
     }
