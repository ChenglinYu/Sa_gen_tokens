#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_1;                                        // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_4;                                        // Tag.BODY
    entity_4 = 67;                                       // Tag.BODY
    char entity_2[35];                                   // Tag.BODY
    char entity_7[7];                                    // Tag.BODY
    entity_5 = 84;                                       // Tag.BODY
    for(entity_1 = 29; entity_1 < entity_5; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_4] = 'm';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_2[entity_1] = 'm';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER