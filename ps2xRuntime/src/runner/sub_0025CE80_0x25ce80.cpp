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

// Function: sub_0025CE80
// Address: 0x25ce80 - 0x25cf20
void sub_0025CE80_0x25ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CE80_0x25ce80");
#endif

    switch (ctx->pc) {
        case 0x25ce80u: goto label_25ce80;
        case 0x25ce84u: goto label_25ce84;
        case 0x25ce88u: goto label_25ce88;
        case 0x25ce8cu: goto label_25ce8c;
        case 0x25ce90u: goto label_25ce90;
        case 0x25ce94u: goto label_25ce94;
        case 0x25ce98u: goto label_25ce98;
        case 0x25ce9cu: goto label_25ce9c;
        case 0x25cea0u: goto label_25cea0;
        case 0x25cea4u: goto label_25cea4;
        case 0x25cea8u: goto label_25cea8;
        case 0x25ceacu: goto label_25ceac;
        case 0x25ceb0u: goto label_25ceb0;
        case 0x25ceb4u: goto label_25ceb4;
        case 0x25ceb8u: goto label_25ceb8;
        case 0x25cebcu: goto label_25cebc;
        case 0x25cec0u: goto label_25cec0;
        case 0x25cec4u: goto label_25cec4;
        case 0x25cec8u: goto label_25cec8;
        case 0x25ceccu: goto label_25cecc;
        case 0x25ced0u: goto label_25ced0;
        case 0x25ced4u: goto label_25ced4;
        case 0x25ced8u: goto label_25ced8;
        case 0x25cedcu: goto label_25cedc;
        case 0x25cee0u: goto label_25cee0;
        case 0x25cee4u: goto label_25cee4;
        case 0x25cee8u: goto label_25cee8;
        case 0x25ceecu: goto label_25ceec;
        case 0x25cef0u: goto label_25cef0;
        case 0x25cef4u: goto label_25cef4;
        case 0x25cef8u: goto label_25cef8;
        case 0x25cefcu: goto label_25cefc;
        case 0x25cf00u: goto label_25cf00;
        case 0x25cf04u: goto label_25cf04;
        case 0x25cf08u: goto label_25cf08;
        case 0x25cf0cu: goto label_25cf0c;
        case 0x25cf10u: goto label_25cf10;
        case 0x25cf14u: goto label_25cf14;
        case 0x25cf18u: goto label_25cf18;
        case 0x25cf1cu: goto label_25cf1c;
        default: break;
    }

    ctx->pc = 0x25ce80u;

label_25ce80:
    // 0x25ce80: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_25ce84:
    // 0x25ce84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25ce84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_25ce88:
    // 0x25ce88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25ce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25ce8c:
    // 0x25ce8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25ce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_25ce90:
    // 0x25ce90: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x25ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_25ce94:
    // 0x25ce94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25ce98:
    // 0x25ce98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_25ce9c:
    if (ctx->pc == 0x25CE9Cu) {
        ctx->pc = 0x25CEA0u;
        goto label_25cea0;
    }
    ctx->pc = 0x25CE98u;
    {
        const bool branch_taken_0x25ce98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ce98) {
            ctx->pc = 0x25CEA8u;
            goto label_25cea8;
        }
    }
    ctx->pc = 0x25CEA0u;
label_25cea0:
    // 0x25cea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25cea4:
    // 0x25cea4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x25cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_25cea8:
    // 0x25cea8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x25cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_25ceac:
    // 0x25ceac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x25ceacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25ceb0:
    // 0x25ceb0: 0xc119b68  jal         func_466DA0
label_25ceb4:
    if (ctx->pc == 0x25CEB4u) {
        ctx->pc = 0x25CEB8u;
        goto label_25ceb8;
    }
    ctx->pc = 0x25CEB0u;
    SET_GPR_U32(ctx, 31, 0x25CEB8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x25CEB0u, 0x25CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEB8u;
label_25ceb8:
    // 0x25ceb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25ceb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25cebc:
    // 0x25cebc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_25cec0:
    if (ctx->pc == 0x25CEC0u) {
        ctx->pc = 0x25CEC4u;
        goto label_25cec4;
    }
    ctx->pc = 0x25CEBCu;
    {
        const bool branch_taken_0x25cebc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cebc) {
            ctx->pc = 0x25CED0u;
            goto label_25ced0;
        }
    }
    ctx->pc = 0x25CEC4u;
label_25cec4:
    // 0x25cec4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25cec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25cec8:
    // 0x25cec8: 0x1000000e  b           . + 4 + (0xE << 2)
label_25cecc:
    if (ctx->pc == 0x25CECCu) {
        ctx->pc = 0x25CED0u;
        goto label_25ced0;
    }
    ctx->pc = 0x25CEC8u;
    {
        const bool branch_taken_0x25cec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cec8) {
            ctx->pc = 0x25CF04u;
            goto label_25cf04;
        }
    }
    ctx->pc = 0x25CED0u;
label_25ced0:
    // 0x25ced0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x25ced0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ced4:
    // 0x25ced4: 0xc0ba088  jal         func_2E8220
label_25ced8:
    if (ctx->pc == 0x25CED8u) {
        ctx->pc = 0x25CEDCu;
        goto label_25cedc;
    }
    ctx->pc = 0x25CED4u;
    SET_GPR_U32(ctx, 31, 0x25CEDCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25CED4u, 0x25CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEDCu;
label_25cedc:
    // 0x25cedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25cedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25cee0:
    // 0x25cee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25cee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25cee4:
    // 0x25cee4: 0xc0ba088  jal         func_2E8220
label_25cee8:
    if (ctx->pc == 0x25CEE8u) {
        ctx->pc = 0x25CEECu;
        goto label_25ceec;
    }
    ctx->pc = 0x25CEE4u;
    SET_GPR_U32(ctx, 31, 0x25CEECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x25CEE4u, 0x25CEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CEECu;
label_25ceec:
    // 0x25ceec: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_25cef0:
    if (ctx->pc == 0x25CEF0u) {
        ctx->pc = 0x25CEF4u;
        goto label_25cef4;
    }
    ctx->pc = 0x25CEECu;
    {
        const bool branch_taken_0x25ceec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ceec) {
            ctx->pc = 0x25CEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cea8;
        }
    }
    ctx->pc = 0x25CEF4u;
label_25cef4:
    // 0x25cef4: 0x200f809  jalr        $s0
label_25cef8:
    if (ctx->pc == 0x25CEF8u) {
        ctx->pc = 0x25CEFCu;
        goto label_25cefc;
    }
    ctx->pc = 0x25CEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x25CEFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CEF4u, 0x25CEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25CEFCu;
label_25cefc:
    // 0x25cefc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_25cf00:
    if (ctx->pc == 0x25CF00u) {
        ctx->pc = 0x25CF04u;
        goto label_25cf04;
    }
    ctx->pc = 0x25CEFCu;
    {
        const bool branch_taken_0x25cefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25cefc) {
            ctx->pc = 0x25CEA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25cea8;
        }
    }
    ctx->pc = 0x25CF04u;
label_25cf04:
    // 0x25cf04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25cf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_25cf08:
    // 0x25cf08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25cf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25cf0c:
    // 0x25cf0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25cf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_25cf10:
    // 0x25cf10: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x25cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_25cf14:
    // 0x25cf14: 0x3e00008  jr          $ra
label_25cf18:
    if (ctx->pc == 0x25CF18u) {
        ctx->pc = 0x25CF1Cu;
        goto label_25cf1c;
    }
    ctx->pc = 0x25CF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CF1Cu;
label_25cf1c:
    // 0x25cf1c: 0x0  nop
    ctx->pc = 0x25cf1cu;
    // NOP
    ctx->pc = 0x25cf20u;
}
