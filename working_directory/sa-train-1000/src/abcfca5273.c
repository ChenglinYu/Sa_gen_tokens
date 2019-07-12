#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_3[65];        // Tag.BODY
    entity_5 = 0;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 74;            // Tag.BODY
    }                         // Tag.BODY
    char entity_6[91];        // Tag.BODY
    entity_3[entity_4] = 'r'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_9;             // Tag.BODY
    entity_9 = 49;            // Tag.BODY
    entity_6[entity_9] = '9'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER