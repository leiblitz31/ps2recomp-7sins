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

// Function: sub_002784F0
// Address: 0x2784f0 - 0x278570
void sub_002784F0_0x2784f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002784F0_0x2784f0");
#endif

    switch (ctx->pc) {
        case 0x278514u: goto label_278514;
        case 0x278558u: goto label_278558;
        default: break;
    }

    ctx->pc = 0x2784f0u;

    // 0x2784f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2784f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2784f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2784f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2784f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2784f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2784fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2784fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278500: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278504: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278508: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x278508u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27850c: 0xc09e15c  jal         func_278570
    ctx->pc = 0x27850Cu;
    SET_GPR_U32(ctx, 31, 0x278514u);
    ctx->pc = 0x278570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278570u, 0x27850Cu, 0x278514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278514u;
label_278514:
    // 0x278514: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278518: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27851c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278520: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x278520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278524: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278528: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x278528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27852c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27852cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278530: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x278530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x278534: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x278534u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x278538: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x278538u;
    {
        const bool branch_taken_0x278538 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x278538) {
            ctx->pc = 0x278548u;
            goto label_278548;
        }
    }
    ctx->pc = 0x278540u;
    // 0x278540: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x278540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x278544: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x278544u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_278548:
    // 0x278548: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x278548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27854c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x27854cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278550: 0xc0a084c  jal         func_282130
    ctx->pc = 0x278550u;
    SET_GPR_U32(ctx, 31, 0x278558u);
    ctx->pc = 0x282130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282130u, 0x278550u, 0x278558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278558u;
label_278558:
    // 0x278558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27855c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27855cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278560: 0x3e00008  jr          $ra
    ctx->pc = 0x278560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278568u;
    // 0x278568: 0x0  nop
    ctx->pc = 0x278568u;
    // NOP
    // 0x27856c: 0x0  nop
    ctx->pc = 0x27856cu;
    // NOP
    ctx->pc = 0x278570u;
}
