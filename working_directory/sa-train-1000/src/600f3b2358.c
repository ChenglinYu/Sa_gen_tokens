#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 61;            // Tag.BODY
    entity_8 = 76;            // Tag.BODY
    char entity_4[3];         // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = rand();        // Tag.BODY
    char entity_0[56];        // Tag.BODY
    if(entity_7 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 53;            // Tag.BODY
    entity_0[entity_8] = 't'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    char entity_1[57];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_4[entity_7] = '5'; // Tag.BUFWRITE_COND_UNSAFE
    entity_3 = 50;            // Tag.BODY
    entity_1[entity_3] = '5'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER