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

// Function: sub_00491870
// Address: 0x491870 - 0x4918c0
void sub_00491870_0x491870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491870_0x491870");
#endif

    ctx->pc = 0x491870u;

    // 0x491870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x491870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x491874: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x491874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x491878: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x491878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x49187c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x49187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x491880: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x491880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x491884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x491884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491888: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x491888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49188c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x49188cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x491890: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x491890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491894: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x491894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x491898: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x491898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x49189c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x49189cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4918a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4918a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4918a4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x4918a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x4918a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4918a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4918ac: 0x3e00008  jr          $ra
    ctx->pc = 0x4918ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4918ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4918B4u;
    // 0x4918b4: 0x0  nop
    ctx->pc = 0x4918b4u;
    // NOP
    // 0x4918b8: 0x0  nop
    ctx->pc = 0x4918b8u;
    // NOP
    // 0x4918bc: 0x0  nop
    ctx->pc = 0x4918bcu;
    // NOP
    ctx->pc = 0x4918c0u;
}
