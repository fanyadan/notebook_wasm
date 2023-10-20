# A sample of WASM application, a simple notebook in web browser

## How to run
* 1. emcc --bind -o notebook.js notebook.cpp
* 2. python -m http.server
* 3. Open web browser (e.g. Chrome), type "localhost:8000" in URL
