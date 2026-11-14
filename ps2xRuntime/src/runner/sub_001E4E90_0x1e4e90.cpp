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

// Function: sub_001E4E90
// Address: 0x1e4e90 - 0x1e4f20
void sub_001E4E90_0x1e4e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4E90_0x1e4e90");
#endif

    switch (ctx->pc) {
        case 0x1e4ec8u: goto label_1e4ec8;
        case 0x1e4ef8u: goto label_1e4ef8;
        case 0x1e4f04u: goto label_1e4f04;
        default: break;
    }

    ctx->pc = 0x1e4e90u;

    // 0x1e4e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4e98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e4e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e4e9c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ea0: 0x906300ef  lbu         $v1, 0xEF($v1)
    ctx->pc = 0x1e4ea0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 239)));
    // 0x1e4ea4: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E4EA4u;
    {
        const bool branch_taken_0x1e4ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ea4) {
            ctx->pc = 0x1E4F04u;
            goto label_1e4f04;
        }
    }
    ctx->pc = 0x1E4EACu;
    // 0x1e4eac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4eb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4eb4: 0xa04300ef  sb          $v1, 0xEF($v0)
    ctx->pc = 0x1e4eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 239), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e4eb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ebc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e4ec0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E4EC0u;
    SET_GPR_U32(ctx, 31, 0x1E4EC8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E4EC0u, 0x1E4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EC8u;
label_1e4ec8:
    // 0x1e4ec8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ecc: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e4eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e4ed0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ed4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1e4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4ed8: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1e4ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e4edc: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x1e4edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4ee0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1e4ee0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e4ee4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1e4ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e4ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e4ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4eec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e4eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e4ef0: 0xc08c208  jal         func_230820
    ctx->pc = 0x1E4EF0u;
    SET_GPR_U32(ctx, 31, 0x1E4EF8u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1E4EF0u, 0x1E4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EF8u;
label_1e4ef8:
    // 0x1e4ef8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e4ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4efc: 0xc07925c  jal         func_1E4970
    ctx->pc = 0x1E4EFCu;
    SET_GPR_U32(ctx, 31, 0x1E4F04u);
    ctx->pc = 0x1E4970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4970u, 0x1E4EFCu, 0x1E4F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F04u;
label_1e4f04:
    // 0x1e4f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4f08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e4f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e4f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4F14u;
    // 0x1e4f14: 0x0  nop
    ctx->pc = 0x1e4f14u;
    // NOP
    // 0x1e4f18: 0x0  nop
    ctx->pc = 0x1e4f18u;
    // NOP
    // 0x1e4f1c: 0x0  nop
    ctx->pc = 0x1e4f1cu;
    // NOP
    ctx->pc = 0x1e4f20u;
}
