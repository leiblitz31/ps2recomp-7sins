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

// Function: sub_00296E70
// Address: 0x296e70 - 0x296f10
void sub_00296E70_0x296e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296E70_0x296e70");
#endif

    switch (ctx->pc) {
        case 0x296e70u: goto label_296e70;
        case 0x296e74u: goto label_296e74;
        case 0x296e78u: goto label_296e78;
        case 0x296e7cu: goto label_296e7c;
        case 0x296e80u: goto label_296e80;
        case 0x296e84u: goto label_296e84;
        case 0x296e88u: goto label_296e88;
        case 0x296e8cu: goto label_296e8c;
        case 0x296e90u: goto label_296e90;
        case 0x296e94u: goto label_296e94;
        case 0x296e98u: goto label_296e98;
        case 0x296e9cu: goto label_296e9c;
        case 0x296ea0u: goto label_296ea0;
        case 0x296ea4u: goto label_296ea4;
        case 0x296ea8u: goto label_296ea8;
        case 0x296eacu: goto label_296eac;
        case 0x296eb0u: goto label_296eb0;
        case 0x296eb4u: goto label_296eb4;
        case 0x296eb8u: goto label_296eb8;
        case 0x296ebcu: goto label_296ebc;
        case 0x296ec0u: goto label_296ec0;
        case 0x296ec4u: goto label_296ec4;
        case 0x296ec8u: goto label_296ec8;
        case 0x296eccu: goto label_296ecc;
        case 0x296ed0u: goto label_296ed0;
        case 0x296ed4u: goto label_296ed4;
        case 0x296ed8u: goto label_296ed8;
        case 0x296edcu: goto label_296edc;
        case 0x296ee0u: goto label_296ee0;
        case 0x296ee4u: goto label_296ee4;
        case 0x296ee8u: goto label_296ee8;
        case 0x296eecu: goto label_296eec;
        case 0x296ef0u: goto label_296ef0;
        case 0x296ef4u: goto label_296ef4;
        case 0x296ef8u: goto label_296ef8;
        case 0x296efcu: goto label_296efc;
        case 0x296f00u: goto label_296f00;
        case 0x296f04u: goto label_296f04;
        case 0x296f08u: goto label_296f08;
        case 0x296f0cu: goto label_296f0c;
        default: break;
    }

    ctx->pc = 0x296e70u;

label_296e70:
    // 0x296e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x296e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_296e74:
    // 0x296e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x296e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_296e78:
    // 0x296e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x296e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_296e7c:
    // 0x296e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x296e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_296e80:
    // 0x296e80: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x296e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_296e84:
    // 0x296e84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_296e88:
    // 0x296e88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_296e8c:
    if (ctx->pc == 0x296E8Cu) {
        ctx->pc = 0x296E90u;
        goto label_296e90;
    }
    ctx->pc = 0x296E88u;
    {
        const bool branch_taken_0x296e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x296e88) {
            ctx->pc = 0x296E98u;
            goto label_296e98;
        }
    }
    ctx->pc = 0x296E90u;
label_296e90:
    // 0x296e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296e94:
    // 0x296e94: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x296e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_296e98:
    // 0x296e98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x296e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_296e9c:
    // 0x296e9c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x296e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_296ea0:
    // 0x296ea0: 0xc119b68  jal         func_466DA0
label_296ea4:
    if (ctx->pc == 0x296EA4u) {
        ctx->pc = 0x296EA8u;
        goto label_296ea8;
    }
    ctx->pc = 0x296EA0u;
    SET_GPR_U32(ctx, 31, 0x296EA8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x296EA0u, 0x296EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296EA8u;
label_296ea8:
    // 0x296ea8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x296ea8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296eac:
    // 0x296eac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_296eb0:
    if (ctx->pc == 0x296EB0u) {
        ctx->pc = 0x296EB4u;
        goto label_296eb4;
    }
    ctx->pc = 0x296EACu;
    {
        const bool branch_taken_0x296eac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x296eac) {
            ctx->pc = 0x296EC0u;
            goto label_296ec0;
        }
    }
    ctx->pc = 0x296EB4u;
label_296eb4:
    // 0x296eb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x296eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_296eb8:
    // 0x296eb8: 0x1000000e  b           . + 4 + (0xE << 2)
label_296ebc:
    if (ctx->pc == 0x296EBCu) {
        ctx->pc = 0x296EC0u;
        goto label_296ec0;
    }
    ctx->pc = 0x296EB8u;
    {
        const bool branch_taken_0x296eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296eb8) {
            ctx->pc = 0x296EF4u;
            goto label_296ef4;
        }
    }
    ctx->pc = 0x296EC0u;
label_296ec0:
    // 0x296ec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x296ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296ec4:
    // 0x296ec4: 0xc0ba088  jal         func_2E8220
label_296ec8:
    if (ctx->pc == 0x296EC8u) {
        ctx->pc = 0x296ECCu;
        goto label_296ecc;
    }
    ctx->pc = 0x296EC4u;
    SET_GPR_U32(ctx, 31, 0x296ECCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x296EC4u, 0x296ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296ECCu;
label_296ecc:
    // 0x296ecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x296eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296ed0:
    // 0x296ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296ed4:
    // 0x296ed4: 0xc0ba088  jal         func_2E8220
label_296ed8:
    if (ctx->pc == 0x296ED8u) {
        ctx->pc = 0x296EDCu;
        goto label_296edc;
    }
    ctx->pc = 0x296ED4u;
    SET_GPR_U32(ctx, 31, 0x296EDCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x296ED4u, 0x296EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296EDCu;
label_296edc:
    // 0x296edc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_296ee0:
    if (ctx->pc == 0x296EE0u) {
        ctx->pc = 0x296EE4u;
        goto label_296ee4;
    }
    ctx->pc = 0x296EDCu;
    {
        const bool branch_taken_0x296edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x296edc) {
            ctx->pc = 0x296E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296e98;
        }
    }
    ctx->pc = 0x296EE4u;
label_296ee4:
    // 0x296ee4: 0x200f809  jalr        $s0
label_296ee8:
    if (ctx->pc == 0x296EE8u) {
        ctx->pc = 0x296EECu;
        goto label_296eec;
    }
    ctx->pc = 0x296EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x296EECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296EE4u, 0x296EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296EECu;
label_296eec:
    // 0x296eec: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_296ef0:
    if (ctx->pc == 0x296EF0u) {
        ctx->pc = 0x296EF4u;
        goto label_296ef4;
    }
    ctx->pc = 0x296EECu;
    {
        const bool branch_taken_0x296eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x296eec) {
            ctx->pc = 0x296E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296e98;
        }
    }
    ctx->pc = 0x296EF4u;
label_296ef4:
    // 0x296ef4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_296ef8:
    // 0x296ef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296ef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296efc:
    // 0x296efc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x296efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_296f00:
    // 0x296f00: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x296f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_296f04:
    // 0x296f04: 0x3e00008  jr          $ra
label_296f08:
    if (ctx->pc == 0x296F08u) {
        ctx->pc = 0x296F0Cu;
        goto label_296f0c;
    }
    ctx->pc = 0x296F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296F0Cu;
label_296f0c:
    // 0x296f0c: 0x0  nop
    ctx->pc = 0x296f0cu;
    // NOP
    ctx->pc = 0x296f10u;
}
