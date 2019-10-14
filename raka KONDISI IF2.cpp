//Tentukan Nilai ujian jika mendapatkan nila 85?
#include <iostream>
using namespace std;

int main (){
    int Nilai;
    char skor;
  
    cout << "Masukan Nilai Ujian : ";
    cin >> Nilai;
  
    if (NilaiUjian >= 90){
         skor='A';
    }
    else if (NilaiUjian >= 70){
        skor='B';
    }
    else if (NilaiUjian >= 60){
        skor='C';
    }
    else if (NilaiUjian >= 50){
        skor='D';
    }
    else{
        skor='E';
    }
    cout<<"Skor : " << skor << endl;
}
