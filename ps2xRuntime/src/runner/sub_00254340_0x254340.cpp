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

// Function: sub_00254340
// Address: 0x254340 - 0x2543b0
void sub_00254340_0x254340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254340_0x254340");
#endif

    switch (ctx->pc) {
        case 0x254368u: goto label_254368;
        case 0x254378u: goto label_254378;
        case 0x254398u: goto label_254398;
        default: break;
    }

    ctx->pc = 0x254340u;

    // 0x254340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25434c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25434cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x254350: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254354: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x254354u;
    {
        const bool branch_taken_0x254354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254354) {
            ctx->pc = 0x254398u;
            goto label_254398;
        }
    }
    ctx->pc = 0x25435Cu;
    // 0x25435c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25435cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254360: 0xc095108  jal         func_254420
    ctx->pc = 0x254360u;
    SET_GPR_U32(ctx, 31, 0x254368u);
    ctx->pc = 0x254420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254420u, 0x254360u, 0x254368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254368u;
label_254368:
    // 0x254368: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25436c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25436cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254370: 0xc0950ec  jal         func_2543B0
    ctx->pc = 0x254370u;
    SET_GPR_U32(ctx, 31, 0x254378u);
    ctx->pc = 0x2543B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2543B0u, 0x254370u, 0x254378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254378u;
label_254378:
    // 0x254378: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x254378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25437c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x25437cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x254380: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x254380u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x254384: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254384u;
    {
        const bool branch_taken_0x254384 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x254384) {
            ctx->pc = 0x254398u;
            goto label_254398;
        }
    }
    ctx->pc = 0x25438Cu;
    // 0x25438c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25438cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254390: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x254390u;
    SET_GPR_U32(ctx, 31, 0x254398u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x254390u, 0x254398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254398u;
label_254398:
    // 0x254398: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25439c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25439cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2543a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2543a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2543a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2543A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2543A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2543ACu;
    // 0x2543ac: 0x0  nop
    ctx->pc = 0x2543acu;
    // NOP
    ctx->pc = 0x2543b0u;
}
