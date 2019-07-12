#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_8;             // Tag.BODY
    int entity_5;             // Tag.BODY
    entity_8 = rand();        // Tag.BODY
    char entity_3[49];        // Tag.BODY
    entity_5 = 97;            // Tag.BODY
    if(entity_8 < entity_5){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_8 = 60;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_8] = 'A'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER