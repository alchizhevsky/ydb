RESOURCES_LIBRARY()

DECLARE_EXTERNAL_HOST_RESOURCES_BUNDLE_BY_JSON(CLANG11 clang11.json)
DECLARE_EXTERNAL_HOST_RESOURCES_BUNDLE_BY_JSON(CLANG12 clang12.json)
DECLARE_EXTERNAL_HOST_RESOURCES_BUNDLE_BY_JSON(CLANG14 clang14.json)
DECLARE_EXTERNAL_HOST_RESOURCES_BUNDLE_BY_JSON(CLANG16 clang16.json)

# This is the default clang to be used in llvm-version-independent cases
DECLARE_EXTERNAL_HOST_RESOURCES_BUNDLE_BY_JSON(CLANG clang14.json)

IF (OS_ANDROID)
    DECLARE_EXTERNAL_HOST_RESOURCES_BUNDLE(
    CLANG_ANDROID # Clang 12
    sbr:2554889297 FOR LINUX
    sbr:2554895399 FOR DARWIN
)
ENDIF()

END()
