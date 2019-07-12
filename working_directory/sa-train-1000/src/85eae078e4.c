#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_6;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_5 = 60;                                       // Tag.BODY
    char entity_7[77];                                   // Tag.BODY
    entity_6 = 35;                                       // Tag.BODY
    char entity_1[66];                                   // Tag.BODY
    for(entity_0 = 20; entity_0 < entity_6; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_1[entity_0] = 'I';                            // Tag.BUFWRITE_COND_SAFE
    entity_7[entity_5] = 'w';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_8[66];                                   // Tag.BODY
    entity_4 = 86;                                       // Tag.BODY
    entity_8[entity_4] = 't';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER