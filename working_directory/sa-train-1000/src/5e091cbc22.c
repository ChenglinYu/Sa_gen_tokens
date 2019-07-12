#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    char entity_3[7];                                    // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_8 = 98;                                       // Tag.BODY
    for(entity_0 = 78; entity_0 < entity_8; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_0] = 'h';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER