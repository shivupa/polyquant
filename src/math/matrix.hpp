
#ifndef PYCI_MATRIX_H
#define PYCI_MATRIX_H
namespace selci {

/**
 * @brief A class to represent a colsatrix
 *
 */
class MATRIX {
public:
  MATRIX() = default;
  /**
   * @brief Construct
   *
   * @param
   */
  MATRIX(size_t rows, size_t cols) {
    ROWS = rows;
    COLS = cols;
  }

private:
  size_t ROWS;
  size_t COLS;
};
} // namespace selci
#endif
