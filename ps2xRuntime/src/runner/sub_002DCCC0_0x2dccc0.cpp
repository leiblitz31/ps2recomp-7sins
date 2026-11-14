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

// Function: sub_002DCCC0
// Address: 0x2dccc0 - 0x2dcd50
void sub_002DCCC0_0x2dccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCCC0_0x2dccc0");
#endif

    switch (ctx->pc) {
        case 0x2dccdcu: goto label_2dccdc;
        case 0x2dcd08u: goto label_2dcd08;
        case 0x2dcd3cu: goto label_2dcd3c;
        default: break;
    }

    ctx->pc = 0x2dccc0u;

    // 0x2dccc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dccc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dccc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dcccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dccccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dccd0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2dccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
    // 0x2dccd4: 0xc042230  jal         func_1088C0
    ctx->pc = 0x2DCCD4u;
    SET_GPR_U32(ctx, 31, 0x2DCCDCu);
    ctx->pc = 0x1088C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088C0u, 0x2DCCD4u, 0x2DCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCCDCu;
label_2dccdc:
    // 0x2dccdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcce4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dcce4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dcce8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCCF0u;
    // 0x2dccf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dccf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dccf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dccf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dccfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dccfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcd00: 0xc09d1d8  jal         func_274760
    ctx->pc = 0x2DCD00u;
    SET_GPR_U32(ctx, 31, 0x2DCD08u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2DCD00u, 0x2DCD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD08u;
label_2dcd08:
    // 0x2dcd08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcd0c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dcd0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dcd10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCD18u;
    // 0x2dcd18: 0x0  nop
    ctx->pc = 0x2dcd18u;
    // NOP
    // 0x2dcd1c: 0x0  nop
    ctx->pc = 0x2dcd1cu;
    // NOP
    // 0x2dcd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dcd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dcd24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dcd24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dcd28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2dcd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2dcd2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dcd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dcd30: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2dcd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dcd34: 0xc09d250  jal         func_274940
    ctx->pc = 0x2DCD34u;
    SET_GPR_U32(ctx, 31, 0x2DCD3Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2DCD34u, 0x2DCD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DCD3Cu;
label_2dcd3c:
    // 0x2dcd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dcd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcd40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2dcd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dcd44: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCD4Cu;
    // 0x2dcd4c: 0x0  nop
    ctx->pc = 0x2dcd4cu;
    // NOP
    ctx->pc = 0x2dcd50u;
}
