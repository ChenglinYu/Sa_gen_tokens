#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_5 = 61;            // Tag.BODY
    char entity_6[33];        // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    if(entity_1 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 29;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_1] = 'e'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER