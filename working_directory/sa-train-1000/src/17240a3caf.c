#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_3;             // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_2[29];        // Tag.BODY
    entity_1 = 10;            // Tag.BODY
    entity_3 = 84;            // Tag.BODY
    char entity_6[69];        // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_6[entity_1] = 'I'; // Tag.BUFWRITE_TAUT_SAFE
    entity_0 = 22;            // Tag.BODY
    }                         // Tag.BODY
    entity_2[entity_0] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER