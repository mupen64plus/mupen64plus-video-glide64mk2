#if !defined(OSAL_EXPORT_H)
#define OSAL_EXPORT_H

#if defined(WIN32)
#define EXPORT	__declspec(dllexport)
#define CALL		__cdecl
#else  /* Not WINDOWS */
#define EXPORT 	__attribute__((visibility("default")))
#define CALL
#endif

#endif /* #define OSAL_EXPORT_H */
