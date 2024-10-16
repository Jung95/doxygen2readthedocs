#ifndef SAMPLE_HPP
#define SAMPLE_HPP

#include <string>

/**
 * @brief A class that demonstrates a simple example for Doxygen documentation.
 */
class Sample {
public:
    /**
     * @brief Constructs a new Sample object.
     * @param name The name to assign to the sample object.
     */
    Sample(const std::string& name);

    /**
     * @brief Gets the name of the Sample object.
     * @return The name as a string.
     */
    std::string getName() const;

    /**
     * @brief Sets the name of the Sample object.
     * @param name The new name to set.
     */
    void setName(const std::string& name);

private:
    std::string name; ///< The name of the sample object.
};

#endif // SAMPLE_HPP
