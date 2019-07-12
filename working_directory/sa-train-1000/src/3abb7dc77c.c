#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_9[77];        // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    entity_5 = 92;            // Tag.BODY
    if(entity_6 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 19;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_6] = '4'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER