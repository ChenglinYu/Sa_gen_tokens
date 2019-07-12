#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_7;             // Tag.BODY
    char entity_9[38];        // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_7 = 40;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 58;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_0] = 'r'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER