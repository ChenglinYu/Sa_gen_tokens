#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_7;                                        // Tag.BODY
    char entity_3[61];                                   // Tag.BODY
    entity_7 = 34;                                       // Tag.BODY
    int entity_4;                                        // Tag.BODY
    for(entity_4 = 74; entity_4 < entity_7; entity_4++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_4] = 'E';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER