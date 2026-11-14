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

// Function: sub_00146D00
// Address: 0x146d00 - 0x147490
void sub_00146D00_0x146d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146D00_0x146d00");
#endif

    switch (ctx->pc) {
        case 0x146d40u: goto label_146d40;
        case 0x146d6cu: goto label_146d6c;
        case 0x146d78u: goto label_146d78;
        case 0x146d88u: goto label_146d88;
        case 0x146db4u: goto label_146db4;
        case 0x146de4u: goto label_146de4;
        case 0x146e08u: goto label_146e08;
        case 0x146e14u: goto label_146e14;
        case 0x146e28u: goto label_146e28;
        case 0x146e40u: goto label_146e40;
        case 0x146e68u: goto label_146e68;
        case 0x146e74u: goto label_146e74;
        case 0x146e80u: goto label_146e80;
        case 0x146e9cu: goto label_146e9c;
        case 0x146eb8u: goto label_146eb8;
        case 0x146ec8u: goto label_146ec8;
        case 0x146ed8u: goto label_146ed8;
        case 0x146f0cu: goto label_146f0c;
        case 0x146f2cu: goto label_146f2c;
        case 0x146f7cu: goto label_146f7c;
        case 0x146f88u: goto label_146f88;
        case 0x146f98u: goto label_146f98;
        case 0x146fa8u: goto label_146fa8;
        case 0x146fb4u: goto label_146fb4;
        case 0x146fc0u: goto label_146fc0;
        case 0x146fd0u: goto label_146fd0;
        case 0x147010u: goto label_147010;
        case 0x147040u: goto label_147040;
        case 0x14704cu: goto label_14704c;
        case 0x147058u: goto label_147058;
        case 0x147074u: goto label_147074;
        case 0x147090u: goto label_147090;
        case 0x1470a0u: goto label_1470a0;
        case 0x1470ccu: goto label_1470cc;
        case 0x1470f4u: goto label_1470f4;
        default: break;
    }

    ctx->pc = 0x146d00u;

    // 0x146d00: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x146d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x146d04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x146d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x146d08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x146d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x146d0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x146d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x146d10: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x146d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x146d14: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x146d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x146d18: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x146d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x146d1c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x146d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x146d20: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x146d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x146d24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x146d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x146d28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x146d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x146d2c: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x146d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x146d30: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x146d30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x146d34: 0x24c62af0  addiu       $a2, $a2, 0x2AF0
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10992));
    // 0x146d38: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x146d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x146d3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x146d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_146d40:
    // 0x146d40: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x146d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x146d44: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x146d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x146d48: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x146d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x146d4c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x146d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x146d50: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x146d50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x146d54: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x146d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x146d58: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x146d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x146d5c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x146D5Cu;
    {
        const bool branch_taken_0x146d5c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x146d5c) {
            ctx->pc = 0x146D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146d40;
        }
    }
    ctx->pc = 0x146D64u;
    // 0x146d64: 0xc090864  jal         func_242190
    ctx->pc = 0x146D64u;
    SET_GPR_U32(ctx, 31, 0x146D6Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x146D64u, 0x146D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D6Cu;
label_146d6c:
    // 0x146d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d70: 0xc090590  jal         func_241640
    ctx->pc = 0x146D70u;
    SET_GPR_U32(ctx, 31, 0x146D78u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x146D70u, 0x146D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D78u;
label_146d78:
    // 0x146d78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d7c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x146d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x146d80: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x146D80u;
    SET_GPR_U32(ctx, 31, 0x146D88u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x146D80u, 0x146D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146D88u;
label_146d88:
    // 0x146d88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x146d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d8c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x146d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x146d90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146d94: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x146d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
    // 0x146d98: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x146d9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146D9Cu;
    {
        const bool branch_taken_0x146d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146d9c) {
            ctx->pc = 0x146DC0u;
            goto label_146dc0;
        }
    }
    ctx->pc = 0x146DA4u;
    // 0x146da4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x146da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x146da8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x146da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x146dac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x146DACu;
    SET_GPR_U32(ctx, 31, 0x146DB4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x146DACu, 0x146DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DB4u;
label_146db4:
    // 0x146db4: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x146db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x146db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146DB8u;
    {
        const bool branch_taken_0x146db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146db8) {
            ctx->pc = 0x146DC4u;
            goto label_146dc4;
        }
    }
    ctx->pc = 0x146DC0u;
label_146dc0:
    // 0x146dc0: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x146dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_146dc4:
    // 0x146dc4: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x146dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x146dc8: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x146dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x146dcc: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x146dd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x146DD0u;
    {
        const bool branch_taken_0x146dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146dd0) {
            ctx->pc = 0x146DF0u;
            goto label_146df0;
        }
    }
    ctx->pc = 0x146DD8u;
    // 0x146dd8: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x146dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x146ddc: 0xc096880  jal         func_25A200
    ctx->pc = 0x146DDCu;
    SET_GPR_U32(ctx, 31, 0x146DE4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x146DDCu, 0x146DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146DE4u;
label_146de4:
    // 0x146de4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x146de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x146de8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x146DE8u;
    {
        const bool branch_taken_0x146de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146de8) {
            ctx->pc = 0x146DF4u;
            goto label_146df4;
        }
    }
    ctx->pc = 0x146DF0u;
label_146df0:
    // 0x146df0: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x146df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_146df4:
    // 0x146df4: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x146df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x146df8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x146df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x146dfc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x146dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x146e00: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x146E00u;
    SET_GPR_U32(ctx, 31, 0x146E08u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x146E00u, 0x146E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E08u;
label_146e08:
    // 0x146e08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e0c: 0xc08d5d8  jal         func_235760
    ctx->pc = 0x146E0Cu;
    SET_GPR_U32(ctx, 31, 0x146E14u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x146E0Cu, 0x146E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E14u;
label_146e14:
    // 0x146e14: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x146e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x146e18: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x146e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x146e1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e20: 0xc08d95c  jal         func_236570
    ctx->pc = 0x146E20u;
    SET_GPR_U32(ctx, 31, 0x146E28u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x146E20u, 0x146E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E28u;
label_146e28:
    // 0x146e28: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x146e28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e2c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x146e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x146e30: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x146e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x146e34: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x146E34u;
    {
        const bool branch_taken_0x146e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e34) {
            ctx->pc = 0x146E5Cu;
            goto label_146e5c;
        }
    }
    ctx->pc = 0x146E3Cu;
    // 0x146e3c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x146e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_146e40:
    // 0x146e40: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x146e40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x146e44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x146e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x146e48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x146e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x146e4c: 0x0  nop
    ctx->pc = 0x146e4cu;
    // NOP
    // 0x146e50: 0x0  nop
    ctx->pc = 0x146e50u;
    // NOP
    // 0x146e54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x146E54u;
    {
        const bool branch_taken_0x146e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146e54) {
            ctx->pc = 0x146E40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146e40;
        }
    }
    ctx->pc = 0x146E5Cu;
label_146e5c:
    // 0x146e5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x146e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e60: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x146E60u;
    SET_GPR_U32(ctx, 31, 0x146E68u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x146E60u, 0x146E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E68u;
label_146e68:
    // 0x146e68: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x146e68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e6c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x146E6Cu;
    {
        const bool branch_taken_0x146e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e6c) {
            ctx->pc = 0x146F00u;
            goto label_146f00;
        }
    }
    ctx->pc = 0x146E74u;
label_146e74:
    // 0x146e74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x146e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146e78: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x146E78u;
    {
        const bool branch_taken_0x146e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146e78) {
            ctx->pc = 0x146EF0u;
            goto label_146ef0;
        }
    }
    ctx->pc = 0x146E80u;
label_146e80:
    // 0x146e80: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x146e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x146e84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x146e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x146e88: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x146e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x146e8c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x146e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x146e90: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x146e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146e94: 0xc09138c  jal         func_244E30
    ctx->pc = 0x146E94u;
    SET_GPR_U32(ctx, 31, 0x146E9Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x146E94u, 0x146E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146E9Cu;
label_146e9c:
    // 0x146e9c: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x146e9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x146ea0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x146EA0u;
    {
        const bool branch_taken_0x146ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146ea0) {
            ctx->pc = 0x146EECu;
            goto label_146eec;
        }
    }
    ctx->pc = 0x146EA8u;
    // 0x146ea8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x146ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x146eac: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x146eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x146eb0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x146EB0u;
    SET_GPR_U32(ctx, 31, 0x146EB8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x146EB0u, 0x146EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EB8u;
label_146eb8:
    // 0x146eb8: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x146eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x146ebc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x146ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x146ec0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x146EC0u;
    SET_GPR_U32(ctx, 31, 0x146EC8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x146EC0u, 0x146EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146EC8u;
label_146ec8:
    // 0x146ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ecc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146ed0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x146ED0u;
    SET_GPR_U32(ctx, 31, 0x146ED8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x146ED0u, 0x146ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146ED8u;
label_146ed8:
    // 0x146ed8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x146ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146edc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x146edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146ee0: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x146ee4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x146ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x146ee8: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x146ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_146eec:
    // 0x146eec: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x146eecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_146ef0:
    // 0x146ef0: 0x2a820008  slti        $v0, $s4, 0x8
    ctx->pc = 0x146ef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x146ef4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x146EF4u;
    {
        const bool branch_taken_0x146ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146ef4) {
            ctx->pc = 0x146E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146e80;
        }
    }
    ctx->pc = 0x146EFCu;
    // 0x146efc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x146efcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_146f00:
    // 0x146f00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x146f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f04: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x146F04u;
    SET_GPR_U32(ctx, 31, 0x146F0Cu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x146F04u, 0x146F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F0Cu;
label_146f0c:
    // 0x146f0c: 0x1642ffd9  bne         $s2, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x146F0Cu;
    {
        const bool branch_taken_0x146f0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x146f0c) {
            ctx->pc = 0x146E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146e74;
        }
    }
    ctx->pc = 0x146F14u;
    // 0x146f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x146f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146f18: 0xa3a3013f  sb          $v1, 0x13F($sp)
    ctx->pc = 0x146f18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 3));
    // 0x146f1c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x146f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x146f20: 0x8c70003c  lw          $s0, 0x3C($v1)
    ctx->pc = 0x146f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x146f24: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x146F24u;
    {
        const bool branch_taken_0x146f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f24) {
            ctx->pc = 0x1473DCu;
            goto label_1473dc;
        }
    }
    ctx->pc = 0x146F2Cu;
label_146f2c:
    // 0x146f2c: 0x2e01000d  sltiu       $at, $s0, 0xD
    ctx->pc = 0x146f2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x146f30: 0x10200128  beqz        $at, . + 4 + (0x128 << 2)
    ctx->pc = 0x146F30u;
    {
        const bool branch_taken_0x146f30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f30) {
            ctx->pc = 0x1473D4u;
            goto label_1473d4;
        }
    }
    ctx->pc = 0x146F38u;
    // 0x146f38: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x146f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x146f3c: 0x24848180  addiu       $a0, $a0, -0x7E80
    ctx->pc = 0x146f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934912));
    // 0x146f40: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x146f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x146f44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x146f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146f48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x146f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146f4c: 0x600008  jr          $v1
    ctx->pc = 0x146F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x146F54u: goto label_146f54;
            case 0x147020u: goto label_147020;
            case 0x147034u: goto label_147034;
            case 0x1470DCu: goto label_1470dc;
            case 0x147108u: goto label_147108;
            case 0x14712Cu: goto label_14712c;
            case 0x14722Cu: goto label_14722c;
            case 0x1472F4u: goto label_1472f4;
            case 0x14738Cu: goto label_14738c;
            case 0x1473B0u: goto label_1473b0;
            case 0x1473D4u: goto label_1473d4;
            case 0x1473D8u: goto label_1473d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x146F54u;
label_146f54:
    // 0x146f54: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x146f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x146f58: 0x16c3011f  bne         $s6, $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x146F58u;
    {
        const bool branch_taken_0x146f58 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x146f58) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x146F60u;
    // 0x146f60: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x146f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x146f64: 0xc7818cb0  lwc1        $f1, -0x7350($gp)
    ctx->pc = 0x146f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x146f68: 0xc7808cb4  lwc1        $f0, -0x734C($gp)
    ctx->pc = 0x146f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146f6c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x146f6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x146f70: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x146f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x146f74: 0xc090864  jal         func_242190
    ctx->pc = 0x146F74u;
    SET_GPR_U32(ctx, 31, 0x146F7Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x146F74u, 0x146F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F7Cu;
label_146f7c:
    // 0x146f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f80: 0xc090590  jal         func_241640
    ctx->pc = 0x146F80u;
    SET_GPR_U32(ctx, 31, 0x146F88u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x146F80u, 0x146F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F88u;
label_146f88:
    // 0x146f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146f90: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x146F90u;
    SET_GPR_U32(ctx, 31, 0x146F98u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x146F90u, 0x146F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F98u;
label_146f98:
    // 0x146f98: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x146f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x146f9c: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x146f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x146fa0: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x146FA0u;
    SET_GPR_U32(ctx, 31, 0x146FA8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x146FA0u, 0x146FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FA8u;
label_146fa8:
    // 0x146fa8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x146fa8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fac: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x146FACu;
    {
        const bool branch_taken_0x146fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146fac) {
            ctx->pc = 0x147004u;
            goto label_147004;
        }
    }
    ctx->pc = 0x146FB4u;
label_146fb4:
    // 0x146fb4: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x146fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x146fb8: 0xc09138c  jal         func_244E30
    ctx->pc = 0x146FB8u;
    SET_GPR_U32(ctx, 31, 0x146FC0u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x146FB8u, 0x146FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146FC0u;
label_146fc0:
    // 0x146fc0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x146fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x146fc4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x146fc4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x146FC8u;
    {
        const bool branch_taken_0x146fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146fc8) {
            ctx->pc = 0x146FECu;
            goto label_146fec;
        }
    }
    ctx->pc = 0x146FD0u;
label_146fd0:
    // 0x146fd0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x146fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x146fd4: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x146fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x146fd8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x146fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x146fdc: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x146fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x146fe0: 0x1083010a  beq         $a0, $v1, . + 4 + (0x10A << 2)
    ctx->pc = 0x146FE0u;
    {
        const bool branch_taken_0x146fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x146fe0) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x146FE8u;
    // 0x146fe8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x146fe8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_146fec:
    // 0x146fec: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x146fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x146ff0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x146ff4: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x146ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x146ff8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x146FF8u;
    {
        const bool branch_taken_0x146ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146ff8) {
            ctx->pc = 0x146FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146fd0;
        }
    }
    ctx->pc = 0x147000u;
    // 0x147000: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x147000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_147004:
    // 0x147004: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x147004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x147008: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x147008u;
    SET_GPR_U32(ctx, 31, 0x147010u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x147008u, 0x147010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147010u;
label_147010:
    // 0x147010: 0x16a2ffe8  bne         $s5, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x147010u;
    {
        const bool branch_taken_0x147010 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x147010) {
            ctx->pc = 0x146FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146fb4;
        }
    }
    ctx->pc = 0x147018u;
    // 0x147018: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x147018u;
    {
        const bool branch_taken_0x147018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147018) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147020u;
label_147020:
    // 0x147020: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x147020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x147024: 0x12c300f9  beq         $s6, $v1, . + 4 + (0xF9 << 2)
    ctx->pc = 0x147024u;
    {
        const bool branch_taken_0x147024 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x147024) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x14702Cu;
    // 0x14702c: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x14702Cu;
    {
        const bool branch_taken_0x14702c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14702c) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147034u;
label_147034:
    // 0x147034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147038: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x147038u;
    SET_GPR_U32(ctx, 31, 0x147040u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x147038u, 0x147040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147040u;
label_147040:
    // 0x147040: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147044: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x147044u;
    {
        const bool branch_taken_0x147044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147044) {
            ctx->pc = 0x1470C0u;
            goto label_1470c0;
        }
    }
    ctx->pc = 0x14704Cu;
label_14704c:
    // 0x14704c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x14704cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147050: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x147050u;
    {
        const bool branch_taken_0x147050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147050) {
            ctx->pc = 0x1470B0u;
            goto label_1470b0;
        }
    }
    ctx->pc = 0x147058u;
label_147058:
    // 0x147058: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x147058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x14705c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x147060: 0x8c4200e0  lw          $v0, 0xE0($v0)
    ctx->pc = 0x147060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x147064: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x147064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x147068: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x147068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14706c: 0xc09138c  jal         func_244E30
    ctx->pc = 0x14706Cu;
    SET_GPR_U32(ctx, 31, 0x147074u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x14706Cu, 0x147074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147074u;
label_147074:
    // 0x147074: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x147074u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x147078: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x147078u;
    {
        const bool branch_taken_0x147078 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x147078) {
            ctx->pc = 0x1470ACu;
            goto label_1470ac;
        }
    }
    ctx->pc = 0x147080u;
    // 0x147080: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x147080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x147084: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x147088: 0xc085538  jal         func_2154E0
    ctx->pc = 0x147088u;
    SET_GPR_U32(ctx, 31, 0x147090u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x147088u, 0x147090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147090u;
label_147090:
    // 0x147090: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x147090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x147094: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x147094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x147098: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x147098u;
    SET_GPR_U32(ctx, 31, 0x1470A0u);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x147098u, 0x1470A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470A0u;
label_1470a0:
    // 0x1470a0: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x1470a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1470a4: 0x102000d9  beqz        $at, . + 4 + (0xD9 << 2)
    ctx->pc = 0x1470A4u;
    {
        const bool branch_taken_0x1470a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470a4) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1470ACu;
label_1470ac:
    // 0x1470ac: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1470acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_1470b0:
    // 0x1470b0: 0x2ae20008  slti        $v0, $s7, 0x8
    ctx->pc = 0x1470b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1470b4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1470B4u;
    {
        const bool branch_taken_0x1470b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1470b4) {
            ctx->pc = 0x147058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147058;
        }
    }
    ctx->pc = 0x1470BCu;
    // 0x1470bc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1470bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1470c0:
    // 0x1470c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1470c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470c4: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x1470C4u;
    SET_GPR_U32(ctx, 31, 0x1470CCu);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x1470C4u, 0x1470CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470CCu;
label_1470cc:
    // 0x1470cc: 0x1622ffdf  bne         $s1, $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1470CCu;
    {
        const bool branch_taken_0x1470cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1470cc) {
            ctx->pc = 0x14704Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14704c;
        }
    }
    ctx->pc = 0x1470D4u;
    // 0x1470d4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1470D4u;
    {
        const bool branch_taken_0x1470d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470d4) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x1470DCu;
label_1470dc:
    // 0x1470dc: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1470dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1470e0: 0x16c300bd  bne         $s6, $v1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1470E0u;
    {
        const bool branch_taken_0x1470e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x1470e0) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x1470E8u;
    // 0x1470e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1470e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1470ec: 0xc0411f0  jal         func_1047C0
    ctx->pc = 0x1470ECu;
    SET_GPR_U32(ctx, 31, 0x1470F4u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x1470ECu, 0x1470F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1470F4u;
label_1470f4:
    // 0x1470f4: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1470f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1470f8: 0x102000c4  beqz        $at, . + 4 + (0xC4 << 2)
    ctx->pc = 0x1470F8u;
    {
        const bool branch_taken_0x1470f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1470f8) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x147100u;
    // 0x147100: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x147100u;
    {
        const bool branch_taken_0x147100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147100) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147108u;
label_147108:
    // 0x147108: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x147108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14710c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x14710cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x147110: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147110u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147114: 0x0  nop
    ctx->pc = 0x147114u;
    // NOP
    // 0x147118: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14711c: 0x450000bb  bc1f        . + 4 + (0xBB << 2)
    ctx->pc = 0x14711Cu;
    {
        const bool branch_taken_0x14711c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14711c) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x147124u;
    // 0x147124: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x147124u;
    {
        const bool branch_taken_0x147124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147124) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x14712Cu;
label_14712c:
    // 0x14712c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14712cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x147130: 0x16c300a9  bne         $s6, $v1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x147130u;
    {
        const bool branch_taken_0x147130 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x147130) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147138u;
    // 0x147138: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x147138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14713c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x14713cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x147140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147144: 0x0  nop
    ctx->pc = 0x147144u;
    // NOP
    // 0x147148: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147148u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14714c: 0x450100a2  bc1t        . + 4 + (0xA2 << 2)
    ctx->pc = 0x14714Cu;
    {
        const bool branch_taken_0x14714c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14714c) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147154u;
    // 0x147154: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147158: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x147158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14715c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x14715cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147160: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x147160u;
    {
        const bool branch_taken_0x147160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147160) {
            ctx->pc = 0x1471A4u;
            goto label_1471a4;
        }
    }
    ctx->pc = 0x147168u;
    // 0x147168: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147168u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14716c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x14716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147170: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x147170u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147174: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x147174u;
    {
        const bool branch_taken_0x147174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147174) {
            ctx->pc = 0x1471A4u;
            goto label_1471a4;
        }
    }
    ctx->pc = 0x14717Cu;
    // 0x14717c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14717cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147180: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x147180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147184: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x147184u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147188: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x147188u;
    {
        const bool branch_taken_0x147188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147188) {
            ctx->pc = 0x1471A4u;
            goto label_1471a4;
        }
    }
    ctx->pc = 0x147190u;
    // 0x147190: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147194: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x147194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147198: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x147198u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14719c: 0x4501009b  bc1t        . + 4 + (0x9B << 2)
    ctx->pc = 0x14719Cu;
    {
        const bool branch_taken_0x14719c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14719c) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1471A4u;
