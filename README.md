<!-- <!-- # webserv

HTTP = HyperText Transfer Protocol

HTTP says: how a request looks, what words are allowed (GET, POST, etc.)
how responses should look defined in 

Example:

Client sends:

GET /index.html HTTP/1.1
Host: example.com

Server replies:

HTTP/1.1 200 OK
Content-Type: text/html

// HTTP method = a simple string that tells the server WHAT action the client wants.
// Examples:
// "GET"    → fetch/read data
// "POST"   → send/create data
// "DELETE" → remove data -->