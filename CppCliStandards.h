/******************************************************************************
* \file      CppCliStandards.h
* \version   2025.03.18.01
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Cpp Cli Standard definitions
* \details
*
* \see       https://en.wikipedia.org/wiki/C%2B%2B/CLI
*            https://learn.microsoft.com/en-us/cpp/preprocessor/predefined-macros?view=msvc-170
*            https://github.com/cpredef/predef
******************************************************************************/

#ifndef CPPCLISTANDARDS_H
#define CPPCLISTANDARDS_H		20250318L


#define CPPPRECLI	1L

/* official standard ECMA-372 script */
#define CPPCLI		200406L


/******************************************************************************
* CPLUSPLUSCLI_VERSION definition, since CPPPRECLI, ..., CPPCLI
*/
#if defined(__cplusplus_cli)
#define CPLUSPLUSCLI_VERSION         __cplusplus_cli
#else
#define CPLUSPLUSCLI_VERSION         CPPPRECLI
#endif


/******************************************************************************
**  Basic GET macros
*/
/* since CPPPRE98, ..., CPP23 */
#define GET_CPLUSPLUSCLI_VERSION()			CPLUSPLUSCLI_VERSION

#define GET_CPLUSPLUSCLI_VERSION_YEAR()		(CPLUSPLUSCLI_VERSION/100L)


/******************************************************************************
* Example of use
*
* #if defined(__cplusplus_cli) && __cplusplus_cli >= CPPCLI
* ...
* Cpp Cli code
* ...
* #endif
*
* ---------------------------------------------------------
* #if CPLUSPLUSCLI_VERSION == CPPPRECLI
* ...
* CPPPRECLI code
* ...
* #elif CPLUSPLUSCLI_VERSION == CPPCLI
* ...
* CPPCLI code
* ...
* #else
* ...
* other code
* ...
* #endif
*
* ---------------------------------------------------------
* printf("cpp cli version      = %ld\n", GET_CPLUSPLUSCLI_VERSION());
* printf("cpp cli version year = %ld\n", GET_CPLUSPLUSCLI_VERSION_YEAR());
* 
*/


#endif /* CPPCLISTANDARDS_H */
