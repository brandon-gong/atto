#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
int main(int argc, char **argv) {
	Fl_Window *window = new Fl_Window(340,180);
	Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
	box->box(FL_UP_BOX);
	box->labelfont(FL_BOLD+FL_ITALIC);
	box->labelsize(36);
	box->labeltype(FL_SHADOW_LABEL);
	window->end();
	window->show(argc, argv);
	return Fl::run();
}


/*

This project will have to include several different parts.
Each part is to be written in the shortest, most optimal code possible.
I'm willing to sacrifice performance for code elegance.

1. FLTK frontend - easiest part.  not much to optimize either. Should literally
   just be an inputbox and a pane to display rendered text.  Hyperlinks might be buttons?
   Or if I can figure out how to hyperlink in text that would be great as well.
2. LZMA compress & decompress.  I'm not yet sure how much gains we can get from short snippets.
   so if we can skip compress that would be wonderful.
3. Base64 decoder (and encoder if I find that LZMA compress is necessary)
4. HTTP requests.  Doesn't even have to be a full on HTTP server.  just the request part.
   super super minimalist.
5. Markdown parser.  Upon receiving the LZMA-compressed response, decode from b64 and parse to
   FLTK text elements (not sure how to do that yet either).

On the Firebase Cloud Functions side:
- get website
- strip away css, images, captions, etc.
- decide what font size is h1 (maybe <title>?) ## h2, h3, e.g. find most common font sizes.
- to markdown.
- lzma (we can use node for this now if we want)

*/

