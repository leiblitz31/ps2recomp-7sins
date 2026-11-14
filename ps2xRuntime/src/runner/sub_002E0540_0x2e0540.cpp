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

// Function: sub_002E0540
// Address: 0x2e0540 - 0x2e0580
void sub_002E0540_0x2e0540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0540_0x2e0540");
#endif

    switch (ctx->pc) {
        case 0x2e0568u: goto label_2e0568;
        default: break;
    }

    ctx->pc = 0x2e0540u;

    // 0x2e0540: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e0548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e054c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e054cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e0550: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2e0550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2e0554: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2e0554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0558: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e0558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e055c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2e055cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0560: 0xc0b8160  jal         func_2E0580
    ctx->pc = 0x2E0560u;
    SET_GPR_U32(ctx, 31, 0x2E0568u);
    ctx->pc = 0x2E0580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0580u, 0x2E0560u, 0x2E0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0568u;
label_2e0568:
    // 0x2e0568: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2e0568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e056c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0570: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e0570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0574: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E057Cu;
    // 0x2e057c: 0x0  nop
    ctx->pc = 0x2e057cu;
    // NOP
    ctx->pc = 0x2e0580u;
}
