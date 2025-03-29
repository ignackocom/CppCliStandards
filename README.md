# CppCliStandards
Cpp Cli standards

Example of use

```
#if defined(__cplusplus_cli) && __cplusplus_cli >= CPPCLI
...
Cpp Cli code
...
#endif
```

another example

```
#if CPLUSPLUSCLI_VERSION == CPPPRECLI
...
CPPPRECLI code
...
#elif CPLUSPLUSCLI_VERSION == CPPCLI
...
CPPCLI code
...
#else
...
other code
...
#endif
```

another example

```
printf("cpp cli version      = %ld\n", GET_CPLUSPLUSCLI_VERSION());
printf("cpp cli version year = %ld\n", GET_CPLUSPLUSCLI_VERSION_YEAR());
```
