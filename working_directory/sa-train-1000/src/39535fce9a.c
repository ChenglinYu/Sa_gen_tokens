#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_1 = 11;            // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_2[21];        // Tag.BODY
    if(entity_8 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 1;             // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_8] = 'r'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER