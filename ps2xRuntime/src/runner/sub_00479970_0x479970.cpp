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

// Function: sub_00479970
// Address: 0x479970 - 0x4799e0
void sub_00479970_0x479970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479970_0x479970");
#endif

    switch (ctx->pc) {
        case 0x4799c8u: goto label_4799c8;
        default: break;
    }

    ctx->pc = 0x479970u;

    // 0x479970: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x479970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x479974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x479974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x479978: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x479978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x47997c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x47997cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x479980: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x479980u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x479984: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x479984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479988: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x479988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47998c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x47998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x479990: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x479990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x479994: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x479994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x479998: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x479998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47999c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x47999cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4799a0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x4799a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x4799a4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x4799a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x4799a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4799a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4799ac: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x4799acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x4799b0: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x4799b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4799b4: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x4799b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4799b8: 0x83a80050  lb          $t0, 0x50($sp)
    ctx->pc = 0x4799b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4799bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4799bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4799c0: 0xc11e5a4  jal         func_479690
    ctx->pc = 0x4799C0u;
    SET_GPR_U32(ctx, 31, 0x4799C8u);
    ctx->pc = 0x479690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x479690u, 0x4799C0u, 0x4799C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4799C8u;
label_4799c8:
    // 0x4799c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4799c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4799cc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4799ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4799d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4799D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4799D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4799D8u;
    // 0x4799d8: 0x0  nop
    ctx->pc = 0x4799d8u;
    // NOP
    // 0x4799dc: 0x0  nop
    ctx->pc = 0x4799dcu;
    // NOP
    ctx->pc = 0x4799e0u;
}