label_1471a4:
    // 0x1471a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1471a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1471a8: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1471a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1471acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1471b0: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1471B0u;
    {
        const bool branch_taken_0x1471b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1471b0) {
            ctx->pc = 0x1471ECu;
            goto label_1471ec;
        }
    }
    ctx->pc = 0x1471B8u;
    // 0x1471b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1471b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1471bc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1471bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1471c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1471c4: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1471C4u;
    {
        const bool branch_taken_0x1471c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1471c4) {
            ctx->pc = 0x1471ECu;
            goto label_1471ec;
        }
    }
    ctx->pc = 0x1471CCu;
    // 0x1471cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1471ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1471d0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1471d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1471d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1471d8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1471D8u;
    {
        const bool branch_taken_0x1471d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1471d8) {
            ctx->pc = 0x1471ECu;
            goto label_1471ec;
        }
    }
    ctx->pc = 0x1471E0u;
    // 0x1471e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1471e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1471e4: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x1471E4u;
    {
        const bool branch_taken_0x1471e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1471e4) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1471ECu;
label_1471ec:
    // 0x1471ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1471ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1471f0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1471f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1471f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1471f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1471f8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1471F8u;
    {
        const bool branch_taken_0x1471f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1471f8) {
            ctx->pc = 0x147214u;
            goto label_147214;
        }
    }
    ctx->pc = 0x147200u;
    // 0x147200: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147204: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x147204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147208: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147208u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14720c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14720Cu;
    {
        const bool branch_taken_0x14720c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14720c) {
            ctx->pc = 0x147220u;
            goto label_147220;
        }
    }
    ctx->pc = 0x147214u;
label_147214:
    // 0x147214: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x147214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x147218: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x147218u;
    {
        const bool branch_taken_0x147218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147218) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x147220u;
label_147220:
    // 0x147220: 0x26100003  addiu       $s0, $s0, 0x3
    ctx->pc = 0x147220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x147224: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x147224u;
    {
        const bool branch_taken_0x147224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147224) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x14722Cu;
label_14722c:
    // 0x14722c: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x14722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147230: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x147230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x147234: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147238: 0x0  nop
    ctx->pc = 0x147238u;
    // NOP
    // 0x14723c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14723cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147240: 0x45010065  bc1t        . + 4 + (0x65 << 2)
    ctx->pc = 0x147240u;
    {
        const bool branch_taken_0x147240 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147240) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147248u;
    // 0x147248: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x147248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14724c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14724cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147250: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x147250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147258: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147258u;
    {
        const bool branch_taken_0x147258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147258) {
            ctx->pc = 0x147278u;
            goto label_147278;
        }
    }
    ctx->pc = 0x147260u;
    // 0x147260: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x147260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x147264: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147268: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x147268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14726c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14726cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147270: 0x45000059  bc1f        . + 4 + (0x59 << 2)
    ctx->pc = 0x147270u;
    {
        const bool branch_taken_0x147270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147270) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147278u;
