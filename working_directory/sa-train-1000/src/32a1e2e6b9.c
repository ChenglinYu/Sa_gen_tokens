#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    int entity_3;                                        // Tag.BODY
    char entity_6[20];                                   // Tag.BODY
    char entity_1[70];                                   // Tag.BODY
    entity_3 = 19;                                       // Tag.BODY
    int entity_8;                                        // Tag.BODY
    entity_7 = 59;                                       // Tag.BODY
    for(entity_8 = 19; entity_8 < entity_3; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_1[entity_7] = 'u';                            // Tag.BUFWRITE_TAUT_SAFE
    entity_6[entity_8] = 'z';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER