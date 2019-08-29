load("//tools:cpplint.bzl", "cpplint")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "my_component.so",
    deps = [":my_component_lib"],
    linkopts = ["-shared"],
    linkstatic = False,
)

cc_library(
    name = "my_component_lib",
    srcs = [
        "my_component.cc",
    ],
    hdrs = [
        "my_component.h",
    ],
    deps = [
        "//cyber",
        "//cyber/examples/proto:examples_cc_proto",
    ],
)

cpplint()