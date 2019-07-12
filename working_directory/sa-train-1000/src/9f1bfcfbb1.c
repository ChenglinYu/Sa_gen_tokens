#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[0];         // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_2 = 62;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 5;             // Tag.BODY
    }                         // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_7[23];        // Tag.BODY
    entity_1[entity_4] = 'z'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_8;             // Tag.BODY
    char entity_0[64];        // Tag.BODY
    entity_3 = 16;            // Tag.BODY
    entity_0[entity_3] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 63;            // Tag.BODY
    entity_7[entity_8] = 'E'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER