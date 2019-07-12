#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_0;                                        // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_8 = 23;                                       // Tag.BODY
    char entity_5[54];                                   // Tag.BODY
    for(entity_0 = 54; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_0] = 'q';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER