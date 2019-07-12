#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_6[17];        // Tag.BODY
    entity_9 = 6;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_9){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'A'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER