#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    char entity_2[86];                                   // Tag.BODY
    char entity_6[55];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_7 = 19;                                       // Tag.BODY
    entity_1 = 51;                                       // Tag.BODY
    entity_2[entity_1] = 'X';                            // Tag.BUFWRITE_TAUT_SAFE
    for(entity_0 = 15; entity_0 < entity_7; entity_0++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_0] = '7';                            // Tag.BUFWRITE_COND_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER