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

// Function: sub_00252270
// Address: 0x252270 - 0x252300
void sub_00252270_0x252270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252270_0x252270");
#endif

    ctx->pc = 0x252270u;

    // 0x252270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x252270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x252274: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x252274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x252278: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x252278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25227c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252280: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252284: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x252284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252288: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x252288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x25228c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252290: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x252290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252294: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x252294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252298: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x252298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x25229c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25229cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2522a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2522a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2522a4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2522a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2522a8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2522a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2522ac: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2522acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522b0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2522b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522b4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2522b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2522b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2522b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2522bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2522bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2522c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2522c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2522c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2522c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2522c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2522c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2522cc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2522ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2522d0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2522d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2522d4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2522d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2522d8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2522d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2522dc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2522dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2522e0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2522e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2522e4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2522e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2522e8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2522e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2522ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2522ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2522f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2522f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2522f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2522F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2522F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2522FCu;
    // 0x2522fc: 0x0  nop
    ctx->pc = 0x2522fcu;
    // NOP
    ctx->pc = 0x252300u;
}
