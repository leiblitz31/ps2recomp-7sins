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

// Function: sub_002421C0
// Address: 0x2421c0 - 0x242230
void sub_002421C0_0x2421c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002421C0_0x2421c0");
#endif

    switch (ctx->pc) {
        case 0x2421e4u: goto label_2421e4;
        case 0x2421f8u: goto label_2421f8;
        case 0x24221cu: goto label_24221c;
        default: break;
    }

    ctx->pc = 0x2421c0u;

    // 0x2421c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2421c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2421c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2421c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2421c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2421c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2421cc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2421ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2421d0: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2421d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x2421d4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2421d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2421d8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2421d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2421dc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2421DCu;
    SET_GPR_U32(ctx, 31, 0x2421E4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2421DCu, 0x2421E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421E4u;
label_2421e4:
    // 0x2421e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2421e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2421e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421ec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2421ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2421f0: 0xc090f6c  jal         func_243DB0
    ctx->pc = 0x2421F0u;
    SET_GPR_U32(ctx, 31, 0x2421F8u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x2421F0u, 0x2421F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421F8u;
label_2421f8:
    // 0x2421f8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2421f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2421fc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2421fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x242200: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x242200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x242204: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x242204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x242208: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x242208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24220c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x24220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x242210: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x242210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242214: 0xc09088c  jal         func_242230
    ctx->pc = 0x242214u;
    SET_GPR_U32(ctx, 31, 0x24221Cu);
    ctx->pc = 0x242230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242230u, 0x242214u, 0x24221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24221Cu;
label_24221c:
    // 0x24221c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24221cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242220: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242224: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x242224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x242228: 0x3e00008  jr          $ra
    ctx->pc = 0x242228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x242230u;
}
