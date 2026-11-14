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

// Function: sub_00153640
// Address: 0x153640 - 0x1536a0
void sub_00153640_0x153640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153640_0x153640");
#endif

    ctx->pc = 0x153640u;

    // 0x153640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x153640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x153644: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x153644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x153648: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x153648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x15364c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15364cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153650: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x153650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153654: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153658: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x153658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15365c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x15365cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153660: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x153660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153664: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x153664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x153668: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x153668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15366c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x15366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153670: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x153670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153674: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x153674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153678: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x153678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15367c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x15367cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x153680: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x153680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x153684: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x153684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x153688: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x153688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15368c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x153690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x153694: 0x3e00008  jr          $ra
    ctx->pc = 0x153694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15369Cu;
    // 0x15369c: 0x0  nop
    ctx->pc = 0x15369cu;
    // NOP
    ctx->pc = 0x1536a0u;
}
