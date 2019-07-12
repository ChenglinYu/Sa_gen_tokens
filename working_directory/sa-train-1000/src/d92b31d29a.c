#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_4[63];        // Tag.BODY
    entity_6 = 62;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_6){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 70;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_0] = 'R'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER