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

// Function: sub_001E5040
// Address: 0x1e5040 - 0x1e50d0
void sub_001E5040_0x1e5040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5040_0x1e5040");
#endif

    switch (ctx->pc) {
        case 0x1e5078u: goto label_1e5078;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b8u: goto label_1e50b8;
        default: break;
    }

    ctx->pc = 0x1e5040u;

    // 0x1e5040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5048: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e5048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e504c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5050: 0x906300ed  lbu         $v1, 0xED($v1)
    ctx->pc = 0x1e5050u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 237)));
    // 0x1e5054: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E5054u;
    {
        const bool branch_taken_0x1e5054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5054) {
            ctx->pc = 0x1E50B8u;
            goto label_1e50b8;
        }
    }
    ctx->pc = 0x1E505Cu;
    // 0x1e505c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e5060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5064: 0xa04300ed  sb          $v1, 0xED($v0)
    ctx->pc = 0x1e5064u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 237), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5068: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e5068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e506c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5070: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5070u;
    SET_GPR_U32(ctx, 31, 0x1E5078u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5070u, 0x1E5078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5078u;
label_1e5078:
    // 0x1e5078: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e5078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e507c: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e507cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e5080: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1e5080u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5084: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e5084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5088: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1e5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e508c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1e508cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1e5090: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e5090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5094: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x1e5094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5098: 0x46000b42  mul.s       $f13, $f1, $f0
    ctx->pc = 0x1e5098u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e509c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e509cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e50a4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E50A4u;
    SET_GPR_U32(ctx, 31, 0x1E50ACu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E50A4u, 0x1E50ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50ACu;
label_1e50ac:
    // 0x1e50ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e50acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e50b0: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E50B0u;
    SET_GPR_U32(ctx, 31, 0x1E50B8u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E50B0u, 0x1E50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50B8u;
label_1e50b8:
    // 0x1e50b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e50b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e50bc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e50bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e50c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E50C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E50C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E50C8u;
    // 0x1e50c8: 0x0  nop
    ctx->pc = 0x1e50c8u;
    // NOP
    // 0x1e50cc: 0x0  nop
    ctx->pc = 0x1e50ccu;
    // NOP
    ctx->pc = 0x1e50d0u;
}
