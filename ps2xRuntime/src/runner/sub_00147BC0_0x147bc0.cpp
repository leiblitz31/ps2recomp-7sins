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

// Function: sub_00147BC0
// Address: 0x147bc0 - 0x148110
void sub_00147BC0_0x147bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147BC0_0x147bc0");
#endif

    switch (ctx->pc) {
        case 0x147c00u: goto label_147c00;
        case 0x147c2cu: goto label_147c2c;
        case 0x147c38u: goto label_147c38;
        case 0x147c48u: goto label_147c48;
        case 0x147c74u: goto label_147c74;
        case 0x147ca4u: goto label_147ca4;
        case 0x147cd0u: goto label_147cd0;
        case 0x147d00u: goto label_147d00;
        case 0x147d28u: goto label_147d28;
        case 0x147d34u: goto label_147d34;
        case 0x147d40u: goto label_147d40;
        case 0x147d5cu: goto label_147d5c;
        case 0x147d78u: goto label_147d78;
        case 0x147d88u: goto label_147d88;
        case 0x147d98u: goto label_147d98;
        case 0x147db8u: goto label_147db8;
        case 0x147de4u: goto label_147de4;
        case 0x147e00u: goto label_147e00;
        case 0x147e74u: goto label_147e74;
        case 0x147ea8u: goto label_147ea8;
        case 0x147eb4u: goto label_147eb4;
        case 0x147ec0u: goto label_147ec0;
        case 0x147ee0u: goto label_147ee0;
        case 0x147ef0u: goto label_147ef0;
        case 0x147f00u: goto label_147f00;
        case 0x147f30u: goto label_147f30;
        case 0x147f4cu: goto label_147f4c;
        case 0x14800cu: goto label_14800c;
        case 0x148018u: goto label_148018;
        case 0x148024u: goto label_148024;
        case 0x148044u: goto label_148044;
        default: break;
    }

    ctx->pc = 0x147bc0u;

    // 0x147bc0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x147bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x147bc4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x147bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x147bc8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x147bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x147bcc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x147bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x147bd0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x147bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x147bd4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x147bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x147bd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x147bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x147bdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x147bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x147be0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x147be4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x147be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147be8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x147bec: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x147becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x147bf0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x147bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x147bf4: 0x24c62bc0  addiu       $a2, $a2, 0x2BC0
    ctx->pc = 0x147bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11200));
    // 0x147bf8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x147bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x147bfc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x147bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_147c00:
    // 0x147c00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x147c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x147c04: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x147c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x147c08: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x147c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x147c0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x147c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x147c10: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x147c10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x147c14: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x147c14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x147c18: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x147c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x147c1c: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x147C1Cu;
    {
        const bool branch_taken_0x147c1c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x147c1c) {
            ctx->pc = 0x147C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147c00;
        }
    }
    ctx->pc = 0x147C24u;
    // 0x147c24: 0xc090864  jal         func_242190
    ctx->pc = 0x147C24u;
    SET_GPR_U32(ctx, 31, 0x147C2Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x147C24u, 0x147C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C2Cu;
label_147c2c:
    // 0x147c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c30: 0xc090590  jal         func_241640
    ctx->pc = 0x147C30u;
    SET_GPR_U32(ctx, 31, 0x147C38u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x147C30u, 0x147C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C38u;
label_147c38:
    // 0x147c38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x147c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x147c40: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x147C40u;
    SET_GPR_U32(ctx, 31, 0x147C48u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x147C40u, 0x147C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C48u;
label_147c48:
    // 0x147c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x147c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147c4c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x147c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x147c50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x147c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147c54: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x147c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x147c58: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x147c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x147c5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x147C5Cu;
    {
        const bool branch_taken_0x147c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147c5c) {
            ctx->pc = 0x147C80u;
            goto label_147c80;
        }
    }
    ctx->pc = 0x147C64u;
    // 0x147c64: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x147c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x147c68: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x147c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x147c6c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x147C6Cu;
    SET_GPR_U32(ctx, 31, 0x147C74u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x147C6Cu, 0x147C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147C74u;
label_147c74:
    // 0x147c74: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x147c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x147c78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147C78u;
    {
        const bool branch_taken_0x147c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147c78) {
            ctx->pc = 0x147C84u;
            goto label_147c84;
        }
    }
    ctx->pc = 0x147C80u;
label_147c80:
    // 0x147c80: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x147c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_147c84:
    // 0x147c84: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x147c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x147c88: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x147c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x147c8c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x147c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x147c90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x147C90u;
    {
        const bool branch_taken_0x147c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147c90) {
            ctx->pc = 0x147CB0u;
            goto label_147cb0;
        }
    }
    ctx->pc = 0x147C98u;
    // 0x147c98: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x147c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x147c9c: 0xc096880  jal         func_25A200
    ctx->pc = 0x147C9Cu;
    SET_GPR_U32(ctx, 31, 0x147CA4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x147C9Cu, 0x147CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147CA4u;
label_147ca4:
    // 0x147ca4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x147ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x147ca8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147CA8u;
    {
        const bool branch_taken_0x147ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ca8) {
            ctx->pc = 0x147CB4u;
            goto label_147cb4;
        }
    }
    ctx->pc = 0x147CB0u;
label_147cb0:
    // 0x147cb0: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x147cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_147cb4:
    // 0x147cb4: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x147cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x147cb8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x147cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x147cbc: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x147cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x147cc0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x147cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x147cc4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x147CC4u;
    {
        const bool branch_taken_0x147cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x147cc4) {
            ctx->pc = 0x147CECu;
            goto label_147cec;
        }
    }
    ctx->pc = 0x147CCCu;
    // 0x147ccc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x147cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_147cd0:
    // 0x147cd0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x147cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x147cd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147cd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x147cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x147cdc: 0x0  nop
    ctx->pc = 0x147cdcu;
    // NOP
    // 0x147ce0: 0x0  nop
    ctx->pc = 0x147ce0u;
    // NOP
    // 0x147ce4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147CE4u;
    {
        const bool branch_taken_0x147ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147ce4) {
            ctx->pc = 0x147CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147cd0;
        }
    }
    ctx->pc = 0x147CECu;
label_147cec:
    // 0x147cec: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x147cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x147cf0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x147cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x147cf4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x147CF4u;
    {
        const bool branch_taken_0x147cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x147cf4) {
            ctx->pc = 0x147D1Cu;
            goto label_147d1c;
        }
    }
    ctx->pc = 0x147CFCu;
    // 0x147cfc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x147cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_147d00:
    // 0x147d00: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x147d00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x147d04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147d08: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x147d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x147d0c: 0x0  nop
    ctx->pc = 0x147d0cu;
    // NOP
    // 0x147d10: 0x0  nop
    ctx->pc = 0x147d10u;
    // NOP
    // 0x147d14: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147D14u;
    {
        const bool branch_taken_0x147d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147d14) {
            ctx->pc = 0x147D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147d00;
        }
    }
    ctx->pc = 0x147D1Cu;
label_147d1c:
    // 0x147d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d20: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x147D20u;
    SET_GPR_U32(ctx, 31, 0x147D28u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x147D20u, 0x147D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D28u;
label_147d28:
    // 0x147d28: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x147d28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d2c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x147D2Cu;
    {
        const bool branch_taken_0x147d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d2c) {
            ctx->pc = 0x147DD8u;
            goto label_147dd8;
        }
    }
    ctx->pc = 0x147D34u;
label_147d34:
    // 0x147d34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x147d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x147D38u;
    {
        const bool branch_taken_0x147d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147d38) {
            ctx->pc = 0x147DC8u;
            goto label_147dc8;
        }
    }
    ctx->pc = 0x147D40u;
label_147d40:
    // 0x147d40: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x147d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x147d44: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x147d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x147d48: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x147d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x147d4c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x147d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x147d50: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x147d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x147d54: 0xc09138c  jal         func_244E30
    ctx->pc = 0x147D54u;
    SET_GPR_U32(ctx, 31, 0x147D5Cu);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x147D54u, 0x147D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D5Cu;
label_147d5c:
    // 0x147d5c: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x147d5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x147d60: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x147D60u;
    {
        const bool branch_taken_0x147d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x147d60) {
            ctx->pc = 0x147DC4u;
            goto label_147dc4;
        }
    }
    ctx->pc = 0x147D68u;
    // 0x147d68: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x147d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x147d6c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x147d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x147d70: 0xc085538  jal         func_2154E0
    ctx->pc = 0x147D70u;
    SET_GPR_U32(ctx, 31, 0x147D78u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x147D70u, 0x147D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D78u;
label_147d78:
    // 0x147d78: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x147d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
    // 0x147d7c: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x147d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x147d80: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x147D80u;
    SET_GPR_U32(ctx, 31, 0x147D88u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x147D80u, 0x147D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D88u;
label_147d88:
    // 0x147d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147d8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x147d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147d90: 0xc040a90  jal         func_102A40
    ctx->pc = 0x147D90u;
    SET_GPR_U32(ctx, 31, 0x147D98u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x147D90u, 0x147D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147D98u;
label_147d98:
    // 0x147d98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x147d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147d9c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x147d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147da0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x147da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x147da4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x147da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x147da8: 0xe44000e0  swc1        $f0, 0xE0($v0)
    ctx->pc = 0x147da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 224), bits); }
    // 0x147dac: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x147dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x147db0: 0xc0984ac  jal         func_2612B0
    ctx->pc = 0x147DB0u;
    SET_GPR_U32(ctx, 31, 0x147DB8u);
    ctx->pc = 0x2612B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612B0u, 0x147DB0u, 0x147DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DB8u;
label_147db8:
    // 0x147db8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x147db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x147dbc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x147dc0: 0xac6200d0  sw          $v0, 0xD0($v1)
    ctx->pc = 0x147dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 208), GPR_U32(ctx, 2));
label_147dc4:
    // 0x147dc4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x147dc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_147dc8:
    // 0x147dc8: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x147dc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x147dcc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x147DCCu;
    {
        const bool branch_taken_0x147dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147dcc) {
            ctx->pc = 0x147D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147d40;
        }
    }
    ctx->pc = 0x147DD4u;
    // 0x147dd4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x147dd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_147dd8:
    // 0x147dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ddc: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x147DDCu;
    SET_GPR_U32(ctx, 31, 0x147DE4u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x147DDCu, 0x147DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147DE4u;
label_147de4:
    // 0x147de4: 0x1682ffd3  bne         $s4, $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x147DE4u;
    {
        const bool branch_taken_0x147de4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x147de4) {
            ctx->pc = 0x147D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147d34;
        }
    }
    ctx->pc = 0x147DECu;
    // 0x147dec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x147decu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147df0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x147df0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147df4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x147df4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147df8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x147DF8u;
    {
        const bool branch_taken_0x147df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147df8) {
            ctx->pc = 0x147E50u;
            goto label_147e50;
        }
    }
    ctx->pc = 0x147E00u;
label_147e00:
    // 0x147e00: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x147e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x147e04: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x147e08: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x147e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147e0c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x147e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x147e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147e14: 0x0  nop
    ctx->pc = 0x147e14u;
    // NOP
    // 0x147e18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x147e18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147e1c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x147E1Cu;
    {
        const bool branch_taken_0x147e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x147e1c) {
            ctx->pc = 0x147E30u;
            goto label_147e30;
        }
    }
    ctx->pc = 0x147E24u;
    // 0x147e24: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x147e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x147e28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x147E28u;
    {
        const bool branch_taken_0x147e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e28) {
            ctx->pc = 0x147E4Cu;
            goto label_147e4c;
        }
    }
    ctx->pc = 0x147E30u;
label_147e30:
    // 0x147e30: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x147e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x147e34: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x147e38: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x147e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x147e3c: 0x2c630006  sltiu       $v1, $v1, 0x6
    ctx->pc = 0x147e3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x147e40: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x147E40u;
    {
        const bool branch_taken_0x147e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147e40) {
            ctx->pc = 0x147E4Cu;
            goto label_147e4c;
        }
    }
    ctx->pc = 0x147E48u;
    // 0x147e48: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x147e48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_147e4c:
    // 0x147e4c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x147e4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_147e50:
    // 0x147e50: 0x2ac30003  slti        $v1, $s6, 0x3
    ctx->pc = 0x147e50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x147e54: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x147E54u;
    {
        const bool branch_taken_0x147e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147e54) {
            ctx->pc = 0x147E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147e00;
        }
    }
    ctx->pc = 0x147E5Cu;
    // 0x147e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147e60: 0xa3a3010f  sb          $v1, 0x10F($sp)
    ctx->pc = 0x147e60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 3));
    // 0x147e64: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x147e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x147e68: 0x8c75003c  lw          $s5, 0x3C($v1)
    ctx->pc = 0x147e68u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x147e6c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x147E6Cu;
    {
        const bool branch_taken_0x147e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e6c) {
            ctx->pc = 0x14805Cu;
            goto label_14805c;
        }
    }
    ctx->pc = 0x147E74u;
label_147e74:
    // 0x147e74: 0x2ea1000a  sltiu       $at, $s5, 0xA
    ctx->pc = 0x147e74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x147e78: 0x10200076  beqz        $at, . + 4 + (0x76 << 2)
    ctx->pc = 0x147E78u;
    {
        const bool branch_taken_0x147e78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147e78) {
            ctx->pc = 0x148054u;
            goto label_148054;
        }
    }
    ctx->pc = 0x147E80u;
    // 0x147e80: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x147e80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x147e84: 0x24848200  addiu       $a0, $a0, -0x7E00
    ctx->pc = 0x147e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935040));
    // 0x147e88: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x147e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x147e8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x147e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x147e90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x147e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147e94: 0x600008  jr          $v1
    ctx->pc = 0x147E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147E9Cu: goto label_147e9c;
            case 0x147F40u: goto label_147f40;
            case 0x147F98u: goto label_147f98;
            case 0x147FA8u: goto label_147fa8;
            case 0x147FB8u: goto label_147fb8;
            case 0x147FD0u: goto label_147fd0;
            case 0x147FE4u: goto label_147fe4;
            case 0x148000u: goto label_148000;
            case 0x148054u: goto label_148054;
            case 0x148058u: goto label_148058;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147E94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x147E9Cu;
label_147e9c:
    // 0x147e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ea0: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x147EA0u;
    SET_GPR_U32(ctx, 31, 0x147EA8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x147EA0u, 0x147EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EA8u;
label_147ea8:
    // 0x147ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147eac: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x147EACu;
    {
        const bool branch_taken_0x147eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147eac) {
            ctx->pc = 0x147F24u;
            goto label_147f24;
        }
    }
    ctx->pc = 0x147EB4u;
label_147eb4:
    // 0x147eb4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x147eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x147eb8: 0xc09138c  jal         func_244E30
    ctx->pc = 0x147EB8u;
    SET_GPR_U32(ctx, 31, 0x147EC0u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x147EB8u, 0x147EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EC0u;
label_147ec0:
    // 0x147ec0: 0x3c03309e  lui         $v1, 0x309E
    ctx->pc = 0x147ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12446 << 16));
    // 0x147ec4: 0x3463271c  ori         $v1, $v1, 0x271C
    ctx->pc = 0x147ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)10012);
    // 0x147ec8: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x147EC8u;
    {
        const bool branch_taken_0x147ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x147ec8) {
            ctx->pc = 0x147F20u;
            goto label_147f20;
        }
    }
    ctx->pc = 0x147ED0u;
    // 0x147ed0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x147ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x147ed4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x147ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x147ed8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x147ED8u;
    SET_GPR_U32(ctx, 31, 0x147EE0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x147ED8u, 0x147EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EE0u;
label_147ee0:
    // 0x147ee0: 0xafa200f8  sw          $v0, 0xF8($sp)
    ctx->pc = 0x147ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 2));
    // 0x147ee4: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x147ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x147ee8: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x147EE8u;
    SET_GPR_U32(ctx, 31, 0x147EF0u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x147EE8u, 0x147EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147EF0u;
label_147ef0:
    // 0x147ef0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x147ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147ef4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x147ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x147ef8: 0xc040a90  jal         func_102A40
    ctx->pc = 0x147EF8u;
    SET_GPR_U32(ctx, 31, 0x147F00u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x147EF8u, 0x147F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F00u;
label_147f00:
    // 0x147f00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x147f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x147f04: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x147f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f08: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x147f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x147f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f10: 0x0  nop
    ctx->pc = 0x147f10u;
    // NOP
    // 0x147f14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x147f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f18: 0x4501005c  bc1t        . + 4 + (0x5C << 2)
    ctx->pc = 0x147F18u;
    {
        const bool branch_taken_0x147f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147f18) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x147F20u;
label_147f20:
    // 0x147f20: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x147f20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_147f24:
    // 0x147f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147f28: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x147F28u;
    SET_GPR_U32(ctx, 31, 0x147F30u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x147F28u, 0x147F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147F30u;
label_147f30:
    // 0x147f30: 0x1622ffe0  bne         $s1, $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x147F30u;
    {
        const bool branch_taken_0x147f30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x147f30) {
            ctx->pc = 0x147EB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147eb4;
        }
    }
    ctx->pc = 0x147F38u;
    // 0x147f38: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x147F38u;
    {
        const bool branch_taken_0x147f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f38) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147F40u;
label_147f40:
    // 0x147f40: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x147f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
    // 0x147f44: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x147F44u;
    {
        const bool branch_taken_0x147f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f44) {
            ctx->pc = 0x147F80u;
            goto label_147f80;
        }
    }
    ctx->pc = 0x147F4Cu;
label_147f4c:
    // 0x147f4c: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x147f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x147f50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147f54: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x147f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x147f58: 0xc46100e0  lwc1        $f1, 0xE0($v1)
    ctx->pc = 0x147f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147f5c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x147f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x147f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147f64: 0x0  nop
    ctx->pc = 0x147f64u;
    // NOP
    // 0x147f68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x147f68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147f6c: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x147F6Cu;
    {
        const bool branch_taken_0x147f6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x147f6c) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x147F74u;
    // 0x147f74: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x147f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x147f78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x147f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x147f7c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x147f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
label_147f80:
    // 0x147f80: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x147f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x147f84: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x147f84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x147f88: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x147F88u;
    {
        const bool branch_taken_0x147f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147f88) {
            ctx->pc = 0x147F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147f4c;
        }
    }
    ctx->pc = 0x147F90u;
    // 0x147f90: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x147F90u;
    {
        const bool branch_taken_0x147f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147f90) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147F98u;
label_147f98:
    // 0x147f98: 0x1ee0003c  bgtz        $s7, . + 4 + (0x3C << 2)
    ctx->pc = 0x147F98u;
    {
        const bool branch_taken_0x147f98 = (GPR_S32(ctx, 23) > 0);
        if (branch_taken_0x147f98) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x147FA0u;
    // 0x147fa0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x147FA0u;
    {
        const bool branch_taken_0x147fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fa0) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147FA8u;
label_147fa8:
    // 0x147fa8: 0x1e400038  bgtz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x147FA8u;
    {
        const bool branch_taken_0x147fa8 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x147fa8) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x147FB0u;
    // 0x147fb0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x147FB0u;
    {
        const bool branch_taken_0x147fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fb0) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147FB8u;
label_147fb8:
    // 0x147fb8: 0x1a400027  blez        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x147FB8u;
    {
        const bool branch_taken_0x147fb8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x147fb8) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147FC0u;
    // 0x147fc0: 0x1ee00032  bgtz        $s7, . + 4 + (0x32 << 2)
    ctx->pc = 0x147FC0u;
    {
        const bool branch_taken_0x147fc0 = (GPR_S32(ctx, 23) > 0);
        if (branch_taken_0x147fc0) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x147FC8u;
    // 0x147fc8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x147FC8u;
    {
        const bool branch_taken_0x147fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fc8) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147FD0u;
label_147fd0:
    // 0x147fd0: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x147fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x147fd4: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
    ctx->pc = 0x147FD4u;
    {
        const bool branch_taken_0x147fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fd4) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x147FDCu;
    // 0x147fdc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x147FDCu;
    {
        const bool branch_taken_0x147fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147fdc) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147FE4u;
label_147fe4:
    // 0x147fe4: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x147fe4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x147fe8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x147FE8u;
    {
        const bool branch_taken_0x147fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x147fe8) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x147FF0u;
    // 0x147ff0: 0x1ee00026  bgtz        $s7, . + 4 + (0x26 << 2)
    ctx->pc = 0x147FF0u;
    {
        const bool branch_taken_0x147ff0 = (GPR_S32(ctx, 23) > 0);
        if (branch_taken_0x147ff0) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x147FF8u;
    // 0x147ff8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x147FF8u;
    {
        const bool branch_taken_0x147ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147ff8) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x148000u;
label_148000:
    // 0x148000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148004: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x148004u;
    SET_GPR_U32(ctx, 31, 0x14800Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x148004u, 0x14800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14800Cu;
label_14800c:
    // 0x14800c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x14800cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148010: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x148010u;
    {
        const bool branch_taken_0x148010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148010) {
            ctx->pc = 0x148038u;
            goto label_148038;
        }
    }
    ctx->pc = 0x148018u;
label_148018:
    // 0x148018: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x148018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14801c: 0xc09138c  jal         func_244E30
    ctx->pc = 0x14801Cu;
    SET_GPR_U32(ctx, 31, 0x148024u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x14801Cu, 0x148024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148024u;
label_148024:
    // 0x148024: 0x3c03aa67  lui         $v1, 0xAA67
    ctx->pc = 0x148024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43623 << 16));
    // 0x148028: 0x3463011c  ori         $v1, $v1, 0x11C
    ctx->pc = 0x148028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)284);
    // 0x14802c: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14802Cu;
    {
        const bool branch_taken_0x14802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14802c) {
            ctx->pc = 0x14808Cu;
            goto label_14808c;
        }
    }
    ctx->pc = 0x148034u;
    // 0x148034: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x148034u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_148038:
    // 0x148038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14803c: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x14803Cu;
    SET_GPR_U32(ctx, 31, 0x148044u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x14803Cu, 0x148044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148044u;
label_148044:
    // 0x148044: 0x17c2fff4  bne         $fp, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x148044u;
    {
        const bool branch_taken_0x148044 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x148044) {
            ctx->pc = 0x148018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148018;
        }
    }
    ctx->pc = 0x14804Cu;
    // 0x14804c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14804Cu;
    {
        const bool branch_taken_0x14804c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14804c) {
            ctx->pc = 0x148058u;
            goto label_148058;
        }
    }
    ctx->pc = 0x148054u;
label_148054:
    // 0x148054: 0xa3a0010f  sb          $zero, 0x10F($sp)
    ctx->pc = 0x148054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 271), (uint8_t)GPR_U32(ctx, 0));
label_148058:
    // 0x148058: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x148058u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_14805c:
    // 0x14805c: 0x93a3010f  lbu         $v1, 0x10F($sp)
    ctx->pc = 0x14805cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 271)));
    // 0x148060: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x148060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x148064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148068: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x148068u;
    {
        const bool branch_taken_0x148068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x148068) {
            ctx->pc = 0x148084u;
            goto label_148084;
        }
    }
    ctx->pc = 0x148070u;
    // 0x148070: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x148070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148074: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x148074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x148078: 0x2a3082a  slt         $at, $s5, $v1
    ctx->pc = 0x148078u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14807c: 0x1020ff7d  beqz        $at, . + 4 + (-0x83 << 2)
    ctx->pc = 0x14807Cu;
    {
        const bool branch_taken_0x14807c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14807c) {
            ctx->pc = 0x147E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147e74;
        }
    }
    ctx->pc = 0x148084u;
label_148084:
    // 0x148084: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x148084u;
    {
        const bool branch_taken_0x148084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148084) {
            ctx->pc = 0x1480DCu;
            goto label_1480dc;
        }
    }
    ctx->pc = 0x14808Cu;
label_14808c:
    // 0x14808c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x14808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148090: 0xac750034  sw          $s5, 0x34($v1)
    ctx->pc = 0x148090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 21));
    // 0x148094: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x148094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x148098: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x148098u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x14809c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x14809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1480a0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1480a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1480a4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1480a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1480a8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1480a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1480ac: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1480acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1480b0: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1480b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1480b4: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1480b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1480b8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1480b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1480bc: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x1480bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1480c0: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1480c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1480c4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1480C4u;
    {
        const bool branch_taken_0x1480c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1480c4) {
            ctx->pc = 0x1480DCu;
            goto label_1480dc;
        }
    }
    ctx->pc = 0x1480CCu;
    // 0x1480cc: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1480ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1480d0: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x1480d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1480d4: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1480d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1480d8: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1480d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_1480dc:
    // 0x1480dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1480dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1480e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1480e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1480e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1480e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1480e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1480e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1480ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1480ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1480f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1480f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1480f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1480f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1480f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1480f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1480fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1480fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148100: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148104: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x148104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x148108: 0x3e00008  jr          $ra
    ctx->pc = 0x148108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148110u;
}
