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

// Function: sub_001159D0
// Address: 0x1159d0 - 0x115a30
void sub_001159D0_0x1159d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001159D0_0x1159d0");
#endif

    switch (ctx->pc) {
        case 0x1159f4u: goto label_1159f4;
        case 0x115a1cu: goto label_115a1c;
        default: break;
    }

    ctx->pc = 0x1159d0u;

    // 0x1159d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1159d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1159d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1159d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1159d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1159d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1159dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1159dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1159e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1159e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1159e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1159e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1159e8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1159e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1159ec: 0xc0456b4  jal         func_115AD0
    ctx->pc = 0x1159ECu;
    SET_GPR_U32(ctx, 31, 0x1159F4u);
    ctx->pc = 0x115AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AD0u, 0x1159ECu, 0x1159F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1159F4u;
label_1159f4:
    // 0x1159f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1159f8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1159f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1159fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1159fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115a00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115a04: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x115a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x115a08: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x115a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115a0c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x115a10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x115a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115a14: 0xc04568c  jal         func_115A30
    ctx->pc = 0x115A14u;
    SET_GPR_U32(ctx, 31, 0x115A1Cu);
    ctx->pc = 0x115A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A30u, 0x115A14u, 0x115A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115A1Cu;
label_115a1c:
    // 0x115a1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x115a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115a24: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x115a24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115a28: 0x3e00008  jr          $ra
    ctx->pc = 0x115A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115A30u;
}
