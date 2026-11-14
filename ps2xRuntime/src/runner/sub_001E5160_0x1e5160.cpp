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

// Function: sub_001E5160
// Address: 0x1e5160 - 0x1e51f0
void sub_001E5160_0x1e5160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5160_0x1e5160");
#endif

    switch (ctx->pc) {
        case 0x1e5198u: goto label_1e5198;
        case 0x1e51ccu: goto label_1e51cc;
        case 0x1e51d8u: goto label_1e51d8;
        default: break;
    }

    ctx->pc = 0x1e5160u;

    // 0x1e5160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5168: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e5168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e516c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5170: 0x906300ee  lbu         $v1, 0xEE($v1)
    ctx->pc = 0x1e5170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 238)));
    // 0x1e5174: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1E5174u;
    {
        const bool branch_taken_0x1e5174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5174) {
            ctx->pc = 0x1E51D8u;
            goto label_1e51d8;
        }
    }
    ctx->pc = 0x1E517Cu;
    // 0x1e517c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e517cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5184: 0xa04300ee  sb          $v1, 0xEE($v0)
    ctx->pc = 0x1e5184u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 238), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e5188: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e5188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e518c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e518cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e5190: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E5190u;
    SET_GPR_U32(ctx, 31, 0x1E5198u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E5190u, 0x1E5198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5198u;
label_1e5198:
    // 0x1e5198: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e5198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e519c: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e519cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e51a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e51a4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1e51a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e51a8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1e51a8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x1e51ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e51acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e51b0: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1e51b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e51b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1e51b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e51b8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e51b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e51bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e51bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e51c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e51c4: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E51C4u;
    SET_GPR_U32(ctx, 31, 0x1E51CCu);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E51C4u, 0x1E51CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51CCu;
label_1e51cc:
    // 0x1e51cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e51ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e51d0: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E51D0u;
    SET_GPR_U32(ctx, 31, 0x1E51D8u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E51D0u, 0x1E51D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51D8u;
label_1e51d8:
    // 0x1e51d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e51d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e51dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e51dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e51e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E51E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E51E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E51E8u;
    // 0x1e51e8: 0x0  nop
    ctx->pc = 0x1e51e8u;
    // NOP
    // 0x1e51ec: 0x0  nop
    ctx->pc = 0x1e51ecu;
    // NOP
    ctx->pc = 0x1e51f0u;
}
