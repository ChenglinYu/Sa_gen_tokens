#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_0 = 13;            // Tag.BODY
    entity_8 = 64;            // Tag.BODY
    char entity_6[83];        // Tag.BODY
    char entity_5[30];        // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 21;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = 35;            // Tag.BODY
    char entity_3[44];        // Tag.BODY
    entity_3[entity_4] = 't'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_1] = '5'; // Tag.BUFWRITE_COND_SAFE
    entity_6[entity_8] = 'X'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER