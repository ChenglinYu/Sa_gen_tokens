#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_9[87];        // Tag.BODY
    entity_5 = 16;            // Tag.BODY
    entity_0 = 19;            // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    entity_5 = 91;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 62;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_5] = 'T'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER