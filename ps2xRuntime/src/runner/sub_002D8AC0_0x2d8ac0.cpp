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

// Function: sub_002D8AC0
// Address: 0x2d8ac0 - 0x2d8b10
void sub_002D8AC0_0x2d8ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8AC0_0x2d8ac0");
#endif

    switch (ctx->pc) {
        case 0x2d8ac0u: goto label_2d8ac0;
        case 0x2d8ac4u: goto label_2d8ac4;
        case 0x2d8ac8u: goto label_2d8ac8;
        case 0x2d8accu: goto label_2d8acc;
        case 0x2d8ad0u: goto label_2d8ad0;
        case 0x2d8ad4u: goto label_2d8ad4;
        case 0x2d8ad8u: goto label_2d8ad8;
        case 0x2d8adcu: goto label_2d8adc;
        case 0x2d8ae0u: goto label_2d8ae0;
        case 0x2d8ae4u: goto label_2d8ae4;
        case 0x2d8ae8u: goto label_2d8ae8;
        case 0x2d8aecu: goto label_2d8aec;
        case 0x2d8af0u: goto label_2d8af0;
        case 0x2d8af4u: goto label_2d8af4;
        case 0x2d8af8u: goto label_2d8af8;
        case 0x2d8afcu: goto label_2d8afc;
        case 0x2d8b00u: goto label_2d8b00;
        case 0x2d8b04u: goto label_2d8b04;
        case 0x2d8b08u: goto label_2d8b08;
        case 0x2d8b0cu: goto label_2d8b0c;
        default: break;
    }

    ctx->pc = 0x2d8ac0u;

label_2d8ac0:
    // 0x2d8ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2d8ac4:
    // 0x2d8ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d8ac8:
    // 0x2d8ac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d8ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_2d8acc:
    // 0x2d8acc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d8accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8ad0:
    // 0x2d8ad0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x2d8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2d8ad4:
    // 0x2d8ad4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2d8ad8:
    if (ctx->pc == 0x2D8AD8u) {
        ctx->pc = 0x2D8ADCu;
        goto label_2d8adc;
    }
    ctx->pc = 0x2D8AD4u;
    {
        const bool branch_taken_0x2d8ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d8ad4) {
            ctx->pc = 0x2D8AFCu;
            goto label_2d8afc;
        }
    }
    ctx->pc = 0x2D8ADCu;
label_2d8adc:
    // 0x2d8adc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2d8adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8ae0:
    // 0x2d8ae0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d8ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2d8ae4:
    // 0x2d8ae4: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2d8ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2d8ae8:
    // 0x2d8ae8: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x2d8ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2d8aec:
    // 0x2d8aec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d8aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d8af0:
    // 0x2d8af0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2d8af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2d8af4:
    // 0x2d8af4: 0x320f809  jalr        $t9
label_2d8af8:
    if (ctx->pc == 0x2D8AF8u) {
        ctx->pc = 0x2D8AFCu;
        goto label_2d8afc;
    }
    ctx->pc = 0x2D8AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D8AFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8AF4u, 0x2D8AFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D8AFCu;
label_2d8afc:
    // 0x2d8afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d8b00:
    // 0x2d8b00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d8b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2d8b04:
    // 0x2d8b04: 0x3e00008  jr          $ra
label_2d8b08:
    if (ctx->pc == 0x2D8B08u) {
        ctx->pc = 0x2D8B0Cu;
        goto label_2d8b0c;
    }
    ctx->pc = 0x2D8B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8B0Cu;
label_2d8b0c:
    // 0x2d8b0c: 0x0  nop
    ctx->pc = 0x2d8b0cu;
    // NOP
    ctx->pc = 0x2d8b10u;
}
