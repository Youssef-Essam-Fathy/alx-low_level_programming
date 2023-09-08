#include "main.h"
#include <elf.h>

#define USAGE "Usage: elf_header elf_filename\n"

void display_osbi_much(Elf64_Ehdr h);

/**
 * display_magic - display ELF magic bytes
 * @h: the ELF header struct
 * Return: void
 **/

void display_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * display_class - display ELF class bytes
 * @h: the ELF header struct
 * Return: void
 **/

void display_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
	case ELFCLASS64:
		printf("ELF64");
	break;
	case ELFCLASS32:
		printf("ELF32");
	break;
	case ELFCLASSNONE:
		printf("none");
	break;
	}
	printf("\n");
}

/**
 * display_data - display ELF data bytes
 * @h: the ELF header struct
 * Return: void
 **/

void display_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h.e_ident[EI_DATA])
	{
	case ELFDATA2MSB:
		printf("2's complement, little endian");
	break;
	case ELFDATA2LSB:
		printf("2's complement, big endian");
	break;
	case ELFDATANONE:
		printf("none");
	break;
	}
	printf("\n");
}

/**
 * display_version - display ELF version bytes
 * @h: the ELF header struct
 * Return: void
 **/

void display_version(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)");
	break;
	case EV_NONE:
		printf("%s", "");
	break;
	break;
	}
	printf("\n");
}

/**
 * display_osabi - display ELF osabi bytes
 * @h: the ELF header struct
 * Return: void
 **/

void display_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V");
	break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX");
	break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD");
	break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux");
	break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris");
	break;
	case ELFOSABI_AIX:
		printf("UNIX - AIX");
	break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX");
	break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD");
	break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64");
	break;
	default:
		display_osbi_much(h);
	break;
	}
	printf("\n");
}

/**
 * display_osbi_much - display much ELF osabi bytes
 * @h: the ELF header struct
 * Return: void
 **/

void display_osbi_much(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
	case ELFOSABI_MODESTO:
		printf("Novell - Modesto");
	break;
	case ELFOSABI_OPENBSD:
		printf("UNIX - OpenBSD");
	break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App");
	break;
	case ELFOSABI_ARM:
		printf("ARM");
	break;
	default:
		printf("<unkown: %x>", h.e_ident[EI_OSABI]);
	break;
	}
}

/**
 * display_abiversion - display ELF abiversion
 * @h: the ELF header struct
 * Return: void
 **/

void display_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
		h.e_ident[EI_ABIVERSION]);

}

/**
 * display_type - display ELF type
 * @h: the ELF header struct
 * Return: void
 **/

void display_type(Elf64_Ehdr h)
{
	char *ptr = (char *)&h.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (ptr[i])
	{
	case ET_NONE:
		printf("NONE (none)");
	break;
	case ET_REL:
		printf("REL (Relocatable file)");
	break;
	case ET_EXEC:
		printf("EXEC (Executable file)");
	break;
	case ET_DYN:
		printf("DYN (Shared object file)");
	break;
	case ET_CORE:
		printf("CORE (Core file)");
	break;
	default:
		printf("<unkown>: %x", ptr[i]);
	break;
	}
	printf("\n");
}

/**
 * display_entrypointaddress - display ELF entry point address
 * @h: the ELF header struct
 * Return: void
 **/

void display_entrypointaddress(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *ptr = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
			i--;
		printf("%x", ptr[i--]);
		for (; i >= 0; i--)
			printf("%02x", ptr[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
			i++;
		printf("%x", ptr[i++]);
		for (; i <= len; i++)
			printf("%02x", ptr[i]);
		printf("\n");
	}
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument value
 * Return: 1 on success or 0 on failure
 **/

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr h;
	ssize_t byts;

	if (argc != 2)
		dprintf(STDERR_FILENO, USAGE), exit(98);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n", argv[1]), exit(98);
	byts = read(fd, &h, sizeof(h));
	if (byts < 1 || byts != sizeof(h))
		dprintf(STDERR_FILENO, "Can't read from file: %s\n", argv[1]), exit(98);
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E' && h.e_ident[2] == 'L' &&
		h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);

	display_magic(h);
	display_class(h);
	display_data(h);
	display_version(h);
	display_osabi(h);
	display_abiversion(h);
	display_type(h);
	display_entrypointaddress(h);
	if (close(fd))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", fd), exit(98);
	return (EXIT_SUCCESS);
}
