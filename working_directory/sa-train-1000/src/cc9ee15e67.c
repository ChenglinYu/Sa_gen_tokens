#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_3[73];        // Tag.BODY
    char entity_1[79];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_8 = 82;            // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_9 = 50;            // Tag.BODY
    if(entity_6 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 61;            // Tag.BODY
    entity_3[entity_9] = 'd'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_1[entity_6] = 'z'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER