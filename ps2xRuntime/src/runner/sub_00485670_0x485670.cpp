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

// Function: sub_00485670
// Address: 0x485670 - 0x4856c0
void sub_00485670_0x485670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485670_0x485670");
#endif

    switch (ctx->pc) {
        case 0x485698u: goto label_485698;
        case 0x4856acu: goto label_4856ac;
        default: break;
    }

    ctx->pc = 0x485670u;

    // 0x485670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x485670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x485674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485678: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x485678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48567c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48567cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x485680: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x485680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x485684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485688: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x485688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x48568c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48568cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485690: 0xc0a09dc  jal         func_282770
    ctx->pc = 0x485690u;
    SET_GPR_U32(ctx, 31, 0x485698u);
    ctx->pc = 0x282770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282770u, 0x485690u, 0x485698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485698u;
label_485698:
    // 0x485698: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48569c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x48569cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4856a0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4856a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4856a4: 0xc0a09a0  jal         func_282680
    ctx->pc = 0x4856A4u;
    SET_GPR_U32(ctx, 31, 0x4856ACu);
    ctx->pc = 0x282680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282680u, 0x4856A4u, 0x4856ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4856ACu;
label_4856ac:
    // 0x4856ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4856acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4856b0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4856b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4856b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4856B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4856B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4856BCu;
    // 0x4856bc: 0x0  nop
    ctx->pc = 0x4856bcu;
    // NOP
    ctx->pc = 0x4856c0u;
}
