#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_6;             // Tag.BODY
    char entity_2[15];        // Tag.BODY
    entity_6 = 40;            // Tag.BODY
    entity_0 = 42;            // Tag.BODY
    if(entity_6 < entity_0){  // Tag.BODY
    entity_6 = 25;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_6 = 18;            // Tag.BODY
    }                         // Tag.BODY
    char entity_9[81];        // Tag.BODY
    entity_2[entity_6] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_4;             // Tag.BODY
    entity_4 = 78;            // Tag.BODY
    entity_9[entity_4] = 'E'; // Tag.BUFWRITE_TAUT_SAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER