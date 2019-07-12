#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    char entity_4[54];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_1 = 1;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    if(entity_6 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 85;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_4[entity_6] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_2[33];        // Tag.BODY
    entity_3 = 84;            // Tag.BODY
    entity_2[entity_3] = 'g'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER