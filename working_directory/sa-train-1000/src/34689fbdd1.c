#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_9[15];        // Tag.BODY
    entity_0 = 87;            // Tag.BODY
    int entity_3;             // Tag.BODY
    char entity_6[65];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_1;             // Tag.BODY
    entity_3 = 12;            // Tag.BODY
    entity_1 = 60;            // Tag.BODY
    entity_4 = 64;            // Tag.BODY
    char entity_7[51];        // Tag.BODY
    if(entity_0 < entity_1){  // Tag.BODY
    entity_0 = 84;            // Tag.BODY
    entity_9[entity_3] = 'W'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_0 = 21;            // Tag.BODY
    entity_7[entity_4] = 'L'; // Tag.BUFWRITE_TAUT_UNSAFE
    }                         // Tag.BODY
    entity_6[entity_0] = 'R'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER