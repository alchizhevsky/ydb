PY23_LIBRARY() 

OWNER(pg orivej)

NO_PYTHON_INCLUDES() 
 
PEERDIR(
    contrib/libs/python/Include 
)

SRCS(
    module.cpp
)

PY_REGISTER(
    library.python.symbols.module.syms 
)

PY_SRCS(
    __init__.py
)

END()
