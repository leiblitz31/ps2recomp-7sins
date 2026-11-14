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

// Function: sub_00133270
// Address: 0x133270 - 0x1332b0
void sub_00133270_0x133270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133270_0x133270");
#endif

    switch (ctx->pc) {
        case 0x1332a0u: goto label_1332a0;
        default: break;
    }

    ctx->pc = 0x133270u;

    // 0x133270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x133270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x133274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13327c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13327cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x133280: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x133280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x133284: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x133284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x133288: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x133288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13328c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13328cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133290: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x133290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133294: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x133294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133298: 0xc04d690  jal         func_135A40
    ctx->pc = 0x133298u;
    SET_GPR_U32(ctx, 31, 0x1332A0u);
    ctx->pc = 0x135A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135A40u, 0x133298u, 0x1332A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1332A0u;
label_1332a0:
    // 0x1332a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1332a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1332a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1332a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1332a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1332A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1332A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1332B0u;
}
