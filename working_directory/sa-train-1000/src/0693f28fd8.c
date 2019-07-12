#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 43;            // Tag.BODY
    char entity_2[60];        // Tag.BODY
    entity_6 = 86;            // Tag.BODY
    if(entity_6 < entity_0){  // Tag.BODY
    entity_6 = 41;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 37;            // Tag.BODY
    }                         // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_2[entity_6] = '7'; // Tag.BUFWRITE_COND_SAFE
    char entity_9[49];        // Tag.BODY
    entity_8 = 16;            // Tag.BODY
    entity_9[entity_8] = 'C'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER