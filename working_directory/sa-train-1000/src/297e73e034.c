#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    char entity_9[64];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 77;            // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_0[5];         // Tag.BODY
    entity_6 = 50;            // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_1[73];        // Tag.BODY
    entity_4 = 29;            // Tag.BODY
    entity_8 = 26;            // Tag.BODY
    entity_0[entity_4] = '9'; // Tag.BUFWRITE_TAUT_UNSAFE
    if(entity_7 < entity_6){  // Tag.BODY
    entity_7 = 17;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7 = 72;            // Tag.BODY
    entity_1[entity_8] = 'F'; // Tag.BUFWRITE_TAUT_SAFE
    }                         // Tag.BODY
    entity_9[entity_7] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER