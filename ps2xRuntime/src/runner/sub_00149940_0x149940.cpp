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

// Function: sub_00149940
// Address: 0x149940 - 0x149990
void sub_00149940_0x149940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149940_0x149940");
#endif

    switch (ctx->pc) {
        case 0x149964u: goto label_149964;
        case 0x149974u: goto label_149974;
        default: break;
    }

    ctx->pc = 0x149940u;

    // 0x149940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x149940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x149944: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149948: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x149948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x14994c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14994cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149950: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x149950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x149954: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149954u;
    {
        const bool branch_taken_0x149954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x149954) {
            ctx->pc = 0x14996Cu;
            goto label_14996c;
        }
    }
    ctx->pc = 0x14995Cu;
    // 0x14995c: 0xc0b3c94  jal         func_2CF250
    ctx->pc = 0x14995Cu;
    SET_GPR_U32(ctx, 31, 0x149964u);
    ctx->pc = 0x2CF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF250u, 0x14995Cu, 0x149964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149964u;
label_149964:
    // 0x149964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149964u;
    {
        const bool branch_taken_0x149964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x149964) {
            ctx->pc = 0x149974u;
            goto label_149974;
        }
    }
    ctx->pc = 0x14996Cu;
label_14996c:
    // 0x14996c: 0xc05263c  jal         func_1498F0
    ctx->pc = 0x14996Cu;
    SET_GPR_U32(ctx, 31, 0x149974u);
    ctx->pc = 0x1498F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1498F0u, 0x14996Cu, 0x149974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149974u;
label_149974:
    // 0x149974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14997c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x14997cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x149980: 0x3e00008  jr          $ra
    ctx->pc = 0x149980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149988u;
    // 0x149988: 0x0  nop
    ctx->pc = 0x149988u;
    // NOP
    // 0x14998c: 0x0  nop
    ctx->pc = 0x14998cu;
    // NOP
    ctx->pc = 0x149990u;
}
