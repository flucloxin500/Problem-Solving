#include <iostream>
#include <cmath>

using namespace std ;

int main (){

    double A , B , fl , ro , ce ;
    cin>>A>>B;
    fl = A/B ;
    ro = A/B ;
    ce = A/B ;
    
    cout<<"floor "<<A<<" / "<<B <<" = "<< floor(fl) <<endl;
    cout<<"ceil "<<A<<" / "<<B <<" = "<< ceil(ce) <<endl;
    cout<<"round "<<A<<" / "<<B <<" = "<< round(ro) <<endl;

}