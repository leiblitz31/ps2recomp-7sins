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

// Function: sub_004AE328
// Address: 0x4ae328 - 0x4ae388
void sub_004AE328_0x4ae328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE328_0x4ae328");
#endif

    switch (ctx->pc) {
        case 0x4ae338u: goto label_4ae338;
        case 0x4ae344u: goto label_4ae344;
        case 0x4ae34cu: goto label_4ae34c;
        case 0x4ae370u: goto label_4ae370;
        case 0x4ae378u: goto label_4ae378;
        default: break;
    }

    ctx->pc = 0x4ae328u;

    // 0x4ae328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ae328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ae32c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ae32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ae330: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AE330u;
    SET_GPR_U32(ctx, 31, 0x4AE338u);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AE330u, 0x4AE338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE338u;
label_4ae338:
    // 0x4ae338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ae338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae33c: 0xc0bf67c  jal         func_2FD9F0
    ctx->pc = 0x4AE33Cu;
    SET_GPR_U32(ctx, 31, 0x4AE344u);
    ctx->pc = 0x4AE340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE33Cu;
    // 0x4ae340: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD9F0u, 0x4AE33Cu, 0x4AE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE344u;
label_4ae344:
    // 0x4ae344: 0xc0bf694  jal         func_2FDA50
    ctx->pc = 0x4AE344u;
    SET_GPR_U32(ctx, 31, 0x4AE34Cu);
    ctx->pc = 0x2FDA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA50u, 0x4AE344u, 0x4AE34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE34Cu;
label_4ae34c:
    // 0x4ae34c: 0x8f8ac260  lw          $t2, -0x3DA0($gp)
    ctx->pc = 0x4ae34cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951520)));
    // 0x4ae350: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4ae350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae354: 0x8f8bc264  lw          $t3, -0x3D9C($gp)
    ctx->pc = 0x4ae354u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951524)));
    // 0x4ae358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ae358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae35c: 0x24070042  addiu       $a3, $zero, 0x42
    ctx->pc = 0x4ae35cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x4ae360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4ae360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae364: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4ae364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae368: 0xc12baca  jal         func_4AEB28
    ctx->pc = 0x4AE368u;
    SET_GPR_U32(ctx, 31, 0x4AE370u);
    ctx->pc = 0x4AE36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE368u;
    // 0x4ae36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AEB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEB28u, 0x4AE368u, 0x4AE370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE370u;
label_4ae370:
    // 0x4ae370: 0xc0bf6a0  jal         func_2FDA80
    ctx->pc = 0x4AE370u;
    SET_GPR_U32(ctx, 31, 0x4AE378u);
    ctx->pc = 0x2FDA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDA80u, 0x4AE370u, 0x4AE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE378u;
label_4ae378:
    // 0x4ae378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ae378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ae37c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE37Cu;
        // 0x4ae380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE384u;
    // 0x4ae384: 0x0  nop
    ctx->pc = 0x4ae384u;
    // NOP
    ctx->pc = 0x4ae388u;
}
