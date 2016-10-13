#define _Int64 long long
#define _Reg long

#if defined(__FLT_EVAL_METHOD__) && __FLT_EVAL_METHOD__ == 2
#if defined(__NEED_float_t) && !defined(__DEFINED_float_t)
typedef long double float_t;
#define __DEFINED_float_t
#endif

#if defined(__NEED_double_t) && !defined(__DEFINED_double_t)
typedef long double double_t;
#define __DEFINED_double_t
#endif

#else
#if defined(__NEED_float_t) && !defined(__DEFINED_float_t)
typedef float float_t;
#define __DEFINED_float_t
#endif

#if defined(__NEED_double_t) && !defined(__DEFINED_double_t)
typedef double double_t;
#define __DEFINED_double_t
#endif

#endif

#if defined(__NEED_pthread_attr_t) && !defined(__DEFINED_pthread_attr_t)
typedef struct {
    const char* __name;
    int __c11;
    union {
        int __i[14];
        volatile int __vi[14];
        unsigned long __s[7];
    } __u;
} pthread_attr_t;
#define __DEFINED_pthread_attr_t
#endif

#if defined(__NEED_pthread_mutex_t) && !defined(__DEFINED_pthread_mutex_t)
typedef struct {
    union {
        int __i[10];
        volatile int __vi[10];
        volatile void* volatile __p[5];
    } __u;
} pthread_mutex_t;
#define __DEFINED_pthread_mutex_t
#endif

#if defined(__NEED_mtx_t) && !defined(__DEFINED_mtx_t)
typedef struct {
    int __i[1];
} mtx_t;
#define __DEFINED_mtx_t
#endif

#if defined(__NEED_pthread_cond_t) && !defined(__DEFINED_pthread_cond_t)
typedef struct {
    union {
        int __i[12];
        volatile int __vi[12];
        void* __p[6];
    } __u;
} pthread_cond_t;
#define __DEFINED_pthread_cond_t
#endif

#if defined(__NEED_cnd_t) && !defined(__DEFINED_cnd_t)
typedef struct {
    union {
        int __i[12];
        volatile int __vi[12];
        void* __p[6];
    } __u;
} cnd_t;
#define __DEFINED_cnd_t
#endif

#if defined(__NEED_pthread_rwlock_t) && !defined(__DEFINED_pthread_rwlock_t)
typedef struct {
    union {
        int __i[14];
        volatile int __vi[14];
        void* __p[7];
    } __u;
} pthread_rwlock_t;
#define __DEFINED_pthread_rwlock_t
#endif

#if defined(__NEED_pthread_barrier_t) && !defined(__DEFINED_pthread_barrier_t)
typedef struct {
    union {
        int __i[8];
        volatile int __vi[8];
        void* __p[4];
    } __u;
} pthread_barrier_t;
#define __DEFINED_pthread_barrier_t
#endif

#if defined(__NEED_ssize_t) && !defined(__DEFINED_ssize_t)
typedef long ssize_t;
#define __DEFINED_ssize_t
#endif

#if defined(__NEED_regoff_t) && !defined(__DEFINED_regoff_t)
typedef long regoff_t;
#define __DEFINED_regoff_t
#endif

#if defined(__NEED_register_t) && !defined(__DEFINED_register_t)
typedef _Reg register_t;
#define __DEFINED_register_t
#endif

#if defined(__NEED_mode_t) && !defined(__DEFINED_mode_t)
typedef unsigned mode_t;
#define __DEFINED_mode_t
#endif

#if defined(__NEED_nlink_t) && !defined(__DEFINED_nlink_t)
typedef unsigned _Reg nlink_t;
#define __DEFINED_nlink_t
#endif

#if defined(__NEED_off_t) && !defined(__DEFINED_off_t)
typedef _Int64 off_t;
#define __DEFINED_off_t
#endif

#if defined(__NEED_ino_t) && !defined(__DEFINED_ino_t)
typedef unsigned _Int64 ino_t;
#define __DEFINED_ino_t
#endif

#if defined(__NEED_dev_t) && !defined(__DEFINED_dev_t)
typedef unsigned _Int64 dev_t;
#define __DEFINED_dev_t
#endif

#if defined(__NEED_blksize_t) && !defined(__DEFINED_blksize_t)
typedef long blksize_t;
#define __DEFINED_blksize_t
#endif

#if defined(__NEED_blkcnt_t) && !defined(__DEFINED_blkcnt_t)
typedef _Int64 blkcnt_t;
#define __DEFINED_blkcnt_t
#endif

#if defined(__NEED_fsblkcnt_t) && !defined(__DEFINED_fsblkcnt_t)
typedef unsigned _Int64 fsblkcnt_t;
#define __DEFINED_fsblkcnt_t
#endif

#if defined(__NEED_fsfilcnt_t) && !defined(__DEFINED_fsfilcnt_t)
typedef unsigned _Int64 fsfilcnt_t;
#define __DEFINED_fsfilcnt_t
#endif

#if defined(__NEED_wctype_t) && !defined(__DEFINED_wctype_t)
typedef unsigned long wctype_t;
#define __DEFINED_wctype_t
#endif

#if defined(__NEED_timer_t) && !defined(__DEFINED_timer_t)
typedef void* timer_t;
#define __DEFINED_timer_t
#endif

#if defined(__NEED_clockid_t) && !defined(__DEFINED_clockid_t)
typedef int clockid_t;
#define __DEFINED_clockid_t
#endif

#if defined(__NEED_key_t) && !defined(__DEFINED_key_t)
typedef int key_t;
#define __DEFINED_key_t
#endif

#if defined(__NEED_useconds_t) && !defined(__DEFINED_useconds_t)
typedef unsigned useconds_t;
#define __DEFINED_useconds_t
#endif

#ifdef __cplusplus
#if defined(__NEED_pthread_t) && !defined(__DEFINED_pthread_t)
typedef unsigned long pthread_t;
#define __DEFINED_pthread_t
#endif

#else
#if defined(__NEED_pthread_t) && !defined(__DEFINED_pthread_t)
typedef struct __pthread* pthread_t;
#define __DEFINED_pthread_t
#endif

#endif
#if defined(__NEED_pthread_once_t) && !defined(__DEFINED_pthread_once_t)
typedef int pthread_once_t;
#define __DEFINED_pthread_once_t
#endif

#if defined(__NEED_pthread_key_t) && !defined(__DEFINED_pthread_key_t)
typedef unsigned pthread_key_t;
#define __DEFINED_pthread_key_t
#endif

#if defined(__NEED_pthread_spinlock_t) && !defined(__DEFINED_pthread_spinlock_t)
typedef int pthread_spinlock_t;
#define __DEFINED_pthread_spinlock_t
#endif

#if defined(__NEED_pthread_mutexattr_t) && !defined(__DEFINED_pthread_mutexattr_t)
typedef struct { unsigned __attr; } pthread_mutexattr_t;
#define __DEFINED_pthread_mutexattr_t
#endif

#if defined(__NEED_pthread_condattr_t) && !defined(__DEFINED_pthread_condattr_t)
typedef struct { unsigned __attr; } pthread_condattr_t;
#define __DEFINED_pthread_condattr_t
#endif

#if defined(__NEED_pthread_barrierattr_t) && !defined(__DEFINED_pthread_barrierattr_t)
typedef struct { unsigned __attr; } pthread_barrierattr_t;
#define __DEFINED_pthread_barrierattr_t
#endif

#if defined(__NEED_pthread_rwlockattr_t) && !defined(__DEFINED_pthread_rwlockattr_t)
typedef struct { unsigned __attr[2]; } pthread_rwlockattr_t;
#define __DEFINED_pthread_rwlockattr_t
#endif

#if defined(__NEED_FILE) && !defined(__DEFINED_FILE)
typedef struct _IO_FILE FILE;
#define __DEFINED_FILE
#endif

#if defined(__NEED_mbstate_t) && !defined(__DEFINED_mbstate_t)
typedef struct __mbstate_t { unsigned __opaque1, __opaque2; } mbstate_t;
#define __DEFINED_mbstate_t
#endif

#if defined(__NEED_locale_t) && !defined(__DEFINED_locale_t)
typedef struct __locale_struct* locale_t;
#define __DEFINED_locale_t
#endif

#if defined(__NEED_sigset_t) && !defined(__DEFINED_sigset_t)
typedef struct __sigset_t { unsigned long __bits[128 / sizeof(long)]; } sigset_t;
#define __DEFINED_sigset_t
#endif

#if defined(__NEED_socklen_t) && !defined(__DEFINED_socklen_t)
typedef unsigned socklen_t;
#define __DEFINED_socklen_t
#endif

#if defined(__NEED_sa_family_t) && !defined(__DEFINED_sa_family_t)
typedef unsigned short sa_family_t;
#define __DEFINED_sa_family_t
#endif

#undef _Int64
#undef _Reg
