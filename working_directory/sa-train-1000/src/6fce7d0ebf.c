#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_3;             // Tag.BODY
    int entity_0;             // Tag.BODY
    char entity_5[2];         // Tag.BODY
    entity_3 = 45;            // Tag.BODY
    entity_0 = 42;            // Tag.BODY
    if(entity_0 < entity_3){  // Tag.BODY
    entity_0 = 28;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_0 = 90;            // Tag.BODY
    }                         // Tag.BODY
    entity_5[entity_0] = 'p'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER