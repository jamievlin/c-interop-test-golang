package main

// #cgo CFLAGS: -I${SRCDIR}/c-component/include/
// #cgo LDFLAGS: -L${SRCDIR}/c-component/out/build/x64-Debug -lc_component
// #include "c_component.h"
import "C"
import "fmt"

func main() {
	fibVal := C.fibonacci(10)
	fmt.Println(fibVal)
}
