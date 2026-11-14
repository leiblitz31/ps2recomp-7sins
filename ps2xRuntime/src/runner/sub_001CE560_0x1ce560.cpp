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

// Function: sub_001CE560
// Address: 0x1ce560 - 0x1ce5b0
void sub_001CE560_0x1ce560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE560_0x1ce560");
#endif

    ctx->pc = 0x1ce560u;

    // 0x1ce560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce564: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ce564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ce568: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1ce568u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ce56c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ce56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce570: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x1ce570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ce574: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1ce574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce578: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ce578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ce57c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ce57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce580: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x1ce580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce584: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ce584u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ce588: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ce588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce58c: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x1ce58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce590: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ce590u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ce594: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x1ce594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1ce598: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ce598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ce59c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE59Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE5A4u;
    // 0x1ce5a4: 0x0  nop
    ctx->pc = 0x1ce5a4u;
    // NOP
    // 0x1ce5a8: 0x0  nop
    ctx->pc = 0x1ce5a8u;
    // NOP
    // 0x1ce5ac: 0x0  nop
    ctx->pc = 0x1ce5acu;
    // NOP
    ctx->pc = 0x1ce5b0u;
}
