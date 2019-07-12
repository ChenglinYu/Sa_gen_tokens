#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_7[33];        // Tag.BODY
    entity_0 = 10;            // Tag.BODY
    entity_2 = 2;             // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    entity_2 = 88;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 79;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_2] = '2'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER