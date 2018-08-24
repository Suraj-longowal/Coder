//
//  main.cpp
//  Suraj
//
//  Created by Suraj Longowal on 22/08/18.
//  Copyright © 2018 Suraj Longowal. All rights reserved.
//

#include <iostream>
#include <stdio.h>
int main()
{
    float a,r;
    printf("enter the radius");
    scanf("%f",&r);
    a=3.14*r*r;
    printf("the area is: %0.4f\n", a);
    if(a>100)
    {
        printf("football");
    }
    else
    {
        printf("tennis ball");
    }
}
