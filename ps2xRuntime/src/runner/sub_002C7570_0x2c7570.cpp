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

// Function: sub_002C7570
// Address: 0x2c7570 - 0x2c75f0
void sub_002C7570_0x2c7570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7570_0x2c7570");
#endif

    switch (ctx->pc) {
        case 0x2c7594u: goto label_2c7594;
        case 0x2c75d8u: goto label_2c75d8;
        default: break;
    }

    ctx->pc = 0x2c7570u;

    // 0x2c7570: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c7574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c7578: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c7578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c757c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2c757cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7580: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7584: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c7584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c7588: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c7588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c758c: 0xc0afb14  jal         func_2BEC50
    ctx->pc = 0x2C758Cu;
    SET_GPR_U32(ctx, 31, 0x2C7594u);
    ctx->pc = 0x2BEC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEC50u, 0x2C758Cu, 0x2C7594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7594u;
label_2c7594:
    // 0x2c7594: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c7594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7598: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2c7598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c759c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c75a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2c75a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c75a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c75a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c75a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c75ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2c75acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c75b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c75b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c75b4: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2c75b4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2c75b8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C75B8u;
    {
        const bool branch_taken_0x2c75b8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2c75b8) {
            ctx->pc = 0x2C75C8u;
            goto label_2c75c8;
        }
    }
    ctx->pc = 0x2C75C0u;
    // 0x2c75c0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2c75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2c75c4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2c75c4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2c75c8:
    // 0x2c75c8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2c75c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2c75cc: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c75ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c75d0: 0xc0b2a28  jal         func_2CA8A0
    ctx->pc = 0x2C75D0u;
    SET_GPR_U32(ctx, 31, 0x2C75D8u);
    ctx->pc = 0x2CA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA8A0u, 0x2C75D0u, 0x2C75D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75D8u;
label_2c75d8:
    // 0x2c75d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c75d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c75dc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c75dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c75e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C75E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C75E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C75E8u;
    // 0x2c75e8: 0x0  nop
    ctx->pc = 0x2c75e8u;
    // NOP
    // 0x2c75ec: 0x0  nop
    ctx->pc = 0x2c75ecu;
    // NOP
    ctx->pc = 0x2c75f0u;
}
