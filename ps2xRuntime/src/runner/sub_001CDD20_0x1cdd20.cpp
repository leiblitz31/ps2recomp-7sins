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

// Function: sub_001CDD20
// Address: 0x1cdd20 - 0x1cdd90
void sub_001CDD20_0x1cdd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDD20_0x1cdd20");
#endif

    ctx->pc = 0x1cdd20u;

    // 0x1cdd20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdd24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1cdd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1cdd28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1cdd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1cdd2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cdd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cdd34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1cdd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1cdd3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd40: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cdd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cdd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cdd48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cdd4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cdd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1cdd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cdd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd58: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cdd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cdd5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd60: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1cdd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cdd64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd68: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1cdd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1cdd6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1cdd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdd70: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1cdd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1cdd74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cdd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd78: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1cdd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1cdd7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1cdd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cdd84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD8Cu;
    // 0x1cdd8c: 0x0  nop
    ctx->pc = 0x1cdd8cu;
    // NOP
    ctx->pc = 0x1cdd90u;
}
