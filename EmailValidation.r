# Sample code to read test cases
#
args <- commandArgs(trailingOnly=TRUE)
test.cases <- strsplit(readLines(args[[1]], warn=FALSE), '\n')
for (test in test.cases) {
    if (length(test) > 0) {
      cat(tolower(c(grepl("^[A-Za-z0-9\\._%\\+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}$", test))))
      cat("\n")
    }
}