#include <iostream>
#include <cmath>
#include <stdlib.h>

using namespace std;
void convertor(){
            int index , dec , ans;
            dec = 0;
            cout << " Please enter the number of bits of the binary you wanna convert to decimal " << endl;
            cout << "   ";
            cin >> index;
            int bin[index];
            int bin2[index];
            int x = 0;
            cout << "Please enter the bits from left to right respectively and press space after each : " << endl;
                for(int i =0 ; i< index ; i++){                                                 // USED TO INSERT THE ELEMENTS OF THE FIRST ARRAY
                    cout << "   ";
                    cin >> bin[i];
                    cout << endl;
                    if( bin[i]!= 0 && bin[i] != 1){
                        cout << " ERROR !! " <<  endl;
                        cout << " Please enter a valid value of bit represented in binary ( 0 - 1) " << endl;
                        i--;
                    }
                }
                for(int i =0 ; i<index ; i++){                                                 // CREATING THE SECOUND ARRAY WHICH IS THE INVERS OF THE FIRST ONE ( TO MAKE THE COMPUTING MUCH EASIER :) ...)
                    bin2[i] = bin[(index-1)-i];

                }
                for(int i= 0; i<index ; i++){                                                  // multiplying the bits with 2 which has INCREMENTING POWER
                    ans = bin2[i]*pow( 2 , x );
                    dec = dec + ans;
                    x++;
                }
                cout << " The decimal number is :  " << dec << endl;

}  // woow !! did you understand the previous code ........ ALLOOONNNEE      :D :D :D

int main()
{
    int rep = 0;
    int cont;
    while(rep<1){
        convertor();
        cout << endl << endl << " Press (1) to continue & (0) to quit : " << endl;
        cin >> cont;
        if(cont == 0){
            rep++;
        }

    }



    system("pause");
    return 0;
}
