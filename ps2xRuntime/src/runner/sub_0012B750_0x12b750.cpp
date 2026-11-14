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

// Function: sub_0012B750
// Address: 0x12b750 - 0x12b790
void sub_0012B750_0x12b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B750_0x12b750");
#endif

    switch (ctx->pc) {
        case 0x12b76cu: goto label_12b76c;
        default: break;
    }

    ctx->pc = 0x12b750u;

    // 0x12b750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12b754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b758: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x12b758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x12b75c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x12b75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x12b760: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x12b760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b764: 0xc04ade4  jal         func_12B790
    ctx->pc = 0x12B764u;
    SET_GPR_U32(ctx, 31, 0x12B76Cu);
    ctx->pc = 0x12B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B790u, 0x12B764u, 0x12B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B76Cu;
label_12b76c:
    // 0x12b76c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x12b76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12b770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12b774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12b774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12b778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b77c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12b77cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12b780: 0x3e00008  jr          $ra
    ctx->pc = 0x12B780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B788u;
    // 0x12b788: 0x0  nop
    ctx->pc = 0x12b788u;
    // NOP
    // 0x12b78c: 0x0  nop
    ctx->pc = 0x12b78cu;
    // NOP
    ctx->pc = 0x12b790u;
}
