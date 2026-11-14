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

// Function: sub_003AE8C0
// Address: 0x3ae8c0 - 0x3ae960
void sub_003AE8C0_0x3ae8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE8C0_0x3ae8c0");
#endif

    switch (ctx->pc) {
        case 0x3ae8e8u: goto label_3ae8e8;
        case 0x3ae920u: goto label_3ae920;
        default: break;
    }

    ctx->pc = 0x3ae8c0u;

    // 0x3ae8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae8c4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ae8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3ae8c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ae8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3ae8cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ae8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3ae8d0: 0x2450ce80  addiu       $s0, $v0, -0x3180
    ctx->pc = 0x3ae8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3ae8d4: 0x8e030704  lw          $v1, 0x704($s0)
    ctx->pc = 0x3ae8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61D584u));
    // 0x3ae8d8: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3AE8D8u;
    {
        const bool branch_taken_0x3ae8d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae8d8) {
            ctx->pc = 0x3AE8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE8D8u;
            // 0x3ae8dc: 0xc6000700  lwc1        $f0, 0x700($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AE950u;
            goto label_3ae950;
        }
    }
    ctx->pc = 0x3AE8E0u;
    // 0x3ae8e0: 0xc0eb85a  jal         func_3AE168
    ctx->pc = 0x3AE8E0u;
    SET_GPR_U32(ctx, 31, 0x3AE8E8u);
    ctx->pc = 0x3AE168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE168u, 0x3AE8E0u, 0x3AE8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE8E8u;
label_3ae8e8:
    // 0x3ae8e8: 0xc601061c  lwc1        $f1, 0x61C($s0)
    ctx->pc = 0x3ae8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae8ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ae8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae8f0: 0xc6000614  lwc1        $f0, 0x614($s0)
    ctx->pc = 0x3ae8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae8f4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ae8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae8f8: 0xc60306f8  lwc1        $f3, 0x6F8($s0)
    ctx->pc = 0x3ae8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3ae8fc: 0x26060670  addiu       $a2, $s0, 0x670
    ctx->pc = 0x3ae8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x3ae900: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3ae900u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3ae904: 0xc60206fc  lwc1        $f2, 0x6FC($s0)
    ctx->pc = 0x3ae904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae908: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3ae908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3ae90c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3ae90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3ae910: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3ae910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3ae914: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ae914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3ae918: 0xc104d84  jal         func_413610
    ctx->pc = 0x3AE918u;
    SET_GPR_U32(ctx, 31, 0x3AE920u);
    ctx->pc = 0x3AE91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE918u;
    // 0x3ae91c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413610u, 0x3AE918u, 0x3AE920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE920u;
label_3ae920:
    // 0x3ae920: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3ae920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3ae924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ae928: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3ae928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3ae92c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3ae92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3ae930: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3ae930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3ae934: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3ae934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x3ae938: 0xae020704  sw          $v0, 0x704($s0)
    ctx->pc = 0x3ae938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1796), GPR_U32(ctx, 2));
    // 0x3ae93c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3ae93cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x3ae940: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3ae940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3ae944: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ae944u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3ae948: 0xe6000700  swc1        $f0, 0x700($s0)
    ctx->pc = 0x3ae948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1792), bits); }
    // 0x3ae94c: 0xc6000700  lwc1        $f0, 0x700($s0)
    ctx->pc = 0x3ae94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ae950:
    // 0x3ae950: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3ae950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ae954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae958: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE958u;
        // 0x3ae95c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE960u;
}
