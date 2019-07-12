#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_5[95];                                   // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_1;                                        // Tag.BODY
    entity_7 = 55;                                       // Tag.BODY
    for(entity_1 = 79; entity_1 < entity_7; entity_1++){ // Tag.BODY
    }                                                    // Tag.BODY
    int entity_4;                                        // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_5[entity_1] = 'v';                            // Tag.BUFWRITE_COND_SAFE
    entity_9 = 87;                                       // Tag.BODY
    char entity_3[50];                                   // Tag.BODY
    entity_3[entity_9] = 'n';                            // Tag.BUFWRITE_TAUT_UNSAFE
    char entity_2[41];                                   // Tag.BODY
    entity_4 = 89;                                       // Tag.BODY
    entity_2[entity_4] = 'M';                            // Tag.BUFWRITE_TAUT_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER