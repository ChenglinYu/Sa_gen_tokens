#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_4[11];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_9[98];        // Tag.BODY
    entity_5 = 72;            // Tag.BODY
    entity_1 = 0;             // Tag.BODY
    entity_4[entity_1] = 'C'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_8 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 59;            // Tag.BODY
    }                         // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 31;            // Tag.BODY
    entity_9[entity_8] = 'X'; // Tag.BUFWRITE_COND_SAFE
    char entity_6[68];        // Tag.BODY
    entity_6[entity_0] = 'e'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER