#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_2;                                        // Tag.BODY
    int entity_0;                                        // Tag.BODY
    entity_0 = 52;                                       // Tag.BODY
    char entity_7[13];                                   // Tag.BODY
    for(entity_2 = 45; entity_2 < entity_0; entity_2++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_7[entity_2] = 'b';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER