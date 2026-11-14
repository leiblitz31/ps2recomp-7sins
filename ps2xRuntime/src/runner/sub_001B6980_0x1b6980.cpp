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

// Function: sub_001B6980
// Address: 0x1b6980 - 0x1b6a20
void sub_001B6980_0x1b6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6980_0x1b6980");
#endif

    switch (ctx->pc) {
        case 0x1b69a8u: goto label_1b69a8;
        default: break;
    }

    ctx->pc = 0x1b6980u;

    // 0x1b6980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b6984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b6988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b6988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b698c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b6990: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1b6990u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b6994: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b6994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6998: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1b6998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1b699c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1b699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b69a0: 0xc06c53c  jal         func_1B14F0
    ctx->pc = 0x1B69A0u;
    SET_GPR_U32(ctx, 31, 0x1B69A8u);
    ctx->pc = 0x1B14F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B14F0u, 0x1B69A0u, 0x1B69A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B69A8u;
label_1b69a8:
    // 0x1b69a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b69a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69ac: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1b69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b69b0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1b69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b69b4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1b69b4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1b69b8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1b69b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b69bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b69bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b69c0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b69c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b69c4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1b69c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b69c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b69cc: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x1b69ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
    // 0x1b69d0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1b69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b69d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b69d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b69d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b69dc: 0x0  nop
    ctx->pc = 0x1b69dcu;
    // NOP
    // 0x1b69e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b69e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b69e4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B69E4u;
    {
        const bool branch_taken_0x1b69e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b69e4) {
            ctx->pc = 0x1B6A08u;
            goto label_1b6a08;
        }
    }
    ctx->pc = 0x1B69ECu;
    // 0x1b69ec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1b69ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b69f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1b69f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b69f4: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x1b69f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
    // 0x1b69f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b69f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b69fc: 0x0  nop
    ctx->pc = 0x1b69fcu;
    // NOP
    // 0x1b6a00: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1b6a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b6a04: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1b6a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1b6a08:
    // 0x1b6a08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b6a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b6a0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6a10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1b6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b6a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6A1Cu;
    // 0x1b6a1c: 0x0  nop
    ctx->pc = 0x1b6a1cu;
    // NOP
    ctx->pc = 0x1b6a20u;
}
