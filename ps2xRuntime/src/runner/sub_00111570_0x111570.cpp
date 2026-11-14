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

// Function: sub_00111570
// Address: 0x111570 - 0x1115f0
void sub_00111570_0x111570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111570_0x111570");
#endif

    switch (ctx->pc) {
        case 0x111594u: goto label_111594;
        case 0x1115d8u: goto label_1115d8;
        default: break;
    }

    ctx->pc = 0x111570u;

    // 0x111570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x111578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11157c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x111580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111584: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x111584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111588: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x111588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11158c: 0xc043a28  jal         func_10E8A0
    ctx->pc = 0x11158Cu;
    SET_GPR_U32(ctx, 31, 0x111594u);
    ctx->pc = 0x10E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8A0u, 0x11158Cu, 0x111594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111594u;
label_111594:
    // 0x111594: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x111594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111598: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x111598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11159c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11159cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1115a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1115a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1115a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1115a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1115a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1115a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1115ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1115acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1115b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1115b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1115b4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1115b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1115b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1115B8u;
    {
        const bool branch_taken_0x1115b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1115b8) {
            ctx->pc = 0x1115C8u;
            goto label_1115c8;
        }
    }
    ctx->pc = 0x1115C0u;
    // 0x1115c0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1115c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1115c4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1115c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1115c8:
    // 0x1115c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1115c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1115cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1115ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1115d0: 0xc044874  jal         func_1121D0
    ctx->pc = 0x1115D0u;
    SET_GPR_U32(ctx, 31, 0x1115D8u);
    ctx->pc = 0x1121D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1121D0u, 0x1115D0u, 0x1115D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1115D8u;
label_1115d8:
    // 0x1115d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1115d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1115dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1115dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1115e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1115E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1115E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1115E8u;
    // 0x1115e8: 0x0  nop
    ctx->pc = 0x1115e8u;
    // NOP
    // 0x1115ec: 0x0  nop
    ctx->pc = 0x1115ecu;
    // NOP
    ctx->pc = 0x1115f0u;
}
