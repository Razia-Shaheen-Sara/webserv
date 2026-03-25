# webserv


HTTP/1.1 200 OK\r\n
Content-Type: text/html\r\n
Content-Length: 13\r\n
\r\n
Hello, World!
Key concepts: status line, headers, blank line (\r\n\r\n), body.

List the status codes you'll need — At minimum: 200 OK, 201 Created, 204 No Content, 301/302 redirects, 400 Bad Request, 403 Forbidden, 404 Not Found, 405 Method Not Allowed, 413 Payload Too Large, 500 Internal Server Error.

Understand your interface — Talk to your teammates:

What data will the parser give you? (method, path, headers, body, etc.)
What does the socket layer expect back? (a raw byte buffer? a string? a struct?)
Phase 2: Design Your Response Module (1 hour)
Define a Response class/struct — Fields to include:

HTTP version (HTTP/1.1)
Status code + reason phrase
Headers (use std::map<std::string, std::string> or a vector of pairs)
Body (string or raw bytes)
Sketch the public API — Functions you'll expose:

setStatus(int code)
setHeader(key, value)
setBody(content) / setBodyFromFile(path)
serialize() → returns the full raw response as a std::string
Plan helper utilities:

A lookup table: status code → reason phrase
MIME type guesser: file extension → Content-Type
Error page generator (returns default HTML for a given error code)
Phase 3: Implement Core Functionality (3–5 hours)
Build the serialize() function first — This is the heart of your module. Concatenate:



version + " " + code + " " + reason + "\r\n"
+ headers (each: "Key: Value\r\n")
+ "\r\n"
+ body
Implement setBodyFromFile(path) — Open the file, read into a string, set Content-Length automatically.

Create default error pages — Simple HTML templates like:

html


<html><body><h1>404 Not Found</h1></body></html>
Add the MIME type map — .html → text/html, .css → text/css, .js → application/javascript, .png → image/png, etc.

Phase 4: Handle Edge Cases (2–3 hours)
Directory listing — If the config enables it and the path is a directory, generate an HTML index.

Redirects — For 301/302, set the Location header and an empty or minimal body.

Chunked transfer encoding (if body size unknown ahead of time) — Format:



<size in hex>\r\n
<chunk data>\r\n
...
0\r\n
\r\n
CGI output handling — Parse the CGI's stdout for headers (up to blank line), then treat the rest as body. If no Content-Length, rely on EOF.

Phase 5: Integrate & Test (ongoing)
Write a standalone test harness — Create fake parsed requests, call your response builder, print the raw output, and verify with curl -v or nc.

Integrate with your teammates' code — Once their socket and parser are ready, wire everything together: parser → your response builder → socket send.

Test with a real browser — Serve a simple HTML page, an image, and a CSS file. Check DevTools Network tab for correct headers.

Stress test — Use siege, ab, or a Python script to hammer the server and ensure your module doesn't leak memory or crash.

Quick-Reference Resources
HTTP Made Really Easy — 
jmarshall.com
 (short, practical intro)
MDN HTTP Status Codes — 
developer.mozilla.org
NGINX source — Look at how it builds responses if you want a production reference
Your deliverable is essentially a serializer: take structured data (status, headers, body) and produce a standards-compliant byte stream. Start with the simplest case (200 + static file), get it working end-to-end, then layer on error handling and special cases.
