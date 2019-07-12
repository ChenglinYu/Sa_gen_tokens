#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_0;             // Tag.BODY
    int entity_5;             // Tag.BODY
    char entity_1[4];         // Tag.BODY
    entity_5 = 76;            // Tag.BODY
    entity_0 = 37;            // Tag.BODY
    if(entity_5 < entity_0){  // Tag.BODY
    entity_5 = 91;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_5 = 37;            // Tag.BODY
    }                         // Tag.BODY
    int entity_4;             // Tag.BODY
    char entity_9[0];         // Tag.BODY
    entity_1[entity_5] = 'G'; // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 1;             // Tag.BODY
    entity_9[entity_4] = '0'; // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER