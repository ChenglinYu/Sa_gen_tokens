#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_8[48];        // Tag.BODY
    entity_4 = 10;            // Tag.BODY
    entity_6 = 52;            // Tag.BODY
    if(entity_4 < entity_6){  // Tag.BODY
    entity_4 = 83;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 19;            // Tag.BODY
    }                         // Tag.BODY
    entity_8[entity_4] = 'w'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER