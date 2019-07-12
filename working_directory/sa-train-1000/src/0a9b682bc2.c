#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_7[10];                                   // Tag.BODY
    entity_6 = 32;                                       // Tag.BODY
    for(entity_8 = 65; entity_8 < entity_6; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    char entity_0[37];                                   // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_7[entity_8] = 'f';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_4 = 32;                                       // Tag.BODY
    entity_0[entity_4] = 'I';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER