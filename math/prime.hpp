/**
 * @brief Prime Table(素数テーブル)
*/
vector< bool > prime(int n) {
  vector< bool > primes(n + 1, true);
  if(n >= 0) primes[0] = false;
  if(n >= 1) primes[1] = false;
  for(int i = 2; i * i <= n; i++) {
    if(!primes[i]) continue;
    for(int j = i * i; j <= n; j += i) {
      primes[j] = false;
    }
  }
  return primes;
}