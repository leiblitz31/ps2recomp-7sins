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

// Function: sub_001EC300
// Address: 0x1ec300 - 0x1ec350
void sub_001EC300_0x1ec300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC300_0x1ec300");
#endif

    ctx->pc = 0x1ec300u;

    // 0x1ec300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ec300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ec304: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ec304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ec308: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1ec308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1ec30c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1ec30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1ec310: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1ec310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1ec314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ec314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec318: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ec318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec31c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ec31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1ec320: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ec320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec324: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ec324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec328: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1ec328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1ec32c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1ec32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec330: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ec330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec334: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1ec334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1ec338: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ec338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ec33c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC344u;
    // 0x1ec344: 0x0  nop
    ctx->pc = 0x1ec344u;
    // NOP
    // 0x1ec348: 0x0  nop
    ctx->pc = 0x1ec348u;
    // NOP
    // 0x1ec34c: 0x0  nop
    ctx->pc = 0x1ec34cu;
    // NOP
    ctx->pc = 0x1ec350u;
}
