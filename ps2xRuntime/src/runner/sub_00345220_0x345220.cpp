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

// Function: sub_00345220
// Address: 0x345220 - 0x345268
void sub_00345220_0x345220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345220_0x345220");
#endif

    ctx->pc = 0x345220u;

    // 0x345220: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x345220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x345224: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x345224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345228: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x345228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x34522c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x34522cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x345230: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x345230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x345234: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x345234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x345238: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x345238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x34523c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x34523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x345240: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x345240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x345244: 0x8ca60014  lw          $a2, 0x14($a1)
    ctx->pc = 0x345244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x345248: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x345248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x34524c: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x34524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x345250: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x345250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x345254: 0x8ca6002c  lw          $a2, 0x2C($a1)
    ctx->pc = 0x345254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x345258: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x345258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x34525c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x34525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x345260: 0x3e00008  jr          $ra
    ctx->pc = 0x345260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345260u;
        // 0x345264: 0xac830030  sw          $v1, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345268u;
}
