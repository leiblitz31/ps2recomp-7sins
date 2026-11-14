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

// Function: sub_0025C140
// Address: 0x25c140 - 0x25c190
void sub_0025C140_0x25c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C140_0x25c140");
#endif

    switch (ctx->pc) {
        case 0x25c158u: goto label_25c158;
        default: break;
    }

    ctx->pc = 0x25c140u;

    // 0x25c140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25c144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c148: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25c148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25c14c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c150: 0xc041b48  jal         func_106D20
    ctx->pc = 0x25C150u;
    SET_GPR_U32(ctx, 31, 0x25C158u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x25C150u, 0x25C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C158u;
label_25c158:
    // 0x25c158: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25c158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25c15c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c160: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x25c160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x25c164: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c168: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x25c168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x25c16c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c170: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x25c170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x25c174: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25c174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c178: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x25c178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x25c17c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c184: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25c184u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25c188: 0x3e00008  jr          $ra
    ctx->pc = 0x25C188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C190u;
}
