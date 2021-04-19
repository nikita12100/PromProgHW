workspace(name = "my_workspace")

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
all_content = """filegroup(name = "all", srcs = glob(["**"]), visibility = ["//visibility:public"])"""

http_archive(
        name = "rules_foreign_cc",
        strip_prefix = "rules_foreign_cc-master",
        url = "https://github.com/bazelbuild/rules_foreign_cc/archive/master.zip"
)

load("@rules_foreign_cc//:workspace_definitions.bzl", "rules_foreign_cc_dependencies")

rules_foreign_cc_dependencies()

http_archive(
        name = "boost",
        build_file_content = all_content,
        strip_prefix = "boost_1_68_0",
        sha256 = "21c2640365de0f2cfba1a179ae772d7a150e50541ba7d0d75139fa3c895e87eb",
        urls = ["https://dl.bintray.com/boostorg/release/1.68.0/source/boost_1_68_0.tar.gz"]
)
