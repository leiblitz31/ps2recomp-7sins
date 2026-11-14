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

// Function: sub_002157D0
// Address: 0x2157d0 - 0x215820
void sub_002157D0_0x2157d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002157D0_0x2157d0");
#endif

    ctx->pc = 0x2157d0u;

    // 0x2157d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2157d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2157d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2157d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2157d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2157d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2157dc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2157dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2157e0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2157e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2157e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2157e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2157e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2157e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157ec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2157ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2157f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2157f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2157f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2157f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2157f8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2157f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2157fc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2157fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215800: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x215800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215804: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x215804u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x215808: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x215808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21580c: 0x3e00008  jr          $ra
    ctx->pc = 0x21580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215814u;
    // 0x215814: 0x0  nop
    ctx->pc = 0x215814u;
    // NOP
    // 0x215818: 0x0  nop
    ctx->pc = 0x215818u;
    // NOP
    // 0x21581c: 0x0  nop
    ctx->pc = 0x21581cu;
    // NOP
    ctx->pc = 0x215820u;
}
