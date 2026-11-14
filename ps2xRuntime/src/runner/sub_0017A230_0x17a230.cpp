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

// Function: sub_0017A230
// Address: 0x17a230 - 0x17a280
void sub_0017A230_0x17a230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A230_0x17a230");
#endif

    ctx->pc = 0x17a230u;

    // 0x17a230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a234: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x17a234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17a238: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x17a238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x17a23c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x17a23cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x17a240: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x17a240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x17a244: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17a244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a248: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17a248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a24c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x17a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x17a250: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a254: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17a254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a258: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x17a258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x17a25c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x17a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a260: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17a260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a264: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x17a264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x17a268: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17a268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17a26c: 0x3e00008  jr          $ra
    ctx->pc = 0x17A26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A274u;
    // 0x17a274: 0x0  nop
    ctx->pc = 0x17a274u;
    // NOP
    // 0x17a278: 0x0  nop
    ctx->pc = 0x17a278u;
    // NOP
    // 0x17a27c: 0x0  nop
    ctx->pc = 0x17a27cu;
    // NOP
    ctx->pc = 0x17a280u;
}
