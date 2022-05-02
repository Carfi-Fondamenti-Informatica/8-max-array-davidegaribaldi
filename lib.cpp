#include "lib.h"
float massimo(float val [] , int a)
{
    float max=0;
    max=val[0];
    for(int i=1;i<a;i++)
    {
        if(val[i]>max)
        {
            max=val[i];
        }
    }
    return max;
}
