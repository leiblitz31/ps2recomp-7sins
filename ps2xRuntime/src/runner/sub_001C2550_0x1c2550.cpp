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

// Function: sub_001C2550
// Address: 0x1c2550 - 0x1c25d0
void sub_001C2550_0x1c2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2550_0x1c2550");
#endif

    switch (ctx->pc) {
        case 0x1c2574u: goto label_1c2574;
        case 0x1c25b8u: goto label_1c25b8;
        default: break;
    }

    ctx->pc = 0x1c2550u;

    // 0x1c2550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c2550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c2554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2558: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c2558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c255c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2560: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2564: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c2564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2568: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c2568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c256c: 0xc070840  jal         func_1C2100
    ctx->pc = 0x1C256Cu;
    SET_GPR_U32(ctx, 31, 0x1C2574u);
    ctx->pc = 0x1C2100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2100u, 0x1C256Cu, 0x1C2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2574u;
label_1c2574:
    // 0x1c2574: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c2574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2578: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1c2578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c257c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c257cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2580: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c2584: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2588: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c258c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c258cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2590: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c2594: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1c2594u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c2598: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2598u;
    {
        const bool branch_taken_0x1c2598 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c2598) {
            ctx->pc = 0x1C25A8u;
            goto label_1c25a8;
        }
    }
    ctx->pc = 0x1C25A0u;
    // 0x1c25a0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1c25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c25a4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1c25a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1c25a8:
    // 0x1c25a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c25a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c25ac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1c25acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c25b0: 0xc070da0  jal         func_1C3680
    ctx->pc = 0x1C25B0u;
    SET_GPR_U32(ctx, 31, 0x1C25B8u);
    ctx->pc = 0x1C3680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3680u, 0x1C25B0u, 0x1C25B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C25B8u;
label_1c25b8:
    // 0x1c25b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c25b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c25bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1c25bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1c25c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C25C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C25C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C25C8u;
    // 0x1c25c8: 0x0  nop
    ctx->pc = 0x1c25c8u;
    // NOP
    // 0x1c25cc: 0x0  nop
    ctx->pc = 0x1c25ccu;
    // NOP
    ctx->pc = 0x1c25d0u;
}
