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

// Function: sub_0025E340
// Address: 0x25e340 - 0x25e390
void sub_0025E340_0x25e340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E340_0x25e340");
#endif

    ctx->pc = 0x25e340u;

    // 0x25e340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25e340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e344: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25e344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25e348: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25e348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25e34c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x25e34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x25e350: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x25e350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x25e354: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25e354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e358: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e35c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x25e360: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25e360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e364: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e368: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x25e368u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25e36c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e370: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e374: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x25e374u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x25e378: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25e378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25e37c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E384u;
    // 0x25e384: 0x0  nop
    ctx->pc = 0x25e384u;
    // NOP
    // 0x25e388: 0x0  nop
    ctx->pc = 0x25e388u;
    // NOP
    // 0x25e38c: 0x0  nop
    ctx->pc = 0x25e38cu;
    // NOP
    ctx->pc = 0x25e390u;
}
