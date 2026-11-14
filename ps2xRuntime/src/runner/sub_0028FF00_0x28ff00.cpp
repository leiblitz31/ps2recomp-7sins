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

// Function: sub_0028FF00
// Address: 0x28ff00 - 0x28ff60
void sub_0028FF00_0x28ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FF00_0x28ff00");
#endif

    ctx->pc = 0x28ff00u;

    // 0x28ff00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ff04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x28ff04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x28ff08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x28ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28ff0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ff10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x28ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28ff14: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28ff18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x28ff1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ff20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x28ff20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x28ff24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff28: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x28ff28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x28ff2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ff30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x28ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff34: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff38: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x28ff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x28ff3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ff40: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x28ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28ff44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x28ff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28ff4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ff50: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ff54: 0x3e00008  jr          $ra
    ctx->pc = 0x28FF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FF5Cu;
    // 0x28ff5c: 0x0  nop
    ctx->pc = 0x28ff5cu;
    // NOP
    ctx->pc = 0x28ff60u;
}
