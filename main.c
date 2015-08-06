/*
 * like chroot, but take advantage of better containization avaliable today:
 * - namespaces via unshare(2)
 * - ephemeral changes via overlayfs and snapshots (btrfs/zfs/xfs/lvm)
 * - cgroups
 *
 *
 * Look at:
 * - bocker
 * - docker
 * - systemd-nspawn
 * - lxc
 *
 * - nsenter
 * - cgset/cgcreate/cgexec
 * - ip netns
 */
int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	return 0;
}
