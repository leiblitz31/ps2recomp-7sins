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

// Function: sub_001DEC20
// Address: 0x1dec20 - 0x1decc0
void sub_001DEC20_0x1dec20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEC20_0x1dec20");
#endif

    switch (ctx->pc) {
        case 0x1dec58u: goto label_1dec58;
        case 0x1dec8cu: goto label_1dec8c;
        case 0x1dec98u: goto label_1dec98;
        case 0x1deca4u: goto label_1deca4;
        default: break;
    }

    ctx->pc = 0x1dec20u;

    // 0x1dec20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dec20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dec24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dec28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1dec28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1dec2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec30: 0x906300aa  lbu         $v1, 0xAA($v1)
    ctx->pc = 0x1dec30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 170)));
    // 0x1dec34: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1DEC34u;
    {
        const bool branch_taken_0x1dec34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dec34) {
            ctx->pc = 0x1DECA4u;
            goto label_1deca4;
        }
    }
    ctx->pc = 0x1DEC3Cu;
    // 0x1dec3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dec3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dec40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dec40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec44: 0xa04300aa  sb          $v1, 0xAA($v0)
    ctx->pc = 0x1dec44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 170), (uint8_t)GPR_U32(ctx, 3));
    // 0x1dec48: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1dec48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1dec4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dec50: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1DEC50u;
    SET_GPR_U32(ctx, 31, 0x1DEC58u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1DEC50u, 0x1DEC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC58u;
label_1dec58:
    // 0x1dec58: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec5c: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x1dec5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1dec60: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec64: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1dec64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dec68: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1dec68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1dec6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1dec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec70: 0xc46000ac  lwc1        $f0, 0xAC($v1)
    ctx->pc = 0x1dec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dec74: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1dec74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1dec78: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1dec78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dec7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1dec7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dec80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dec80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dec84: 0xc08c208  jal         func_230820
    ctx->pc = 0x1DEC84u;
    SET_GPR_U32(ctx, 31, 0x1DEC8Cu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1DEC84u, 0x1DEC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC8Cu;
label_1dec8c:
    // 0x1dec8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dec8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec90: 0xc077900  jal         func_1DE400
    ctx->pc = 0x1DEC90u;
    SET_GPR_U32(ctx, 31, 0x1DEC98u);
    ctx->pc = 0x1DE400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE400u, 0x1DEC90u, 0x1DEC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEC98u;
label_1dec98:
    // 0x1dec98: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1dec98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dec9c: 0xc0776ac  jal         func_1DDAB0
    ctx->pc = 0x1DEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1DECA4u);
    ctx->pc = 0x1DDAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDAB0u, 0x1DEC9Cu, 0x1DECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DECA4u;
label_1deca4:
    // 0x1deca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deca8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1deca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1decac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DECACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DECACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DECB4u;
    // 0x1decb4: 0x0  nop
    ctx->pc = 0x1decb4u;
    // NOP
    // 0x1decb8: 0x0  nop
    ctx->pc = 0x1decb8u;
    // NOP
    // 0x1decbc: 0x0  nop
    ctx->pc = 0x1decbcu;
    // NOP
    ctx->pc = 0x1decc0u;
}
