echo "===================== cpplint begin ====================="

LOG_FILE="cpplint.log"

python tools/ci/cpplint.py --filter=\
-build/include,\
-build/c++11,\
-build/header_guard,\
-whitespace/comments,\
-whitespace/indent,\
-runtime/int,\
-runtime/references \
    --linelength=120 \
	$(find cpp_primer5/ -name "*.h") \
	$(find cpp_primer5/ -name "*.cpp") \
    > $LOG_FILE

echo "===================== cpplint end  ====================="

