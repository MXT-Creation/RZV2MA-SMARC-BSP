FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_r9a09g055ma3gbg += "\
  file://rzv2ma_patch/1000-added-sd0-pwr-en-pin-adaption-for-rzv2ma-smarc.patch \
  file://rzv2ma_patch/1001-updated-uboot-disable_pwm.patch \
  file://rzv2ma_patch/1002-defconfig_enable_mscc_phy.patch \
  file://rzv2ma_patch/1003-enable_mscc_phy_clock.patch \
  file://rzv2ma_patch/1004-configs-rzv2ma-extend-uboot-default-env-with-OpenCV-.patch \
  file://rzv2ma_patch/1005-configs-rzv2ma-rename-Image-and-dtb-files-in-default-env.patch \
"

