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

// Function: sub_0013C5A0
// Address: 0x13c5a0 - 0x13c620
void sub_0013C5A0_0x13c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C5A0_0x13c5a0");
#endif

    switch (ctx->pc) {
        case 0x13c5c4u: goto label_13c5c4;
        case 0x13c608u: goto label_13c608;
        default: break;
    }

    ctx->pc = 0x13c5a0u;

    // 0x13c5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c5a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13c5ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13c5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13c5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c5b8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x13c5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c5bc: 0xc04e020  jal         func_138080
    ctx->pc = 0x13C5BCu;
    SET_GPR_U32(ctx, 31, 0x13C5C4u);
    ctx->pc = 0x138080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138080u, 0x13C5BCu, 0x13C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5C4u;
label_13c5c4:
    // 0x13c5c4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13c5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5c8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x13c5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5d0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13c5d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c5d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c5dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c5e0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c5e4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x13c5e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13c5e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C5E8u;
    {
        const bool branch_taken_0x13c5e8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13c5e8) {
            ctx->pc = 0x13C5F8u;
            goto label_13c5f8;
        }
    }
    ctx->pc = 0x13C5F0u;
    // 0x13c5f0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13c5f4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x13c5f4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_13c5f8:
    // 0x13c5f8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x13c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x13c5fc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x13c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13c600: 0xc04efc4  jal         func_13BF10
    ctx->pc = 0x13C600u;
    SET_GPR_U32(ctx, 31, 0x13C608u);
    ctx->pc = 0x13BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BF10u, 0x13C600u, 0x13C608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C608u;
label_13c608:
    // 0x13c608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c60c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13c60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13c610: 0x3e00008  jr          $ra
    ctx->pc = 0x13C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C618u;
    // 0x13c618: 0x0  nop
    ctx->pc = 0x13c618u;
    // NOP
    // 0x13c61c: 0x0  nop
    ctx->pc = 0x13c61cu;
    // NOP
    ctx->pc = 0x13c620u;
}
