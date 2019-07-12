#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_5;                                        // Tag.BODY
    entity_5 = 78;                                       // Tag.BODY
    char entity_8[0];                                    // Tag.BODY
    int entity_2;                                        // Tag.BODY
    for(entity_2 = 23; entity_2 < entity_5; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 14;                                       // Tag.BODY
    entity_8[entity_2] = 'l';                            // Tag.BUFWRITE_COND_UNSAFE
    char entity_3[74];                                   // Tag.BODY
    entity_3[entity_4] = 'f';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER