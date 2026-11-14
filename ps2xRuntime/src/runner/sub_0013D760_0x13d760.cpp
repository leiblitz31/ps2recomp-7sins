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

// Function: sub_0013D760
// Address: 0x13d760 - 0x13d7a0
void sub_0013D760_0x13d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D760_0x13d760");
#endif

    switch (ctx->pc) {
        case 0x13d778u: goto label_13d778;
        default: break;
    }

    ctx->pc = 0x13d760u;

    // 0x13d760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d76c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d770: 0xc04f5e8  jal         func_13D7A0
    ctx->pc = 0x13D770u;
    SET_GPR_U32(ctx, 31, 0x13D778u);
    ctx->pc = 0x13D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D7A0u, 0x13D770u, 0x13D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D778u;
label_13d778:
    // 0x13d778: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x13d778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13d77c: 0x24633790  addiu       $v1, $v1, 0x3790
    ctx->pc = 0x13d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14224));
    // 0x13d780: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d784: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13d784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13d788: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d790: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13d794: 0x3e00008  jr          $ra
    ctx->pc = 0x13D794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D79Cu;
    // 0x13d79c: 0x0  nop
    ctx->pc = 0x13d79cu;
    // NOP
    ctx->pc = 0x13d7a0u;
}
