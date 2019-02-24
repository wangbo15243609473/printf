//
//  fund.c
//  
//
//  Created by gridsum on 2019/2/24.
//

#include "fund.h"
#include <stdio.h>
#define FUNDLEN 50

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund
};

double sum(stuct funds moolah);

int main(void)
{
    struct funds stan={
        "Garlic-melon Bank",
        4032.27,
        "Lucky's Savings and Loan",
        8573.24
    };
    
    printf("Stan has a total of $%.2f\n",sum(stan));
    return 0;
}

double sum(struct funds moolah)
{
    return(moolah.bankfund+moolah.savefund);
}
