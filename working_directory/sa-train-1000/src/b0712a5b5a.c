#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    char entity_7[73];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 60;            // Tag.BODY
    entity_2 = 2;             // Tag.BODY
    if(entity_2 < entity_8){  // Tag.BODY
    entity_2 = 17;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 9;             // Tag.BODY
    }                         // Tag.BODY
    char entity_5[39];        // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 22;            // Tag.BODY
    entity_7[entity_2] = 'k'; // Tag.BUFWRITE_COND_SAFE
    entity_5[entity_6] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER