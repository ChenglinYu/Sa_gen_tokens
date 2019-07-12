#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_3 = 75;                                       // Tag.BODY
    char entity_5[67];                                   // Tag.BODY
    entity_8 = rand();                                   // Tag.BODY
    if (entity_8 < entity_3){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_8 = 63;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_0 = 34; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_0] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER