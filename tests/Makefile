all:
	@make -s -C ..
	@gcc results.c test_nums.c test_chars.c test_str.c ../libftprintf.a
	@./a.out

nums:
	@make -s -C ..
	@gcc results.c test_nums.c ../libftprintf.a
	@./a.out

chars:
	@make -s -C ..
	@gcc results.c test_chars.c ../libftprintf.a
	@./a.out

str:
	@make -s -C ..
	@gcc results.c test_str.c ../libftprintf.a -g
	@./a.out

hex:
	@make -s -C ..
	@gcc results.c test_hex.c ../libftprintf.a
	@./a.out

.PHONY: nums chars str hex
