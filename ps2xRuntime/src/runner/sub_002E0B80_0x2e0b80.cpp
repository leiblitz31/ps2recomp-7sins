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

// Function: sub_002E0B80
// Address: 0x2e0b80 - 0x2e0c40
void sub_002E0B80_0x2e0b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0B80_0x2e0b80");
#endif

    switch (ctx->pc) {
        case 0x2e0ba8u: goto label_2e0ba8;
        case 0x2e0bb8u: goto label_2e0bb8;
        case 0x2e0bc4u: goto label_2e0bc4;
        case 0x2e0bf4u: goto label_2e0bf4;
        default: break;
    }

    ctx->pc = 0x2e0b80u;

    // 0x2e0b80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e0b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e0b84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e0b88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e0b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e0b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e0b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e0b90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e0b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e0b94: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2e0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2e0b98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0b9c: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x2e0b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x2e0ba0: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2E0BA0u;
    SET_GPR_U32(ctx, 31, 0x2E0BA8u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2E0BA0u, 0x2E0BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BA8u;
label_2e0ba8:
    // 0x2e0ba8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e0ba8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e0bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bb0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2E0BB0u;
    {
        const bool branch_taken_0x2e0bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bb0) {
            ctx->pc = 0x2E0C10u;
            goto label_2e0c10;
        }
    }
    ctx->pc = 0x2E0BB8u;
label_2e0bb8:
    // 0x2e0bb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e0bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0bbc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E0BBCu;
    {
        const bool branch_taken_0x2e0bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0bbc) {
            ctx->pc = 0x2E0BF8u;
            goto label_2e0bf8;
        }
    }
    ctx->pc = 0x2E0BC4u;
label_2e0bc4:
    // 0x2e0bc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e0bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0bc8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2e0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2e0bcc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2e0bccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2e0bd0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2e0bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e0bd4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2e0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e0bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e0bdc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2e0bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2e0be0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2e0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0be4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x2e0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x2e0be8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2e0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e0bec: 0xc0b7a9c  jal         func_2DEA70
    ctx->pc = 0x2E0BECu;
    SET_GPR_U32(ctx, 31, 0x2E0BF4u);
    ctx->pc = 0x2DEA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA70u, 0x2E0BECu, 0x2E0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0BF4u;
label_2e0bf4:
    // 0x2e0bf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e0bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e0bf8:
    // 0x2e0bf8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e0bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0bfc: 0x8c630038  lw          $v1, 0x38($v1)
    ctx->pc = 0x2e0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2e0c00: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x2e0c00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e0c04: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2E0C04u;
    {
        const bool branch_taken_0x2e0c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c04) {
            ctx->pc = 0x2E0BC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0bc4;
        }
    }
    ctx->pc = 0x2E0C0Cu;
    // 0x2e0c0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e0c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e0c10:
    // 0x2e0c10: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x2e0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e0c14: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2e0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2e0c18: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2e0c18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2e0c1c: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2E0C1Cu;
    {
        const bool branch_taken_0x2e0c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0c1c) {
            ctx->pc = 0x2E0BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0bb8;
        }
    }
    ctx->pc = 0x2E0C24u;
    // 0x2e0c24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e0c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0c28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e0c28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0c2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e0c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0c30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e0c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0c34: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2e0c34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e0c38: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0C38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0C40u;
}
