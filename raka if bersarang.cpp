//Peringkat berapa jika skor 100?

 #include <iostream> 
 using namespace std;
  int main ()
  {
  int skor;
  cout<<"masukkan skor : "; cin>>skor;
  if((skor>=50)&&(skor<=100))
  {
  cout<<"rookie";
  }else if((skor>=100)&& (skor<500))
  {
  cout<<"advandce";
  } else if((skor>=500)&& (skor<=1000))
  {
  cout<<"expert";
  }
  else
  {
  cout<<"tidak ada peringkat";
  }
  return 0;
}
