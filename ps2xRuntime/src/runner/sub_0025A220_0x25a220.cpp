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

// Function: sub_0025A220
// Address: 0x25a220 - 0x25a270
void sub_0025A220_0x25a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A220_0x25a220");
#endif

    ctx->pc = 0x25a220u;

    // 0x25a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a224: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a228: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25a22c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a230: 0xac600080  sw          $zero, 0x80($v1)
    ctx->pc = 0x25a230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 0));
    // 0x25a234: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a238: 0xa0600054  sb          $zero, 0x54($v1)
    ctx->pc = 0x25a238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x25a23c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a240: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a244: 0x8c63002c  lw          $v1, 0x2C($v1)
    ctx->pc = 0x25a244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x25a248: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A248u;
    {
        const bool branch_taken_0x25a248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x25a248) {
            ctx->pc = 0x25A25Cu;
            goto label_25a25c;
        }
    }
    ctx->pc = 0x25A250u;
    // 0x25a250: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a254: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a258: 0xac64019c  sw          $a0, 0x19C($v1)
    ctx->pc = 0x25a258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 412), GPR_U32(ctx, 4));
label_25a25c:
    // 0x25a25c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a25cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a260: 0x3e00008  jr          $ra
    ctx->pc = 0x25A260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A268u;
    // 0x25a268: 0x0  nop
    ctx->pc = 0x25a268u;
    // NOP
    // 0x25a26c: 0x0  nop
    ctx->pc = 0x25a26cu;
    // NOP
    ctx->pc = 0x25a270u;
}
