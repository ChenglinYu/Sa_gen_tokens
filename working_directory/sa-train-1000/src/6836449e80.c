#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    int entity_2;             // Tag.BODY
    char entity_6[73];        // Tag.BODY
    entity_2 = 67;            // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    if(entity_4 < entity_2){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 90;            // Tag.BODY
    }                         // Tag.BODY
    entity_6[entity_4] = 'U'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER