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

// Function: sub_00291AC0
// Address: 0x291ac0 - 0x291b20
void sub_00291AC0_0x291ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291AC0_0x291ac0");
#endif

    switch (ctx->pc) {
        case 0x291adcu: goto label_291adc;
        case 0x291afcu: goto label_291afc;
        default: break;
    }

    ctx->pc = 0x291ac0u;

    // 0x291ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x291ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x291ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291ac8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291acc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291ad0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x291ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291ad4: 0xc0a4094  jal         func_290250
    ctx->pc = 0x291AD4u;
    SET_GPR_U32(ctx, 31, 0x291ADCu);
    ctx->pc = 0x290250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290250u, 0x291AD4u, 0x291ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291ADCu;
label_291adc:
    // 0x291adc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x291adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x291ae0: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x291ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
    // 0x291ae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291ae8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x291ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291aec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291af0: 0x24440078  addiu       $a0, $v0, 0x78
    ctx->pc = 0x291af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x291af4: 0xc0a4768  jal         func_291DA0
    ctx->pc = 0x291AF4u;
    SET_GPR_U32(ctx, 31, 0x291AFCu);
    ctx->pc = 0x291DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291DA0u, 0x291AF4u, 0x291AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AFCu;
label_291afc:
    // 0x291afc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x291afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x291b00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b04: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x291b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
    // 0x291b08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291b10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x291b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x291b14: 0x3e00008  jr          $ra
    ctx->pc = 0x291B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291B1Cu;
    // 0x291b1c: 0x0  nop
    ctx->pc = 0x291b1cu;
    // NOP
    ctx->pc = 0x291b20u;
}
