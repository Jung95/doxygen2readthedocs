#include "sample.hpp"

/**
 * @brief Construct a new Sample::Sample object.
 * 
 * @param name The name to assign to the Sample object.
 */
Sample::Sample(const std::string& name) : name(name) {}

/**
 * @brief Get the name of the Sample object.
 * 
 * @return std::string The name of the object.
 */
std::string Sample::getName() const {
    return name;
}

/**
 * @brief Set the name of the Sample object.
 * 
 * @param name The new name to set.
 */
void Sample::setName(const std::string& name) {
    this->name = name;
}
