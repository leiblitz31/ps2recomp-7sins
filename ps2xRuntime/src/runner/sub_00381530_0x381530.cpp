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

// Function: sub_00381530
// Address: 0x381530 - 0x381560
void sub_00381530_0x381530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381530_0x381530");
#endif

    switch (ctx->pc) {
        case 0x381544u: goto label_381544;
        default: break;
    }

    ctx->pc = 0x381530u;

    // 0x381530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x381530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x381534: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x381534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x381538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38153c: 0xc0e071a  jal         func_381C68
    ctx->pc = 0x38153Cu;
    SET_GPR_U32(ctx, 31, 0x381544u);
    ctx->pc = 0x381540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38153Cu;
    // 0x381540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381C68u, 0x38153Cu, 0x381544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381544u;
label_381544:
    // 0x381544: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x381544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x381548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x381548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38154c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381550: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x381550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381554: 0x3e00008  jr          $ra
    ctx->pc = 0x381554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381554u;
        // 0x381558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38155Cu;
    // 0x38155c: 0x0  nop
    ctx->pc = 0x38155cu;
    // NOP
    ctx->pc = 0x381560u;
}
