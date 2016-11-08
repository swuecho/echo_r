# R util function by echo

## step

1. edit src
2. open R, run 

        library(Rcpp)
        compileAttributes(verbose=TRUE)

2. change to parent dir, run
        
        R CMD BUILD echo 

3. install 

        R CMD INSTALL echo*
