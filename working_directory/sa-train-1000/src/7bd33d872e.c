#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_6;                                        // Tag.BODY
    char entity_4[48];                                   // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_3 = 30;                                       // Tag.BODY
    entity_4[entity_3] = 'Z';                            // Tag.BUFWRITE_TAUT_SAFE
    char entity_5[66];                                   // Tag.BODY
    entity_6 = 60;                                       // Tag.BODY
    for(entity_1 = 57; entity_1 < entity_6; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_5[entity_1] = 'b';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER