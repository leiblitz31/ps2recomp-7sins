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

// Function: sub_00111520
// Address: 0x111520 - 0x111570
void sub_00111520_0x111520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111520_0x111520");
#endif

    ctx->pc = 0x111520u;

    // 0x111520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x111520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x111524: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x111524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x111528: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x111528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11152c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x11152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x111530: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x111530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x111534: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x111538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11153c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x11153cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x111540: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x111540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111544: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x111544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111548: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x111548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x11154c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111550: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x111550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111554: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x111554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x111558: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x111558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11155c: 0x3e00008  jr          $ra
    ctx->pc = 0x11155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111564u;
    // 0x111564: 0x0  nop
    ctx->pc = 0x111564u;
    // NOP
    // 0x111568: 0x0  nop
    ctx->pc = 0x111568u;
    // NOP
    // 0x11156c: 0x0  nop
    ctx->pc = 0x11156cu;
    // NOP
    ctx->pc = 0x111570u;
}
