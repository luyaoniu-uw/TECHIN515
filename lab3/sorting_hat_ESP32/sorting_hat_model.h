#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[7] <= 2.5) {
                            if (x[7] <= 1.5) {
                                if (x[4] <= 1.5) {
                                    if (x[8] <= 1.5) {
                                        if (x[2] <= 2.5) {
                                            return 2;
                                        }

                                        else {
                                            return 0;
                                        }
                                    }

                                    else {
                                        return 0;
                                    }
                                }

                                else {
                                    if (x[2] <= 3.5) {
                                        if (x[2] <= 2.5) {
                                            return 0;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }

                                    else {
                                        return 0;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1.5) {
                                    if (x[1] <= 2.5) {
                                        return 0;
                                    }

                                    else {
                                        if (x[2] <= 2.0) {
                                            return 0;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }

                                else {
                                    if (x[5] <= 1.5) {
                                        if (x[1] <= 2.0) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 3.5) {
                                            return 1;
                                        }

                                        else {
                                            return 3;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[7] <= 3.5) {
                                if (x[0] <= 2.5) {
                                    if (x[2] <= 1.5) {
                                        return 0;
                                    }

                                    else {
                                        if (x[1] <= 2.5) {
                                            return 1;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 2.5) {
                                        if (x[2] <= 2.5) {
                                            return 1;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 1.5) {
                                            return 2;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 3.5) {
                                    if (x[8] <= 2.5) {
                                        if (x[3] <= 3.5) {
                                            return 0;
                                        }

                                        else {
                                            return 3;
                                        }
                                    }

                                    else {
                                        if (x[5] <= 2.5) {
                                            return 0;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= 3.5) {
                                        if (x[5] <= 1.5) {
                                            return 3;
                                        }

                                        else {
                                            return 2;
                                        }
                                    }

                                    else {
                                        return 3;
                                    }
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }