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

// Function: sub_001B2230
// Address: 0x1b2230 - 0x1b2280
void sub_001B2230_0x1b2230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2230_0x1b2230");
#endif

    ctx->pc = 0x1b2230u;

    // 0x1b2230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2234: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b2234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b2238: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1b2238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1b223c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2240: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b2240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b2244: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2248: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1b2248u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b224c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2250: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1b2250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2254: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2258: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b2258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1b225c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2260: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1b2260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2264: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b2264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2268: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b2268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b226c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b226cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2270: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b2274: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B227Cu;
    // 0x1b227c: 0x0  nop
    ctx->pc = 0x1b227cu;
    // NOP
    ctx->pc = 0x1b2280u;
}
