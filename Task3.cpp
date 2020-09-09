#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout<<"Enter High"<<endl;
    double High;
    cin>>High;
    cout<<"Enter time interval"<<endl;
    double interval;
    cin>>interval;
    double TimeFall;
    float g=9.81;
    TimeFall= sqrt(2*High/g);
    double buff= TimeFall/interval;
    int count= floor(buff);//количество полных интервалов, которое пройдет до столкновения
    //cout<<count<<endl;
    buff= fmod (buff, 1);//время которое шарик будет лететь после удара до следующего замера высоты
    //cout<<buff;
    double v;
    double H_now;
    for (int i=1; count>=i; i++){
        v=g*interval*i;
        H_now= High-((g*interval*interval*i*i)/2);
        cout<<"Speed: "<<v<<"   High: "<<H_now<<endl;
    }

    return 0;
}