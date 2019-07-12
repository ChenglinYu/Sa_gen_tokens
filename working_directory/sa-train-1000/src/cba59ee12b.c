#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_7;             // Tag.BODY
    char entity_6[31];        // Tag.BODY
    entity_7 = 4;             // Tag.BODY
    entity_4 = 16;            // Tag.BODY
    if(entity_4 < entity_7){  // Tag.BODY
    entity_4 = 33;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 49;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'O'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER