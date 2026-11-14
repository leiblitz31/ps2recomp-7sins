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

// Function: sub_00107560
// Address: 0x107560 - 0x1075b0
void sub_00107560_0x107560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107560_0x107560");
#endif

    ctx->pc = 0x107560u;

    // 0x107560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107564: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x107564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x107568: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x107568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x10756c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10756cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107570: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x107570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107574: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x107574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107578: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x107578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x10757c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107580: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x107580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107584: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x107584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107588: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x107588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x10758c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10758cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107590: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x107590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x107594: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x107594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107598: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x107598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x10759c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x10759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1075a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1075a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1075a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1075A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1075A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1075ACu;
    // 0x1075ac: 0x0  nop
    ctx->pc = 0x1075acu;
    // NOP
    ctx->pc = 0x1075b0u;
}
