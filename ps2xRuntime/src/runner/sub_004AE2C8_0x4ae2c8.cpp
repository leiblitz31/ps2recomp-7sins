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

// Function: sub_004AE2C8
// Address: 0x4ae2c8 - 0x4ae328
void sub_004AE2C8_0x4ae2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE2C8_0x4ae2c8");
#endif

    switch (ctx->pc) {
        case 0x4ae2d8u: goto label_4ae2d8;
        case 0x4ae2fcu: goto label_4ae2fc;
        case 0x4ae304u: goto label_4ae304;
        case 0x4ae30cu: goto label_4ae30c;
        case 0x4ae318u: goto label_4ae318;
        default: break;
    }

    ctx->pc = 0x4ae2c8u;

    // 0x4ae2c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae2cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae2d0: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AE2D0u;
    SET_GPR_U32(ctx, 31, 0x4AE2D8u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AE2D0u, 0x4AE2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE2D8u;
label_4ae2d8:
    // 0x4ae2d8: 0x8f8ac260  lw          $t2, -0x3DA0($gp)
    ctx->pc = 0x4ae2d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951520)));
    // 0x4ae2dc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4ae2dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2e0: 0x8f8bc264  lw          $t3, -0x3D9C($gp)
    ctx->pc = 0x4ae2e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951524)));
    // 0x4ae2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ae2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2e8: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x4ae2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4ae2ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ae2ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ae2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae2f4: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AE2F4u;
    SET_GPR_U32(ctx, 31, 0x4AE2FCu);
    ctx->pc = 0x4AE2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE2F4u;
    // 0x4ae2f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AE2F4u, 0x4AE2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE2FCu;
label_4ae2fc:
    // 0x4ae2fc: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AE2FCu;
    SET_GPR_U32(ctx, 31, 0x4AE304u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AE2FCu, 0x4AE304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE304u;
label_4ae304:
    // 0x4ae304: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AE304u;
    SET_GPR_U32(ctx, 31, 0x4AE30Cu);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AE304u, 0x4AE30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE30Cu;
label_4ae30c:
    // 0x4ae30c: 0x8f85b8b0  lw          $a1, -0x4750($gp)
    ctx->pc = 0x4ae30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949040)));
    // 0x4ae310: 0xc0bf67c  jal         func_2FD9F0
    ctx->pc = 0x4AE310u;
    SET_GPR_U32(ctx, 31, 0x4AE318u);
    ctx->pc = 0x4AE314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE310u;
    // 0x4ae314: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9F0u, 0x4AE310u, 0x4AE318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE318u;
label_4ae318:
    // 0x4ae318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae31c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE31Cu;
        // 0x4ae320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE324u;
    // 0x4ae324: 0x0  nop
    ctx->pc = 0x4ae324u;
    // NOP
    ctx->pc = 0x4ae328u;
}
