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

// Function: sub_00214310
// Address: 0x214310 - 0x214360
void sub_00214310_0x214310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214310_0x214310");
#endif

    ctx->pc = 0x214310u;

    // 0x214310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214314: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x214314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x214318: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x214318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x21431c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x21431cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x214320: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x214320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x214324: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214328: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x214328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21432c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x21432cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x214330: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x214330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214334: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x214334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214338: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x214338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x21433c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x21433cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214340: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x214340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214344: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x214344u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x214348: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x214348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x21434c: 0x3e00008  jr          $ra
    ctx->pc = 0x21434Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21434Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214354u;
    // 0x214354: 0x0  nop
    ctx->pc = 0x214354u;
    // NOP
    // 0x214358: 0x0  nop
    ctx->pc = 0x214358u;
    // NOP
    // 0x21435c: 0x0  nop
    ctx->pc = 0x21435cu;
    // NOP
    ctx->pc = 0x214360u;
}
