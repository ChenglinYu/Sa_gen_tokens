#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_7[73];        // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_5 = 89;            // Tag.BODY
    if(entity_8 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 84;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = '2'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER