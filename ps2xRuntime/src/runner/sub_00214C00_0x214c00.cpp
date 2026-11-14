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

// Function: sub_00214C00
// Address: 0x214c00 - 0x214ca0
void sub_00214C00_0x214c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214C00_0x214c00");
#endif

    switch (ctx->pc) {
        case 0x214c00u: goto label_214c00;
        case 0x214c04u: goto label_214c04;
        case 0x214c08u: goto label_214c08;
        case 0x214c0cu: goto label_214c0c;
        case 0x214c10u: goto label_214c10;
        case 0x214c14u: goto label_214c14;
        case 0x214c18u: goto label_214c18;
        case 0x214c1cu: goto label_214c1c;
        case 0x214c20u: goto label_214c20;
        case 0x214c24u: goto label_214c24;
        case 0x214c28u: goto label_214c28;
        case 0x214c2cu: goto label_214c2c;
        case 0x214c30u: goto label_214c30;
        case 0x214c34u: goto label_214c34;
        case 0x214c38u: goto label_214c38;
        case 0x214c3cu: goto label_214c3c;
        case 0x214c40u: goto label_214c40;
        case 0x214c44u: goto label_214c44;
        case 0x214c48u: goto label_214c48;
        case 0x214c4cu: goto label_214c4c;
        case 0x214c50u: goto label_214c50;
        case 0x214c54u: goto label_214c54;
        case 0x214c58u: goto label_214c58;
        case 0x214c5cu: goto label_214c5c;
        case 0x214c60u: goto label_214c60;
        case 0x214c64u: goto label_214c64;
        case 0x214c68u: goto label_214c68;
        case 0x214c6cu: goto label_214c6c;
        case 0x214c70u: goto label_214c70;
        case 0x214c74u: goto label_214c74;
        case 0x214c78u: goto label_214c78;
        case 0x214c7cu: goto label_214c7c;
        case 0x214c80u: goto label_214c80;
        case 0x214c84u: goto label_214c84;
        case 0x214c88u: goto label_214c88;
        case 0x214c8cu: goto label_214c8c;
        case 0x214c90u: goto label_214c90;
        case 0x214c94u: goto label_214c94;
        case 0x214c98u: goto label_214c98;
        case 0x214c9cu: goto label_214c9c;
        default: break;
    }

    ctx->pc = 0x214c00u;

label_214c00:
    // 0x214c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x214c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_214c04:
    // 0x214c04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x214c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_214c08:
    // 0x214c08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x214c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_214c0c:
    // 0x214c0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x214c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_214c10:
    // 0x214c10: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x214c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_214c14:
    // 0x214c14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x214c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_214c18:
    // 0x214c18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_214c1c:
    if (ctx->pc == 0x214C1Cu) {
        ctx->pc = 0x214C20u;
        goto label_214c20;
    }
    ctx->pc = 0x214C18u;
    {
        const bool branch_taken_0x214c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x214c18) {
            ctx->pc = 0x214C28u;
            goto label_214c28;
        }
    }
    ctx->pc = 0x214C20u;
label_214c20:
    // 0x214c20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x214c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_214c24:
    // 0x214c24: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x214c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_214c28:
    // 0x214c28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x214c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_214c2c:
    // 0x214c2c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x214c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_214c30:
    // 0x214c30: 0xc119b68  jal         func_466DA0
label_214c34:
    if (ctx->pc == 0x214C34u) {
        ctx->pc = 0x214C38u;
        goto label_214c38;
    }
    ctx->pc = 0x214C30u;
    SET_GPR_U32(ctx, 31, 0x214C38u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x214C30u, 0x214C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C38u;
label_214c38:
    // 0x214c38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x214c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214c3c:
    // 0x214c3c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_214c40:
    if (ctx->pc == 0x214C40u) {
        ctx->pc = 0x214C44u;
        goto label_214c44;
    }
    ctx->pc = 0x214C3Cu;
    {
        const bool branch_taken_0x214c3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x214c3c) {
            ctx->pc = 0x214C50u;
            goto label_214c50;
        }
    }
    ctx->pc = 0x214C44u;
label_214c44:
    // 0x214c44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x214c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_214c48:
    // 0x214c48: 0x1000000e  b           . + 4 + (0xE << 2)
label_214c4c:
    if (ctx->pc == 0x214C4Cu) {
        ctx->pc = 0x214C50u;
        goto label_214c50;
    }
    ctx->pc = 0x214C48u;
    {
        const bool branch_taken_0x214c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214c48) {
            ctx->pc = 0x214C84u;
            goto label_214c84;
        }
    }
    ctx->pc = 0x214C50u;
label_214c50:
    // 0x214c50: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x214c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214c54:
    // 0x214c54: 0xc0ba088  jal         func_2E8220
label_214c58:
    if (ctx->pc == 0x214C58u) {
        ctx->pc = 0x214C5Cu;
        goto label_214c5c;
    }
    ctx->pc = 0x214C54u;
    SET_GPR_U32(ctx, 31, 0x214C5Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x214C54u, 0x214C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C5Cu;
label_214c5c:
    // 0x214c5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x214c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_214c60:
    // 0x214c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x214c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_214c64:
    // 0x214c64: 0xc0ba088  jal         func_2E8220
label_214c68:
    if (ctx->pc == 0x214C68u) {
        ctx->pc = 0x214C6Cu;
        goto label_214c6c;
    }
    ctx->pc = 0x214C64u;
    SET_GPR_U32(ctx, 31, 0x214C6Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x214C64u, 0x214C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C6Cu;
label_214c6c:
    // 0x214c6c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_214c70:
    if (ctx->pc == 0x214C70u) {
        ctx->pc = 0x214C74u;
        goto label_214c74;
    }
    ctx->pc = 0x214C6Cu;
    {
        const bool branch_taken_0x214c6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x214c6c) {
            ctx->pc = 0x214C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214c28;
        }
    }
    ctx->pc = 0x214C74u;
label_214c74:
    // 0x214c74: 0x200f809  jalr        $s0
label_214c78:
    if (ctx->pc == 0x214C78u) {
        ctx->pc = 0x214C7Cu;
        goto label_214c7c;
    }
    ctx->pc = 0x214C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x214C7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C74u, 0x214C7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214C7Cu;
label_214c7c:
    // 0x214c7c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_214c80:
    if (ctx->pc == 0x214C80u) {
        ctx->pc = 0x214C84u;
        goto label_214c84;
    }
    ctx->pc = 0x214C7Cu;
    {
        const bool branch_taken_0x214c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x214c7c) {
            ctx->pc = 0x214C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_214c28;
        }
    }
    ctx->pc = 0x214C84u;
label_214c84:
    // 0x214c84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x214c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_214c88:
    // 0x214c88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x214c88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_214c8c:
    // 0x214c8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x214c8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_214c90:
    // 0x214c90: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x214c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_214c94:
    // 0x214c94: 0x3e00008  jr          $ra
label_214c98:
    if (ctx->pc == 0x214C98u) {
        ctx->pc = 0x214C9Cu;
        goto label_214c9c;
    }
    ctx->pc = 0x214C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214C9Cu;
label_214c9c:
    // 0x214c9c: 0x0  nop
    ctx->pc = 0x214c9cu;
    // NOP
    ctx->pc = 0x214ca0u;
}
