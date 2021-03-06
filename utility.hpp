/**
 * @file utility.hpp
 * @brief utility functions
 */
#ifndef __UTILITY_HPP__
#define __UTILITY_HPP__

#include <vector>
#include <cstdlib>
#include <cstdint>

/**
 * @brief finds the indices of the elements with maximum value in a vector.
 */
std::vector<size_t> max_indices(const std::vector<size_t>&);

/**
 * @brief finds the maximum value in a vector.
 */
size_t max(const std::vector<size_t>&);

/**
 * @brief looks for a specific value in a vector and returns true it exists.
 */
bool exist(const std::vector<size_t>&, size_t);

/**
 * @brief returns the index of the first element (in a vector) that is equal to the given value.
 */
size_t find_index(const std::vector<size_t>&, size_t);

/**
 * @brief generate a random integer less or equal to a maximum value.
 */
size_t randint(size_t uint_max);

/**
 * @brief rearrange sub-messages with respect to their corresponding clusters.
 */
std::vector<std::vector<size_t>> sort_clusters(const std::vector<std::vector<size_t>>& vec_message, const std::vector<size_t>& vec_clusters);

#endif
