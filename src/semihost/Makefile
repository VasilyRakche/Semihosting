include ../makefile.conf
NAME=semihost
STARTUP_DEFS=
OPENOCD := openocd
STM32FLASH_CFG := ../../.vscode/stm32f103c8t6.cfg

LDSCRIPTS=-L. -L$(BASE)/ldscripts -T gcc.ld
LFLAGS=$(USE_NANO) $(USE_SEMIHOST) $(LDSCRIPTS) $(GC) $(MAP)

$(NAME)-$(CORE).bin: $(NAME)-$(CORE).axf
	$(OCP) -O binary $< $@

$(NAME)-$(CORE).axf: $(NAME).c $(STARTUP)
	$(CC) $^ $(CFLAGS) $(LFLAGS) -o $@

run: $(NAME)-$(CORE).bin
	@echo "%FLASH"
	$(OPENOCD) -f $(STM32FLASH_CFG) -c "program $(NAME)-$(CORE).bin verify reset exit 0x08000000"

clean: 
	rm -f $(NAME)*.axf *.map
