#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_9[1];         // Tag.BODY
    entity_0 = 45;            // Tag.BODY
    entity_6 = 81;            // Tag.BODY
    if(entity_0 < entity_6){  // Tag.BODY
    entity_0 = 40;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 15;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_0] = 'c'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER