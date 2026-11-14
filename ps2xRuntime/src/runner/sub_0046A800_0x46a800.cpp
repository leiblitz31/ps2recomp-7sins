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

// Function: sub_0046A800
// Address: 0x46a800 - 0x46a840
void sub_0046A800_0x46a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A800_0x46a800");
#endif

    switch (ctx->pc) {
        case 0x46a828u: goto label_46a828;
        default: break;
    }

    ctx->pc = 0x46a800u;

    // 0x46a800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x46a800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x46a804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46a804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46a808: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46a808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46a80c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x46a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x46a810: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x46a810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x46a814: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46a814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a818: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x46a818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a81c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x46a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a820: 0xc11a944  jal         func_46A510
    ctx->pc = 0x46A820u;
    SET_GPR_U32(ctx, 31, 0x46A828u);
    ctx->pc = 0x46A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A510u, 0x46A820u, 0x46A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A828u;
label_46a828:
    // 0x46a828: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a82c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46a82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a830: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x46a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46a834: 0x3e00008  jr          $ra
    ctx->pc = 0x46A834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A83Cu;
    // 0x46a83c: 0x0  nop
    ctx->pc = 0x46a83cu;
    // NOP
    ctx->pc = 0x46a840u;
}
