const k = (W, wt, val) => {
  const n = val.length;
  let t = new Array(n + 1);
  for (var i = 0; i < n + 1; i++) {
    t[i] = new Array(W + 1).fill(0);
  }
  for (let i = 1; i < n + 1; i++) {
    for (let j = 1; j < W + 1; j++) {
      if (wt[i - 1] <= j) {
        t[i][j] = Math.max(val[i - 1] + t[i - 1][j - wt[i - 1]], t[i - 1][j]);
      } else {
        t[i][j] = t[i - 1][j];
      }
    }
  }
  return t[n][W];
};
const val = [12, 2, 1, 4, 1];
const wt = [4, 2, 1, 10, 2];
const W = 15;
console.log(k(W, wt, val));
