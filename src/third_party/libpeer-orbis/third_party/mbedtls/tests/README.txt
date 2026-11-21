Marcador: scripts/mbedtls_dev/build_tree.py exige que exista tests/ para reconocer el arbol de
Mbed TLS al generar psa_crypto_driver_wrappers.c. Las pruebas no se incluyen (ENABLE_TESTING=off).
