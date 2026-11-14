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

// Function: sub_001EF040
// Address: 0x1ef040 - 0x1ef0d0
void sub_001EF040_0x1ef040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF040_0x1ef040");
#endif

    switch (ctx->pc) {
        case 0x1ef080u: goto label_1ef080;
        case 0x1ef090u: goto label_1ef090;
        case 0x1ef0b0u: goto label_1ef0b0;
        default: break;
    }

    ctx->pc = 0x1ef040u;

    // 0x1ef040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ef040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ef044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ef044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ef048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ef048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1ef04c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1ef04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1ef050: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1ef050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef054: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ef054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef058: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ef058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef05c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ef060: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ef060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ef064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef068: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1ef068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef06c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1ef06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1ef070: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ef070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef074: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1ef074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef078: 0xc07be58  jal         func_1EF960
    ctx->pc = 0x1EF078u;
    SET_GPR_U32(ctx, 31, 0x1EF080u);
    ctx->pc = 0x1EF960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF960u, 0x1EF078u, 0x1EF080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF080u;
label_1ef080:
    // 0x1ef080: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ef080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ef084: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1ef084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1ef088: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EF088u;
    SET_GPR_U32(ctx, 31, 0x1EF090u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EF088u, 0x1EF090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF090u;
label_1ef090:
    // 0x1ef090: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ef090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef094: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1ef094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef098: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ef098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1ef09c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ef09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ef0a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef0a4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1ef0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ef0a8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1EF0A8u;
    SET_GPR_U32(ctx, 31, 0x1EF0B0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1EF0A8u, 0x1EF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF0B0u;
label_1ef0b0:
    // 0x1ef0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef0b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ef0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef0b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ef0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF0C4u;
    // 0x1ef0c4: 0x0  nop
    ctx->pc = 0x1ef0c4u;
    // NOP
    // 0x1ef0c8: 0x0  nop
    ctx->pc = 0x1ef0c8u;
    // NOP
    // 0x1ef0cc: 0x0  nop
    ctx->pc = 0x1ef0ccu;
    // NOP
    ctx->pc = 0x1ef0d0u;
}
