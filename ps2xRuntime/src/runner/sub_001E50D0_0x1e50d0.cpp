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

// Function: sub_001E50D0
// Address: 0x1e50d0 - 0x1e5160
void sub_001E50D0_0x1e50d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E50D0_0x1e50d0");
#endif

    switch (ctx->pc) {
        case 0x1e5108u: goto label_1e5108;
        case 0x1e5138u: goto label_1e5138;
        case 0x1e5144u: goto label_1e5144;
        default: break;
    }

    ctx->pc = 0x1e50d0u;

    // 0x1e50d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e50d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e50d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e50d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e50d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e50d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e50dc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e50dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e50e0: 0x906300ef  lbu         $v1, 0xEF($v1)
    ctx->pc = 0x1e50e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 239)));
    // 0x1e50e4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E50E4u;
    {
        const bool branch_taken_0x1e50e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e50e4) {
            ctx->pc = 0x1E5144u;
            goto label_1e5144;
        }
    }
    ctx->pc = 0x1E50ECu;
    // 0x1e50ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e50f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e50f4: 0xa04300ef  sb          $v1, 0xEF($v0)
    ctx->pc = 0x1e50f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 239), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e50f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e50fc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5100: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5100u;
    SET_GPR_U32(ctx, 31, 0x1E5108u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5100u, 0x1E5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5108u;
label_1e5108:
    // 0x1e5108: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e5108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e510c: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e510cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e5110: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e5110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5114: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e5114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5118: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1e5118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e511c: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1e511cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5120: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1e5120u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e5124: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e5124u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e5128: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e5128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e512c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e512cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5130: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E5130u;
    SET_GPR_U32(ctx, 31, 0x1E5138u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E5130u, 0x1E5138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5138u;
label_1e5138:
    // 0x1e5138: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e5138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e513c: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E513Cu;
    SET_GPR_U32(ctx, 31, 0x1E5144u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E513Cu, 0x1E5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5144u;
label_1e5144:
    // 0x1e5144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e5148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e514c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E514Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E514Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5154u;
    // 0x1e5154: 0x0  nop
    ctx->pc = 0x1e5154u;
    // NOP
    // 0x1e5158: 0x0  nop
    ctx->pc = 0x1e5158u;
    // NOP
    // 0x1e515c: 0x0  nop
    ctx->pc = 0x1e515cu;
    // NOP
    ctx->pc = 0x1e5160u;
}
