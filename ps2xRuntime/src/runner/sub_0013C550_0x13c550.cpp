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

// Function: sub_0013C550
// Address: 0x13c550 - 0x13c5a0
void sub_0013C550_0x13c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C550_0x13c550");
#endif

    ctx->pc = 0x13c550u;

    // 0x13c550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13c554: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13c554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13c558: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13c558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13c55c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x13c55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x13c560: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x13c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x13c564: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c568: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c56c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13c56cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13c570: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13c570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c574: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c578: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x13c578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x13c57c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13c57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c580: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c584: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x13c584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x13c588: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13c588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c58c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C594u;
    // 0x13c594: 0x0  nop
    ctx->pc = 0x13c594u;
    // NOP
    // 0x13c598: 0x0  nop
    ctx->pc = 0x13c598u;
    // NOP
    // 0x13c59c: 0x0  nop
    ctx->pc = 0x13c59cu;
    // NOP
    ctx->pc = 0x13c5a0u;
}
