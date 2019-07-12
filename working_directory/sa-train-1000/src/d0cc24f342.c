#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_9;             // Tag.BODY
    entity_9 = 94;            // Tag.BODY
    int entity_6;             // Tag.BODY
    entity_6 = 88;            // Tag.BODY
    char entity_2[2];         // Tag.BODY
    if(entity_9 < entity_6){  // Tag.BODY
    entity_9 = 95;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_9 = 34;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_9] = 'u'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER