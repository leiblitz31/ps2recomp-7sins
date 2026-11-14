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

// Function: sub_00270900
// Address: 0x270900 - 0x270950
void sub_00270900_0x270900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270900_0x270900");
#endif

    ctx->pc = 0x270900u;

    // 0x270900: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x270900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x270904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x270904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x270908: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x270908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x27090c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x27090cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x270910: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x270910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x270914: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x270914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270918: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x270918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27091c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x27091cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x270920: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x270920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270924: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x270924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270928: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x270928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x27092c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x27092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x270930: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x270930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270934: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x270934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x270938: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x270938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27093c: 0x3e00008  jr          $ra
    ctx->pc = 0x27093Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27093Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270944u;
    // 0x270944: 0x0  nop
    ctx->pc = 0x270944u;
    // NOP
    // 0x270948: 0x0  nop
    ctx->pc = 0x270948u;
    // NOP
    // 0x27094c: 0x0  nop
    ctx->pc = 0x27094cu;
    // NOP
    ctx->pc = 0x270950u;
}
