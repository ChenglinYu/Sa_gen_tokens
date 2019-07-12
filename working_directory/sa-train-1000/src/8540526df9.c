#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_1;             // Tag.BODY
    int entity_4;             // Tag.BODY
    entity_4 = rand();        // Tag.BODY
    entity_1 = 52;            // Tag.BODY
    char entity_7[17];        // Tag.BODY
    if(entity_4 < entity_1){  // Tag.BODY
    } else {                  // Tag.BODY
    entity_4 = 97;            // Tag.BODY
    }                         // Tag.BODY
    char entity_6[36];        // Tag.BODY
    entity_7[entity_4] = 'V'; // Tag.BUFWRITE_COND_UNSAFE
    int entity_2;             // Tag.BODY
    entity_2 = 78;            // Tag.BODY
    entity_6[entity_2] = '7'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER