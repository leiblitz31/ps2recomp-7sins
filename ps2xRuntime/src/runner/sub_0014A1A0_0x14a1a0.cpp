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

// Function: sub_0014A1A0
// Address: 0x14a1a0 - 0x14a200
void sub_0014A1A0_0x14a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A1A0_0x14a1a0");
#endif

    switch (ctx->pc) {
        case 0x14a1ccu: goto label_14a1cc;
        case 0x14a1ecu: goto label_14a1ec;
        default: break;
    }

    ctx->pc = 0x14a1a0u;

    // 0x14a1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a1a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a1a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x14a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x14a1ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x14a1acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x14a1b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a1b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A1B4u;
    {
        const bool branch_taken_0x14a1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a1b4) {
            ctx->pc = 0x14A1ECu;
            goto label_14a1ec;
        }
    }
    ctx->pc = 0x14A1BCu;
    // 0x14a1bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a1c0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a1c4: 0xc052880  jal         func_14A200
    ctx->pc = 0x14A1C4u;
    SET_GPR_U32(ctx, 31, 0x14A1CCu);
    ctx->pc = 0x14A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A200u, 0x14A1C4u, 0x14A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1CCu;
label_14a1cc:
    // 0x14a1cc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x14a1ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a1d0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14a1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14a1d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14a1d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14a1d8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A1D8u;
    {
        const bool branch_taken_0x14a1d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14a1d8) {
            ctx->pc = 0x14A1ECu;
            goto label_14a1ec;
        }
    }
    ctx->pc = 0x14A1E0u;
    // 0x14a1e0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a1e4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x14A1E4u;
    SET_GPR_U32(ctx, 31, 0x14A1ECu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x14A1E4u, 0x14A1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A1ECu;
label_14a1ec:
    // 0x14a1ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x14a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a1f4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A200u;
}
