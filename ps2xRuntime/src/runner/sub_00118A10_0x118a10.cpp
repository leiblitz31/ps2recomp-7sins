#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118A10
// Address: 0x118a10 - 0x118be0
void sub_00118A10_0x118a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118A10_0x118a10");
#endif

    ctx->pc = 0x118a10u;

    // 0x118a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x118a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x118a14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x118a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x118a1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x118a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x118a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118a24: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x118a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x118a28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x118a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118a2c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x118A2Cu;
    {
        const bool branch_taken_0x118a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118a2c) {
            ctx->pc = 0x118B48u;
            goto label_118b48;
        }
    }
    ctx->pc = 0x118A34u;
    // 0x118a34: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x118a34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118a38: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118a3c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118a40: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118a40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118a44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118a48: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118a4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118a50: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x118a50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x118a54: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x118a54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x118a58: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118a5c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118a60: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118a60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118a64: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118a68: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118a6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118a70: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x118a70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x118a74: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x118a74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x118a78: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118a7c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118a80: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118a80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118a84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118a88: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118a8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118a90: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x118a90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x118a94: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x118a94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x118a98: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118a9c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118aa0: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118aa4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118aa8: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118aac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118ab0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x118ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x118ab4: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x118ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
    // 0x118ab8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x118ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x118abc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x118ABCu;
    {
        const bool branch_taken_0x118abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118abc) {
            ctx->pc = 0x118AE0u;
            goto label_118ae0;
        }
    }
    ctx->pc = 0x118AC4u;
    // 0x118ac4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x118ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x118ac8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x118ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x118acc: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x118accu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x118ad0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x118ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x118ad4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x118ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x118ad8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x118AD8u;
    {
        const bool branch_taken_0x118ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118ad8) {
            ctx->pc = 0x118B04u;
            goto label_118b04;
        }
    }
    ctx->pc = 0x118AE0u;
label_118ae0:
    // 0x118ae0: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x118ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x118ae4: 0x90420024  lbu         $v0, 0x24($v0)
    ctx->pc = 0x118ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x118ae8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x118ae8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x118aec: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x118aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x118af0: 0x90420025  lbu         $v0, 0x25($v0)
    ctx->pc = 0x118af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 37)));
    // 0x118af4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x118af4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x118af8: 0x8f82ba9c  lw          $v0, -0x4564($gp)
    ctx->pc = 0x118af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949532)));
    // 0x118afc: 0x90420026  lbu         $v0, 0x26($v0)
    ctx->pc = 0x118afcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x118b00: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x118b00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_118b04:
    // 0x118b04: 0x9382b9c8  lbu         $v0, -0x4638($gp)
    ctx->pc = 0x118b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949320)));
    // 0x118b08: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x118b08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x118b0c: 0x8f82b9c4  lw          $v0, -0x463C($gp)
    ctx->pc = 0x118b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949316)));
    // 0x118b10: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x118b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x118b14: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x118B14u;
    {
        const bool branch_taken_0x118b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118b14) {
            ctx->pc = 0x118BC8u;
            goto label_118bc8;
        }
    }
    ctx->pc = 0x118B1Cu;
    // 0x118b1c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x118b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x118b20: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x118b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x118b24: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x118b24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x118b28: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x118b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x118b2c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x118b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x118b30: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x118b30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x118b34: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x118b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x118b38: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x118b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x118b3c: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x118b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x118b40: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x118B40u;
    {
        const bool branch_taken_0x118b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118b40) {
            ctx->pc = 0x118BC8u;
            goto label_118bc8;
        }
    }
    ctx->pc = 0x118B48u;
label_118b48:
    // 0x118b48: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118b4c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118b50: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118b50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118b54: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118b58: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118b5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118b60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x118b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118b64: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x118b64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x118b68: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118b6c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118b70: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118b70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118b74: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118b78: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118b80: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x118b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118b84: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x118b84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x118b88: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118b8c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118b90: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118b90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118b94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118b98: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118b9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118ba0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x118ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118ba4: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x118ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x118ba8: 0x8f83b9c0  lw          $v1, -0x4640($gp)
    ctx->pc = 0x118ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949312)));
    // 0x118bac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x118bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x118bb0: 0xaf82b9c0  sw          $v0, -0x4640($gp)
    ctx->pc = 0x118bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949312), GPR_U32(ctx, 2));
    // 0x118bb4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x118bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x118bb8: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x118bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x118bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x118bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118bc0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x118bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118bc4: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x118bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
label_118bc8:
    // 0x118bc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x118bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118bd0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x118bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x118bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x118BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118BDCu;
    // 0x118bdc: 0x0  nop
    ctx->pc = 0x118bdcu;
    // NOP
    ctx->pc = 0x118be0u;
}
