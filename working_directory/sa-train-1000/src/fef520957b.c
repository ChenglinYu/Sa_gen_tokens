#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[73];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_0 = 29;            // Tag.BODY
    if(entity_8 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 88;            // Tag.BODY
    }                         // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_6[34];        // Tag.BODY
    entity_9[entity_8] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_3;             // Tag.BODY
    char entity_1[94];        // Tag.BODY
    entity_2 = 90;            // Tag.BODY
    entity_3 = 26;            // Tag.BODY
    entity_1[entity_2] = 'W'; // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_3] = '0'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER