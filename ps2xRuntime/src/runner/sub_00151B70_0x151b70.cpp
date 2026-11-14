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

// Function: sub_00151B70
// Address: 0x151b70 - 0x151c20
void sub_00151B70_0x151b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151B70_0x151b70");
#endif

    switch (ctx->pc) {
        case 0x151b70u: goto label_151b70;
        case 0x151b74u: goto label_151b74;
        case 0x151b78u: goto label_151b78;
        case 0x151b7cu: goto label_151b7c;
        case 0x151b80u: goto label_151b80;
        case 0x151b84u: goto label_151b84;
        case 0x151b88u: goto label_151b88;
        case 0x151b8cu: goto label_151b8c;
        case 0x151b90u: goto label_151b90;
        case 0x151b94u: goto label_151b94;
        case 0x151b98u: goto label_151b98;
        case 0x151b9cu: goto label_151b9c;
        case 0x151ba0u: goto label_151ba0;
        case 0x151ba4u: goto label_151ba4;
        case 0x151ba8u: goto label_151ba8;
        case 0x151bacu: goto label_151bac;
        case 0x151bb0u: goto label_151bb0;
        case 0x151bb4u: goto label_151bb4;
        case 0x151bb8u: goto label_151bb8;
        case 0x151bbcu: goto label_151bbc;
        case 0x151bc0u: goto label_151bc0;
        case 0x151bc4u: goto label_151bc4;
        case 0x151bc8u: goto label_151bc8;
        case 0x151bccu: goto label_151bcc;
        case 0x151bd0u: goto label_151bd0;
        case 0x151bd4u: goto label_151bd4;
        case 0x151bd8u: goto label_151bd8;
        case 0x151bdcu: goto label_151bdc;
        case 0x151be0u: goto label_151be0;
        case 0x151be4u: goto label_151be4;
        case 0x151be8u: goto label_151be8;
        case 0x151becu: goto label_151bec;
        case 0x151bf0u: goto label_151bf0;
        case 0x151bf4u: goto label_151bf4;
        case 0x151bf8u: goto label_151bf8;
        case 0x151bfcu: goto label_151bfc;
        case 0x151c00u: goto label_151c00;
        case 0x151c04u: goto label_151c04;
        case 0x151c08u: goto label_151c08;
        case 0x151c0cu: goto label_151c0c;
        case 0x151c10u: goto label_151c10;
        case 0x151c14u: goto label_151c14;
        case 0x151c18u: goto label_151c18;
        case 0x151c1cu: goto label_151c1c;
        default: break;
    }

    ctx->pc = 0x151b70u;

label_151b70:
    // 0x151b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_151b74:
    // 0x151b74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_151b78:
    // 0x151b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_151b7c:
    // 0x151b7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_151b80:
    // 0x151b80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x151b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_151b84:
    // 0x151b84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x151b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_151b88:
    // 0x151b88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_151b8c:
    if (ctx->pc == 0x151B8Cu) {
        ctx->pc = 0x151B90u;
        goto label_151b90;
    }
    ctx->pc = 0x151B88u;
    {
        const bool branch_taken_0x151b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151b88) {
            ctx->pc = 0x151B98u;
            goto label_151b98;
        }
    }
    ctx->pc = 0x151B90u;
label_151b90:
    // 0x151b90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_151b94:
    // 0x151b94: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x151b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_151b98:
    // 0x151b98: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x151b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_151b9c:
    // 0x151b9c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x151b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_151ba0:
    // 0x151ba0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151ba4:
    // 0x151ba4: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x151ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_151ba8:
    // 0x151ba8: 0xc119b68  jal         func_466DA0
label_151bac:
    if (ctx->pc == 0x151BACu) {
        ctx->pc = 0x151BB0u;
        goto label_151bb0;
    }
    ctx->pc = 0x151BA8u;
    SET_GPR_U32(ctx, 31, 0x151BB0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x151BA8u, 0x151BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BB0u;
label_151bb0:
    // 0x151bb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x151bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151bb4:
    // 0x151bb4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_151bb8:
    if (ctx->pc == 0x151BB8u) {
        ctx->pc = 0x151BBCu;
        goto label_151bbc;
    }
    ctx->pc = 0x151BB4u;
    {
        const bool branch_taken_0x151bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x151bb4) {
            ctx->pc = 0x151BC8u;
            goto label_151bc8;
        }
    }
    ctx->pc = 0x151BBCu;
label_151bbc:
    // 0x151bbc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x151bbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_151bc0:
    // 0x151bc0: 0x1000000e  b           . + 4 + (0xE << 2)
label_151bc4:
    if (ctx->pc == 0x151BC4u) {
        ctx->pc = 0x151BC8u;
        goto label_151bc8;
    }
    ctx->pc = 0x151BC0u;
    {
        const bool branch_taken_0x151bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151bc0) {
            ctx->pc = 0x151BFCu;
            goto label_151bfc;
        }
    }
    ctx->pc = 0x151BC8u;
label_151bc8:
    // 0x151bc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x151bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_151bcc:
    // 0x151bcc: 0xc0ba088  jal         func_2E8220
label_151bd0:
    if (ctx->pc == 0x151BD0u) {
        ctx->pc = 0x151BD4u;
        goto label_151bd4;
    }
    ctx->pc = 0x151BCCu;
    SET_GPR_U32(ctx, 31, 0x151BD4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x151BCCu, 0x151BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BD4u;
label_151bd4:
    // 0x151bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x151bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_151bd8:
    // 0x151bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_151bdc:
    // 0x151bdc: 0xc0ba088  jal         func_2E8220
label_151be0:
    if (ctx->pc == 0x151BE0u) {
        ctx->pc = 0x151BE4u;
        goto label_151be4;
    }
    ctx->pc = 0x151BDCu;
    SET_GPR_U32(ctx, 31, 0x151BE4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x151BDCu, 0x151BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151BE4u;
label_151be4:
    // 0x151be4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_151be8:
    if (ctx->pc == 0x151BE8u) {
        ctx->pc = 0x151BECu;
        goto label_151bec;
    }
    ctx->pc = 0x151BE4u;
    {
        const bool branch_taken_0x151be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x151be4) {
            ctx->pc = 0x151B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b98;
        }
    }
    ctx->pc = 0x151BECu;
label_151bec:
    // 0x151bec: 0x200f809  jalr        $s0
label_151bf0:
    if (ctx->pc == 0x151BF0u) {
        ctx->pc = 0x151BF4u;
        goto label_151bf4;
    }
    ctx->pc = 0x151BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x151BF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151BECu, 0x151BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x151BF4u;
label_151bf4:
    // 0x151bf4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_151bf8:
    if (ctx->pc == 0x151BF8u) {
        ctx->pc = 0x151BFCu;
        goto label_151bfc;
    }
    ctx->pc = 0x151BF4u;
    {
        const bool branch_taken_0x151bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151bf4) {
            ctx->pc = 0x151B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151b98;
        }
    }
    ctx->pc = 0x151BFCu;
label_151bfc:
    // 0x151bfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x151bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_151c00:
    // 0x151c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_151c04:
    // 0x151c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_151c08:
    // 0x151c08: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x151c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_151c0c:
    // 0x151c0c: 0x3e00008  jr          $ra
label_151c10:
    if (ctx->pc == 0x151C10u) {
        ctx->pc = 0x151C14u;
        goto label_151c14;
    }
    ctx->pc = 0x151C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151C14u;
label_151c14:
    // 0x151c14: 0x0  nop
    ctx->pc = 0x151c14u;
    // NOP
label_151c18:
    // 0x151c18: 0x0  nop
    ctx->pc = 0x151c18u;
    // NOP
label_151c1c:
    // 0x151c1c: 0x0  nop
    ctx->pc = 0x151c1cu;
    // NOP
    ctx->pc = 0x151c20u;
}
