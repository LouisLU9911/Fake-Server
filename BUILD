cc_binary(
    name = "server",
    srcs = [
        ":config.cpp",
        ":config.h",
        ":main.cpp",
        ":webserver.cpp",
        ":webserver.h",
    ],
    linkopts = [
        "-lpthread",
        "-lmysqlclient",
    ],
    deps = [
        "//http:http-lib",
        "//threadpool:threadpool-lib",
        "//timer:timer-lib",
    ],
)
