#include <stdlib.h>                                      // Tag.OTHER
int main()                                               // Tag.OTHER
{                                                        // Tag.OTHER
    int entity_4;                                        // Tag.BODY
    entity_4 = 33;                                       // Tag.BODY
    int entity_2;                                        // Tag.BODY
    char entity_9[30];                                   // Tag.BODY
    int entity_3;                                        // Tag.BODY
    entity_2 = rand();                                   // Tag.BODY
    if (entity_2 < entity_4){                            // Tag.BODY
    } else {                                             // Tag.BODY
    entity_2 = 69;                                       // Tag.BODY
    }                                                    // Tag.BODY
    for(entity_3 = 29; entity_3 < entity_2; entity_3++){ // Tag.BODY
    }                                                    // Tag.BODY
    entity_9[entity_3] = 'n';                            // Tag.BUFWRITE_COND_UNSAFE
    return 0;                                            // Tag.BODY
}                                                        // Tag.OTHER