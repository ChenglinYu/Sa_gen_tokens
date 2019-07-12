#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_6[63];        // Tag.BODY
    entity_3 = 18;            // Tag.BODY
    entity_9 = 67;            // Tag.BODY
    entity_5 = 78;            // Tag.BODY
    char entity_4[44];        // Tag.BODY
    if(entity_3 < entity_5){  // Tag.BODY
    entity_3 = 44;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4[entity_9] = 'e'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_3] = 'n'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER