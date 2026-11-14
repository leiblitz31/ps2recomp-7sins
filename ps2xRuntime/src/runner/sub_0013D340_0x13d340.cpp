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

// Function: sub_0013D340
// Address: 0x13d340 - 0x13d3a0
void sub_0013D340_0x13d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D340_0x13d340");
#endif

    switch (ctx->pc) {
        case 0x13d360u: goto label_13d360;
        case 0x13d378u: goto label_13d378;
        case 0x13d390u: goto label_13d390;
        default: break;
    }

    ctx->pc = 0x13d340u;

    // 0x13d340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d348: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d34c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d350: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d354: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13d354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d358: 0xc04f52c  jal         func_13D4B0
    ctx->pc = 0x13D358u;
    SET_GPR_U32(ctx, 31, 0x13D360u);
    ctx->pc = 0x13D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D4B0u, 0x13D358u, 0x13D360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D360u;
label_13d360:
    // 0x13d360: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d364: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13d364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d368: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x13d368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13d36c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13d370: 0xc04f52c  jal         func_13D4B0
    ctx->pc = 0x13D370u;
    SET_GPR_U32(ctx, 31, 0x13D378u);
    ctx->pc = 0x13D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D4B0u, 0x13D370u, 0x13D378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D378u;
label_13d378:
    // 0x13d378: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d37c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13d37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d380: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x13d380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x13d384: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x13d384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13d388: 0xc04f4e8  jal         func_13D3A0
    ctx->pc = 0x13D388u;
    SET_GPR_U32(ctx, 31, 0x13D390u);
    ctx->pc = 0x13D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D3A0u, 0x13D388u, 0x13D390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D390u;
label_13d390:
    // 0x13d390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d394: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13d394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13d398: 0x3e00008  jr          $ra
    ctx->pc = 0x13D398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D3A0u;
}
