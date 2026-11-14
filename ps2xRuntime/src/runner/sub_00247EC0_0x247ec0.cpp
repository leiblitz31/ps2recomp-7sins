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

// Function: sub_00247EC0
// Address: 0x247ec0 - 0x247f20
void sub_00247EC0_0x247ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247EC0_0x247ec0");
#endif

    switch (ctx->pc) {
        case 0x247ee4u: goto label_247ee4;
        case 0x247f0cu: goto label_247f0c;
        default: break;
    }

    ctx->pc = 0x247ec0u;

    // 0x247ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x247ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x247ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x247eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x247ed0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x247ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x247ed4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ed8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x247ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247edc: 0xc091ff0  jal         func_247FC0
    ctx->pc = 0x247EDCu;
    SET_GPR_U32(ctx, 31, 0x247EE4u);
    ctx->pc = 0x247FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247FC0u, 0x247EDCu, 0x247EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247EE4u;
label_247ee4:
    // 0x247ee4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ee8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x247ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x247eec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x247eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247ef0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x247ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247ef4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x247ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x247ef8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x247ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247efc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x247efcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x247f00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247f04: 0xc091fc8  jal         func_247F20
    ctx->pc = 0x247F04u;
    SET_GPR_U32(ctx, 31, 0x247F0Cu);
    ctx->pc = 0x247F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247F20u, 0x247F04u, 0x247F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247F0Cu;
label_247f0c:
    // 0x247f0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f14: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x247f14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x247f18: 0x3e00008  jr          $ra
    ctx->pc = 0x247F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F20u;
}
