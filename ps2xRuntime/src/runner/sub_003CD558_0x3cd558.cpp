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

// Function: sub_003CD558
// Address: 0x3cd558 - 0x3cd590
void sub_003CD558_0x3cd558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD558_0x3cd558");
#endif

    switch (ctx->pc) {
        case 0x3cd578u: goto label_3cd578;
        default: break;
    }

    ctx->pc = 0x3cd558u;

    // 0x3cd558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3cd558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3cd55c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3cd55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd560: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3cd560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3cd564: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x3cd564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x3cd568: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cd568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd56c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3cd56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3cd570: 0xc0e7126  jal         func_39C498
    ctx->pc = 0x3CD570u;
    SET_GPR_U32(ctx, 31, 0x3CD578u);
    ctx->pc = 0x3CD574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD570u;
    // 0x3cd574: 0x2445d4e0  addiu       $a1, $v0, -0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C498u, 0x3CD570u, 0x3CD578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD578u;
label_3cd578:
    // 0x3cd578: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cd578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cd57c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cd57cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cd580: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3cd580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cd584: 0x3e00008  jr          $ra
    ctx->pc = 0x3CD584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD584u;
        // 0x3cd588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CD58Cu;
    // 0x3cd58c: 0x0  nop
    ctx->pc = 0x3cd58cu;
    // NOP
    ctx->pc = 0x3cd590u;
}
