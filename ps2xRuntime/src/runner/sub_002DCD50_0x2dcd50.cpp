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

// Function: sub_002DCD50
// Address: 0x2dcd50 - 0x2dce00
void sub_002DCD50_0x2dcd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCD50_0x2dcd50");
#endif

    switch (ctx->pc) {
        case 0x2dcd50u: goto label_2dcd50;
        case 0x2dcd54u: goto label_2dcd54;
        case 0x2dcd58u: goto label_2dcd58;
        case 0x2dcd5cu: goto label_2dcd5c;
        case 0x2dcd60u: goto label_2dcd60;
        case 0x2dcd64u: goto label_2dcd64;
        case 0x2dcd68u: goto label_2dcd68;
        case 0x2dcd6cu: goto label_2dcd6c;
        case 0x2dcd70u: goto label_2dcd70;
        case 0x2dcd74u: goto label_2dcd74;
        case 0x2dcd78u: goto label_2dcd78;
        case 0x2dcd7cu: goto label_2dcd7c;
        case 0x2dcd80u: goto label_2dcd80;
        case 0x2dcd84u: goto label_2dcd84;
        case 0x2dcd88u: goto label_2dcd88;
        case 0x2dcd8cu: goto label_2dcd8c;
        case 0x2dcd90u: goto label_2dcd90;
        case 0x2dcd94u: goto label_2dcd94;
        case 0x2dcd98u: goto label_2dcd98;
        case 0x2dcd9cu: goto label_2dcd9c;
        case 0x2dcda0u: goto label_2dcda0;
        case 0x2dcda4u: goto label_2dcda4;
        case 0x2dcda8u: goto label_2dcda8;
        case 0x2dcdacu: goto label_2dcdac;
        case 0x2dcdb0u: goto label_2dcdb0;
        case 0x2dcdb4u: goto label_2dcdb4;
        case 0x2dcdb8u: goto label_2dcdb8;
        case 0x2dcdbcu: goto label_2dcdbc;
        case 0x2dcdc0u: goto label_2dcdc0;
        case 0x2dcdc4u: goto label_2dcdc4;
        case 0x2dcdc8u: goto label_2dcdc8;
        case 0x2dcdccu: goto label_2dcdcc;
        case 0x2dcdd0u: goto label_2dcdd0;
        case 0x2dcdd4u: goto label_2dcdd4;
        case 0x2dcdd8u: goto label_2dcdd8;
        case 0x2dcddcu: goto label_2dcddc;
        case 0x2dcde0u: goto label_2dcde0;
        case 0x2dcde4u: goto label_2dcde4;
        case 0x2dcde8u: goto label_2dcde8;
        case 0x2dcdecu: goto label_2dcdec;
        case 0x2dcdf0u: goto label_2dcdf0;
        case 0x2dcdf4u: goto label_2dcdf4;
        case 0x2dcdf8u: goto label_2dcdf8;
        case 0x2dcdfcu: goto label_2dcdfc;
        default: break;
    }

    ctx->pc = 0x2dcd50u;

label_2dcd50:
    // 0x2dcd50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dcd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2dcd54:
    // 0x2dcd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dcd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2dcd58:
    // 0x2dcd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dcd5c:
    // 0x2dcd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dcd60:
    // 0x2dcd60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2dcd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2dcd64:
    // 0x2dcd64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2dcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2dcd68:
    // 0x2dcd68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2dcd6c:
    if (ctx->pc == 0x2DCD6Cu) {
        ctx->pc = 0x2DCD70u;
        goto label_2dcd70;
    }
    ctx->pc = 0x2DCD68u;
    {
        const bool branch_taken_0x2dcd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd68) {
            ctx->pc = 0x2DCD78u;
            goto label_2dcd78;
        }
    }
    ctx->pc = 0x2DCD70u;
label_2dcd70:
    // 0x2dcd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dcd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dcd74:
    // 0x2dcd74: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2dcd74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2dcd78:
    // 0x2dcd78: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2dcd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2dcd7c:
    // 0x2dcd7c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2dcd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2dcd80:
    // 0x2dcd80: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x2dcd80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dcd84:
    // 0x2dcd84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2dcd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2dcd88:
    // 0x2dcd88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2dcd88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2dcd8c:
    // 0x2dcd8c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2dcd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2dcd90:
    // 0x2dcd90: 0xc119b68  jal         func_466DA0
label_2dcd94:
    if (ctx->pc == 0x2DCD94u) {
        ctx->pc = 0x2DCD98u;
        goto label_2dcd98;
    }
    ctx->pc = 0x2DCD90u;
    SET_GPR_U32(ctx, 31, 0x2DCD98u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2DCD90u, 0x2DCD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD98u;
label_2dcd98:
    // 0x2dcd98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dcd98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcd9c:
    // 0x2dcd9c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2dcda0:
    if (ctx->pc == 0x2DCDA0u) {
        ctx->pc = 0x2DCDA4u;
        goto label_2dcda4;
    }
    ctx->pc = 0x2DCD9Cu;
    {
        const bool branch_taken_0x2dcd9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcd9c) {
            ctx->pc = 0x2DCDB0u;
            goto label_2dcdb0;
        }
    }
    ctx->pc = 0x2DCDA4u;
label_2dcda4:
    // 0x2dcda4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dcda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dcda8:
    // 0x2dcda8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2dcdac:
    if (ctx->pc == 0x2DCDACu) {
        ctx->pc = 0x2DCDB0u;
        goto label_2dcdb0;
    }
    ctx->pc = 0x2DCDA8u;
    {
        const bool branch_taken_0x2dcda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcda8) {
            ctx->pc = 0x2DCDE4u;
            goto label_2dcde4;
        }
    }
    ctx->pc = 0x2DCDB0u;
label_2dcdb0:
    // 0x2dcdb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dcdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dcdb4:
    // 0x2dcdb4: 0xc0ba088  jal         func_2E8220
label_2dcdb8:
    if (ctx->pc == 0x2DCDB8u) {
        ctx->pc = 0x2DCDBCu;
        goto label_2dcdbc;
    }
    ctx->pc = 0x2DCDB4u;
    SET_GPR_U32(ctx, 31, 0x2DCDBCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2DCDB4u, 0x2DCDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDBCu;
label_2dcdbc:
    // 0x2dcdbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dcdbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dcdc0:
    // 0x2dcdc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dcdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2dcdc4:
    // 0x2dcdc4: 0xc0ba088  jal         func_2E8220
label_2dcdc8:
    if (ctx->pc == 0x2DCDC8u) {
        ctx->pc = 0x2DCDCCu;
        goto label_2dcdcc;
    }
    ctx->pc = 0x2DCDC4u;
    SET_GPR_U32(ctx, 31, 0x2DCDCCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2DCDC4u, 0x2DCDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCDCCu;
label_2dcdcc:
    // 0x2dcdcc: 0x1200ffea  beqz        $s0, . + 4 + (-0x16 << 2)
label_2dcdd0:
    if (ctx->pc == 0x2DCDD0u) {
        ctx->pc = 0x2DCDD4u;
        goto label_2dcdd4;
    }
    ctx->pc = 0x2DCDCCu;
    {
        const bool branch_taken_0x2dcdcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcdcc) {
            ctx->pc = 0x2DCD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd78;
        }
    }
    ctx->pc = 0x2DCDD4u;
label_2dcdd4:
    // 0x2dcdd4: 0x200f809  jalr        $s0
label_2dcdd8:
    if (ctx->pc == 0x2DCDD8u) {
        ctx->pc = 0x2DCDDCu;
        goto label_2dcddc;
    }
    ctx->pc = 0x2DCDD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2DCDDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCDD4u, 0x2DCDDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DCDDCu;
label_2dcddc:
    // 0x2dcddc: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
label_2dcde0:
    if (ctx->pc == 0x2DCDE0u) {
        ctx->pc = 0x2DCDE4u;
        goto label_2dcde4;
    }
    ctx->pc = 0x2DCDDCu;
    {
        const bool branch_taken_0x2dcddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dcddc) {
            ctx->pc = 0x2DCD78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dcd78;
        }
    }
    ctx->pc = 0x2DCDE4u;
label_2dcde4:
    // 0x2dcde4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dcde4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dcde8:
    // 0x2dcde8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dcde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dcdec:
    // 0x2dcdec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dcdecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dcdf0:
    // 0x2dcdf0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2dcdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2dcdf4:
    // 0x2dcdf4: 0x3e00008  jr          $ra
label_2dcdf8:
    if (ctx->pc == 0x2DCDF8u) {
        ctx->pc = 0x2DCDFCu;
        goto label_2dcdfc;
    }
    ctx->pc = 0x2DCDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCDFCu;
label_2dcdfc:
    // 0x2dcdfc: 0x0  nop
    ctx->pc = 0x2dcdfcu;
    // NOP
    ctx->pc = 0x2dce00u;
}
