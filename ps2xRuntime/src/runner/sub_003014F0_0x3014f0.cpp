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

// Function: sub_003014F0
// Address: 0x3014f0 - 0x301530
void sub_003014F0_0x3014f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003014F0_0x3014f0");
#endif

    switch (ctx->pc) {
        case 0x301518u: goto label_301518;
        default: break;
    }

    ctx->pc = 0x3014f0u;

    // 0x3014f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3014f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3014f4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3014f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3014f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3014f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3014fc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3014fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x301500: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x301500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x301504: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x301504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x301508: 0x8ca70024  lw          $a3, 0x24($a1)
    ctx->pc = 0x301508u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x30150c: 0x8ca80028  lw          $t0, 0x28($a1)
    ctx->pc = 0x30150cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x301510: 0xc0c03ba  jal         func_300EE8
    ctx->pc = 0x301510u;
    SET_GPR_U32(ctx, 31, 0x301518u);
    ctx->pc = 0x301514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301510u;
    // 0x301514: 0x8ca9002c  lw          $t1, 0x2C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EE8u, 0x301510u, 0x301518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301518u;
label_301518:
    // 0x301518: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x301518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30151c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30151cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x301520: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x301520u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x301524: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x301524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301528: 0x3e00008  jr          $ra
    ctx->pc = 0x301528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30152Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301528u;
        // 0x30152c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301530u;
}
