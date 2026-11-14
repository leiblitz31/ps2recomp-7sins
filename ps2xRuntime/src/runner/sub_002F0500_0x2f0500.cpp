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

// Function: sub_002F0500
// Address: 0x2f0500 - 0x2f0548
void sub_002F0500_0x2f0500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0500_0x2f0500");
#endif

    ctx->pc = 0x2f0500u;

    // 0x2f0500: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f0500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0504: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f0504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0508: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2f0508u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2f050c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2f050cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2f0510: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f0510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0514: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x2f0514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x2f0518: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f0518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f051c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2f051cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2f0520: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f0520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f0524: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f0524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0528: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f0528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2f052c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x2f052cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x2f0530: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2f0530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2f0534: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2f0534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2f0538: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2f0538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2f053c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F053Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F053Cu;
        // 0x2f0540: 0xc31025  or          $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F053Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0544u;
    // 0x2f0544: 0x0  nop
    ctx->pc = 0x2f0544u;
    // NOP
    ctx->pc = 0x2f0548u;
}
