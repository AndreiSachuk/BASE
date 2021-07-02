#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{   
    cout<<"    *    "<<endl;
    cout<<"   * *   "<<endl;
    cout<<"  *   *   "<<endl;
    cout<<" ******* "<<endl;
    cout<<"    *    "<<endl;

    return 0;
    
}


/*    int chislo;
    int count = 0;
    cin >> chislo;
    string out;
    do  
    {
        out+= to_string(chislo%2) ;
        count++;
        chislo/=2;
        
    } while (chislo!=0);
    reverse(out.begin(), out.end());
    cout << out << endl;
    for (int i=0; i<(count-1); i+=2)
    {
        if (out[i] == '1' and out[i+1] == '0'){}else {cout << "no" << endl; return 0;}
    } 

    cout << "yes" << endl;
    return 0;*/