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

// Function: sub_0017BBB0
// Address: 0x17bbb0 - 0x17bc00
void sub_0017BBB0_0x17bbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BBB0_0x17bbb0");
#endif

    switch (ctx->pc) {
        case 0x17bbd4u: goto label_17bbd4;
        default: break;
    }

    ctx->pc = 0x17bbb0u;

    // 0x17bbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17bbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17bbb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17bbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17bbb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17bbbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17bbc0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x17bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x17bbc4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17bbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbc8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17bbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bbcc: 0xc05ef00  jal         func_17BC00
    ctx->pc = 0x17BBCCu;
    SET_GPR_U32(ctx, 31, 0x17BBD4u);
    ctx->pc = 0x17BC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BC00u, 0x17BBCCu, 0x17BBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BBD4u;
label_17bbd4:
    // 0x17bbd4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17bbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17bbd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17bbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x17bbe0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17bbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bbe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bbe8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17bbec: 0x3e00008  jr          $ra
    ctx->pc = 0x17BBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BBF4u;
    // 0x17bbf4: 0x0  nop
    ctx->pc = 0x17bbf4u;
    // NOP
    // 0x17bbf8: 0x0  nop
    ctx->pc = 0x17bbf8u;
    // NOP
    // 0x17bbfc: 0x0  nop
    ctx->pc = 0x17bbfcu;
    // NOP
    ctx->pc = 0x17bc00u;
}
