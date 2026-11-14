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

// Function: sub_00379868
// Address: 0x379868 - 0x3798b0
void sub_00379868_0x379868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379868_0x379868");
#endif

    switch (ctx->pc) {
        case 0x3798a0u: goto label_3798a0;
        default: break;
    }

    ctx->pc = 0x379868u;

    // 0x379868: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x379868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x37986c: 0x8c43ac50  lw          $v1, -0x53B0($v0)
    ctx->pc = 0x37986cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5DAC50u));
    // 0x379870: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x379870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x379874: 0x3e00008  jr          $ra
    ctx->pc = 0x379874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379874u;
        // 0x379878: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37987Cu;
    // 0x37987c: 0x0  nop
    ctx->pc = 0x37987cu;
    // NOP
    // 0x379880: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x379880u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379884: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x379884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x379888: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x379888u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37988c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x37988cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379894: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379898: 0xc0de296  jal         func_378A58
    ctx->pc = 0x379898u;
    SET_GPR_U32(ctx, 31, 0x3798A0u);
    ctx->pc = 0x37989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379898u;
    // 0x37989c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378A58u, 0x379898u, 0x3798A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3798A0u;
label_3798a0:
    // 0x3798a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3798a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3798a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3798A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3798A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3798A4u;
        // 0x3798a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3798A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3798ACu;
    // 0x3798ac: 0x0  nop
    ctx->pc = 0x3798acu;
    // NOP
    ctx->pc = 0x3798b0u;
}
