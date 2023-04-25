#include "main.h"
int len_num(int num)
{
    if (num == 0)
    {
        return(0);
    }
    return(1 + len_num(num / 10));
}
