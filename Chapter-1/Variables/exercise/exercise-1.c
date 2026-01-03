#include <stdio.h>

int main (){
    //char
    signed char signedChar = 125;
    unsigned char unsignedChar = 255;

    //short
    signed short signedShort = -34;
    unsigned short unsignedShort = 252;

    //int
    signed int signedInt = -400;
    unsigned int unsignedInt = 60000;

    //long
    signed long signedLong = -400000000L;
    unsigned long unsignedLong = 800000000000UL;

    //long long
    signed long long signedLongLong = -592394304402843LL;
    unsigned long long unsignedLongLong = 4414312533474246677LL;

    //float
    float floatType = 5.6789f;

    //double
    double doubleType = 34.5667329295;

    //long double
    long double longDoubleType = -425.429876542342637L;

    printf("signed char: %hhd\n", signedChar);
    printf("unsigned char: %hhu\n", unsignedChar);

    printf("signed short: %hd\n", signedShort);
    printf("unsigned short: %hu\n", unsignedShort);

    printf("signed int: %d\n", signedInt);
    printf("unsigned int: %u\n", unsignedInt);

    printf("signed long: %ld\n", signedLong);
    printf("unsigned long: %lu\n", unsignedLong);

    printf("signed long long: %lld\n", signedLongLong);
    printf("unsigned long long: %llu\n", unsignedLongLong);

    printf("float: %f\n", floatType);
    printf("double: %lf\n", doubleType);
    printf("long double: %Lf\n", longDoubleType);

    return 0;
}