GO_LIBRARY()
IF (OS_DARWIN AND ARCH_ARM64 AND RACE AND CGO_ENABLED OR OS_DARWIN AND ARCH_ARM64 AND RACE AND NOT CGO_ENABLED OR OS_DARWIN AND ARCH_ARM64 AND NOT RACE AND CGO_ENABLED OR OS_DARWIN AND ARCH_ARM64 AND NOT RACE AND NOT CGO_ENABLED OR OS_DARWIN AND ARCH_X86_64 AND RACE AND CGO_ENABLED OR OS_DARWIN AND ARCH_X86_64 AND RACE AND NOT CGO_ENABLED OR OS_DARWIN AND ARCH_X86_64 AND NOT RACE AND CGO_ENABLED OR OS_DARWIN AND ARCH_X86_64 AND NOT RACE AND NOT CGO_ENABLED OR OS_LINUX AND ARCH_AARCH64 AND RACE AND CGO_ENABLED OR OS_LINUX AND ARCH_AARCH64 AND RACE AND NOT CGO_ENABLED OR OS_LINUX AND ARCH_AARCH64 AND NOT RACE AND CGO_ENABLED OR OS_LINUX AND ARCH_AARCH64 AND NOT RACE AND NOT CGO_ENABLED OR OS_LINUX AND ARCH_X86_64 AND RACE AND CGO_ENABLED OR OS_LINUX AND ARCH_X86_64 AND RACE AND NOT CGO_ENABLED OR OS_LINUX AND ARCH_X86_64 AND NOT RACE AND CGO_ENABLED OR OS_LINUX AND ARCH_X86_64 AND NOT RACE AND NOT CGO_ENABLED)
    SRCS(
		match.go
		path.go
		path_nonwindows.go
		path_unix.go
		symlink.go
		symlink_unix.go
    )
ELSEIF (OS_WINDOWS AND ARCH_X86_64 AND RACE AND CGO_ENABLED OR OS_WINDOWS AND ARCH_X86_64 AND RACE AND NOT CGO_ENABLED OR OS_WINDOWS AND ARCH_X86_64 AND NOT RACE AND CGO_ENABLED OR OS_WINDOWS AND ARCH_X86_64 AND NOT RACE AND NOT CGO_ENABLED)
    SRCS(
		match.go
		path.go
		path_windows.go
		symlink.go
		symlink_windows.go
    )
ENDIF()
END()
