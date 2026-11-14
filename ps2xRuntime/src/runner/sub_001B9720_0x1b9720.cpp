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

// Function: sub_001B9720
// Address: 0x1b9720 - 0x1b9780
void sub_001B9720_0x1b9720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9720_0x1b9720");
#endif

    ctx->pc = 0x1b9720u;

    // 0x1b9720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9724: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b9724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b9728: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b9728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b972c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b972cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9730: 0xa4430006  sh          $v1, 0x6($v0)
    ctx->pc = 0x1b9730u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b9734: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9738: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1b9738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1b973c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b9740: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9744: 0xa0430009  sb          $v1, 0x9($v0)
    ctx->pc = 0x1b9744u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9748: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x1b9748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x1b974c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1b974cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1b9750: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9754: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x1b9754u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9758: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b9758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b975c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b975cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9760: 0xa043000a  sb          $v1, 0xA($v0)
    ctx->pc = 0x1b9760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b9764: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9768: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x1b9768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b976c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9770: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b9770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b9774: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B977Cu;
    // 0x1b977c: 0x0  nop
    ctx->pc = 0x1b977cu;
    // NOP
    ctx->pc = 0x1b9780u;
}
