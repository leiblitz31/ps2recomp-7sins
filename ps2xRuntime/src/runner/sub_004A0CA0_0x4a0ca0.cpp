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

// Function: sub_004A0CA0
// Address: 0x4a0ca0 - 0x4a0d08
void sub_004A0CA0_0x4a0ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0CA0_0x4a0ca0");
#endif

    switch (ctx->pc) {
        case 0x4a0cc8u: goto label_4a0cc8;
        case 0x4a0ce8u: goto label_4a0ce8;
        default: break;
    }

    ctx->pc = 0x4a0ca0u;

    // 0x4a0ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a0ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a0ca4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4a0ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4a0ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a0ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0cac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a0cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4a0cb0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4a0cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4a0cb4: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x4a0cb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x4a0cb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a0cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0cc0: 0xc12ab76  jal         func_4AADD8
    ctx->pc = 0x4A0CC0u;
    SET_GPR_U32(ctx, 31, 0x4A0CC8u);
    ctx->pc = 0x4A0CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0CC0u;
    // 0x4a0cc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AADD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AADD8u, 0x4A0CC0u, 0x4A0CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0CC8u;
label_4a0cc8:
    // 0x4a0cc8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x4a0cc8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x4a0ccc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4a0cccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0cd0: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x4a0cd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
    // 0x4a0cd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0CD4u;
    {
        const bool branch_taken_0x4a0cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0CD4u;
        // 0x4a0cd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0cd4) {
            ctx->pc = 0x4A0CF0u;
            goto label_4a0cf0;
        }
    }
    ctx->pc = 0x4A0CDCu;
    // 0x4a0cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a0cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0ce0: 0xc12ab2c  jal         func_4AACB0
    ctx->pc = 0x4A0CE0u;
    SET_GPR_U32(ctx, 31, 0x4A0CE8u);
    ctx->pc = 0x4A0CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0CE0u;
    // 0x4a0ce4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AACB0u, 0x4A0CE0u, 0x4A0CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0CE8u;
label_4a0ce8:
    // 0x4a0ce8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4a0ce8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x4a0cec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a0cecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0cf0:
    // 0x4a0cf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4a0cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0cf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a0cf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0cf8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4a0cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0d00: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D00u;
        // 0x4a0d04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0D08u;
}
