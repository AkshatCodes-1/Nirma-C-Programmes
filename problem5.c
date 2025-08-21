/*
3.14*r*r=32000
r=sqrt 32000/3.14
peri=2 * 3.14* sqrt (32000/3.14) (2 * pi * r )
5*peri=2*3.14*sqrt (32000/3.14)*5
*/
#include <stdio.h>
#include<math.h>

int main(){
    float area=32000 , pi=3.14 , radius , perimeter , distance , distance_km ;
    radius=sqrt(area/pi);
    perimeter=2*pi*radius;
    distance=5*perimeter;
    distance_km=distance/1000;
    printf("the boy has covered %f kilometres", distance_km);


    

    return 0;
}