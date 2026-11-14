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

// Function: sub_002C1520
// Address: 0x2c1520 - 0x2c1570
void sub_002C1520_0x2c1520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1520_0x2c1520");
#endif

    ctx->pc = 0x2c1520u;

    // 0x2c1520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1524: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c1524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c1528: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2c1528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2c152c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2c152cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2c1530: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2c1530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2c1534: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1538: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c1538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c153c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2c153cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2c1540: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c1540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1544: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c1544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1548: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2c1548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2c154c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2c154cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1550: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c1550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1554: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2c1554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2c1558: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c1558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c155c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1564u;
    // 0x2c1564: 0x0  nop
    ctx->pc = 0x2c1564u;
    // NOP
    // 0x2c1568: 0x0  nop
    ctx->pc = 0x2c1568u;
    // NOP
    // 0x2c156c: 0x0  nop
    ctx->pc = 0x2c156cu;
    // NOP
    ctx->pc = 0x2c1570u;
}
