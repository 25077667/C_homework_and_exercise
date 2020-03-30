
all:
	gcc lazy_binding.c -o static_binding -static
	gcc lazy_binding.c -o lazy_binding
check: all
	./static_binding 1>/dev/null 2>static_time
	./lazy_binding 1>/dev/null 2>lazy_time
