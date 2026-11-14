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

// Function: sub_002220A0
// Address: 0x2220a0 - 0x222100
void sub_002220A0_0x2220a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002220A0_0x2220a0");
#endif

    switch (ctx->pc) {
        case 0x2220ccu: goto label_2220cc;
        case 0x2220ecu: goto label_2220ec;
        default: break;
    }

    ctx->pc = 0x2220a0u;

    // 0x2220a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2220a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2220a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2220a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2220a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2220a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2220ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2220acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2220b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2220b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2220B4u;
    {
        const bool branch_taken_0x2220b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2220b4) {
            ctx->pc = 0x2220ECu;
            goto label_2220ec;
        }
    }
    ctx->pc = 0x2220BCu;
    // 0x2220bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2220bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2220c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2220c4: 0xc088720  jal         func_221C80
    ctx->pc = 0x2220C4u;
    SET_GPR_U32(ctx, 31, 0x2220CCu);
    ctx->pc = 0x221C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C80u, 0x2220C4u, 0x2220CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220CCu;
label_2220cc:
    // 0x2220cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2220ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2220d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2220d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2220d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2220d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2220d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2220D8u;
    {
        const bool branch_taken_0x2220d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2220d8) {
            ctx->pc = 0x2220ECu;
            goto label_2220ec;
        }
    }
    ctx->pc = 0x2220E0u;
    // 0x2220e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2220e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220e4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2220E4u;
    SET_GPR_U32(ctx, 31, 0x2220ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2220E4u, 0x2220ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2220ECu;
label_2220ec:
    // 0x2220ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2220ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2220f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2220f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2220f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2220f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2220f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2220F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2220F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222100u;
}
