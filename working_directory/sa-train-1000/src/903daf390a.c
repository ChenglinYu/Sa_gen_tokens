#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    char entity_5[40];        // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_3 = 68;            // Tag.BODY
    if(entity_4 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 25;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_4] = '6'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER