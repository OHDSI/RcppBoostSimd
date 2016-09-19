# Adopted from http://github.com/RcppCore/RcppNT2/blob/master/inst/configure/configure.R

BOOST_SIMD_URL <- "https://github.com/NumScale/boost.simd"
COMMIT <- "6ea67fcb8d1f2eeb0ccf8a1077175eb7f370fc91" # TAG == "v4.16.9.0"

get_path <- function(name) {
	program <- Sys.which(name)
	if (!nzchar(program)) {
		stop("No program named '", name, "' on PATH.", call. = FALSE)
	}
	program
}

git <- get_path("git")

# Move to up directory in project
owd <- getwd()
if (!grepl("RcppBoostSimd", owd)) {
  stop("this script should be called from within the RcppNT2 sources directory")
}
dir <- gsub("RcppBoostSimd.*", "RcppBoostSimd", owd)
setwd(dir)

# Check out boost.simd
if (!dir.exists("boost.simd")) {
  system2(git, c("clone", BOOST_SIMD_URL))
}
setwd("boost.simd")

system2(git, c("checkout", COMMIT))

setwd(owd)
includes <- file.path("boost.simd", "include")
from <- list.files(includes, full.names = TRUE)
to   <- file.path("inst/include")
if (!dir.exists(to)) {
  dir.create(to, recursive = TRUE)
}
file.copy(from, to, recursive = TRUE)
