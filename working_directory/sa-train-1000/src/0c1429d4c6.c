#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_8[50];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 75;            // Tag.BODY
    entity_4 = 71;            // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    entity_4 = 11;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 94;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_4] = 'z'; // Tag.BUFWRITE_COND_SAFE
    char entity_7[31];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 36;            // Tag.BODY
    entity_7[entity_3] = '7'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER