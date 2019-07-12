#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_9[50];        // Tag.BODY
    int entity_1;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    entity_8 = 24;            // Tag.BODY
    if(entity_1 < entity_8){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 98;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_1] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER