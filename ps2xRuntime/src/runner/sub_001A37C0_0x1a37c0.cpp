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

// Function: sub_001A37C0
// Address: 0x1a37c0 - 0x1a3840
void sub_001A37C0_0x1a37c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A37C0_0x1a37c0");
#endif

    switch (ctx->pc) {
        case 0x1a37e4u: goto label_1a37e4;
        case 0x1a3828u: goto label_1a3828;
        default: break;
    }

    ctx->pc = 0x1a37c0u;

    // 0x1a37c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a37c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a37c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a37c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a37c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a37c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a37cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a37d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a37d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a37d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a37d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a37d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a37dc: 0xc0687e0  jal         func_1A1F80
    ctx->pc = 0x1A37DCu;
    SET_GPR_U32(ctx, 31, 0x1A37E4u);
    ctx->pc = 0x1A1F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1F80u, 0x1A37DCu, 0x1A37E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A37E4u;
label_1a37e4:
    // 0x1a37e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a37e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a37e8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a37e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a37ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a37f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a37f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a37f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a37fc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a37fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a3800: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a3800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a3804: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1a3804u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a3808: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A3808u;
    {
        const bool branch_taken_0x1a3808 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a3808) {
            ctx->pc = 0x1A3818u;
            goto label_1a3818;
        }
    }
    ctx->pc = 0x1A3810u;
    // 0x1a3810: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a3810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a3814: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1a3814u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1a3818:
    // 0x1a3818: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a3818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a381c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a381cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3820: 0xc06a014  jal         func_1A8050
    ctx->pc = 0x1A3820u;
    SET_GPR_U32(ctx, 31, 0x1A3828u);
    ctx->pc = 0x1A8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8050u, 0x1A3820u, 0x1A3828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3828u;
label_1a3828:
    // 0x1a3828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a3828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a382c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a382cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a3830: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3838u;
    // 0x1a3838: 0x0  nop
    ctx->pc = 0x1a3838u;
    // NOP
    // 0x1a383c: 0x0  nop
    ctx->pc = 0x1a383cu;
    // NOP
    ctx->pc = 0x1a3840u;
}
