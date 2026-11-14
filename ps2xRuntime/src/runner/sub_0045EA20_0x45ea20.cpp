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

// Function: sub_0045EA20
// Address: 0x45ea20 - 0x45ea70
void sub_0045EA20_0x45ea20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EA20_0x45ea20");
#endif

    switch (ctx->pc) {
        case 0x45ea50u: goto label_45ea50;
        case 0x45ea5cu: goto label_45ea5c;
        default: break;
    }

    ctx->pc = 0x45ea20u;

    // 0x45ea20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x45ea20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x45ea24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45ea28: 0x8f82bf9c  lw          $v0, -0x4064($gp)
    ctx->pc = 0x45ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950812)));
    // 0x45ea2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45EA2Cu;
    {
        const bool branch_taken_0x45ea2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ea2c) {
            ctx->pc = 0x45EA54u;
            goto label_45ea54;
        }
    }
    ctx->pc = 0x45EA34u;
    // 0x45ea34: 0x8f82bf9c  lw          $v0, -0x4064($gp)
    ctx->pc = 0x45ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950812)));
    // 0x45ea38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x45EA38u;
    {
        const bool branch_taken_0x45ea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ea38) {
            ctx->pc = 0x45EA54u;
            goto label_45ea54;
        }
    }
    ctx->pc = 0x45EA40u;
    // 0x45ea40: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x45ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x45ea44: 0x8f85bf9c  lw          $a1, -0x4064($gp)
    ctx->pc = 0x45ea44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950812)));
    // 0x45ea48: 0xc117a9c  jal         func_45EA70
    ctx->pc = 0x45EA48u;
    SET_GPR_U32(ctx, 31, 0x45EA50u);
    ctx->pc = 0x45EA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EA70u, 0x45EA48u, 0x45EA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EA50u;
label_45ea50:
    // 0x45ea50: 0xaf80bf9c  sw          $zero, -0x4064($gp)
    ctx->pc = 0x45ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950812), GPR_U32(ctx, 0));
label_45ea54:
    // 0x45ea54: 0xc117a0c  jal         func_45E830
    ctx->pc = 0x45EA54u;
    SET_GPR_U32(ctx, 31, 0x45EA5Cu);
    ctx->pc = 0x45E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E830u, 0x45EA54u, 0x45EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45EA5Cu;
label_45ea5c:
    // 0x45ea5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45ea5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45ea60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x45ea60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x45ea64: 0x3e00008  jr          $ra
    ctx->pc = 0x45EA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45EA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45EA6Cu;
    // 0x45ea6c: 0x0  nop
    ctx->pc = 0x45ea6cu;
    // NOP
    ctx->pc = 0x45ea70u;
}
