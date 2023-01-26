all:
	@make -s -C ..
	gcc results.c test_nums.c test_chars.c test_str.c ../ft_printf.a ../libft/libft.a
	./a.out

nums:
	@make -s -C ..
	gcc results.c test_nums.c ../ft_printf.a ../libft/libft.a
	./a.out

chars:
	@make -s -C ..
	gcc results.c test_chars.c ../ft_printf.a ../libft/libft.a
	./a.out

str:
	@make -s -C ..
	gcc results.c test_str.c ../ft_printf.a ../libft/libft.a
	./a.out

hex:
	@make -s -C ..
	gcc results.c test_hex.c ../ft_printf.a ../libft/libft.a -g
	./a.out

.PHONY: nums chars str
