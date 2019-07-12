#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_9 = 64;            // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_8[58];        // Tag.BODY
    char entity_4[10];        // Tag.BODY
    entity_2 = 8;             // Tag.BODY
    entity_7 = 95;            // Tag.BODY
    if(entity_2 < entity_7){  // Tag.BODY
    entity_2 = 15;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4[entity_9] = '7'; // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2 = 95;            // Tag.BODY
    }                         // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_0[76];        // Tag.BODY
    entity_8[entity_2] = 'j'; // Tag.BUFWRITE_COND_SAFE
    entity_5 = 99;            // Tag.BODY
    entity_0[entity_5] = 'j'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER