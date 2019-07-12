#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_9[69];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_7 = 55;            // Tag.BODY
    entity_6 = 48;            // Tag.BODY
    char entity_2[67];        // Tag.BODY
    entity_3 = 6;             // Tag.BODY
    if(entity_6 < entity_3){  // Tag.BODY
    entity_9[entity_7] = 'z'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6 = 37;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_2[entity_6] = 'M'; // Tag.BUFWRITE_COND_UNSAFE
    char entity_0[48];        // Tag.BODY
    entity_4 = 84;            // Tag.BODY
    entity_0[entity_4] = 'g'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER