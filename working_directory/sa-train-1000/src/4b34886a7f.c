#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    char entity_8[86];        // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_6 = 56;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 25;            // Tag.BODY
    }                         // Tag.BODY
    int entity_9;             // Tag.BODY
    char entity_7[27];        // Tag.BODY
    entity_8[entity_4] = 'o'; // Tag.BUFWRITE_COND_SAFE
    entity_9 = 3;             // Tag.BODY
    entity_7[entity_9] = 'C'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER