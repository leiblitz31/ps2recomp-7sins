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

// Function: sub_004666E0
// Address: 0x4666e0 - 0x466730
void sub_004666E0_0x4666e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004666E0_0x4666e0");
#endif

    switch (ctx->pc) {
        case 0x466704u: goto label_466704;
        default: break;
    }

    ctx->pc = 0x4666e0u;

    // 0x4666e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4666e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4666e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4666e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4666e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4666e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4666ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x4666ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x4666f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x4666f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x4666f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4666f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4666f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x4666f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4666fc: 0xc1199cc  jal         func_466730
    ctx->pc = 0x4666FCu;
    SET_GPR_U32(ctx, 31, 0x466704u);
    ctx->pc = 0x466730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466730u, 0x4666FCu, 0x466704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466704u;
label_466704:
    // 0x466704: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x466704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x466708: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x466708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46670c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x46670cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x466710: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x466710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466718: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x466718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46671c: 0x3e00008  jr          $ra
    ctx->pc = 0x46671Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46671Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466724u;
    // 0x466724: 0x0  nop
    ctx->pc = 0x466724u;
    // NOP
    // 0x466728: 0x0  nop
    ctx->pc = 0x466728u;
    // NOP
    // 0x46672c: 0x0  nop
    ctx->pc = 0x46672cu;
    // NOP
    ctx->pc = 0x466730u;
}
