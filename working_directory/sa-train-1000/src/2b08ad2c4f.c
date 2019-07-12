#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_0 = 13;            // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_9[27];        // Tag.BODY
    entity_5 = 40;            // Tag.BODY
    char entity_2[34];        // Tag.BODY
    entity_9[entity_0] = 'W'; // Tag.BUFWRITE_TAUT_SAFE
    if(entity_8 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 62;            // Tag.BODY
    }                         // Tag.BODY
    char entity_3[55];        // Tag.BODY
    entity_2[entity_8] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;             // Tag.BODY
    entity_4 = 83;            // Tag.BODY
    entity_3[entity_4] = 't'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER