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

// Function: sub_00279570
// Address: 0x279570 - 0x2795e0
void sub_00279570_0x279570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279570_0x279570");
#endif

    switch (ctx->pc) {
        case 0x2795a4u: goto label_2795a4;
        case 0x2795c4u: goto label_2795c4;
        default: break;
    }

    ctx->pc = 0x279570u;

    // 0x279570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x279570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x279574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x279578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27957c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27957cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x279580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x279580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279584: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x279584u;
    {
        const bool branch_taken_0x279584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279584) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x27958Cu;
    // 0x27958c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27958cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279590: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x279590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279594: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x279594u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279598: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x279598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27959c: 0xc0a0810  jal         func_282040
    ctx->pc = 0x27959Cu;
    SET_GPR_U32(ctx, 31, 0x2795A4u);
    ctx->pc = 0x282040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282040u, 0x27959Cu, 0x2795A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795A4u;
label_2795a4:
    // 0x2795a4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2795a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2795a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2795a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2795ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2795acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2795b0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2795B0u;
    {
        const bool branch_taken_0x2795b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2795b0) {
            ctx->pc = 0x2795C4u;
            goto label_2795c4;
        }
    }
    ctx->pc = 0x2795B8u;
    // 0x2795b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2795b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2795bc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2795BCu;
    SET_GPR_U32(ctx, 31, 0x2795C4u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2795BCu, 0x2795C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2795C4u;
label_2795c4:
    // 0x2795c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2795c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2795c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2795c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2795cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2795ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2795d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2795D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2795D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2795D8u;
    // 0x2795d8: 0x0  nop
    ctx->pc = 0x2795d8u;
    // NOP
    // 0x2795dc: 0x0  nop
    ctx->pc = 0x2795dcu;
    // NOP
    ctx->pc = 0x2795e0u;
}
