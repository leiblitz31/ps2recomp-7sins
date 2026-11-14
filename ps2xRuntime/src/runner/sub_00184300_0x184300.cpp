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

// Function: sub_00184300
// Address: 0x184300 - 0x184350
void sub_00184300_0x184300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184300_0x184300");
#endif

    switch (ctx->pc) {
        case 0x184324u: goto label_184324;
        default: break;
    }

    ctx->pc = 0x184300u;

    // 0x184300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184308: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x184308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18430c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18430cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x184310: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x184310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x184314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x184314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184318: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x184318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18431c: 0xc0610d4  jal         func_184350
    ctx->pc = 0x18431Cu;
    SET_GPR_U32(ctx, 31, 0x184324u);
    ctx->pc = 0x184350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184350u, 0x18431Cu, 0x184324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184324u;
label_184324:
    // 0x184324: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x184324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184328: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18432c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18432cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x184330: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x184330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184338: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x184338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18433c: 0x3e00008  jr          $ra
    ctx->pc = 0x18433Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18433Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184344u;
    // 0x184344: 0x0  nop
    ctx->pc = 0x184344u;
    // NOP
    // 0x184348: 0x0  nop
    ctx->pc = 0x184348u;
    // NOP
    // 0x18434c: 0x0  nop
    ctx->pc = 0x18434cu;
    // NOP
    ctx->pc = 0x184350u;
}
