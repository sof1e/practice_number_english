#ifndef numbers
#define numbers
#define public
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define hundred 0
#define thousand 1
#define million 2
#define billion 3

public int rank(int num); // для расчета количества знаков
public void dig1(int num); // для 1-9
public void dig2(int num); // для 10 - 99 
public void dig3(int num); // для 100 - 999
public void dig4(int num); // для 1 000 - 9 999
public void dig5(int num); // для 10 000 - 99 999
public void dig6(int num); // для 100 000 - 999 999
public void dig7(int num); // для 1 000 000 - 9 999 999
public void dig8(int num); // для 10 000 000 - 99 999 999
public void dig9(int num); // для 100 000 000 - 999 999 999
public void dig10(int num); //для 1 000 000 000 - 9 999 999 999

#endif