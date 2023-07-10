#include "main.h"
/**
 * display_error_message - Display error message and exit with status code 98
 * @message: Error message to display
 */
void display_error_message(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - Display the information contained in the ELF header
 * @elf_header: Pointer to the ELF header structure
 */
void display_elf_header(const Elf64_Ehdr *elf_header)
{
	int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", elf_header->e_ident[i]);
	printf("\n");
	printf("  Class:                           %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                            %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
	printf("  Version:                         %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                          %d\n", elf_header->e_ident[EI_OSABI]);
	printf("  ABI Version:                     %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("  Type:                            %d\n", elf_header->e_type);
	printf("  Entry point address:             0x%lx\n", elf_header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int file_descriptor = 0;
	Elf64_Ehdr elf_header;

	if (argc != 2)
	{
		display_error_message("Usage: elf_header elf_filename");
	}

	filename = argv[1];
	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		display_error_message("Error opening file");
	}

	if (read(file_descriptor, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		display_error_message("Error reading ELF header");
	}

	if (!(elf_header.e_ident[EI_MAG0] == ELFMAG0 &&
	      elf_header.e_ident[EI_MAG1] == ELFMAG1 &&
	      elf_header.e_ident[EI_MAG2] == ELFMAG2 &&
	      elf_header.e_ident[EI_MAG3] == ELFMAG3))
	{
		display_error_message("Not an ELF file");
	}

	display_elf_header(&elf_header);

	close(file_descriptor);

	return (0);
}

