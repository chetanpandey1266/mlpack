/**
 * @file core/util/binding_details.hpp
 * @author Yashwant Singh Parihar
 *
 * This defines the structure that holds documentation details for bindings.
 *
 * mlpack is free software; you may redistribute it and/or modify it under the
 * terms of the 3-clause BSD license.  You should have received a copy of the
 * 3-clause BSD license along with mlpack.  If not, see
 * http://www.opensource.org/licenses/BSD-3-Clause for more information.
 */
#ifndef MLPACK_CORE_UTIL_BINDING_DETAILS_HPP
#define MLPACK_CORE_UTIL_BINDING_DETAILS_HPP

#include <mlpack/prereqs.hpp>
#include "program_doc.hpp"

namespace mlpack {
namespace util {

/**
 * This structure holds all of the information about bindings documentation.
 */
struct BindingDetails
{
  //! Name of the default module.
  std::string programName;
  //! A short two-sentence description of the program, what it does, and what
  //! it is useful for.
  std::string shortDescription;
  //! Long string containing documentation on what it is.  No newline characters
  //! are necessary; this is taken care of by IO later.
  std::function<std::string()> longDescription;
  //! Documentation on how to use the program.
  std::vector<std::function<std::string()>> example;
  //! A  set of pairs of strings with useful "see also" information; each pair
  //! is <description, url>.
  std::vector<std::pair<std::string, std::string>> seeAlso;
};

} // namespace util
} // namespace mlpack

#endif