label_147278:
    // 0x147278: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14727c: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x14727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147280: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x147280u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147284: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x147284u;
    {
        const bool branch_taken_0x147284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147284) {
            ctx->pc = 0x1472B4u;
            goto label_1472b4;
        }
    }
    ctx->pc = 0x14728Cu;
    // 0x14728c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14728cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147290: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x147290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147294: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x147294u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147298: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x147298u;
    {
        const bool branch_taken_0x147298 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147298) {
            ctx->pc = 0x1472B4u;
            goto label_1472b4;
        }
    }
    ctx->pc = 0x1472A0u;
    // 0x1472a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1472a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1472a4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1472a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1472a8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1472a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1472ac: 0x45010057  bc1t        . + 4 + (0x57 << 2)
    ctx->pc = 0x1472ACu;
    {
        const bool branch_taken_0x1472ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1472ac) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1472B4u;
label_1472b4:
    // 0x1472b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1472b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1472b8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1472b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1472bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1472bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1472c0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1472C0u;
    {
        const bool branch_taken_0x1472c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1472c0) {
            ctx->pc = 0x1472DCu;
            goto label_1472dc;
        }
    }
    ctx->pc = 0x1472C8u;
    // 0x1472c8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1472c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1472cc: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1472ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1472d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1472d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1472d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1472D4u;
    {
        const bool branch_taken_0x1472d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1472d4) {
            ctx->pc = 0x1472E8u;
            goto label_1472e8;
        }
    }
    ctx->pc = 0x1472DCu;
label_1472dc:
    // 0x1472dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1472dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1472e0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1472E0u;
    {
        const bool branch_taken_0x1472e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1472e0) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1472E8u;
label_1472e8:
    // 0x1472e8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1472e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x1472ec: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1472ECu;
    {
        const bool branch_taken_0x1472ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1472ec) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1472F4u;
label_1472f4:
    // 0x1472f4: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x1472f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1472f8: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1472f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1472fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1472fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147300: 0x0  nop
    ctx->pc = 0x147300u;
    // NOP
    // 0x147304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147308: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x147308u;
    {
        const bool branch_taken_0x147308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147308) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147310u;
    // 0x147310: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x147310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x147314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147318: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x147318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14731c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14731cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147320: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x147320u;
    {
        const bool branch_taken_0x147320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147320) {
            ctx->pc = 0x147358u;
            goto label_147358;
        }
    }
    ctx->pc = 0x147328u;
    // 0x147328: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x147328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x14732c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14732cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147330: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x147330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147334: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x147334u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147338: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x147338u;
    {
        const bool branch_taken_0x147338 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147338) {
            ctx->pc = 0x147358u;
            goto label_147358;
        }
    }
    ctx->pc = 0x147340u;
    // 0x147340: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x147340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x147344: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x147344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147348: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x147348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14734c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14734cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147350: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x147350u;
    {
        const bool branch_taken_0x147350 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147350) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x147358u;
label_147358:
    // 0x147358: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x147358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14735c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x14735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147360: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147360u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147364: 0x45010029  bc1t        . + 4 + (0x29 << 2)
    ctx->pc = 0x147364u;
    {
        const bool branch_taken_0x147364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147364) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x14736Cu;
    // 0x14736c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x14736cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147370: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x147370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147374: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x147374u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147378: 0x45010024  bc1t        . + 4 + (0x24 << 2)
    ctx->pc = 0x147378u;
    {
        const bool branch_taken_0x147378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147378) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x147380u;
    // 0x147380: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x147380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x147384: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x147384u;
    {
        const bool branch_taken_0x147384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147384) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x14738Cu;
label_14738c:
    // 0x14738c: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x14738cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147390: 0x3c034296  lui         $v1, 0x4296
    ctx->pc = 0x147390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17046 << 16));
    // 0x147394: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147394u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147398: 0x0  nop
    ctx->pc = 0x147398u;
    // NOP
    // 0x14739c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14739cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1473a0: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x1473A0u;
    {
        const bool branch_taken_0x1473a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1473a0) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1473A8u;
    // 0x1473a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1473A8u;
    {
        const bool branch_taken_0x1473a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473a8) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x1473B0u;
label_1473b0:
    // 0x1473b0: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x1473b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1473b4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1473b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1473b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1473b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1473bc: 0x0  nop
    ctx->pc = 0x1473bcu;
    // NOP
    // 0x1473c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1473c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1473c4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1473C4u;
    {
        const bool branch_taken_0x1473c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1473c4) {
            ctx->pc = 0x14740Cu;
            goto label_14740c;
        }
    }
    ctx->pc = 0x1473CCu;
    // 0x1473cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1473CCu;
    {
        const bool branch_taken_0x1473cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473cc) {
            ctx->pc = 0x1473D8u;
            goto label_1473d8;
        }
    }
    ctx->pc = 0x1473D4u;
label_1473d4:
    // 0x1473d4: 0xa3a0013f  sb          $zero, 0x13F($sp)
    ctx->pc = 0x1473d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 319), (uint8_t)GPR_U32(ctx, 0));
label_1473d8:
    // 0x1473d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1473d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1473dc:
    // 0x1473dc: 0x93a3013f  lbu         $v1, 0x13F($sp)
    ctx->pc = 0x1473dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 319)));
    // 0x1473e0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1473e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1473e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1473e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1473e8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1473E8u;
    {
        const bool branch_taken_0x1473e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1473e8) {
            ctx->pc = 0x147404u;
            goto label_147404;
        }
    }
    ctx->pc = 0x1473F0u;
    // 0x1473f0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x1473f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1473f4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1473f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1473f8: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x1473f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1473fc: 0x1020fecb  beqz        $at, . + 4 + (-0x135 << 2)
    ctx->pc = 0x1473FCu;
    {
        const bool branch_taken_0x1473fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1473fc) {
            ctx->pc = 0x146F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146f2c;
        }
    }
    ctx->pc = 0x147404u;
label_147404:
    // 0x147404: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x147404u;
    {
        const bool branch_taken_0x147404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147404) {
            ctx->pc = 0x14745Cu;
            goto label_14745c;
        }
    }
    ctx->pc = 0x14740Cu;
label_14740c:
    // 0x14740c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x14740cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x147410: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x147410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x147414: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x147414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x147418: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x147418u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x14741c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x14741cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x147420: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x147420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x147424: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x147424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x147428: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x147428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14742c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x14742cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x147430: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x147430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x147434: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x147434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x147438: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x147438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x14743c: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x14743cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x147440: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x147440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x147444: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x147444u;
    {
        const bool branch_taken_0x147444 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147444) {
            ctx->pc = 0x14745Cu;
            goto label_14745c;
        }
    }
    ctx->pc = 0x14744Cu;
    // 0x14744c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x14744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x147450: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x147450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x147454: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x147454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x147458: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x147458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_14745c:
    // 0x14745c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14745cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x147460: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x147460u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x147464: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x147464u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x147468: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x147468u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14746c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14746cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147470: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x147470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147474: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x147474u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x147478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x147478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14747c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14747cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147484: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x147484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x147488: 0x3e00008  jr          $ra
    ctx->pc = 0x147488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x147490u;
}
