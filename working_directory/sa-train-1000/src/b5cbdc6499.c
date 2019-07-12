#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    char entity_8[28];                                   // Tag.BODY
    int entity_2;                                        // Tag.BODY
    entity_4 = rand();                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_2 = 24;                                       // Tag.BODY
    if (entity_4 < entity_2){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_4 = 43;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 51; entity_3 < entity_4; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_8[entity_3] = 'S';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER