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

// Function: sub_0018AEC0
// Address: 0x18aec0 - 0x18af70
void sub_0018AEC0_0x18aec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AEC0_0x18aec0");
#endif

    switch (ctx->pc) {
        case 0x18aec0u: goto label_18aec0;
        case 0x18aec4u: goto label_18aec4;
        case 0x18aec8u: goto label_18aec8;
        case 0x18aeccu: goto label_18aecc;
        case 0x18aed0u: goto label_18aed0;
        case 0x18aed4u: goto label_18aed4;
        case 0x18aed8u: goto label_18aed8;
        case 0x18aedcu: goto label_18aedc;
        case 0x18aee0u: goto label_18aee0;
        case 0x18aee4u: goto label_18aee4;
        case 0x18aee8u: goto label_18aee8;
        case 0x18aeecu: goto label_18aeec;
        case 0x18aef0u: goto label_18aef0;
        case 0x18aef4u: goto label_18aef4;
        case 0x18aef8u: goto label_18aef8;
        case 0x18aefcu: goto label_18aefc;
        case 0x18af00u: goto label_18af00;
        case 0x18af04u: goto label_18af04;
        case 0x18af08u: goto label_18af08;
        case 0x18af0cu: goto label_18af0c;
        case 0x18af10u: goto label_18af10;
        case 0x18af14u: goto label_18af14;
        case 0x18af18u: goto label_18af18;
        case 0x18af1cu: goto label_18af1c;
        case 0x18af20u: goto label_18af20;
        case 0x18af24u: goto label_18af24;
        case 0x18af28u: goto label_18af28;
        case 0x18af2cu: goto label_18af2c;
        case 0x18af30u: goto label_18af30;
        case 0x18af34u: goto label_18af34;
        case 0x18af38u: goto label_18af38;
        case 0x18af3cu: goto label_18af3c;
        case 0x18af40u: goto label_18af40;
        case 0x18af44u: goto label_18af44;
        case 0x18af48u: goto label_18af48;
        case 0x18af4cu: goto label_18af4c;
        case 0x18af50u: goto label_18af50;
        case 0x18af54u: goto label_18af54;
        case 0x18af58u: goto label_18af58;
        case 0x18af5cu: goto label_18af5c;
        case 0x18af60u: goto label_18af60;
        case 0x18af64u: goto label_18af64;
        case 0x18af68u: goto label_18af68;
        case 0x18af6cu: goto label_18af6c;
        default: break;
    }

    ctx->pc = 0x18aec0u;

label_18aec0:
    // 0x18aec0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18aec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18aec4:
    // 0x18aec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18aec8:
    // 0x18aec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18aec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_18aecc:
    // 0x18aecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18aeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_18aed0:
    // 0x18aed0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x18aed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_18aed4:
    // 0x18aed4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18aed8:
    // 0x18aed8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_18aedc:
    if (ctx->pc == 0x18AEDCu) {
        ctx->pc = 0x18AEE0u;
        goto label_18aee0;
    }
    ctx->pc = 0x18AED8u;
    {
        const bool branch_taken_0x18aed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aed8) {
            ctx->pc = 0x18AEE8u;
            goto label_18aee8;
        }
    }
    ctx->pc = 0x18AEE0u;
label_18aee0:
    // 0x18aee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18aee4:
    // 0x18aee4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18aee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_18aee8:
    // 0x18aee8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x18aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_18aeec:
    // 0x18aeec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18aef0:
    // 0x18aef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18aef4:
    // 0x18aef4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x18aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18aef8:
    // 0x18aef8: 0xc119b68  jal         func_466DA0
label_18aefc:
    if (ctx->pc == 0x18AEFCu) {
        ctx->pc = 0x18AF00u;
        goto label_18af00;
    }
    ctx->pc = 0x18AEF8u;
    SET_GPR_U32(ctx, 31, 0x18AF00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x18AEF8u, 0x18AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF00u;
label_18af00:
    // 0x18af00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18af00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18af04:
    // 0x18af04: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_18af08:
    if (ctx->pc == 0x18AF08u) {
        ctx->pc = 0x18AF0Cu;
        goto label_18af0c;
    }
    ctx->pc = 0x18AF04u;
    {
        const bool branch_taken_0x18af04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af04) {
            ctx->pc = 0x18AF18u;
            goto label_18af18;
        }
    }
    ctx->pc = 0x18AF0Cu;
label_18af0c:
    // 0x18af0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18af0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18af10:
    // 0x18af10: 0x1000000e  b           . + 4 + (0xE << 2)
label_18af14:
    if (ctx->pc == 0x18AF14u) {
        ctx->pc = 0x18AF18u;
        goto label_18af18;
    }
    ctx->pc = 0x18AF10u;
    {
        const bool branch_taken_0x18af10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af10) {
            ctx->pc = 0x18AF4Cu;
            goto label_18af4c;
        }
    }
    ctx->pc = 0x18AF18u;
label_18af18:
    // 0x18af18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18af18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18af1c:
    // 0x18af1c: 0xc0ba088  jal         func_2E8220
label_18af20:
    if (ctx->pc == 0x18AF20u) {
        ctx->pc = 0x18AF24u;
        goto label_18af24;
    }
    ctx->pc = 0x18AF1Cu;
    SET_GPR_U32(ctx, 31, 0x18AF24u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18AF1Cu, 0x18AF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF24u;
label_18af24:
    // 0x18af24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18af24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18af28:
    // 0x18af28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18af2c:
    // 0x18af2c: 0xc0ba088  jal         func_2E8220
label_18af30:
    if (ctx->pc == 0x18AF30u) {
        ctx->pc = 0x18AF34u;
        goto label_18af34;
    }
    ctx->pc = 0x18AF2Cu;
    SET_GPR_U32(ctx, 31, 0x18AF34u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x18AF2Cu, 0x18AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18AF34u;
label_18af34:
    // 0x18af34: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_18af38:
    if (ctx->pc == 0x18AF38u) {
        ctx->pc = 0x18AF3Cu;
        goto label_18af3c;
    }
    ctx->pc = 0x18AF34u;
    {
        const bool branch_taken_0x18af34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af34) {
            ctx->pc = 0x18AEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aee8;
        }
    }
    ctx->pc = 0x18AF3Cu;
label_18af3c:
    // 0x18af3c: 0x200f809  jalr        $s0
label_18af40:
    if (ctx->pc == 0x18AF40u) {
        ctx->pc = 0x18AF44u;
        goto label_18af44;
    }
    ctx->pc = 0x18AF3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x18AF44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AF3Cu, 0x18AF44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18AF44u;
label_18af44:
    // 0x18af44: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_18af48:
    if (ctx->pc == 0x18AF48u) {
        ctx->pc = 0x18AF4Cu;
        goto label_18af4c;
    }
    ctx->pc = 0x18AF44u;
    {
        const bool branch_taken_0x18af44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18af44) {
            ctx->pc = 0x18AEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aee8;
        }
    }
    ctx->pc = 0x18AF4Cu;
label_18af4c:
    // 0x18af4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18af4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18af50:
    // 0x18af50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18af50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18af54:
    // 0x18af54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18af54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_18af58:
    // 0x18af58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x18af58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_18af5c:
    // 0x18af5c: 0x3e00008  jr          $ra
label_18af60:
    if (ctx->pc == 0x18AF60u) {
        ctx->pc = 0x18AF64u;
        goto label_18af64;
    }
    ctx->pc = 0x18AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AF64u;
label_18af64:
    // 0x18af64: 0x0  nop
    ctx->pc = 0x18af64u;
    // NOP
label_18af68:
    // 0x18af68: 0x0  nop
    ctx->pc = 0x18af68u;
    // NOP
label_18af6c:
    // 0x18af6c: 0x0  nop
    ctx->pc = 0x18af6cu;
    // NOP
    ctx->pc = 0x18af70u;
}
