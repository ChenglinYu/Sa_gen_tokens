#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = rand();        // Tag.BODY
    char entity_4[38];        // Tag.BODY
    entity_3 = 83;            // Tag.BODY
    if(entity_2 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 56;            // Tag.BODY
    }                         // Tag.BODY
    entity_4[entity_2] = 'a'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER