typedef long Align; 

typedef union header {
	struct {
		union header *ptr;	
		unsigned int size;
	} s;
	Align x; 
} Header;

static Header base;
static Header *freep = NULL;

void* malloc(unsigned nbytes){
	Header *p, *prevp;
	Header *morecore;
	unsigned int nunits;

	nunits = (nbytes + sizeof(Header)-1) / sizeof(Header) + 1;

}
