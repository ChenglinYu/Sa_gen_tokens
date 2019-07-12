#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_9[72];        // Tag.BODY
    entity_4 = 36;            // Tag.BODY
    entity_6 = 15;            // Tag.BODY
    char entity_3[3];         // Tag.BODY
    entity_3[entity_4] = 'i'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_8 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 83;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_8] = 'd'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER