#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    char entity_5[45];        // Tag.BODY
    int entity_4;             // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_4 = 91;            // Tag.BODY
    entity_0 = rand();        // Tag.BODY
    if(entity_0 < entity_4){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 37;            // Tag.BODY
    }                         // Tag.BODY
    int entity_1;             // Tag.BODY
    char entity_7[81];        // Tag.BODY
    entity_5[entity_0] = 'D'; // Tag.BUFWRITE_COND_UNSAFE
    entity_1 = 83;            // Tag.BODY
    entity_7[entity_1] = 'w'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER