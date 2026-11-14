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

// Function: sub_00452660
// Address: 0x452660 - 0x4526b0
void sub_00452660_0x452660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452660_0x452660");
#endif

    switch (ctx->pc) {
        case 0x452684u: goto label_452684;
        default: break;
    }

    ctx->pc = 0x452660u;

    // 0x452660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x452660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x452664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x452664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x452668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x452668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45266c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45266cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x452670: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x452670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x452674: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x452674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452678: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x452678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45267c: 0xc1149ac  jal         func_4526B0
    ctx->pc = 0x45267Cu;
    SET_GPR_U32(ctx, 31, 0x452684u);
    ctx->pc = 0x4526B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4526B0u, 0x45267Cu, 0x452684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452684u;
label_452684:
    // 0x452684: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x452684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x452688: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45268c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45268cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x452690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x452690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x452694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x452694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x452698: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x452698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45269c: 0x3e00008  jr          $ra
    ctx->pc = 0x45269Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45269Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4526A4u;
    // 0x4526a4: 0x0  nop
    ctx->pc = 0x4526a4u;
    // NOP
    // 0x4526a8: 0x0  nop
    ctx->pc = 0x4526a8u;
    // NOP
    // 0x4526ac: 0x0  nop
    ctx->pc = 0x4526acu;
    // NOP
    ctx->pc = 0x4526b0u;
}
