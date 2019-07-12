#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_5[71];        // Tag.BODY
    entity_9 = 23;            // Tag.BODY
    entity_2 = 81;            // Tag.BODY
    if(entity_2 < entity_9){  // Tag.BODY
    entity_2 = 16;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 15;            // Tag.BODY
    }                         // Tag.BODY
    char entity_8[57];        // Tag.BODY
    entity_5[entity_2] = '4'; // Tag.BUFWRITE_COND_SAFE
    int entity_7;             // Tag.BODY
    entity_7 = 89;            // Tag.BODY
    entity_8[entity_7] = 'g'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER