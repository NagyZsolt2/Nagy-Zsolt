#include <iostream>

using namespace std;

int main()
{
    int szam , szamjegy ;
    int ujszam=0 ;
    cin>>szam ;
    int temp=szam ;
    while(szam>0) {
        szamjegy=szam%10 ;
        szam=szam /10 ;
        cout<<szamjegy<<endl ;
    }
    return 0;
}
