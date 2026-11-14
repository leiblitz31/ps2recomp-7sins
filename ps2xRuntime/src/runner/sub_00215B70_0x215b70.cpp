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

// Function: sub_00215B70
// Address: 0x215b70 - 0x215c10
void sub_00215B70_0x215b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215B70_0x215b70");
#endif

    switch (ctx->pc) {
        case 0x215b70u: goto label_215b70;
        case 0x215b74u: goto label_215b74;
        case 0x215b78u: goto label_215b78;
        case 0x215b7cu: goto label_215b7c;
        case 0x215b80u: goto label_215b80;
        case 0x215b84u: goto label_215b84;
        case 0x215b88u: goto label_215b88;
        case 0x215b8cu: goto label_215b8c;
        case 0x215b90u: goto label_215b90;
        case 0x215b94u: goto label_215b94;
        case 0x215b98u: goto label_215b98;
        case 0x215b9cu: goto label_215b9c;
        case 0x215ba0u: goto label_215ba0;
        case 0x215ba4u: goto label_215ba4;
        case 0x215ba8u: goto label_215ba8;
        case 0x215bacu: goto label_215bac;
        case 0x215bb0u: goto label_215bb0;
        case 0x215bb4u: goto label_215bb4;
        case 0x215bb8u: goto label_215bb8;
        case 0x215bbcu: goto label_215bbc;
        case 0x215bc0u: goto label_215bc0;
        case 0x215bc4u: goto label_215bc4;
        case 0x215bc8u: goto label_215bc8;
        case 0x215bccu: goto label_215bcc;
        case 0x215bd0u: goto label_215bd0;
        case 0x215bd4u: goto label_215bd4;
        case 0x215bd8u: goto label_215bd8;
        case 0x215bdcu: goto label_215bdc;
        case 0x215be0u: goto label_215be0;
        case 0x215be4u: goto label_215be4;
        case 0x215be8u: goto label_215be8;
        case 0x215becu: goto label_215bec;
        case 0x215bf0u: goto label_215bf0;
        case 0x215bf4u: goto label_215bf4;
        case 0x215bf8u: goto label_215bf8;
        case 0x215bfcu: goto label_215bfc;
        case 0x215c00u: goto label_215c00;
        case 0x215c04u: goto label_215c04;
        case 0x215c08u: goto label_215c08;
        case 0x215c0cu: goto label_215c0c;
        default: break;
    }

    ctx->pc = 0x215b70u;

label_215b70:
    // 0x215b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x215b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_215b74:
    // 0x215b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x215b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_215b78:
    // 0x215b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x215b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_215b7c:
    // 0x215b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x215b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_215b80:
    // 0x215b80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x215b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_215b84:
    // 0x215b84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x215b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_215b88:
    // 0x215b88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_215b8c:
    if (ctx->pc == 0x215B8Cu) {
        ctx->pc = 0x215B90u;
        goto label_215b90;
    }
    ctx->pc = 0x215B88u;
    {
        const bool branch_taken_0x215b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215b88) {
            ctx->pc = 0x215B98u;
            goto label_215b98;
        }
    }
    ctx->pc = 0x215B90u;
label_215b90:
    // 0x215b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215b94:
    // 0x215b94: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x215b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_215b98:
    // 0x215b98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x215b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_215b9c:
    // 0x215b9c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x215b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_215ba0:
    // 0x215ba0: 0xc119b68  jal         func_466DA0
label_215ba4:
    if (ctx->pc == 0x215BA4u) {
        ctx->pc = 0x215BA8u;
        goto label_215ba8;
    }
    ctx->pc = 0x215BA0u;
    SET_GPR_U32(ctx, 31, 0x215BA8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x215BA0u, 0x215BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BA8u;
label_215ba8:
    // 0x215ba8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x215ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215bac:
    // 0x215bac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_215bb0:
    if (ctx->pc == 0x215BB0u) {
        ctx->pc = 0x215BB4u;
        goto label_215bb4;
    }
    ctx->pc = 0x215BACu;
    {
        const bool branch_taken_0x215bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x215bac) {
            ctx->pc = 0x215BC0u;
            goto label_215bc0;
        }
    }
    ctx->pc = 0x215BB4u;
label_215bb4:
    // 0x215bb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x215bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215bb8:
    // 0x215bb8: 0x1000000e  b           . + 4 + (0xE << 2)
label_215bbc:
    if (ctx->pc == 0x215BBCu) {
        ctx->pc = 0x215BC0u;
        goto label_215bc0;
    }
    ctx->pc = 0x215BB8u;
    {
        const bool branch_taken_0x215bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215bb8) {
            ctx->pc = 0x215BF4u;
            goto label_215bf4;
        }
    }
    ctx->pc = 0x215BC0u;
label_215bc0:
    // 0x215bc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x215bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215bc4:
    // 0x215bc4: 0xc0ba088  jal         func_2E8220
label_215bc8:
    if (ctx->pc == 0x215BC8u) {
        ctx->pc = 0x215BCCu;
        goto label_215bcc;
    }
    ctx->pc = 0x215BC4u;
    SET_GPR_U32(ctx, 31, 0x215BCCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x215BC4u, 0x215BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BCCu;
label_215bcc:
    // 0x215bcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215bd0:
    // 0x215bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215bd4:
    // 0x215bd4: 0xc0ba088  jal         func_2E8220
label_215bd8:
    if (ctx->pc == 0x215BD8u) {
        ctx->pc = 0x215BDCu;
        goto label_215bdc;
    }
    ctx->pc = 0x215BD4u;
    SET_GPR_U32(ctx, 31, 0x215BDCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x215BD4u, 0x215BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215BDCu;
label_215bdc:
    // 0x215bdc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_215be0:
    if (ctx->pc == 0x215BE0u) {
        ctx->pc = 0x215BE4u;
        goto label_215be4;
    }
    ctx->pc = 0x215BDCu;
    {
        const bool branch_taken_0x215bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x215bdc) {
            ctx->pc = 0x215B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b98;
        }
    }
    ctx->pc = 0x215BE4u;
label_215be4:
    // 0x215be4: 0x200f809  jalr        $s0
label_215be8:
    if (ctx->pc == 0x215BE8u) {
        ctx->pc = 0x215BECu;
        goto label_215bec;
    }
    ctx->pc = 0x215BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x215BECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215BE4u, 0x215BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215BECu;
label_215bec:
    // 0x215bec: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_215bf0:
    if (ctx->pc == 0x215BF0u) {
        ctx->pc = 0x215BF4u;
        goto label_215bf4;
    }
    ctx->pc = 0x215BECu;
    {
        const bool branch_taken_0x215bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x215bec) {
            ctx->pc = 0x215B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215b98;
        }
    }
    ctx->pc = 0x215BF4u;
label_215bf4:
    // 0x215bf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_215bf8:
    // 0x215bf8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x215bf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_215bfc:
    // 0x215bfc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x215bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_215c00:
    // 0x215c00: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x215c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_215c04:
    // 0x215c04: 0x3e00008  jr          $ra
label_215c08:
    if (ctx->pc == 0x215C08u) {
        ctx->pc = 0x215C0Cu;
        goto label_215c0c;
    }
    ctx->pc = 0x215C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215C0Cu;
label_215c0c:
    // 0x215c0c: 0x0  nop
    ctx->pc = 0x215c0cu;
    // NOP
    ctx->pc = 0x215c10u;
}
