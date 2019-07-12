#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_5 = 72;            // Tag.BODY
    char entity_1[41];        // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 49;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 85;            // Tag.BODY
    entity_1[entity_6] = 'P'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;             // Tag.BODY
    char entity_3[1];         // Tag.BODY
    char entity_0[76];        // Tag.BODY
    entity_3[entity_8] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 5;             // Tag.BODY
    entity_0[entity_2] = 'm'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER