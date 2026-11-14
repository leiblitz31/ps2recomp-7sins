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

// Function: sub_001316F0
// Address: 0x1316f0 - 0x131750
void sub_001316F0_0x1316f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001316F0_0x1316f0");
#endif

    switch (ctx->pc) {
        case 0x131720u: goto label_131720;
        case 0x13173cu: goto label_13173c;
        default: break;
    }

    ctx->pc = 0x1316f0u;

    // 0x1316f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1316f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1316f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1316f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1316f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1316f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1316fc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1316fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x131700: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x131700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x131704: 0xa3a70040  sb          $a3, 0x40($sp)
    ctx->pc = 0x131704u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 7));
    // 0x131708: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x131708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13170c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13170cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131710: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x131710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x131714: 0x2464003c  addiu       $a0, $v1, 0x3C
    ctx->pc = 0x131714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
    // 0x131718: 0xc04bae0  jal         func_12EB80
    ctx->pc = 0x131718u;
    SET_GPR_U32(ctx, 31, 0x131720u);
    ctx->pc = 0x12EB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB80u, 0x131718u, 0x131720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131720u;
label_131720:
    // 0x131720: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x131720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131724: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x131724u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x131728: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x131728u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x13172c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13172cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x131730: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x131730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x131734: 0xc116838  jal         func_45A0E0
    ctx->pc = 0x131734u;
    SET_GPR_U32(ctx, 31, 0x13173Cu);
    ctx->pc = 0x45A0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A0E0u, 0x131734u, 0x13173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13173Cu;
label_13173c:
    // 0x13173c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13173cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131740: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x131740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x131744: 0x3e00008  jr          $ra
    ctx->pc = 0x131744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13174Cu;
    // 0x13174c: 0x0  nop
    ctx->pc = 0x13174cu;
    // NOP
    ctx->pc = 0x131750u;
}
