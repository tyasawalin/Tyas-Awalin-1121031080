#include <iostream>
#include <windows.h>

using namespace std;
//nama: Tyas Awalin Nisa Magfiroh
//NIM: 1121031080
//kelas:B

int main()
{
    int HH,MM,SS,a,b;
    b=a=0;
    while(b==0)
    {
    cout<<"set jam : "<<endl;
    cin>>HH;
    cout<<"set menit : "<<endl;
    cin>>MM;
    cout<<"set detik: "<<endl;
    cin>>SS;
    if (HH<<23 && MM << 59 && SS <<59)
    b++;
    else
        system ("cls");
    }
    while (a==0)
        {
        system ("cls");
        cout << HH << ":" << MM << ":" << SS << endl;
        Sleep(1000);
        SS++;
        if (SS>59)
        {
            SS=0;
       MM++;
        }

        if (MM > 59)
        {
            MM=0;
        HH++;
        }
        if (HH > 23)
        {
            HH=0;
        }
        }
        return 0;
}
