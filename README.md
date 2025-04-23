# CppCliStandards
Cpp Cli standard constants

Example of use

```c
#if defined(__cplusplus_cli) && __cplusplus_cli >= CPPCLI
...
CPPCLI code
...
#endif
```

another example

```c
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

```c
printf("cpp cli version      = %ld\n", GET_CPLUSPLUSCLI_VERSION());
printf("cpp cli version year = %ld\n", GET_CPLUSPLUSCLI_VERSION_YEAR());
```


# History of changes ...
