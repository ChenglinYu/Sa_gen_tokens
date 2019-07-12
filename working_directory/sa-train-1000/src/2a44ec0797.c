#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    char entity_3[37];                                   // Tag.BODY
    int entity_5;                                        // Tag.BODY
    int entity_7;                                        // Tag.BODY
    entity_5 = 75;                                       // Tag.BODY
    entity_7 = rand();                                   // Tag.BODY
    int entity_8;                                        // Tag.BODY
    if (entity_7 < entity_5){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_7 = 34;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_8 = 39; entity_8 < entity_7; entity_8++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_3[entity_8] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER