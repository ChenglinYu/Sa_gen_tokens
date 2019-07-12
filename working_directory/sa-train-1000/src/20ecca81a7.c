#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_3;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_4[26];                                   // Tag.BODY
    char entity_9[55];                                   // Tag.BODY
    entity_3 = 44;                                       // Tag.BODY
    entity_2 = 10;                                       // Tag.BODY
    for(entity_7 = 16; entity_7 < entity_3; entity_7++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_4[entity_7] = 'A';                            // Tag.BUFWRITE_COND_UNSAFE
    entity_9[entity_2] = '7';                            // Tag.BUFWRITE_TAUT_SAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER