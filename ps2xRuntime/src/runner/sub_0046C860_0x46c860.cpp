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

// Function: sub_0046C860
// Address: 0x46c860 - 0x46c8e0
void sub_0046C860_0x46c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C860_0x46c860");
#endif

    switch (ctx->pc) {
        case 0x46c884u: goto label_46c884;
        case 0x46c8c8u: goto label_46c8c8;
        default: break;
    }

    ctx->pc = 0x46c860u;

    // 0x46c860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46c864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c868: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x46c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x46c86c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x46c86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c870: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c874: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x46c874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x46c878: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x46c878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46c87c: 0xc11af94  jal         func_46BE50
    ctx->pc = 0x46C87Cu;
    SET_GPR_U32(ctx, 31, 0x46C884u);
    ctx->pc = 0x46BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BE50u, 0x46C87Cu, 0x46C884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C884u;
label_46c884:
    // 0x46c884: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x46c884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c888: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x46c888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c88c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c890: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x46c890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x46c894: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x46c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c898: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46c89c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x46c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46c8a0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x46c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x46c8a4: 0x33183  sra         $a2, $v1, 6
    ctx->pc = 0x46c8a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
    // 0x46c8a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46C8A8u;
    {
        const bool branch_taken_0x46c8a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x46c8a8) {
            ctx->pc = 0x46C8B8u;
            goto label_46c8b8;
        }
    }
    ctx->pc = 0x46C8B0u;
    // 0x46c8b0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x46c8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x46c8b4: 0x23183  sra         $a2, $v0, 6
    ctx->pc = 0x46c8b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
label_46c8b8:
    // 0x46c8b8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x46c8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x46c8bc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x46c8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46c8c0: 0xc11b4bc  jal         func_46D2F0
    ctx->pc = 0x46C8C0u;
    SET_GPR_U32(ctx, 31, 0x46C8C8u);
    ctx->pc = 0x46D2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D2F0u, 0x46C8C0u, 0x46C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C8C8u;
label_46c8c8:
    // 0x46c8c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c8cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x46c8ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x46c8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x46C8D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C8D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C8D8u;
    // 0x46c8d8: 0x0  nop
    ctx->pc = 0x46c8d8u;
    // NOP
    // 0x46c8dc: 0x0  nop
    ctx->pc = 0x46c8dcu;
    // NOP
    ctx->pc = 0x46c8e0u;
}
