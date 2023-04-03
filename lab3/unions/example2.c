struct operator {
    int type;
    union {
      int intNum;
      float floatNum;
      double doubleNum;
    } types;
};



operator op;
op.type = 0; // int, probably better as an enum or macro constant
op.types.intNum = 352;
