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

// Function: sub_002E59E0
// Address: 0x2e59e0 - 0x2e5a80
void sub_002E59E0_0x2e59e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E59E0_0x2e59e0");
#endif

    switch (ctx->pc) {
        case 0x2e5a0cu: goto label_2e5a0c;
        case 0x2e5a1cu: goto label_2e5a1c;
        case 0x2e5a38u: goto label_2e5a38;
        default: break;
    }

    ctx->pc = 0x2e59e0u;

    // 0x2e59e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e59e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e59e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e59e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e59e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e59e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e59ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2e59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2e59f0: 0x24636a58  addiu       $v1, $v1, 0x6A58
    ctx->pc = 0x2e59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27224));
    // 0x2e59f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e59f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2e59fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e59fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a00: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2e5a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e5a04: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2E5A04u;
    SET_GPR_U32(ctx, 31, 0x2E5A0Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2E5A04u, 0x2E5A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A0Cu;
label_2e5a0c:
    // 0x2e5a0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a10: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2e5a14: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2E5A14u;
    SET_GPR_U32(ctx, 31, 0x2E5A1Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2E5A14u, 0x2E5A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A1Cu;
label_2e5a1c:
    // 0x2e5a1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5a20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a24: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2e5a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2e5a28: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a2c: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e5a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e5a30: 0xc0b9728  jal         func_2E5CA0
    ctx->pc = 0x2E5A30u;
    SET_GPR_U32(ctx, 31, 0x2E5A38u);
    ctx->pc = 0x2E5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5CA0u, 0x2E5A30u, 0x2E5A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5A38u;
label_2e5a38:
    // 0x2e5a38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a3c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2e5a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2e5a40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a44: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2e5a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2e5a48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a4c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x2e5a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x2e5a50: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a54: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x2e5a54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e5a58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a5c: 0xaf82bcd0  sw          $v0, -0x4330($gp)
    ctx->pc = 0x2e5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950096), GPR_U32(ctx, 2));
    // 0x2e5a60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5a64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5a68: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2e5a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e5a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5A74u;
    // 0x2e5a74: 0x0  nop
    ctx->pc = 0x2e5a74u;
    // NOP
    // 0x2e5a78: 0x0  nop
    ctx->pc = 0x2e5a78u;
    // NOP
    // 0x2e5a7c: 0x0  nop
    ctx->pc = 0x2e5a7cu;
    // NOP
    ctx->pc = 0x2e5a80u;
}
