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

// Function: sub_00286090
// Address: 0x286090 - 0x286100
void sub_00286090_0x286090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286090_0x286090");
#endif

    ctx->pc = 0x286090u;

    // 0x286090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286094: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x286094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x286098: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x286098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28609c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2860a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2860a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2860a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2860a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2860a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2860a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2860ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2860acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2860b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2860b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2860b4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2860b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2860b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2860b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2860bc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2860bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2860c0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2860c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2860c4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2860c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2860c8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2860c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2860cc: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x2860ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2860d0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2860d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2860d4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2860d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2860d8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2860d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2860dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2860dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2860e0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2860e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2860e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2860e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2860e8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x2860e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2860ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2860ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2860f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2860f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2860F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2860F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2860FCu;
    // 0x2860fc: 0x0  nop
    ctx->pc = 0x2860fcu;
    // NOP
    ctx->pc = 0x286100u;
}
