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

// Function: sub_001E9B90
// Address: 0x1e9b90 - 0x1e9c40
void sub_001E9B90_0x1e9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9B90_0x1e9b90");
#endif

    switch (ctx->pc) {
        case 0x1e9b90u: goto label_1e9b90;
        case 0x1e9b94u: goto label_1e9b94;
        case 0x1e9b98u: goto label_1e9b98;
        case 0x1e9b9cu: goto label_1e9b9c;
        case 0x1e9ba0u: goto label_1e9ba0;
        case 0x1e9ba4u: goto label_1e9ba4;
        case 0x1e9ba8u: goto label_1e9ba8;
        case 0x1e9bacu: goto label_1e9bac;
        case 0x1e9bb0u: goto label_1e9bb0;
        case 0x1e9bb4u: goto label_1e9bb4;
        case 0x1e9bb8u: goto label_1e9bb8;
        case 0x1e9bbcu: goto label_1e9bbc;
        case 0x1e9bc0u: goto label_1e9bc0;
        case 0x1e9bc4u: goto label_1e9bc4;
        case 0x1e9bc8u: goto label_1e9bc8;
        case 0x1e9bccu: goto label_1e9bcc;
        case 0x1e9bd0u: goto label_1e9bd0;
        case 0x1e9bd4u: goto label_1e9bd4;
        case 0x1e9bd8u: goto label_1e9bd8;
        case 0x1e9bdcu: goto label_1e9bdc;
        case 0x1e9be0u: goto label_1e9be0;
        case 0x1e9be4u: goto label_1e9be4;
        case 0x1e9be8u: goto label_1e9be8;
        case 0x1e9becu: goto label_1e9bec;
        case 0x1e9bf0u: goto label_1e9bf0;
        case 0x1e9bf4u: goto label_1e9bf4;
        case 0x1e9bf8u: goto label_1e9bf8;
        case 0x1e9bfcu: goto label_1e9bfc;
        case 0x1e9c00u: goto label_1e9c00;
        case 0x1e9c04u: goto label_1e9c04;
        case 0x1e9c08u: goto label_1e9c08;
        case 0x1e9c0cu: goto label_1e9c0c;
        case 0x1e9c10u: goto label_1e9c10;
        case 0x1e9c14u: goto label_1e9c14;
        case 0x1e9c18u: goto label_1e9c18;
        case 0x1e9c1cu: goto label_1e9c1c;
        case 0x1e9c20u: goto label_1e9c20;
        case 0x1e9c24u: goto label_1e9c24;
        case 0x1e9c28u: goto label_1e9c28;
        case 0x1e9c2cu: goto label_1e9c2c;
        case 0x1e9c30u: goto label_1e9c30;
        case 0x1e9c34u: goto label_1e9c34;
        case 0x1e9c38u: goto label_1e9c38;
        case 0x1e9c3cu: goto label_1e9c3c;
        default: break;
    }

    ctx->pc = 0x1e9b90u;

label_1e9b90:
    // 0x1e9b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1e9b94:
    // 0x1e9b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e9b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e9b98:
    // 0x1e9b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e9b9c:
    // 0x1e9b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e9b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e9ba0:
    // 0x1e9ba0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1e9ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1e9ba4:
    // 0x1e9ba4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e9ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9ba8:
    // 0x1e9ba8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1e9bac:
    if (ctx->pc == 0x1E9BACu) {
        ctx->pc = 0x1E9BB0u;
        goto label_1e9bb0;
    }
    ctx->pc = 0x1E9BA8u;
    {
        const bool branch_taken_0x1e9ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e9ba8) {
            ctx->pc = 0x1E9BB8u;
            goto label_1e9bb8;
        }
    }
    ctx->pc = 0x1E9BB0u;
label_1e9bb0:
    // 0x1e9bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e9bb4:
    // 0x1e9bb4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1e9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1e9bb8:
    // 0x1e9bb8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1e9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1e9bbc:
    // 0x1e9bbc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1e9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_1e9bc0:
    // 0x1e9bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e9bc4:
    // 0x1e9bc4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1e9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e9bc8:
    // 0x1e9bc8: 0xc119b68  jal         func_466DA0
label_1e9bcc:
    if (ctx->pc == 0x1E9BCCu) {
        ctx->pc = 0x1E9BD0u;
        goto label_1e9bd0;
    }
    ctx->pc = 0x1E9BC8u;
    SET_GPR_U32(ctx, 31, 0x1E9BD0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1E9BC8u, 0x1E9BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BD0u;
label_1e9bd0:
    // 0x1e9bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e9bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bd4:
    // 0x1e9bd4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1e9bd8:
    if (ctx->pc == 0x1E9BD8u) {
        ctx->pc = 0x1E9BDCu;
        goto label_1e9bdc;
    }
    ctx->pc = 0x1E9BD4u;
    {
        const bool branch_taken_0x1e9bd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9bd4) {
            ctx->pc = 0x1E9BE8u;
            goto label_1e9be8;
        }
    }
    ctx->pc = 0x1E9BDCu;
label_1e9bdc:
    // 0x1e9bdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e9bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e9be0:
    // 0x1e9be0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1e9be4:
    if (ctx->pc == 0x1E9BE4u) {
        ctx->pc = 0x1E9BE8u;
        goto label_1e9be8;
    }
    ctx->pc = 0x1E9BE0u;
    {
        const bool branch_taken_0x1e9be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9be0) {
            ctx->pc = 0x1E9C1Cu;
            goto label_1e9c1c;
        }
    }
    ctx->pc = 0x1E9BE8u;
label_1e9be8:
    // 0x1e9be8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e9be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bec:
    // 0x1e9bec: 0xc0ba088  jal         func_2E8220
label_1e9bf0:
    if (ctx->pc == 0x1E9BF0u) {
        ctx->pc = 0x1E9BF4u;
        goto label_1e9bf4;
    }
    ctx->pc = 0x1E9BECu;
    SET_GPR_U32(ctx, 31, 0x1E9BF4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9BECu, 0x1E9BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9BF4u;
label_1e9bf4:
    // 0x1e9bf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e9bf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bf8:
    // 0x1e9bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e9bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e9bfc:
    // 0x1e9bfc: 0xc0ba088  jal         func_2E8220
label_1e9c00:
    if (ctx->pc == 0x1E9C00u) {
        ctx->pc = 0x1E9C04u;
        goto label_1e9c04;
    }
    ctx->pc = 0x1E9BFCu;
    SET_GPR_U32(ctx, 31, 0x1E9C04u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1E9BFCu, 0x1E9C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9C04u;
label_1e9c04:
    // 0x1e9c04: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1e9c08:
    if (ctx->pc == 0x1E9C08u) {
        ctx->pc = 0x1E9C0Cu;
        goto label_1e9c0c;
    }
    ctx->pc = 0x1E9C04u;
    {
        const bool branch_taken_0x1e9c04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c04) {
            ctx->pc = 0x1E9BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9bb8;
        }
    }
    ctx->pc = 0x1E9C0Cu;
label_1e9c0c:
    // 0x1e9c0c: 0x200f809  jalr        $s0
label_1e9c10:
    if (ctx->pc == 0x1E9C10u) {
        ctx->pc = 0x1E9C14u;
        goto label_1e9c14;
    }
    ctx->pc = 0x1E9C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1E9C14u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C0Cu, 0x1E9C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E9C14u;
label_1e9c14:
    // 0x1e9c14: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1e9c18:
    if (ctx->pc == 0x1E9C18u) {
        ctx->pc = 0x1E9C1Cu;
        goto label_1e9c1c;
    }
    ctx->pc = 0x1E9C14u;
    {
        const bool branch_taken_0x1e9c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9c14) {
            ctx->pc = 0x1E9BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9bb8;
        }
    }
    ctx->pc = 0x1E9C1Cu;
label_1e9c1c:
    // 0x1e9c1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e9c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9c20:
    // 0x1e9c20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9c20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e9c24:
    // 0x1e9c24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e9c24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e9c28:
    // 0x1e9c28: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e9c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1e9c2c:
    // 0x1e9c2c: 0x3e00008  jr          $ra
label_1e9c30:
    if (ctx->pc == 0x1E9C30u) {
        ctx->pc = 0x1E9C34u;
        goto label_1e9c34;
    }
    ctx->pc = 0x1E9C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9C34u;
label_1e9c34:
    // 0x1e9c34: 0x0  nop
    ctx->pc = 0x1e9c34u;
    // NOP
label_1e9c38:
    // 0x1e9c38: 0x0  nop
    ctx->pc = 0x1e9c38u;
    // NOP
label_1e9c3c:
    // 0x1e9c3c: 0x0  nop
    ctx->pc = 0x1e9c3cu;
    // NOP
    ctx->pc = 0x1e9c40u;
}
