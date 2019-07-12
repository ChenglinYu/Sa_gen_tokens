#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_5[26];        // Tag.BODY
    entity_4 = 24;            // Tag.BODY
    entity_6 = 93;            // Tag.BODY
    if(entity_4 < entity_6){  // Tag.BODY
    entity_4 = 9;             // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 42;            // Tag.BODY
    }                         // Tag.BODY
    char entity_2[73];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 64;            // Tag.BODY
    entity_2[entity_3] = 'T'; // Tag.BUFWRITE_TAUT_SAFE
    entity_5[entity_4] = 'f'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER