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

// Function: sub_002104F0
// Address: 0x2104f0 - 0x210540
void sub_002104F0_0x2104f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002104F0_0x2104f0");
#endif

    ctx->pc = 0x2104f0u;

    // 0x2104f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2104f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2104f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2104f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2104f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2104f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2104fc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2104fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x210500: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x210500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x210504: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x210504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210508: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21050c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21050cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x210510: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x210510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210514: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210518: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x210518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x21051c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x21051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210520: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x210520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210524: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x210524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x210528: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x210528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21052c: 0x3e00008  jr          $ra
    ctx->pc = 0x21052Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21052Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210534u;
    // 0x210534: 0x0  nop
    ctx->pc = 0x210534u;
    // NOP
    // 0x210538: 0x0  nop
    ctx->pc = 0x210538u;
    // NOP
    // 0x21053c: 0x0  nop
    ctx->pc = 0x21053cu;
    // NOP
    ctx->pc = 0x210540u;
}
