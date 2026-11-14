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

// Function: sub_00226D20
// Address: 0x226d20 - 0x226d70
void sub_00226D20_0x226d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226D20_0x226d20");
#endif

    switch (ctx->pc) {
        case 0x226d5cu: goto label_226d5c;
        default: break;
    }

    ctx->pc = 0x226d20u;

    // 0x226d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x226d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x226d2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x226d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x226d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226d34: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226D34u;
    {
        const bool branch_taken_0x226d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d34) {
            ctx->pc = 0x226D5Cu;
            goto label_226d5c;
        }
    }
    ctx->pc = 0x226D3Cu;
    // 0x226d3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226d40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x226d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x226d44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x226d44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x226d48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x226D48u;
    {
        const bool branch_taken_0x226d48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x226d48) {
            ctx->pc = 0x226D5Cu;
            goto label_226d5c;
        }
    }
    ctx->pc = 0x226D50u;
    // 0x226d50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226d54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x226D54u;
    SET_GPR_U32(ctx, 31, 0x226D5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x226D54u, 0x226D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D5Cu;
label_226d5c:
    // 0x226d5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x226d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226d64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x226d64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x226d68: 0x3e00008  jr          $ra
    ctx->pc = 0x226D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226D70u;
}
