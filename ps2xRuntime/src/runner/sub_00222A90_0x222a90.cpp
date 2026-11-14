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

// Function: sub_00222A90
// Address: 0x222a90 - 0x222b00
void sub_00222A90_0x222a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00222A90_0x222a90");
#endif

    switch (ctx->pc) {
        case 0x222ab0u: goto label_222ab0;
        case 0x222abcu: goto label_222abc;
        case 0x222ad8u: goto label_222ad8;
        case 0x222ae4u: goto label_222ae4;
        default: break;
    }

    ctx->pc = 0x222a90u;

    // 0x222a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x222a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222a94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x222a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222a98: 0x8f83bb7c  lw          $v1, -0x4484($gp)
    ctx->pc = 0x222a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222a9c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x222A9Cu;
    {
        const bool branch_taken_0x222a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222a9c) {
            ctx->pc = 0x222AC0u;
            goto label_222ac0;
        }
    }
    ctx->pc = 0x222AA4u;
    // 0x222aa4: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x222aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222aa8: 0xc088ae4  jal         func_222B90
    ctx->pc = 0x222AA8u;
    SET_GPR_U32(ctx, 31, 0x222AB0u);
    ctx->pc = 0x222B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B90u, 0x222AA8u, 0x222AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AB0u;
label_222ab0:
    // 0x222ab0: 0x8f84bb7c  lw          $a0, -0x4484($gp)
    ctx->pc = 0x222ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949756)));
    // 0x222ab4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x222AB4u;
    SET_GPR_U32(ctx, 31, 0x222ABCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x222AB4u, 0x222ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222ABCu;
label_222abc:
    // 0x222abc: 0xaf80bb7c  sw          $zero, -0x4484($gp)
    ctx->pc = 0x222abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949756), GPR_U32(ctx, 0));
label_222ac0:
    // 0x222ac0: 0x8f83bb78  lw          $v1, -0x4488($gp)
    ctx->pc = 0x222ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
    // 0x222ac4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x222AC4u;
    {
        const bool branch_taken_0x222ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x222ac4) {
            ctx->pc = 0x222AE8u;
            goto label_222ae8;
        }
    }
    ctx->pc = 0x222ACCu;
    // 0x222acc: 0x8f84bb78  lw          $a0, -0x4488($gp)
    ctx->pc = 0x222accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
    // 0x222ad0: 0xc088ac0  jal         func_222B00
    ctx->pc = 0x222AD0u;
    SET_GPR_U32(ctx, 31, 0x222AD8u);
    ctx->pc = 0x222B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B00u, 0x222AD0u, 0x222AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AD8u;
label_222ad8:
    // 0x222ad8: 0x8f84bb78  lw          $a0, -0x4488($gp)
    ctx->pc = 0x222ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949752)));
    // 0x222adc: 0xc119c5c  jal         func_467170
    ctx->pc = 0x222ADCu;
    SET_GPR_U32(ctx, 31, 0x222AE4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x222ADCu, 0x222AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222AE4u;
label_222ae4:
    // 0x222ae4: 0xaf80bb78  sw          $zero, -0x4488($gp)
    ctx->pc = 0x222ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949752), GPR_U32(ctx, 0));
label_222ae8:
    // 0x222ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x222ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222aec: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x222aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x222af0: 0x3e00008  jr          $ra
    ctx->pc = 0x222AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222AF8u;
    // 0x222af8: 0x0  nop
    ctx->pc = 0x222af8u;
    // NOP
    // 0x222afc: 0x0  nop
    ctx->pc = 0x222afcu;
    // NOP
    ctx->pc = 0x222b00u;
}
