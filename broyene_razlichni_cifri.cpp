#include <iostream>

using namespace std;
int razlichni(int p)
{
    int s=1;
int edp=p%10;
int desp=(p/10)%10;
int stotp=(p/100)%10;
int hilp=p/1000;

    ((edp==desp)||(edp==stotp)||(edp==hilp)||(stotp==hilp)||(stotp==desp)||(desp==hilp)) ? s= 0: s;
return s;
    
}
int main() {
    int x=1;
    int y=0;
    int z=1023;
    for(x=123; x<=9999; x++)
    {
     //  cout<<x<<" => "<<razlichni(x)<<endl;
    //   if(razlichni(x)!=0) cout<<x<<endl;
      razlichni(x) ? y++: y;
    }

    cout<<"Sum of broy razlichite = " << y;
}

