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

// Function: sub_002BF0D0
// Address: 0x2bf0d0 - 0x2bf130
void sub_002BF0D0_0x2bf0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF0D0_0x2bf0d0");
#endif

    switch (ctx->pc) {
        case 0x2bf0fcu: goto label_2bf0fc;
        case 0x2bf11cu: goto label_2bf11c;
        default: break;
    }

    ctx->pc = 0x2bf0d0u;

    // 0x2bf0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bf0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bf0d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bf0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bf0d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bf0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bf0dc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2bf0dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2bf0e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bf0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf0e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BF0E4u;
    {
        const bool branch_taken_0x2bf0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bf0e4) {
            ctx->pc = 0x2BF11Cu;
            goto label_2bf11c;
        }
    }
    ctx->pc = 0x2BF0ECu;
    // 0x2bf0ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf0f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bf0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0f4: 0xc0afac8  jal         func_2BEB20
    ctx->pc = 0x2BF0F4u;
    SET_GPR_U32(ctx, 31, 0x2BF0FCu);
    ctx->pc = 0x2BEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEB20u, 0x2BF0F4u, 0x2BF0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0FCu;
label_2bf0fc:
    // 0x2bf0fc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2bf0fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bf100: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2bf100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2bf104: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bf104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bf108: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BF108u;
    {
        const bool branch_taken_0x2bf108 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bf108) {
            ctx->pc = 0x2BF11Cu;
            goto label_2bf11c;
        }
    }
    ctx->pc = 0x2BF110u;
    // 0x2bf110: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2bf110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf114: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2BF114u;
    SET_GPR_U32(ctx, 31, 0x2BF11Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2BF114u, 0x2BF11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF11Cu;
label_2bf11c:
    // 0x2bf11c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bf11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bf120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bf120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf124: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bf124u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bf128: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF130u;
}
