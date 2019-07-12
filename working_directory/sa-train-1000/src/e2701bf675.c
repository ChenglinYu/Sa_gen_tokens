#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 19;            // Tag.BODY
    char entity_9[70];        // Tag.BODY
    char entity_3[65];        // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_5 = 8;             // Tag.BODY
    if(entity_6 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 15;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_3[entity_5] = 'o'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_6] = 'y'; // Tag.BUFWRITE_COND_SAFE
    char entity_2[32];        // Tag.BODY
    entity_4 = 54;            // Tag.BODY
    entity_2[entity_4] = 'B'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER