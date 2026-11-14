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

// Function: sub_0027A7A0
// Address: 0x27a7a0 - 0x27a820
void sub_0027A7A0_0x27a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A7A0_0x27a7a0");
#endif

    switch (ctx->pc) {
        case 0x27a7c4u: goto label_27a7c4;
        case 0x27a808u: goto label_27a808;
        default: break;
    }

    ctx->pc = 0x27a7a0u;

    // 0x27a7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27a7a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27a7ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27a7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a7b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a7b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27a7b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27a7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27a7bc: 0xc09e320  jal         func_278C80
    ctx->pc = 0x27A7BCu;
    SET_GPR_U32(ctx, 31, 0x27A7C4u);
    ctx->pc = 0x278C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278C80u, 0x27A7BCu, 0x27A7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A7C4u;
label_27a7c4:
    // 0x27a7c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a7c8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x27a7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a7cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a7d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x27a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27a7d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a7d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27a7dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27a7e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27a7e4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x27a7e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x27a7e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A7E8u;
    {
        const bool branch_taken_0x27a7e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27a7e8) {
            ctx->pc = 0x27A7F8u;
            goto label_27a7f8;
        }
    }
    ctx->pc = 0x27A7F0u;
    // 0x27a7f0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x27a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x27a7f4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x27a7f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_27a7f8:
    // 0x27a7f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x27a7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27a7fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x27a7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a800: 0xc0a0888  jal         func_282220
    ctx->pc = 0x27A800u;
    SET_GPR_U32(ctx, 31, 0x27A808u);
    ctx->pc = 0x282220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282220u, 0x27A800u, 0x27A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A808u;
label_27a808:
    // 0x27a808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27a808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a80c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27a80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27a810: 0x3e00008  jr          $ra
    ctx->pc = 0x27A810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A818u;
    // 0x27a818: 0x0  nop
    ctx->pc = 0x27a818u;
    // NOP
    // 0x27a81c: 0x0  nop
    ctx->pc = 0x27a81cu;
    // NOP
    ctx->pc = 0x27a820u;
}
