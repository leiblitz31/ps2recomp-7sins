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

// Function: sub_0027E530
// Address: 0x27e530 - 0x27e570
void sub_0027E530_0x27e530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E530_0x27e530");
#endif

    switch (ctx->pc) {
        case 0x27e54cu: goto label_27e54c;
        default: break;
    }

    ctx->pc = 0x27e530u;

    // 0x27e530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e538: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27e538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27e53c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e540: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27e540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27e544: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x27E544u;
    SET_GPR_U32(ctx, 31, 0x27E54Cu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x27E544u, 0x27E54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E54Cu;
label_27e54c:
    // 0x27e54c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e550: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27e550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27e554: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e55c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27e55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27e560: 0x3e00008  jr          $ra
    ctx->pc = 0x27E560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E568u;
    // 0x27e568: 0x0  nop
    ctx->pc = 0x27e568u;
    // NOP
    // 0x27e56c: 0x0  nop
    ctx->pc = 0x27e56cu;
    // NOP
    ctx->pc = 0x27e570u;
}
