#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    char entity_9[93];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 22;            // Tag.BODY
    entity_0 = 65;            // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    entity_0 = 99;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 7;             // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_0] = 'w'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER