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

// Function: sub_001E2160
// Address: 0x1e2160 - 0x1e21b0
void sub_001E2160_0x1e2160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2160_0x1e2160");
#endif

    switch (ctx->pc) {
        case 0x1e219cu: goto label_1e219c;
        default: break;
    }

    ctx->pc = 0x1e2160u;

    // 0x1e2160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e2164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e2168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e216c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e216cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e2170: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e2170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2174: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2178: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e2178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e217c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1e217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e2180: 0x431014  dsllv       $v0, $v1, $v0
    ctx->pc = 0x1e2180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x1e2184: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x1e2184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e2188: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x1e2188u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x1e218c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e218cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2190: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e2190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e2194: 0xc07886c  jal         func_1E21B0
    ctx->pc = 0x1E2194u;
    SET_GPR_U32(ctx, 31, 0x1E219Cu);
    ctx->pc = 0x1E21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E21B0u, 0x1E2194u, 0x1E219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E219Cu;
label_1e219c:
    // 0x1e219c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e219cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e21a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e21a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e21a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E21A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E21A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E21ACu;
    // 0x1e21ac: 0x0  nop
    ctx->pc = 0x1e21acu;
    // NOP
    ctx->pc = 0x1e21b0u;
}
