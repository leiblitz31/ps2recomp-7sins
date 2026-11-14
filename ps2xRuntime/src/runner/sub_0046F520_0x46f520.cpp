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

// Function: sub_0046F520
// Address: 0x46f520 - 0x46f550
void sub_0046F520_0x46f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F520_0x46f520");
#endif

    switch (ctx->pc) {
        case 0x46f53cu: goto label_46f53c;
        default: break;
    }

    ctx->pc = 0x46f520u;

    // 0x46f520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46f520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46f524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46f528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46f528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46f52c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f530: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f534: 0xc11a440  jal         func_469100
    ctx->pc = 0x46F534u;
    SET_GPR_U32(ctx, 31, 0x46F53Cu);
    ctx->pc = 0x469100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469100u, 0x46F534u, 0x46F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F53Cu;
label_46f53c:
    // 0x46f53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46f53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f540: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46f540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46f544: 0x3e00008  jr          $ra
    ctx->pc = 0x46F544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F54Cu;
    // 0x46f54c: 0x0  nop
    ctx->pc = 0x46f54cu;
    // NOP
    ctx->pc = 0x46f550u;
}
