#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_7[46];        // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_8 = 22;            // Tag.BODY
    char entity_0[51];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7[entity_8] = 'T'; // Tag.BUFWRITE_TAUT_SAFE
    entity_2 = 22;            // Tag.BODY
    entity_3 = 67;            // Tag.BODY
    if(entity_3 < entity_2){  // Tag.BODY
    entity_3 = 76;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    }                         // Tag.BODY
    char entity_1[31];        // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_0[entity_3] = 'u'; // Tag.BUFWRITE_COND_SAFE
    entity_5 = 93;            // Tag.BODY
    entity_1[entity_5] = '5'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER