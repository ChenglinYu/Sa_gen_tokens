#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_7[51];        // Tag.BODY
    int entity_0;             // Tag.BODY
    int entity_2;             // Tag.BODY
    entity_2 = 99;            // Tag.BODY
    int entity_9;             // Tag.BODY
    entity_9 = 33;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    char entity_3[20];        // Tag.BODY
    if(entity_0 < entity_9){  // Tag.BODY
    entity_3[entity_2] = 'v'; // Tag.BUFWRITE_TAUT_UNSAFE
    } else {                  // Tag.BODY
    entity_0 = 78;            // Tag.BODY
    }                         // Tag.BODY
    entity_7[entity_0] = '7'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER