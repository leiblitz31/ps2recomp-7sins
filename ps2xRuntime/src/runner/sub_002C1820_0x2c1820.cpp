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

// Function: sub_002C1820
// Address: 0x2c1820 - 0x2c1850
void sub_002C1820_0x2c1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1820_0x2c1820");
#endif

    ctx->pc = 0x2c1820u;

    // 0x2c1820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c1824: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2c1824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2c1828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c1828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c182c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2c182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1830: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c1830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c1834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c1834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1838: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c1838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c183c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C183Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C183Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1844u;
    // 0x2c1844: 0x0  nop
    ctx->pc = 0x2c1844u;
    // NOP
    // 0x2c1848: 0x0  nop
    ctx->pc = 0x2c1848u;
    // NOP
    // 0x2c184c: 0x0  nop
    ctx->pc = 0x2c184cu;
    // NOP
    ctx->pc = 0x2c1850u;
}
