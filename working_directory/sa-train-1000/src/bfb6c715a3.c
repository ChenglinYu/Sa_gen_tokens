#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_8 = 80;            // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_9[41];        // Tag.BODY
    entity_0 = 99;            // Tag.BODY
    entity_5 = 79;            // Tag.BODY
    char entity_2[6];         // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    entity_5 = 53;            // Tag.BODY
    entity_2[entity_8] = 'R'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_5 = 91;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = '2'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER