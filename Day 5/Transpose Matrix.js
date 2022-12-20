var transpose = function (matrix) {

  const result = [];

  for (let i = 0; i < matrix[0].length; i++) {
    const col = []
    for (let j = 0; j < matrix.length; j++) {
      col.push(matrix[j][i]);
    }
    result.push(col)
  }

  return result
};
