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

// Function: sub_00255300
// Address: 0x255300 - 0x255350
void sub_00255300_0x255300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255300_0x255300");
#endif

    ctx->pc = 0x255300u;

    // 0x255300: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x255304: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x255304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x255308: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x255308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25530c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x25530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x255310: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x255310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x255314: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x255314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x255318: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x255318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25531c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25531cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x255320: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x255320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255324: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x255324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255328: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x255328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25532c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255330: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x255330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x255334: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x255334u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x255338: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x255338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25533c: 0x3e00008  jr          $ra
    ctx->pc = 0x25533Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25533Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x255344u;
    // 0x255344: 0x0  nop
    ctx->pc = 0x255344u;
    // NOP
    // 0x255348: 0x0  nop
    ctx->pc = 0x255348u;
    // NOP
    // 0x25534c: 0x0  nop
    ctx->pc = 0x25534cu;
    // NOP
    ctx->pc = 0x255350u;
}
