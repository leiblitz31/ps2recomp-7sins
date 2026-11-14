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

// Function: sub_001234F0
// Address: 0x1234f0 - 0x123550
void sub_001234F0_0x1234f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001234F0_0x1234f0");
#endif

    switch (ctx->pc) {
        case 0x12351cu: goto label_12351c;
        case 0x12353cu: goto label_12353c;
        default: break;
    }

    ctx->pc = 0x1234f0u;

    // 0x1234f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1234f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1234f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1234f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1234f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1234f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1234fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1234fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x123500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x123500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123504: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x123504u;
    {
        const bool branch_taken_0x123504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123504) {
            ctx->pc = 0x12353Cu;
            goto label_12353c;
        }
    }
    ctx->pc = 0x12350Cu;
    // 0x12350c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12350cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123510: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x123510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123514: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x123514u;
    SET_GPR_U32(ctx, 31, 0x12351Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x123514u, 0x12351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12351Cu;
label_12351c:
    // 0x12351c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x12351cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x123520: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x123520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x123524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x123524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x123528: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x123528u;
    {
        const bool branch_taken_0x123528 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x123528) {
            ctx->pc = 0x12353Cu;
            goto label_12353c;
        }
    }
    ctx->pc = 0x123530u;
    // 0x123530: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x123530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123534: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x123534u;
    SET_GPR_U32(ctx, 31, 0x12353Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x123534u, 0x12353Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12353Cu;
label_12353c:
    // 0x12353c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x12353cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123544: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x123544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x123548: 0x3e00008  jr          $ra
    ctx->pc = 0x123548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123550u;
}
