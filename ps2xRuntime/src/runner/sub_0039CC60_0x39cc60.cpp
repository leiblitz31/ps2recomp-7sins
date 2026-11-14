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

// Function: sub_0039CC60
// Address: 0x39cc60 - 0x39cc90
void sub_0039CC60_0x39cc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CC60_0x39cc60");
#endif

    switch (ctx->pc) {
        case 0x39cc7cu: goto label_39cc7c;
        default: break;
    }

    ctx->pc = 0x39cc60u;

    // 0x39cc60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cc64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39cc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39cc68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cc68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39cc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cc70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x39cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc74: 0xc0e6f1e  jal         func_39BC78
    ctx->pc = 0x39CC74u;
    SET_GPR_U32(ctx, 31, 0x39CC7Cu);
    ctx->pc = 0x39CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC74u;
    // 0x39cc78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BC78u, 0x39CC74u, 0x39CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC7Cu;
label_39cc7c:
    // 0x39cc7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39cc7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cc84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39cc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cc88: 0x3e00008  jr          $ra
    ctx->pc = 0x39CC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC88u;
        // 0x39cc8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CC90u;
}
