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

// Function: sub_001A6D50
// Address: 0x1a6d50 - 0x1a6de0
void sub_001A6D50_0x1a6d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6D50_0x1a6d50");
#endif

    switch (ctx->pc) {
        case 0x1a6d74u: goto label_1a6d74;
        case 0x1a6d84u: goto label_1a6d84;
        default: break;
    }

    ctx->pc = 0x1a6d50u;

    // 0x1a6d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a6d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a6d5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d60: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1a6d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1a6d64: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d68: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1a6d6c: 0xc056254  jal         func_158950
    ctx->pc = 0x1A6D6Cu;
    SET_GPR_U32(ctx, 31, 0x1A6D74u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x1A6D6Cu, 0x1A6D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D74u;
label_1a6d74:
    // 0x1a6d74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d78: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x1a6d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x1a6d7c: 0xc058cd8  jal         func_163360
    ctx->pc = 0x1A6D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A6D84u);
    ctx->pc = 0x163360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163360u, 0x1A6D7Cu, 0x1A6D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D84u;
label_1a6d84:
    // 0x1a6d84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a6d88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a6d8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d90: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a6d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a6d94: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1a6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1a6d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a6d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6d9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6da0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a6da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a6da4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1a6da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a6da8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6dac: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x1a6dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x1a6db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6db4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6db8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x1a6db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x1a6dbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6dc0: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x1a6dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x1a6dc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6dcc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a6dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a6dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6DD8u;
    // 0x1a6dd8: 0x0  nop
    ctx->pc = 0x1a6dd8u;
    // NOP
    // 0x1a6ddc: 0x0  nop
    ctx->pc = 0x1a6ddcu;
    // NOP
    ctx->pc = 0x1a6de0u;
}
