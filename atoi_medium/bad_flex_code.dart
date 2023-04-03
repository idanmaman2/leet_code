class Solution {
  int myAtoi(String s) {
    //REGEX FLEX
    if (RegExp("^(\\ *[-+]?\\d+).*\$").matchAsPrefix(s) == null) return 0;
    int factor = 1;
    s = s.trimLeft();
    if (s.startsWith("-")) {
      s = s.substring(1);
      factor = -1;
    }
    if (s.startsWith("+")) {
      s = s.substring(1);
    }
    int nond = s.indexOf(RegExp("[^\\d]"));
    int nondend = s.indexOf(RegExp("[^0]"));
    s = s.substring(nondend == -1 ? 0 : nondend, nond == -1 ? s.length : nond);
    int max = 2147483647 + (factor == -1 ? 1 : 0);
    if (s.length > 10 && RegExp("^0+\$").matchAsPrefix(s) == null) {
      return factor * max;
    }
    int res = ([0] + s.codeUnits)
        .reduce((untilNow, newNow) => untilNow * 10 + (newNow - 48));
    return factor * (res >= max ? max : res);
  }
}
