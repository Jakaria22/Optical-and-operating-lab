To extract a tar archive in Linux, you can use the `tar` command with the `-x` option followed by the file name of the archive. For example:

```
tar -xvf archive.tar
```

Replace `archive.tar` with the name of the tar archive you want to extract. You can also specify a directory where you want to extract the contents using the `-C` option:

```
tar -xvf archive.tar -C /path/to/destination
```

To compress a tar archive in Linux, you can use the `tar` command with the `-czf` options followed by the desired file name for the compressed archive and the list of files or directories you want to compress. For example:

```
tar -czf archive.tar.gz file1 file2 directory1
```

This command will create a compressed tar archive named `archive.tar.gz` containing `file1`, `file2`, and `directory1`.

To give read, write, and execute permissions to a file or directory in Linux, you can use the `chmod` command followed by the permission mode and the file or directory name. For example, to give read, write, and execute permissions to the owner, and read and execute permissions to the group and others, you can use:

```
chmod u+rwx file
```

This command gives the owner read, write, and execute permissions (`u+rwx`), and read and execute permissions (`g+rx`) to the group and others.

To remove read, write, and execute permissions from a file or directory in Linux, you can use the `chmod` command with the appropriate permission modes. For example, to remove write permissions from the owner, group, and others, you can use:

```
chmod a-w file
```

This command removes write permissions (`a-w`) from all (`a`) users.

To delete a file using the `rm` command in Linux, you can simply specify the name of the file you want to delete. For example:

```
rm filename
```

Replace `filename` with the name of the file you want to delete. If you want to delete multiple files at once, you can specify their names separated by spaces. Be cautious when using the `rm` command, as it permanently deletes files and they cannot be recovered easily.
