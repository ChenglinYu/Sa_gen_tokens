#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_5;             // Tag.BODY
    char entity_1[1];         // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    entity_5 = 4;             // Tag.BODY
    if(entity_2 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 87;            // Tag.BODY
    }                         // Tag.BODY
    entity_1[entity_2] = 'c'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER