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

// Function: sub_00146320
// Address: 0x146320 - 0x146370
void sub_00146320_0x146320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146320_0x146320");
#endif

    ctx->pc = 0x146320u;

    // 0x146320: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x146320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x146324: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x146324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x146328: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x146328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14632c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x14632cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x146330: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x146330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x146334: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x146334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x146338: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x146338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14633c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x14633cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x146340: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x146340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x146344: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x146344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146348: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x146348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14634c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x14634cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x146350: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x146350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146354: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x146354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x146358: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x146358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14635c: 0x3e00008  jr          $ra
    ctx->pc = 0x14635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14635Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146364u;
    // 0x146364: 0x0  nop
    ctx->pc = 0x146364u;
    // NOP
    // 0x146368: 0x0  nop
    ctx->pc = 0x146368u;
    // NOP
    // 0x14636c: 0x0  nop
    ctx->pc = 0x14636cu;
    // NOP
    ctx->pc = 0x146370u;
}
