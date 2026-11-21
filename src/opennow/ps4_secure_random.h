#ifndef OPENNOW_PS4_SECURE_RANDOM_H
#define OPENNOW_PS4_SECURE_RANDOM_H

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Firma real de libSceRandom. Se declara aqui en vez de usar <orbis/Random.h> porque OpenOrbis
 * v0.5.4 la declara como `void sceRandomGetRandomNumber();` (sin parametros ni retorno) y con esa
 * cabecera el proyecto no compila. */
int sceRandomGetRandomNumber(void* buffer, size_t size);

/* Returns 0 only when Orbis' libSceRandom filled the entire buffer. */
int ps4_secure_random(void* buffer, size_t size);

#ifdef __cplusplus
}
#endif

#endif
