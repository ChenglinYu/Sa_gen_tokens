#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_1[82];        // Tag.BODY
    char entity_0[29];        // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_2;             // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_6 = 25;            // Tag.BODY
    entity_2 = 72;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    entity_1[entity_2] = 'c'; // Tag.BUFWRITE_TAUT_SAFE
    } else {                  // Tag.BODY
    entity_9 = 11;            // Tag.BODY
    }                         // Tag.BODY
    entity_0[entity_9] = 'Q'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER