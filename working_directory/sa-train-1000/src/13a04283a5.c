#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[89];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_1 = 58;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 69;            // Tag.BODY
    char entity_5[76];        // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 12;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_6] = '7'; // Tag.BUFWRITE_TAUT_SAFE
    int entity_4;             // Tag.BODY
    entity_4 = 82;            // Tag.BODY
    char entity_2[82];        // Tag.BODY
    entity_5[entity_8] = 'B'; // Tag.BUFWRITE_COND_SAFE
    entity_2[entity_4] = 'b'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER