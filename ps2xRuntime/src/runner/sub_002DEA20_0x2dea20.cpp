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

// Function: sub_002DEA20
// Address: 0x2dea20 - 0x2dea70
void sub_002DEA20_0x2dea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEA20_0x2dea20");
#endif

    switch (ctx->pc) {
        case 0x2dea5cu: goto label_2dea5c;
        default: break;
    }

    ctx->pc = 0x2dea20u;

    // 0x2dea20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dea24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dea28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dea28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dea2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2dea2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2dea30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dea34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DEA34u;
    {
        const bool branch_taken_0x2dea34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dea34) {
            ctx->pc = 0x2DEA5Cu;
            goto label_2dea5c;
        }
    }
    ctx->pc = 0x2DEA3Cu;
    // 0x2dea3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2dea3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dea40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2dea40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2dea44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dea44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dea48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DEA48u;
    {
        const bool branch_taken_0x2dea48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dea48) {
            ctx->pc = 0x2DEA5Cu;
            goto label_2dea5c;
        }
    }
    ctx->pc = 0x2DEA50u;
    // 0x2dea50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dea50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dea54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2DEA54u;
    SET_GPR_U32(ctx, 31, 0x2DEA5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2DEA54u, 0x2DEA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEA5Cu;
label_2dea5c:
    // 0x2dea5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dea60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dea60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dea64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2dea64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2dea68: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEA68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEA68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEA70u;
}
