#include <stdlib.h>           // Tag.OTHER
int main()                    // Tag.OTHER
{                             // Tag.OTHER
    int entity_2;             // Tag.BODY
    entity_2 = 80;            // Tag.BODY
    int entity_0;             // Tag.BODY
    entity_0 = 8;             // Tag.BODY
    char entity_3[5];         // Tag.BODY
    if(entity_2 < entity_0){  // Tag.BODY
    entity_2 = 72;            // Tag.BODY
    } else {                  // Tag.BODY
    entity_2 = 50;            // Tag.BODY
    }                         // Tag.BODY
    entity_3[entity_2] = 'n'; // Tag.BUFWRITE_COND_UNSAFE
    return 0;                 // Tag.BODY
}                             // Tag.OTHER