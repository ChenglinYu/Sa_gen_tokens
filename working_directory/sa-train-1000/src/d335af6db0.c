#include <stdlib.h>                                     // Tag.OTHER
int main()                                              // Tag.OTHER
{                                                       // Tag.OTHER
    int entity_1;                                       // Tag.BODY
    int entity_8;                                       // Tag.BODY
    int entity_6;                                       // Tag.BODY
    entity_8 = rand();                                  // Tag.BODY
    char entity_9[83];                                  // Tag.BODY
    entity_1 = 53;                                      // Tag.BODY
    if (entity_8 < entity_1){                           // Tag.BODY
    } else {                                            // Tag.BODY
    entity_8 = 30;                                      // Tag.BODY
    }                                                   // Tag.BODY
    for(entity_6 = 8; entity_6 < entity_8; entity_6++){ // Tag.BODY
    }                                                   // Tag.BODY
    entity_9[entity_6] = 'B';                           // Tag.BUFWRITE_COND_SAFE
    return 0;                                           // Tag.BODY
}                                                       // Tag.OTHER