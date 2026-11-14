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

// Function: sub_002B0360
// Address: 0x2b0360 - 0x2b03e0
void sub_002B0360_0x2b0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0360_0x2b0360");
#endif

    switch (ctx->pc) {
        case 0x2b0384u: goto label_2b0384;
        case 0x2b03c8u: goto label_2b03c8;
        default: break;
    }

    ctx->pc = 0x2b0360u;

    // 0x2b0360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b0364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b0368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b036c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2b036cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0374: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b0374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0378: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b0378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b037c: 0xc0ab148  jal         func_2AC520
    ctx->pc = 0x2B037Cu;
    SET_GPR_U32(ctx, 31, 0x2B0384u);
    ctx->pc = 0x2AC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC520u, 0x2B037Cu, 0x2B0384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0384u;
label_2b0384:
    // 0x2b0384: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b0384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0388: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b0388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b038c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0390: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b0390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b0394: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0398: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b0398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b039c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b039cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b03a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b03a4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2b03a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b03a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B03A8u;
    {
        const bool branch_taken_0x2b03a8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b03a8) {
            ctx->pc = 0x2B03B8u;
            goto label_2b03b8;
        }
    }
    ctx->pc = 0x2B03B0u;
    // 0x2b03b0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b03b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b03b4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2b03b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2b03b8:
    // 0x2b03b8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2b03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2b03bc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2b03bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b03c0: 0xc0ac240  jal         func_2B0900
    ctx->pc = 0x2B03C0u;
    SET_GPR_U32(ctx, 31, 0x2B03C8u);
    ctx->pc = 0x2B0900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0900u, 0x2B03C0u, 0x2B03C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B03C8u;
label_2b03c8:
    // 0x2b03c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b03c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b03cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b03ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b03d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B03D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B03D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B03D8u;
    // 0x2b03d8: 0x0  nop
    ctx->pc = 0x2b03d8u;
    // NOP
    // 0x2b03dc: 0x0  nop
    ctx->pc = 0x2b03dcu;
    // NOP
    ctx->pc = 0x2b03e0u;
}
