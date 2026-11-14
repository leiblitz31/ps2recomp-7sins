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

// Function: sub_00486410
// Address: 0x486410 - 0x486440
void sub_00486410_0x486410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486410_0x486410");
#endif

    ctx->pc = 0x486410u;

    // 0x486410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x486410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x486414: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x486414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x486418: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x486418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48641c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48641cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486420: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x486420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x486424: 0xac64006c  sw          $a0, 0x6C($v1)
    ctx->pc = 0x486424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 4));
    // 0x486428: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x486428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48642c: 0x3e00008  jr          $ra
    ctx->pc = 0x48642Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48642Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486434u;
    // 0x486434: 0x0  nop
    ctx->pc = 0x486434u;
    // NOP
    // 0x486438: 0x0  nop
    ctx->pc = 0x486438u;
    // NOP
    // 0x48643c: 0x0  nop
    ctx->pc = 0x48643cu;
    // NOP
    ctx->pc = 0x486440u;
}
