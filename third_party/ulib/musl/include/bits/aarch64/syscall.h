#define SYS_ioctl 29
#define SYS_flock 32
#define SYS_mknodat 33
#define SYS_mkdirat 34
#define SYS_symlinkat 36
#define SYS_linkat 37
#define SYS_renameat 38
#define SYS_statfs 43
#define SYS_fstatfs 44
#define SYS_fallocate 47
#define SYS_faccessat 48
#define SYS_chdir 49
#define SYS_fchdir 50
#define SYS_chroot 51
#define SYS_fchmodat 53
#define SYS_fchownat 54
#define SYS_openat 56
#define SYS_close 57
#define SYS_quotactl 60
#define SYS_pselect6 72
#define SYS_ppoll 73
#define SYS_readlinkat 78
#define SYS_utimensat 88
#define SYS_acct 89
#define SYS_waitid 95
#define SYS_set_tid_address 96
#define SYS_getitimer 102
#define SYS_setitimer 103
#define SYS_timer_create 107
#define SYS_timer_gettime 108
#define SYS_timer_getoverrun 109
#define SYS_timer_settime 110
#define SYS_timer_delete 111
#define SYS_clock_settime 112
#define SYS_clock_getres 114
#define SYS_clock_nanosleep 115
#define SYS_ptrace 117
#define SYS_sched_setparam 118
#define SYS_sched_setscheduler 119
#define SYS_sched_getscheduler 120
#define SYS_sched_getparam 121
#define SYS_sched_setaffinity 122
#define SYS_sched_getaffinity 123
#define SYS_sched_get_priority_max 125
#define SYS_sched_get_priority_min 126
#define SYS_sched_rr_get_interval 127
#define SYS_kill 129
#define SYS_tkill 130
#define SYS_setpriority 140
#define SYS_getpriority 141
#define SYS_times 153
#define SYS_uname 160
#define SYS_sethostname 161
#define SYS_setdomainname 162
#define SYS_getrlimit 163
#define SYS_getrusage 165
#define SYS_getcpu 168
#define SYS_settimeofday 170
#define SYS_adjtimex 171
#define SYS_gettid 178
#define SYS_mq_open 180
#define SYS_mq_unlink 181
#define SYS_mq_timedsend 182
#define SYS_mq_timedreceive 183
#define SYS_mq_notify 184
#define SYS_mq_getsetattr 185
#define SYS_msgget 186
#define SYS_msgctl 187
#define SYS_msgrcv 188
#define SYS_msgsnd 189
#define SYS_semget 190
#define SYS_semctl 191
#define SYS_semtimedop 192
#define SYS_semop 193
#define SYS_shmget 194
#define SYS_shmctl 195
#define SYS_shmat 196
#define SYS_shmdt 197
#define SYS_socket 198
#define SYS_socketpair 199
#define SYS_bind 200
#define SYS_listen 201
#define SYS_accept 202
#define SYS_connect 203
#define SYS_getsockname 204
#define SYS_getpeername 205
#define SYS_sendto 206
#define SYS_recvfrom 207
#define SYS_setsockopt 208
#define SYS_getsockopt 209
#define SYS_shutdown 210
#define SYS_sendmsg 211
#define SYS_recvmsg 212
#define SYS_brk 214
#define SYS_execve 221
#define SYS_fadvise64 223
#define SYS_msync 227
#define SYS_mlock 228
#define SYS_munlock 229
#define SYS_mlockall 230
#define SYS_munlockall 231
#define SYS_mincore 232
#define SYS_madvise 233
#define SYS_accept4 242
#define SYS_recvmmsg 243
#define SYS_wait4 260
#define SYS_prlimit64 261
