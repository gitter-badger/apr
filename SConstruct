
CCFLAGS_CORE = ["/nologo", "/MD", "/W3", "/O2", "/DWIN32", "/DNDEBUG", "/D_CONSOLE", "/D_MBCS", "/FD", "/Iinclude", "/Icontrib/win32", "/DAPR_DECLARE_STATIC",]
CCFLAGS = ["/nologo", "/MD", "/W3", "/Zi", "/O2", "/Oy-", "/Iinclude", "/Iinclude/arch", "/Iinclude/arch/win32", "/Iinclude/arch/unix", "/DNDEBUG", "/DAPR_DECLARE_STATIC", "/DWIN32", "/DWINNT", "/D_WINDOWS", "/FD", "/Icontrib/win32", ]



source = [
    "src/atomic/win32/apr_atomic.c",
    "src/dso/win32/dso.c",
    "src/encoding/apr_escape.c",
    "src/file_io/win32/buffer.c",
    "src/file_io/unix/copy.c",
    "src/file_io/win32/dir.c",
    "src/file_io/unix/fileacc.c",
    "src/file_io/win32/filedup.c",
    "src/file_io/win32/filepath.c",
    "src/file_io/unix/filepath_util.c",
    "src/file_io/win32/filestat.c",
    "src/file_io/win32/filesys.c",
    "src/file_io/win32/flock.c",
    "src/file_io/unix/fullrw.c",
    "src/file_io/unix/mktemp.c",
    "src/file_io/win32/open.c",
    "src/file_io/win32/pipe.c",
    "src/file_io/win32/readwrite.c",
    "src/file_io/win32/seek.c",
    "src/file_io/unix/tempdir.c",
    "src/locks/win32/proc_mutex.c",
    "src/locks/win32/thread_cond.c",
    "src/locks/win32/thread_mutex.c",
    "src/locks/win32/thread_rwlock.c",
    "src/memory/unix/apr_pools.c",
    "src/misc/win32/apr_app.c",
    "src/misc/win32/charset.c",
    "src/misc/win32/env.c",
    "src/misc/unix/errorcodes.c",
    "src/misc/unix/getopt.c",
    "src/misc/win32/internal.c",
    "src/misc/win32/misc.c",
    "src/misc/unix/otherchild.c",
    "src/misc/win32/rand.c",
    "src/misc/win32/start.c",
    "src/misc/win32/utf8.c",
    "src/misc/unix/version.c",
    "src/mmap/unix/common.c",
    "src/mmap/win32/mmap.c",
    "src/network_io/unix/inet_ntop.c",
    "src/network_io/unix/inet_pton.c",
    "src/network_io/unix/multicast.c",
    "src/network_io/win32/sendrecv.c",
    "src/network_io/unix/sockaddr.c",
    "src/network_io/win32/sockets.c",
    "src/network_io/unix/socket_util.c",
    "src/network_io/win32/sockopt.c",
    "src/passwd/apr_getpass.c",
    "src/poll/unix/poll.c",
    "src/poll/unix/pollcb.c",
    "src/poll/unix/pollset.c",
    "src/poll/unix/select.c",
    "src/random/unix/apr_random.c",
    "src/random/unix/sha2.c",
    "src/random/unix/sha2_glue.c",
    "src/shmem/win32/shm.c",
    "src/strings/apr_cpystrn.c",
    "src/strings/apr_fnmatch.c",
    "src/strings/apr_snprintf.c",
    "src/strings/apr_strings.c",
    "src/strings/apr_strnatcmp.c",
    "src/strings/apr_strtok.c",
    "src/tables/apr_hash.c",
    "src/tables/apr_skiplist.c",
    "src/tables/apr_tables.c",
    "src/threadproc/win32/proc.c",
    "src/threadproc/win32/signals.c",
    "src/threadproc/win32/thread.c",
    "src/threadproc/win32/threadpriv.c",
    "src/time/win32/time.c",
    "src/time/win32/timestr.c",
    "src/user/win32/groupinfo.c",
    "src/user/win32/userinfo.c"

]

gen_test_char = Program(source="src/tools/gen_test_char.c", target="target/gen_test_char", CCFLAGS=CCFLAGS_CORE)

libapr = StaticLibrary(source=source, target="target/apr", CCFLAGS=CCFLAGS)

hello = Program(source=["hello.c"], target="hello", CCFLAGS=CCFLAGS_CORE, LIBS=[libapr, "ws2_32", "kernel32", "user32", "shell32", "advapi32"])

Default([gen_test_char, libapr, hello])
