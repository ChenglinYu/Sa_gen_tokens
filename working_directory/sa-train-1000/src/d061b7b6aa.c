#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_0[54];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 73;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 69;            // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_8[43];        // Tag.BODY
    entity_3 = 46;            // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_1[32];        // Tag.BODY
    entity_1[entity_3] = 'D'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_0[entity_6] = 'H'; // Tag.BUFWRITE_COND_UNSAFE
    entity_5 = 55;            // Tag.BODY
    entity_8[entity_5] = 'l'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER