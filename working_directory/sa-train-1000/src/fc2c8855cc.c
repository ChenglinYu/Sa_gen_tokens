#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_6[28];        // Tag.BODY
    entity_4 = 27;            // Tag.BODY
    entity_5 = 51;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 35;            // Tag.BODY
    entity_2 = 32;            // Tag.BODY
    char entity_9[59];        // Tag.BODY
    char entity_7[37];        // Tag.BODY
    if(entity_4 < entity_0){  // Tag.BODY
    entity_4 = 58;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_7[entity_2] = 'b'; // Tag.BUFWRITE_TAUT_SAFE
    entity_9[entity_5] = 'Y'; // Tag.BUFWRITE_TAUT_SAFE
    entity_4 = 46;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER