#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    int entity_8;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    entity_2 = 20;            // Tag.BODY
    char entity_7[99];        // Tag.BODY
    if(entity_8 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 74;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_8] = '1'; // Tag.BUFWRITE_COND_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER