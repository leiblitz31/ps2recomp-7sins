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

// Function: sub_001A3480
// Address: 0x1a3480 - 0x1a3500
void sub_001A3480_0x1a3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3480_0x1a3480");
#endif

    switch (ctx->pc) {
        case 0x1a34a4u: goto label_1a34a4;
        case 0x1a34e8u: goto label_1a34e8;
        default: break;
    }

    ctx->pc = 0x1a3480u;

    // 0x1a3480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a3484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a3488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a3488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a348c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a348cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3490: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3494: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a3494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a3498: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a3498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a349c: 0xc068758  jal         func_1A1D60
    ctx->pc = 0x1A349Cu;
    SET_GPR_U32(ctx, 31, 0x1A34A4u);
    ctx->pc = 0x1A1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D60u, 0x1A349Cu, 0x1A34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34A4u;
label_1a34a4:
    // 0x1a34a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a34a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a34a8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a34a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a34ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a34acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a34b0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a34b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a34b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a34b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a34bc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a34c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a34c4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1a34c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a34c8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A34C8u;
    {
        const bool branch_taken_0x1a34c8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a34c8) {
            ctx->pc = 0x1A34D8u;
            goto label_1a34d8;
        }
    }
    ctx->pc = 0x1A34D0u;
    // 0x1a34d0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a34d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a34d4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1a34d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1a34d8:
    // 0x1a34d8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a34d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a34dc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a34dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a34e0: 0xc069fd8  jal         func_1A7F60
    ctx->pc = 0x1A34E0u;
    SET_GPR_U32(ctx, 31, 0x1A34E8u);
    ctx->pc = 0x1A7F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7F60u, 0x1A34E0u, 0x1A34E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A34E8u;
label_1a34e8:
    // 0x1a34e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a34e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a34ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a34ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a34f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A34F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A34F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A34F8u;
    // 0x1a34f8: 0x0  nop
    ctx->pc = 0x1a34f8u;
    // NOP
    // 0x1a34fc: 0x0  nop
    ctx->pc = 0x1a34fcu;
    // NOP
    ctx->pc = 0x1a3500u;
}
