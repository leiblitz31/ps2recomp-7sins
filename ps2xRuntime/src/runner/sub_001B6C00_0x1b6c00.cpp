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

// Function: sub_001B6C00
// Address: 0x1b6c00 - 0x1b6ca0
void sub_001B6C00_0x1b6c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6C00_0x1b6c00");
#endif

    switch (ctx->pc) {
        case 0x1b6c28u: goto label_1b6c28;
        default: break;
    }

    ctx->pc = 0x1b6c00u;

    // 0x1b6c00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b6c0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b6c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b6c10: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b6c10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6c14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b6c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c18: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b6c1c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1b6c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1b6c20: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B6C20u;
    SET_GPR_U32(ctx, 31, 0x1B6C28u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B6C20u, 0x1B6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6C28u;
label_1b6c28:
    // 0x1b6c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c2c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1b6c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6c30: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b6c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6c34: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b6c34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b6c38: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6c3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b6c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b6c40: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6c44: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6c4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c50: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1b6c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x1b6c54: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6c58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b6c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6c60: 0x0  nop
    ctx->pc = 0x1b6c60u;
    // NOP
    // 0x1b6c64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b6c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6c68: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6C68u;
    {
        const bool branch_taken_0x1b6c68 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6c68) {
            ctx->pc = 0x1B6C8Cu;
            goto label_1b6c8c;
        }
    }
    ctx->pc = 0x1B6C70u;
    // 0x1b6c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6c74: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b6c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c78: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1b6c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x1b6c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b6c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6c80: 0x0  nop
    ctx->pc = 0x1b6c80u;
    // NOP
    // 0x1b6c84: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6c88: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b6c8c:
    // 0x1b6c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6c94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b6c94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b6c98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6CA0u;
}
