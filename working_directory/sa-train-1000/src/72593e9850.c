#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_4[73];        // Tag.BODY
    int entity_9;             // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 37;            // Tag.BODY
    entity_9 = rand();        // Tag.BODY
    char entity_1[59];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = 61;            // Tag.BODY
    if(entity_9 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 1;             // Tag.BODY
    }                         // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_3[52];        // Tag.BODY
    entity_4[entity_9] = 'S'; // Tag.BUFWRITE_COND_SAFE
    entity_1[entity_6] = 'a'; // Tag.BUFWRITE_TAUT_SAFE
    entity_7 = 82;            // Tag.BODY
    entity_3[entity_7] = 'q'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER