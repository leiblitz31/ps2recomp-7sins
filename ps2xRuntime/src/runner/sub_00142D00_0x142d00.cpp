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

// Function: sub_00142D00
// Address: 0x142d00 - 0x1430b0
void sub_00142D00_0x142d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142D00_0x142d00");
#endif

    switch (ctx->pc) {
        case 0x142d38u: goto label_142d38;
        case 0x142d48u: goto label_142d48;
        case 0x142d60u: goto label_142d60;
        case 0x142d88u: goto label_142d88;
        case 0x142da4u: goto label_142da4;
        case 0x142db8u: goto label_142db8;
        case 0x142ddcu: goto label_142ddc;
        case 0x142de8u: goto label_142de8;
        case 0x142df4u: goto label_142df4;
        case 0x142e18u: goto label_142e18;
        case 0x142e4cu: goto label_142e4c;
        case 0x142e58u: goto label_142e58;
        case 0x142e74u: goto label_142e74;
        case 0x142ea0u: goto label_142ea0;
        case 0x142ec0u: goto label_142ec0;
        case 0x142eccu: goto label_142ecc;
        case 0x142ee4u: goto label_142ee4;
        case 0x142ef4u: goto label_142ef4;
        case 0x142f44u: goto label_142f44;
        case 0x142f68u: goto label_142f68;
        case 0x142f8cu: goto label_142f8c;
        case 0x142fb0u: goto label_142fb0;
        case 0x142fd4u: goto label_142fd4;
        case 0x142ff8u: goto label_142ff8;
        case 0x14301cu: goto label_14301c;
        case 0x143034u: goto label_143034;
        case 0x143050u: goto label_143050;
        case 0x143064u: goto label_143064;
        case 0x143074u: goto label_143074;
        case 0x143084u: goto label_143084;
        default: break;
    }

    ctx->pc = 0x142d00u;

    // 0x142d00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x142d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x142d04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x142d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x142d08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x142d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x142d0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x142d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x142d10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x142d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142d14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142d1c: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x142d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x142d20: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x142d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x142d24: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142d28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142d28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d30: 0xc041484  jal         func_105210
    ctx->pc = 0x142D30u;
    SET_GPR_U32(ctx, 31, 0x142D38u);
    ctx->pc = 0x105210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105210u, 0x142D30u, 0x142D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D38u;
label_142d38:
    // 0x142d38: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x142d38u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d3c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x142d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x142d40: 0xc088560  jal         func_221580
    ctx->pc = 0x142D40u;
    SET_GPR_U32(ctx, 31, 0x142D48u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x142D40u, 0x142D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D48u;
label_142d48:
    // 0x142d48: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142d4c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142d50: 0x2405054a  addiu       $a1, $zero, 0x54A
    ctx->pc = 0x142d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1354));
    // 0x142d54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d58: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x142D58u;
    SET_GPR_U32(ctx, 31, 0x142D60u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x142D58u, 0x142D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D60u;
label_142d60:
    // 0x142d60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142d64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x142d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142d68: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x142D68u;
    {
        const bool branch_taken_0x142d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142d68) {
            ctx->pc = 0x142DC0u;
            goto label_142dc0;
        }
    }
    ctx->pc = 0x142D70u;
    // 0x142d70: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142d74: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142d78: 0x2405054a  addiu       $a1, $zero, 0x54A
    ctx->pc = 0x142d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1354));
    // 0x142d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d80: 0xc041b54  jal         func_106D50
    ctx->pc = 0x142D80u;
    SET_GPR_U32(ctx, 31, 0x142D88u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x142D80u, 0x142D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142D88u;
label_142d88:
    // 0x142d88: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x142d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x142d8c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x142d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x142d90: 0x24a52928  addiu       $a1, $a1, 0x2928
    ctx->pc = 0x142d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10536));
    // 0x142d94: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142d98: 0x24c62940  addiu       $a2, $a2, 0x2940
    ctx->pc = 0x142d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10560));
    // 0x142d9c: 0xc041b90  jal         func_106E40
    ctx->pc = 0x142D9Cu;
    SET_GPR_U32(ctx, 31, 0x142DA4u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x142D9Cu, 0x142DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DA4u;
label_142da4:
    // 0x142da4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x142da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x142da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x142da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x142dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142db0: 0xc08d4a4  jal         func_235290
    ctx->pc = 0x142DB0u;
    SET_GPR_U32(ctx, 31, 0x142DB8u);
    ctx->pc = 0x235290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235290u, 0x142DB0u, 0x142DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DB8u;
label_142db8:
    // 0x142db8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x142DB8u;
    {
        const bool branch_taken_0x142db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142db8) {
            ctx->pc = 0x143050u;
            goto label_143050;
        }
    }
    ctx->pc = 0x142DC0u;
label_142dc0:
    // 0x142dc0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x142dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x142dc4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x142dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x142dc8: 0x24a52928  addiu       $a1, $a1, 0x2928
    ctx->pc = 0x142dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10536));
    // 0x142dcc: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142dccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142dd0: 0x24c62960  addiu       $a2, $a2, 0x2960
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10592));
    // 0x142dd4: 0xc041b90  jal         func_106E40
    ctx->pc = 0x142DD4u;
    SET_GPR_U32(ctx, 31, 0x142DDCu);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x142DD4u, 0x142DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DDCu;
label_142ddc:
    // 0x142ddc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x142ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142de0: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x142DE0u;
    SET_GPR_U32(ctx, 31, 0x142DE8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x142DE0u, 0x142DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DE8u;
label_142de8:
    // 0x142de8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142de8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dec: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x142DECu;
    SET_GPR_U32(ctx, 31, 0x142DF4u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x142DECu, 0x142DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DF4u;
label_142df4:
    // 0x142df4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x142df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142df8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x142df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142dfc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x142dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x142e00: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x142E00u;
    {
        const bool branch_taken_0x142e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x142e00) {
            ctx->pc = 0x142EFCu;
            goto label_142efc;
        }
    }
    ctx->pc = 0x142E08u;
    // 0x142e08: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142e08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142e0c: 0x24c62910  addiu       $a2, $a2, 0x2910
    ctx->pc = 0x142e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10512));
    // 0x142e10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x142e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x142e14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x142e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_142e18:
    // 0x142e18: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x142e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x142e1c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x142e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x142e20: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x142e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x142e24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x142e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x142e28: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x142e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x142e2c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x142e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x142e30: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x142e34: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x142E34u;
    {
        const bool branch_taken_0x142e34 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x142e34) {
            ctx->pc = 0x142E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142e18;
        }
    }
    ctx->pc = 0x142E3Cu;
    // 0x142e3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x142e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x142e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e44: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x142E44u;
    {
        const bool branch_taken_0x142e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142e44) {
            ctx->pc = 0x142E88u;
            goto label_142e88;
        }
    }
    ctx->pc = 0x142E4Cu;
label_142e4c:
    // 0x142e4c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x142e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142e50: 0xc041b40  jal         func_106D00
    ctx->pc = 0x142E50u;
    SET_GPR_U32(ctx, 31, 0x142E58u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x142E50u, 0x142E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E58u;
label_142e58:
    // 0x142e58: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x142e58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x142e5c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x142e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x142e60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e64: 0x8c650060  lw          $a1, 0x60($v1)
    ctx->pc = 0x142e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x142e68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x142e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e6c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x142E6Cu;
    SET_GPR_U32(ctx, 31, 0x142E74u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x142E6Cu, 0x142E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E74u;
label_142e74:
    // 0x142e74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x142e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e78: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x142E78u;
    {
        const bool branch_taken_0x142e78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x142e78) {
            ctx->pc = 0x142E84u;
            goto label_142e84;
        }
    }
    ctx->pc = 0x142E80u;
    // 0x142e80: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x142e80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_142e84:
    // 0x142e84: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x142e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_142e88:
    // 0x142e88: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x142e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x142e8c: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x142E8Cu;
    {
        const bool branch_taken_0x142e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142e8c) {
            ctx->pc = 0x142E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142e4c;
        }
    }
    ctx->pc = 0x142E94u;
    // 0x142e94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x142e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x142e98: 0xc041b48  jal         func_106D20
    ctx->pc = 0x142E98u;
    SET_GPR_U32(ctx, 31, 0x142EA0u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x142E98u, 0x142EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EA0u;
label_142ea0:
    // 0x142ea0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x142ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x142ea4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x142ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x142ea8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x142ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x142eac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x142eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x142eb0: 0x24a52980  addiu       $a1, $a1, 0x2980
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10624));
    // 0x142eb4: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x142eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x142eb8: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x142EB8u;
    SET_GPR_U32(ctx, 31, 0x142EC0u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x142EB8u, 0x142EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EC0u;
label_142ec0:
    // 0x142ec0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x142ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x142ec4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x142EC4u;
    SET_GPR_U32(ctx, 31, 0x142ECCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x142EC4u, 0x142ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142ECCu;
label_142ecc:
    // 0x142ecc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x142eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x142ed0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x142ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x142ed4: 0x24a52928  addiu       $a1, $a1, 0x2928
    ctx->pc = 0x142ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10536));
    // 0x142ed8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x142ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142edc: 0xc041b90  jal         func_106E40
    ctx->pc = 0x142EDCu;
    SET_GPR_U32(ctx, 31, 0x142EE4u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x142EDCu, 0x142EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EE4u;
label_142ee4:
    // 0x142ee4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x142ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x142ee8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x142eec: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x142EECu;
    SET_GPR_U32(ctx, 31, 0x142EF4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x142EECu, 0x142EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EF4u;
label_142ef4:
    // 0x142ef4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x142EF4u;
    {
        const bool branch_taken_0x142ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ef4) {
            ctx->pc = 0x14301Cu;
            goto label_14301c;
        }
    }
    ctx->pc = 0x142EFCu;
label_142efc:
    // 0x142efc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x142efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x142f00: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x142f00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x142f04: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x142F04u;
    {
        const bool branch_taken_0x142f04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f04) {
            ctx->pc = 0x143000u;
            goto label_143000;
        }
    }
    ctx->pc = 0x142F0Cu;
    // 0x142f0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x142f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x142f10: 0x24638100  addiu       $v1, $v1, -0x7F00
    ctx->pc = 0x142f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934784));
    // 0x142f14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142f18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x142f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x142f1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142f20: 0x400008  jr          $v0
    ctx->pc = 0x142F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142F28u: goto label_142f28;
            case 0x142F4Cu: goto label_142f4c;
            case 0x142F70u: goto label_142f70;
            case 0x142F94u: goto label_142f94;
            case 0x142FB8u: goto label_142fb8;
            case 0x142FDCu: goto label_142fdc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142F20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x142F28u;
label_142f28:
    // 0x142f28: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142f2c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142f30: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x142f34: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142f34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142f38: 0x24c629a0  addiu       $a2, $a2, 0x29A0
    ctx->pc = 0x142f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10656));
    // 0x142f3c: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x142F3Cu;
    SET_GPR_U32(ctx, 31, 0x142F44u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x142F3Cu, 0x142F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F44u;
label_142f44:
    // 0x142f44: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x142F44u;
    {
        const bool branch_taken_0x142f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f44) {
            ctx->pc = 0x14301Cu;
            goto label_14301c;
        }
    }
    ctx->pc = 0x142F4Cu;
label_142f4c:
    // 0x142f4c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142f50: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142f54: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x142f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x142f58: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142f58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142f5c: 0x24c629b0  addiu       $a2, $a2, 0x29B0
    ctx->pc = 0x142f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10672));
    // 0x142f60: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x142F60u;
    SET_GPR_U32(ctx, 31, 0x142F68u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x142F60u, 0x142F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F68u;
label_142f68:
    // 0x142f68: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x142F68u;
    {
        const bool branch_taken_0x142f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f68) {
            ctx->pc = 0x14301Cu;
            goto label_14301c;
        }
    }
    ctx->pc = 0x142F70u;
label_142f70:
    // 0x142f70: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142f74: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142f78: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x142f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x142f7c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142f80: 0x24c629c0  addiu       $a2, $a2, 0x29C0
    ctx->pc = 0x142f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10688));
    // 0x142f84: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x142F84u;
    SET_GPR_U32(ctx, 31, 0x142F8Cu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x142F84u, 0x142F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F8Cu;
label_142f8c:
    // 0x142f8c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x142F8Cu;
    {
        const bool branch_taken_0x142f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142f8c) {
            ctx->pc = 0x14301Cu;
            goto label_14301c;
        }
    }
    ctx->pc = 0x142F94u;
label_142f94:
    // 0x142f94: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142f98: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142f9c: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x142f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x142fa0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142fa4: 0x24c629d0  addiu       $a2, $a2, 0x29D0
    ctx->pc = 0x142fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10704));
    // 0x142fa8: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x142FA8u;
    SET_GPR_U32(ctx, 31, 0x142FB0u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x142FA8u, 0x142FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FB0u;
label_142fb0:
    // 0x142fb0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x142FB0u;
    {
        const bool branch_taken_0x142fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142fb0) {
            ctx->pc = 0x14301Cu;
            goto label_14301c;
        }
    }
    ctx->pc = 0x142FB8u;
label_142fb8:
    // 0x142fb8: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142fbc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142fc0: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x142fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x142fc4: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142fc8: 0x24c629e0  addiu       $a2, $a2, 0x29E0
    ctx->pc = 0x142fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10720));
    // 0x142fcc: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x142FCCu;
    SET_GPR_U32(ctx, 31, 0x142FD4u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x142FCCu, 0x142FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FD4u;
label_142fd4:
    // 0x142fd4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x142FD4u;
    {
        const bool branch_taken_0x142fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142fd4) {
            ctx->pc = 0x14301Cu;
            goto label_14301c;
        }
    }
    ctx->pc = 0x142FDCu;
label_142fdc:
    // 0x142fdc: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x142fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x142fe0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x142fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x142fe4: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x142fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x142fe8: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x142fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x142fec: 0x24c629f0  addiu       $a2, $a2, 0x29F0
    ctx->pc = 0x142fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10736));
    // 0x142ff0: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x142FF0u;
    SET_GPR_U32(ctx, 31, 0x142FF8u);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x142FF0u, 0x142FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142FF8u;
label_142ff8:
    // 0x142ff8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x142FF8u;
    {
        const bool branch_taken_0x142ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142ff8) {
            ctx->pc = 0x14301Cu;
            goto label_14301c;
        }
    }
    ctx->pc = 0x143000u;
label_143000:
    // 0x143000: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x143000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x143004: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x143004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x143008: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x143008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x14300c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x14300cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x143010: 0x24c62a00  addiu       $a2, $a2, 0x2A00
    ctx->pc = 0x143010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10752));
    // 0x143014: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x143014u;
    SET_GPR_U32(ctx, 31, 0x14301Cu);
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x143014u, 0x14301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14301Cu;
label_14301c:
    // 0x14301c: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x14301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x143020: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x143020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x143024: 0x24050541  addiu       $a1, $zero, 0x541
    ctx->pc = 0x143024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1345));
    // 0x143028: 0x27868c8c  addiu       $a2, $gp, -0x7374
    ctx->pc = 0x143028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937740));
    // 0x14302c: 0xc041a50  jal         func_106940
    ctx->pc = 0x14302Cu;
    SET_GPR_U32(ctx, 31, 0x143034u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x14302Cu, 0x143034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143034u;
label_143034:
    // 0x143034: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x143034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x143038: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x143038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x14303c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x14303cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x143040: 0x24a52a20  addiu       $a1, $a1, 0x2A20
    ctx->pc = 0x143040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    // 0x143044: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x143044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143048: 0xc041b90  jal         func_106E40
    ctx->pc = 0x143048u;
    SET_GPR_U32(ctx, 31, 0x143050u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x143048u, 0x143050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143050u;
label_143050:
    // 0x143050: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x143050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x143054: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x143054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x143058: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x143058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14305c: 0xc040924  jal         func_102490
    ctx->pc = 0x14305Cu;
    SET_GPR_U32(ctx, 31, 0x143064u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x14305Cu, 0x143064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143064u;
label_143064:
    // 0x143064: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x143068: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x143068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14306c: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x14306Cu;
    SET_GPR_U32(ctx, 31, 0x143074u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x14306Cu, 0x143074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143074u;
label_143074:
    // 0x143074: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x143074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x143078: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x143078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14307c: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x14307Cu;
    SET_GPR_U32(ctx, 31, 0x143084u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x14307Cu, 0x143084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143084u;
label_143084:
    // 0x143084: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x143084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143088: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x143088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14308c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14308cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x143090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14309c: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x14309cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1430a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1430A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1430A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1430A8u;
    // 0x1430a8: 0x0  nop
    ctx->pc = 0x1430a8u;
    // NOP
    // 0x1430ac: 0x0  nop
    ctx->pc = 0x1430acu;
    // NOP
    ctx->pc = 0x1430b0u;
}
