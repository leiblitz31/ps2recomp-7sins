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

// Function: sub_0039AB48
// Address: 0x39ab48 - 0x39ab78
void sub_0039AB48_0x39ab48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AB48_0x39ab48");
#endif

    switch (ctx->pc) {
        case 0x39ab5cu: goto label_39ab5c;
        case 0x39ab64u: goto label_39ab64;
        default: break;
    }

    ctx->pc = 0x39ab48u;

    // 0x39ab48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ab4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x39ab4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x39ab50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39ab50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39ab54: 0xc0e8350  jal         func_3A0D40
    ctx->pc = 0x39AB54u;
    SET_GPR_U32(ctx, 31, 0x39AB5Cu);
    ctx->pc = 0x39AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB54u;
    // 0x39ab58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0D40u, 0x39AB54u, 0x39AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AB5Cu;
label_39ab5c:
    // 0x39ab5c: 0xc0e6386  jal         func_398E18
    ctx->pc = 0x39AB5Cu;
    SET_GPR_U32(ctx, 31, 0x39AB64u);
    ctx->pc = 0x39AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AB5Cu;
    // 0x39ab60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E18u, 0x39AB5Cu, 0x39AB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AB64u;
label_39ab64:
    // 0x39ab64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ab64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ab68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39ab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ab6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x39ab6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ab70: 0x3e00008  jr          $ra
    ctx->pc = 0x39AB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39AB70u;
        // 0x39ab74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39AB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39AB78u;
}
