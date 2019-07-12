#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_9[59];        // Tag.BODY
    entity_0 = 29;            // Tag.BODY
    entity_1 = rand();        // Tag.BODY
    if(entity_1 < entity_0){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_1 = 68;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_1] = 'q'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER