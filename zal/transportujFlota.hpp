#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{

    int N = 0;
    for (int i = 1; N<=towar; ++i ) 
    {
        if (N=0) 
        {
            std::cout << "nie ma towaru do transportu" << std::endl;
        }
        else {
        
            s* numer     = new s[i];
            t* transport = new t[i];

            Stocznia stocznia{};
            Statek*  s[i];
            double   t[i] = s[i]->transportuj();

            N = N + c;

            delete[] numer;
            delete[] transport;
            delete s[i];
            delete t[i];
        
        }
        
    }

   


    return 0;
}