#include <iostream>
using namespace std;

void sedzia(Punkt pkt, Porstokat p)
{
if ((pkt.x>p.x)&&(pkt.x<<=p.x+p.szerokosc)
&&(pkt.y>p.y)&&(pkt.y<=p.y+p.wysokosc)

cout<<endl<<"Punkt "<< pkt.nazwa<<" nalezy do prostokata: "<<p.nazwa;
else
    cout<<endl<<"Punt"<<pkt.nazwa<<" leży POZA prostokatem: "<< p.nazwa;

}
int main() {

        Punkt pkt1( " A, 3,1") ;
        Prostokat p1 (" Prostokat", 0,0,6,4);
        return 0;
}
