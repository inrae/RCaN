% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/generateSymbolicObjects.R
\name{generateSymbolicObjects}
\alias{generateSymbolicObjects}
\title{generateSymbolicObjects}
\usage{
generateSymbolicObjects(flow, species, ntstep, H, N, series)
}
\arguments{
\item{flow}{names of the flow}

\item{species}{names of the species}

\item{ntstep}{number of the time step}

\item{H}{the H matrix of (I-H).B+N.F}

\item{N}{the N matrix of (I-H).B+N.F}

\item{series}{the names of the series}
}
\value{
en environment storing all symbolic elements including among others
\itemize{
 \item{"IE_H"}{identity- H the matrix of the equation (Bt+1=(I-H).B+N.F)}
 \item{"n"}{the N matrix of the equation (Bt+1=(I-H).B+N.F)}
 \item{"B_0"}{initial biomasses}
 \item{"species"}{a vector of biomasse per time step for each species}
 \item{"flow"}{a vector of biomasse per time step for each flow}
}
}
\description{
This is an internal function that builds all the required symbolic objects
required for the computation of the model
}
