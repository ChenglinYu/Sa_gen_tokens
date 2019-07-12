#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_8;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_3[29];                                   // Tag.BODY
    char entity_6[6];                                    // Tag.BODY
    int entity_9;                                        // Tag.BODY
    entity_8 = 48;                                       // Tag.BODY
    entity_2 = 19;                                       // Tag.BODY
    for(entity_9 = 34; entity_9 < entity_8; entity_9++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_6[entity_2] = '9';                            // Tag.BUFWRITE_TAUT_UNSAFE
    entity_3[entity_9] = 't';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER