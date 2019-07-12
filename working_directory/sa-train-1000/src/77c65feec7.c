#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_0[78];        // Tag.BODY
    entity_2 = 21;            // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_5 = rand();        // Tag.BODY
    char entity_9[65];        // Tag.BODY
    entity_4 = 26;            // Tag.BODY
    entity_0[entity_4] = 'w'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_5 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 57;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = 'R'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER