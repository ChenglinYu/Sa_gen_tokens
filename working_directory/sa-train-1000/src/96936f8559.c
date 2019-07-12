#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_6;             // Tag.BODY
    entity_6 = rand();        // Tag.BODY
    char entity_9[40];        // Tag.BODY
    int entity_7;             // Tag.BODY
    entity_7 = 10;            // Tag.BODY
    if(entity_6 < entity_7){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 32;            // Tag.BODY
    }                         // Tag.BODY
    entity_9[entity_6] = 'g'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER