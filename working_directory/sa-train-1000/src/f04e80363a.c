#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_3;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_1[17];        // Tag.BODY
    entity_7 = 30;            // Tag.BODY
    entity_8 = 81;            // Tag.BODY
    char entity_9[85];        // Tag.BODY
    entity_3 = 29;            // Tag.BODY
    if(entity_8 < entity_3){  // Tag.BODY
    entity_9[entity_7] = 'h'; // Tag.BUFWRITE_TAUT_SAFE
    entity_8 = 73;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 45;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_8] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER