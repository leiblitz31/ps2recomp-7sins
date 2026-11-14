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

// Function: sub_00481660
// Address: 0x481660 - 0x4816e0
void sub_00481660_0x481660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481660_0x481660");
#endif

    switch (ctx->pc) {
        case 0x481680u: goto label_481680;
        case 0x4816a4u: goto label_4816a4;
        case 0x4816b0u: goto label_4816b0;
        case 0x4816c4u: goto label_4816c4;
        default: break;
    }

    ctx->pc = 0x481660u;

    // 0x481660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x481664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x481668: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x481668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48166c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48166cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x481670: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x481670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481674: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x481674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x481678: 0xc0c962e  jal         func_3258B8
    ctx->pc = 0x481678u;
    SET_GPR_U32(ctx, 31, 0x481680u);
    ctx->pc = 0x3258B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3258B8u, 0x481678u, 0x481680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x481680u;
label_481680:
    // 0x481680: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x481680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481684: 0x10020007  beq         $zero, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x481684u;
    {
        const bool branch_taken_0x481684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x481684) {
            ctx->pc = 0x4816A4u;
            goto label_4816a4;
        }
    }
    ctx->pc = 0x48168Cu;
    // 0x48168c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481690: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x481690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x481694: 0x8f86b588  lw          $a2, -0x4A78($gp)
    ctx->pc = 0x481694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948232)));
    // 0x481698: 0x8f87b58c  lw          $a3, -0x4A74($gp)
    ctx->pc = 0x481698u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948236)));
    // 0x48169c: 0xc0c9798  jal         func_325E60
    ctx->pc = 0x48169Cu;
    SET_GPR_U32(ctx, 31, 0x4816A4u);
    ctx->pc = 0x325E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325E60u, 0x48169Cu, 0x4816A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4816A4u;
label_4816a4:
    // 0x4816a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4816a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4816a8: 0xc0f5392  jal         func_3D4E48
    ctx->pc = 0x4816A8u;
    SET_GPR_U32(ctx, 31, 0x4816B0u);
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x4816A8u, 0x4816B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4816B0u;
label_4816b0:
    // 0x4816b0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x4816b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x4816b4: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x4816b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4816b8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4816b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4816bc: 0xc0f5398  jal         func_3D4E60
    ctx->pc = 0x4816BCu;
    SET_GPR_U32(ctx, 31, 0x4816C4u);
    ctx->pc = 0x3D4E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E60u, 0x4816BCu, 0x4816C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4816C4u;
label_4816c4:
    // 0x4816c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4816c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4816c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4816c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4816cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4816ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4816d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4816D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4816D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4816D8u;
    // 0x4816d8: 0x0  nop
    ctx->pc = 0x4816d8u;
    // NOP
    // 0x4816dc: 0x0  nop
    ctx->pc = 0x4816dcu;
    // NOP
    ctx->pc = 0x4816e0u;
}
