#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_7 = 76;            // Tag.BODY
    char entity_3[54];        // Tag.BODY
    if(entity_1 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 95;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[71];        // Tag.BODY
    entity_3[entity_1] = '9'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_5[10];        // Tag.BODY
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 22;            // Tag.BODY
    entity_8 = 20;            // Tag.BODY
    entity_5[entity_8] = 'W'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_0] = 'e'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER