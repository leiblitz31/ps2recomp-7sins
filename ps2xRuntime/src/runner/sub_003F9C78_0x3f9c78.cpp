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

// Function: sub_003F9C78
// Address: 0x3f9c78 - 0x3f9cc8
void sub_003F9C78_0x3f9c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F9C78_0x3f9c78");
#endif

    switch (ctx->pc) {
        case 0x3f9c9cu: goto label_3f9c9c;
        case 0x3f9cacu: goto label_3f9cac;
        default: break;
    }

    ctx->pc = 0x3f9c78u;

    // 0x3f9c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f9c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3f9c7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3f9c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3f9c80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3f9c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3f9c84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f9c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9c88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3f9c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3f9c8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f9c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9c90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f9c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f9c94: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F9C94u;
    SET_GPR_U32(ctx, 31, 0x3F9C9Cu);
    ctx->pc = 0x3F9C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9C94u;
    // 0x3f9c98: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F9C94u, 0x3F9C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9C9Cu;
label_3f9c9c:
    // 0x3f9c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9ca4: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F9CA4u;
    SET_GPR_U32(ctx, 31, 0x3F9CACu);
    ctx->pc = 0x3F9CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9CA4u;
    // 0x3f9ca8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F9CA4u, 0x3F9CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9CACu;
label_3f9cac:
    // 0x3f9cac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3f9cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f9cb0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3f9cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f9cb4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3f9cb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f9cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f9cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f9cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x3F9CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9CBCu;
        // 0x3f9cc0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F9CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F9CC4u;
    // 0x3f9cc4: 0x0  nop
    ctx->pc = 0x3f9cc4u;
    // NOP
    ctx->pc = 0x3f9cc8u;
}
