FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_r9a09g055ma3gbg = " \
   file://fragment-01-mxt.cfg \
   file://patches/0065-phy_mscc_clock_en.patch \
   file://patches/0066-mscc-ethernet-phy-add-reset-gpio.patch \
   file://patches/0069-add_vsc8541_dtsi.patch \
   file://patches/0071_sdhi_core_voltage_switch.patch \
"

