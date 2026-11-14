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

// Function: sub_0048DC40
// Address: 0x48dc40 - 0x48dcf0
void sub_0048DC40_0x48dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048DC40_0x48dc40");
#endif

    switch (ctx->pc) {
        case 0x48dc40u: goto label_48dc40;
        case 0x48dc44u: goto label_48dc44;
        case 0x48dc48u: goto label_48dc48;
        case 0x48dc4cu: goto label_48dc4c;
        case 0x48dc50u: goto label_48dc50;
        case 0x48dc54u: goto label_48dc54;
        case 0x48dc58u: goto label_48dc58;
        case 0x48dc5cu: goto label_48dc5c;
        case 0x48dc60u: goto label_48dc60;
        case 0x48dc64u: goto label_48dc64;
        case 0x48dc68u: goto label_48dc68;
        case 0x48dc6cu: goto label_48dc6c;
        case 0x48dc70u: goto label_48dc70;
        case 0x48dc74u: goto label_48dc74;
        case 0x48dc78u: goto label_48dc78;
        case 0x48dc7cu: goto label_48dc7c;
        case 0x48dc80u: goto label_48dc80;
        case 0x48dc84u: goto label_48dc84;
        case 0x48dc88u: goto label_48dc88;
        case 0x48dc8cu: goto label_48dc8c;
        case 0x48dc90u: goto label_48dc90;
        case 0x48dc94u: goto label_48dc94;
        case 0x48dc98u: goto label_48dc98;
        case 0x48dc9cu: goto label_48dc9c;
        case 0x48dca0u: goto label_48dca0;
        case 0x48dca4u: goto label_48dca4;
        case 0x48dca8u: goto label_48dca8;
        case 0x48dcacu: goto label_48dcac;
        case 0x48dcb0u: goto label_48dcb0;
        case 0x48dcb4u: goto label_48dcb4;
        case 0x48dcb8u: goto label_48dcb8;
        case 0x48dcbcu: goto label_48dcbc;
        case 0x48dcc0u: goto label_48dcc0;
        case 0x48dcc4u: goto label_48dcc4;
        case 0x48dcc8u: goto label_48dcc8;
        case 0x48dcccu: goto label_48dccc;
        case 0x48dcd0u: goto label_48dcd0;
        case 0x48dcd4u: goto label_48dcd4;
        case 0x48dcd8u: goto label_48dcd8;
        case 0x48dcdcu: goto label_48dcdc;
        case 0x48dce0u: goto label_48dce0;
        case 0x48dce4u: goto label_48dce4;
        case 0x48dce8u: goto label_48dce8;
        case 0x48dcecu: goto label_48dcec;
        default: break;
    }

    ctx->pc = 0x48dc40u;

label_48dc40:
    // 0x48dc40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48dc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_48dc44:
    // 0x48dc44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48dc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48dc48:
    // 0x48dc48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48dc4c:
    // 0x48dc4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48dc50:
    // 0x48dc50: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x48dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_48dc54:
    // 0x48dc54: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48dc58:
    // 0x48dc58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_48dc5c:
    if (ctx->pc == 0x48DC5Cu) {
        ctx->pc = 0x48DC60u;
        goto label_48dc60;
    }
    ctx->pc = 0x48DC58u;
    {
        const bool branch_taken_0x48dc58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48dc58) {
            ctx->pc = 0x48DC68u;
            goto label_48dc68;
        }
    }
    ctx->pc = 0x48DC60u;
label_48dc60:
    // 0x48dc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48dc64:
    // 0x48dc64: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x48dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_48dc68:
    // 0x48dc68: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x48dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_48dc6c:
    // 0x48dc6c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x48dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48dc70:
    // 0x48dc70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48dc74:
    // 0x48dc74: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x48dc74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_48dc78:
    // 0x48dc78: 0xc119b68  jal         func_466DA0
label_48dc7c:
    if (ctx->pc == 0x48DC7Cu) {
        ctx->pc = 0x48DC80u;
        goto label_48dc80;
    }
    ctx->pc = 0x48DC78u;
    SET_GPR_U32(ctx, 31, 0x48DC80u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x48DC78u, 0x48DC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DC80u;
label_48dc80:
    // 0x48dc80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x48dc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48dc84:
    // 0x48dc84: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_48dc88:
    if (ctx->pc == 0x48DC88u) {
        ctx->pc = 0x48DC8Cu;
        goto label_48dc8c;
    }
    ctx->pc = 0x48DC84u;
    {
        const bool branch_taken_0x48dc84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dc84) {
            ctx->pc = 0x48DC98u;
            goto label_48dc98;
        }
    }
    ctx->pc = 0x48DC8Cu;
label_48dc8c:
    // 0x48dc8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x48dc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_48dc90:
    // 0x48dc90: 0x1000000e  b           . + 4 + (0xE << 2)
label_48dc94:
    if (ctx->pc == 0x48DC94u) {
        ctx->pc = 0x48DC98u;
        goto label_48dc98;
    }
    ctx->pc = 0x48DC90u;
    {
        const bool branch_taken_0x48dc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dc90) {
            ctx->pc = 0x48DCCCu;
            goto label_48dccc;
        }
    }
    ctx->pc = 0x48DC98u;
label_48dc98:
    // 0x48dc98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48dc98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48dc9c:
    // 0x48dc9c: 0xc0ba088  jal         func_2E8220
label_48dca0:
    if (ctx->pc == 0x48DCA0u) {
        ctx->pc = 0x48DCA4u;
        goto label_48dca4;
    }
    ctx->pc = 0x48DC9Cu;
    SET_GPR_U32(ctx, 31, 0x48DCA4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x48DC9Cu, 0x48DCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DCA4u;
label_48dca4:
    // 0x48dca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48dca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_48dca8:
    // 0x48dca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48dcac:
    // 0x48dcac: 0xc0ba088  jal         func_2E8220
label_48dcb0:
    if (ctx->pc == 0x48DCB0u) {
        ctx->pc = 0x48DCB4u;
        goto label_48dcb4;
    }
    ctx->pc = 0x48DCACu;
    SET_GPR_U32(ctx, 31, 0x48DCB4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x48DCACu, 0x48DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48DCB4u;
label_48dcb4:
    // 0x48dcb4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_48dcb8:
    if (ctx->pc == 0x48DCB8u) {
        ctx->pc = 0x48DCBCu;
        goto label_48dcbc;
    }
    ctx->pc = 0x48DCB4u;
    {
        const bool branch_taken_0x48dcb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dcb4) {
            ctx->pc = 0x48DC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dc68;
        }
    }
    ctx->pc = 0x48DCBCu;
label_48dcbc:
    // 0x48dcbc: 0x200f809  jalr        $s0
label_48dcc0:
    if (ctx->pc == 0x48DCC0u) {
        ctx->pc = 0x48DCC4u;
        goto label_48dcc4;
    }
    ctx->pc = 0x48DCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x48DCC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DCBCu, 0x48DCC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48DCC4u;
label_48dcc4:
    // 0x48dcc4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_48dcc8:
    if (ctx->pc == 0x48DCC8u) {
        ctx->pc = 0x48DCCCu;
        goto label_48dccc;
    }
    ctx->pc = 0x48DCC4u;
    {
        const bool branch_taken_0x48dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48dcc4) {
            ctx->pc = 0x48DC68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48dc68;
        }
    }
    ctx->pc = 0x48DCCCu;
label_48dccc:
    // 0x48dccc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48dcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48dcd0:
    // 0x48dcd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48dcd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48dcd4:
    // 0x48dcd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48dcd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48dcd8:
    // 0x48dcd8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x48dcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_48dcdc:
    // 0x48dcdc: 0x3e00008  jr          $ra
label_48dce0:
    if (ctx->pc == 0x48DCE0u) {
        ctx->pc = 0x48DCE4u;
        goto label_48dce4;
    }
    ctx->pc = 0x48DCDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48DCDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48DCE4u;
label_48dce4:
    // 0x48dce4: 0x0  nop
    ctx->pc = 0x48dce4u;
    // NOP
label_48dce8:
    // 0x48dce8: 0x0  nop
    ctx->pc = 0x48dce8u;
    // NOP
label_48dcec:
    // 0x48dcec: 0x0  nop
    ctx->pc = 0x48dcecu;
    // NOP
    ctx->pc = 0x48dcf0u;
}
