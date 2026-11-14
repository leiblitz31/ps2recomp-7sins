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

// Function: sub_0030C2B0
// Address: 0x30c2b0 - 0x30ce58
void sub_0030C2B0_0x30c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C2B0_0x30c2b0");
#endif

    switch (ctx->pc) {
        case 0x30c590u: goto label_30c590;
        case 0x30c62cu: goto label_30c62c;
        case 0x30c678u: goto label_30c678;
        case 0x30c7b0u: goto label_30c7b0;
        case 0x30ce20u: goto label_30ce20;
        default: break;
    }

    ctx->pc = 0x30c2b0u;

label_30c2b0:
    // 0x30c2b0: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x30c2b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30c2b4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x30c2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c2b8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30c2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30c2bc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x30c2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x30c2c0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c2c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x30c2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x30c2c8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x30c2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x30c2cc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x30c2ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30c2d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C2D0u;
    {
        const bool branch_taken_0x30c2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2D0u;
        // 0x30c2d4: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2d0) {
            ctx->pc = 0x30C2E0u;
            goto label_30c2e0;
        }
    }
    ctx->pc = 0x30C2D8u;
    // 0x30c2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2D8u;
        // 0x30c2dc: 0xc440b024  lwc1        $f0, -0x4FDC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C2E0u;
label_30c2e0:
    // 0x30c2e0: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C2E0u;
    {
        const bool branch_taken_0x30c2e0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2E0u;
        // 0x30c2e4: 0x525c3  sra         $a0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2e0) {
            ctx->pc = 0x30C308u;
            goto label_30c308;
        }
    }
    ctx->pc = 0x30C2E8u;
    // 0x30c2e8: 0x460c6041  sub.s       $f1, $f12, $f12
    ctx->pc = 0x30c2e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x30c2ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30c2ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c2f0: 0x0  nop
    ctx->pc = 0x30c2f0u;
    // NOP
    // 0x30c2f4: 0x0  nop
    ctx->pc = 0x30c2f4u;
    // NOP
    // 0x30c2f8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30c2f8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30c2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x30C2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C304u;
    // 0x30c304: 0x0  nop
    ctx->pc = 0x30c304u;
    // NOP
label_30c308:
    // 0x30c308: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x30c308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x30c30c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x30c30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x30c310: 0x3463fb20  ori         $v1, $v1, 0xFB20
    ctx->pc = 0x30c310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64288);
    // 0x30c314: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30c314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30c318: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x30c318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x30c31c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30c31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c320: 0x2484ff81  addiu       $a0, $a0, -0x7F
    ctx->pc = 0x30c320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967169));
    // 0x30c324: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30c324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30c328: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x30c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x30c32c: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x30c32cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30c330: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30c330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30c334: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x30c334u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x30c338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30c33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c340: 0x24a2000f  addiu       $v0, $a1, 0xF
    ctx->pc = 0x30c340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x30c344: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x30c344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30c348: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x30c348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x30c34c: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x30c34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x30c350: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x30C350u;
    {
        const bool branch_taken_0x30c350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C350u;
        // 0x30c354: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c350) {
            ctx->pc = 0x30C408u;
            goto label_30c408;
        }
    }
    ctx->pc = 0x30C358u;
    // 0x30c358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30c358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c35c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x30c35cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c360: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x30C360u;
    {
        const bool branch_taken_0x30c360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c360) {
            ctx->pc = 0x30C364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C360u;
            // 0x30c364: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C3A0u;
            goto label_30c3a0;
        }
    }
    ctx->pc = 0x30C368u;
    // 0x30c368: 0x10800087  beqz        $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x30C368u;
    {
        const bool branch_taken_0x30c368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c368) {
            ctx->pc = 0x30C588u;
            goto label_30c588;
        }
    }
    ctx->pc = 0x30C370u;
    // 0x30c370: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x30c370u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30c374: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x30c374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x30c378: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x30c378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x30c37c: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x30c37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x30c380: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c384: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x30c384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x30c388: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x30c388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x30c38c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c38cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c390: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x30c390u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x30c394: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x30c394u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x30c398: 0x3e00008  jr          $ra
    ctx->pc = 0x30C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C398u;
        // 0x30c39c: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C3A0u;
label_30c3a0:
    // 0x30c3a0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x30c3a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x30c3a4: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30c3a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x30c3a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c3ac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30c3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30c3b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c3b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30c3b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30c3b8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30c3b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30c3bc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C3BCu;
    {
        const bool branch_taken_0x30c3bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3BCu;
        // 0x30c3c0: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c3bc) {
            ctx->pc = 0x30C3D0u;
            goto label_30c3d0;
        }
    }
    ctx->pc = 0x30C3C4u;
    // 0x30c3c4: 0x3e00008  jr          $ra
    ctx->pc = 0x30C3C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C3C4u;
        // 0x30c3c8: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C3C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C3CCu;
    // 0x30c3cc: 0x0  nop
    ctx->pc = 0x30c3ccu;
    // NOP
label_30c3d0:
    // 0x30c3d0: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x30c3d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30c3d4: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x30c3d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x30c3d8: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x30c3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x30c3dc: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x30c3dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x30c3e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c3e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c3e4: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x30c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x30c3e8: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x30c3e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x30c3ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c3ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c3f0: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x30c3f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x30c3f4: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x30c3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x30c3f8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30c3f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x30c3fc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x30c3fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x30c400: 0x3e00008  jr          $ra
    ctx->pc = 0x30C400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C400u;
        // 0x30c404: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C408u;
label_30c408:
    // 0x30c408: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30c408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x30c40c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c410: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x30c410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x30c414: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x30c414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x30c418: 0x34218896  ori         $at, $at, 0x8896
    ctx->pc = 0x30c418u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34966);
    // 0x30c41c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c420: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x30c420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x30c424: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x30c424u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x30c428: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x30c428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x30c42c: 0x34213324  ori         $at, $at, 0x3324
    ctx->pc = 0x30c42cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13092);
    // 0x30c430: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30c430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x30c434: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x30c434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
    // 0x30c438: 0x3421d04e  ori         $at, $at, 0xD04E
    ctx->pc = 0x30c438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53326);
    // 0x30c43c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c440: 0x34635c30  ori         $v1, $v1, 0x5C30
    ctx->pc = 0x30c440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23600);
    // 0x30c444: 0x3c013e63  lui         $at, 0x3E63
    ctx->pc = 0x30c444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15971 << 16));
    // 0x30c448: 0x34218e29  ori         $at, $at, 0x8E29
    ctx->pc = 0x30c448u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36393);
    // 0x30c44c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30c44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30c450: 0x3442c288  ori         $v0, $v0, 0xC288
    ctx->pc = 0x30c450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49800);
    // 0x30c454: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x30c454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x30c458: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x30c458u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x30c45c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30c45cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30c460: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x30c460u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30c464: 0x0  nop
    ctx->pc = 0x30c464u;
    // NOP
    // 0x30c468: 0x0  nop
    ctx->pc = 0x30c468u;
    // NOP
    // 0x30c46c: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x30c46cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x30c470: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x30c470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x30c474: 0x3421cccc  ori         $at, $at, 0xCCCC
    ctx->pc = 0x30c474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52428);
    // 0x30c478: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30c478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30c47c: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x30c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x30c480: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30c480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x30c484: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30c484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x30c488: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30c488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30c48c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30c48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30c490: 0x44844800  mtc1        $a0, $f9
    ctx->pc = 0x30c490u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30c494: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x30c494u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x30c498: 0x460a50c2  mul.s       $f3, $f10, $f10
    ctx->pc = 0x30c498u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x30c49c: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x30c49cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x30c4a0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30c4a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30c4a4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x30c4a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30c4a8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x30c4a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x30c4ac: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x30c4acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x30c4b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30c4b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30c4b4: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x30c4b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30c4b8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x30c4b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x30c4bc: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x30c4bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x30c4c0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x30c4c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x30c4c4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30c4c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30c4c8: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x30c4c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x30c4cc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x30c4ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x30c4d0: 0x1860001b  blez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x30C4D0u;
    {
        const bool branch_taken_0x30c4d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x30C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4D0u;
        // 0x30c4d4: 0x46001880  add.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4d0) {
            ctx->pc = 0x30C540u;
            goto label_30c540;
        }
    }
    ctx->pc = 0x30C4D8u;
    // 0x30c4d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30c4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30c4dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c4dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c4e0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30c4e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30c4e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C4E4u;
    {
        const bool branch_taken_0x30c4e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4E4u;
        // 0x30c4e8: 0x460c0102  mul.s       $f4, $f0, $f12 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c4e4) {
            ctx->pc = 0x30C500u;
            goto label_30c500;
        }
    }
    ctx->pc = 0x30C4ECu;
    // 0x30c4ec: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x30c4ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x30c4f0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x30c4f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x30c4f4: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x30c4f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C4F8u;
        // 0x30c4fc: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C500u;
label_30c500:
    // 0x30c500: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x30c500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x30c504: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x30c504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x30c508: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x30c508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x30c50c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c50cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c510: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x30c510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x30c514: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x30c514u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x30c518: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c51c: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x30c51cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x30c520: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x30c520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x30c524: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x30c524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x30c528: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30c528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x30c52c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x30c52cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30c530: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x30c530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x30c534: 0x3e00008  jr          $ra
    ctx->pc = 0x30C534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C534u;
        // 0x30c538: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C53Cu;
    // 0x30c53c: 0x0  nop
    ctx->pc = 0x30c53cu;
    // NOP
label_30c540:
    // 0x30c540: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C540u;
    {
        const bool branch_taken_0x30c540 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C540u;
        // 0x30c544: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c540) {
            ctx->pc = 0x30C558u;
            goto label_30c558;
        }
    }
    ctx->pc = 0x30C548u;
    // 0x30c548: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x30c548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x30c54c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C54Cu;
        // 0x30c550: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C554u;
    // 0x30c554: 0x0  nop
    ctx->pc = 0x30c554u;
    // NOP
label_30c558:
    // 0x30c558: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x30c558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x30c55c: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x30c55cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x30c560: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c564: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x30c564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x30c568: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x30c568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x30c56c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c56cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c570: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x30c570u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x30c574: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x30c574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x30c578: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x30c578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x30c57c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x30c57cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x30c580: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x30c580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x30c584: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30c584u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_30c588:
    // 0x30c588: 0x3e00008  jr          $ra
    ctx->pc = 0x30C588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C590u;
label_30c590:
    // 0x30c590: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x30c590u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x30c594: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c594u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30c59c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x30c59cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5a0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30c5a4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x30c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x30c5a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c5ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x30c5acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x30c5b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x30c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c5b4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x30c5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x30c5b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C5B8u;
    {
        const bool branch_taken_0x30c5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5B8u;
        // 0x30c5bc: 0xe7b40008  swc1        $f20, 0x8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5b8) {
            ctx->pc = 0x30C5D0u;
            goto label_30c5d0;
        }
    }
    ctx->pc = 0x30C5C0u;
    // 0x30c5c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x30c5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x30c5c4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x30C5C4u;
    {
        const bool branch_taken_0x30c5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5C4u;
        // 0x30c5c8: 0xc440b03c  lwc1        $f0, -0x4FC4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5c4) {
            ctx->pc = 0x30C664u;
            goto label_30c664;
        }
    }
    ctx->pc = 0x30C5CCu;
    // 0x30c5cc: 0x0  nop
    ctx->pc = 0x30c5ccu;
    // NOP
label_30c5d0:
    // 0x30c5d0: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C5D0u;
    {
        const bool branch_taken_0x30c5d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5D0u;
        // 0x30c5d4: 0x515c3  sra         $v0, $a1, 23 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5d0) {
            ctx->pc = 0x30C5F8u;
            goto label_30c5f8;
        }
    }
    ctx->pc = 0x30C5D8u;
    // 0x30c5d8: 0x460c6041  sub.s       $f1, $f12, $f12
    ctx->pc = 0x30c5d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
    // 0x30c5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30c5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c5e0: 0x0  nop
    ctx->pc = 0x30c5e0u;
    // NOP
    // 0x30c5e4: 0x0  nop
    ctx->pc = 0x30c5e4u;
    // NOP
    // 0x30c5e8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30c5e8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x30c5ec: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x30C5ECu;
    {
        const bool branch_taken_0x30c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C5ECu;
        // 0x30c5f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c5ec) {
            ctx->pc = 0x30C668u;
            goto label_30c668;
        }
    }
    ctx->pc = 0x30C5F4u;
    // 0x30c5f4: 0x0  nop
    ctx->pc = 0x30c5f4u;
    // NOP
label_30c5f8:
    // 0x30c5f8: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x30c5f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x30c5fc: 0x2442ff81  addiu       $v0, $v0, -0x7F
    ctx->pc = 0x30c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x30c600: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x30c600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x30c604: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x30c604u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30c608: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30c608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30c60c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x30c60cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30c610: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x30c610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30c614: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x30c614u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x30c618: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x30c618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x30c61c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x30c61cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x30c620: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x30c620u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30c624: 0xc0c30ac  jal         func_30C2B0
    ctx->pc = 0x30C624u;
    SET_GPR_U32(ctx, 31, 0x30C62Cu);
    ctx->pc = 0x30C2B0u;
    goto label_30c2b0;
    ctx->pc = 0x30C62Cu;
label_30c62c:
    // 0x30c62c: 0x3c013554  lui         $at, 0x3554
    ctx->pc = 0x30c62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13652 << 16));
    // 0x30c630: 0x342127db  ori         $at, $at, 0x27DB
    ctx->pc = 0x30c630u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)10203);
    // 0x30c634: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c634u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c638: 0x3c013ede  lui         $at, 0x3EDE
    ctx->pc = 0x30c638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16094 << 16));
    // 0x30c63c: 0x34215bd9  ori         $at, $at, 0x5BD9
    ctx->pc = 0x30c63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23513);
    // 0x30c640: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30c640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30c644: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x30c644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x30c648: 0x3c013e9a  lui         $at, 0x3E9A
    ctx->pc = 0x30c648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16026 << 16));
    // 0x30c64c: 0x3421207f  ori         $at, $at, 0x207F
    ctx->pc = 0x30c64cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8319);
    // 0x30c650: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c650u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c654: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30c654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30c658: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x30c658u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x30c65c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30c65cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30c660: 0x46140800  add.s       $f0, $f1, $f20
    ctx->pc = 0x30c660u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_30c664:
    // 0x30c664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c668:
    // 0x30c668: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x30c668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c66c: 0x3e00008  jr          $ra
    ctx->pc = 0x30C66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C66Cu;
        // 0x30c670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C66Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C674u;
    // 0x30c674: 0x0  nop
    ctx->pc = 0x30c674u;
    // NOP
label_30c678:
    // 0x30c678: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x30c678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x30c67c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x30c67cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30c680: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x30c680u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x30c684: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x30c684u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30c688: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x30c688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30c68c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x30c68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x30c690: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x30c690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x30c694: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x30c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x30c698: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x30c698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x30c69c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x30c69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x30c6a0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x30c6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x30c6a4: 0x4413a000  mfc1        $s3, $f20
    ctx->pc = 0x30c6a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x30c6a8: 0x4412a800  mfc1        $s2, $f21
    ctx->pc = 0x30c6a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x30c6ac: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30c6b0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x30c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x30c6b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c6b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30c6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30c6bc: 0x2428024  and         $s0, $s2, $v0
    ctx->pc = 0x30c6bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x30c6c0: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x30c6c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30c6c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30c6c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c6cc: 0x106001d8  beqz        $v1, . + 4 + (0x1D8 << 2)
    ctx->pc = 0x30C6CCu;
    {
        const bool branch_taken_0x30c6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6CCu;
        // 0x30c6d0: 0x2628824  and         $s1, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6cc) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C6D4u;
    // 0x30c6d4: 0x6610016  bgez        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x30C6D4u;
    {
        const bool branch_taken_0x30c6d4 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x30C6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6D4u;
        // 0x30c6d8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6d4) {
            ctx->pc = 0x30C730u;
            goto label_30c730;
        }
    }
    ctx->pc = 0x30C6DCu;
    // 0x30c6dc: 0x3c024b7f  lui         $v0, 0x4B7F
    ctx->pc = 0x30c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19327 << 16));
    // 0x30c6e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c6e4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30c6e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30c6e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C6E8u;
    {
        const bool branch_taken_0x30c6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6E8u;
        // 0x30c6ec: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6e8) {
            ctx->pc = 0x30C6F8u;
            goto label_30c6f8;
        }
    }
    ctx->pc = 0x30C6F0u;
    // 0x30c6f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30C6F0u;
    {
        const bool branch_taken_0x30c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C6F0u;
        // 0x30c6f4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c6f0) {
            ctx->pc = 0x30C730u;
            goto label_30c730;
        }
    }
    ctx->pc = 0x30C6F8u;
label_30c6f8:
    // 0x30c6f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30c6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30c6fc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30c6fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30c700: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30C700u;
    {
        const bool branch_taken_0x30c700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C700u;
        // 0x30c704: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c700) {
            ctx->pc = 0x30C734u;
            goto label_30c734;
        }
    }
    ctx->pc = 0x30C708u;
    // 0x30c708: 0x101dc3  sra         $v1, $s0, 23
    ctx->pc = 0x30c708u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 23));
    // 0x30c70c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x30c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x30c710: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30c710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30c714: 0x502007  srav        $a0, $s0, $v0
    ctx->pc = 0x30c714u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x30c718: 0x441004  sllv        $v0, $a0, $v0
    ctx->pc = 0x30c718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x30c71c: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C71Cu;
    {
        const bool branch_taken_0x30c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x30C720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C71Cu;
        // 0x30c720: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c71c) {
            ctx->pc = 0x30C734u;
            goto label_30c734;
        }
    }
    ctx->pc = 0x30C724u;
    // 0x30c724: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x30c724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x30c728: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30c728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30c72c: 0x43a023  subu        $s4, $v0, $v1
    ctx->pc = 0x30c72cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_30c730:
    // 0x30c730: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x30c730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_30c734:
    // 0x30c734: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30C734u;
    {
        const bool branch_taken_0x30c734 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c734) {
            ctx->pc = 0x30C738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C734u;
            // 0x30c738: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C760u;
            goto label_30c760;
        }
    }
    ctx->pc = 0x30C73Cu;
    // 0x30c73c: 0x64301bc  bgezl       $s2, . + 4 + (0x1BC << 2)
    ctx->pc = 0x30C73Cu;
    {
        const bool branch_taken_0x30c73c = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x30c73c) {
            ctx->pc = 0x30C740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C73Cu;
            // 0x30c740: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C744u;
    // 0x30c744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30c748: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c74c: 0x0  nop
    ctx->pc = 0x30c74cu;
    // NOP
    // 0x30c750: 0x0  nop
    ctx->pc = 0x30c750u;
    // NOP
    // 0x30c754: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x30c754u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x30c758: 0x100001b6  b           . + 4 + (0x1B6 << 2)
    ctx->pc = 0x30C758u;
    {
        const bool branch_taken_0x30c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C758u;
        // 0x30c75c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c758) {
            ctx->pc = 0x30CE34u;
            goto label_30ce34;
        }
    }
    ctx->pc = 0x30C760u;
label_30c760:
    // 0x30c760: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C760u;
    {
        const bool branch_taken_0x30c760 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x30C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C760u;
        // 0x30c764: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c760) {
            ctx->pc = 0x30C770u;
            goto label_30c770;
        }
    }
    ctx->pc = 0x30C768u;
    // 0x30c768: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x30C768u;
    {
        const bool branch_taken_0x30c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C768u;
        // 0x30c76c: 0x4614a002  mul.s       $f0, $f20, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c768) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C770u;
label_30c770:
    // 0x30c770: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C770u;
    {
        const bool branch_taken_0x30c770 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x30c770) {
            ctx->pc = 0x30C7A8u;
            goto label_30c7a8;
        }
    }
    ctx->pc = 0x30C778u;
    // 0x30c778: 0x660000b  bltz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x30C778u;
    {
        const bool branch_taken_0x30c778 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x30C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C778u;
        // 0x30c77c: 0xdfbf0048  ld          $ra, 0x48($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c778) {
            ctx->pc = 0x30C7A8u;
            goto label_30c7a8;
        }
    }
    ctx->pc = 0x30C780u;
    // 0x30c780: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30c780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30c784: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x30c784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c788: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30c788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30c78c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x30c78cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c790: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30c790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30c794: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30c794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30c798: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30c798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30c79c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x30c79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30c7a0: 0x80c3482  j           func_30D208
    ctx->pc = 0x30C7A0u;
    ctx->pc = 0x30C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7A0u;
    // 0x30c7a4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D208u;
    sub_0030D208_0x30d208(rdram, ctx, runtime); return;
    ctx->pc = 0x30C7A8u;
label_30c7a8:
    // 0x30c7a8: 0xc0c3926  jal         func_30E498
    ctx->pc = 0x30C7A8u;
    SET_GPR_U32(ctx, 31, 0x30C7B0u);
    ctx->pc = 0x30C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C7A8u;
    // 0x30c7ac: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E498u, 0x30C7A8u, 0x30C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C7B0u;
label_30c7b0:
    // 0x30c7b0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x30c7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x30c7b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30c7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30c7b8: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x30c7b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x30c7bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30C7BCu;
    {
        const bool branch_taken_0x30c7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7BCu;
        // 0x30c7c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7bc) {
            ctx->pc = 0x30C7D0u;
            goto label_30c7d0;
        }
    }
    ctx->pc = 0x30C7C4u;
    // 0x30c7c4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x30c7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x30c7c8: 0x16250019  bne         $s1, $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x30C7C8u;
    {
        const bool branch_taken_0x30c7c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x30C7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7C8u;
        // 0x30c7cc: 0x134fc2  srl         $t1, $s3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7c8) {
            ctx->pc = 0x30C830u;
            goto label_30c830;
        }
    }
    ctx->pc = 0x30C7D0u;
label_30c7d0:
    // 0x30c7d0: 0x6410006  bgez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x30C7D0u;
    {
        const bool branch_taken_0x30c7d0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x30C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7D0u;
        // 0x30c7d4: 0x46006106  mov.s       $f4, $f12 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7d0) {
            ctx->pc = 0x30C7ECu;
            goto label_30c7ec;
        }
    }
    ctx->pc = 0x30C7D8u;
    // 0x30c7d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30c7dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c7e0: 0x0  nop
    ctx->pc = 0x30c7e0u;
    // NOP
    // 0x30c7e4: 0x0  nop
    ctx->pc = 0x30c7e4u;
    // NOP
    // 0x30c7e8: 0x46040103  div.s       $f4, $f0, $f4
    ctx->pc = 0x30c7e8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
label_30c7ec:
    // 0x30c7ec: 0x6610190  bgez        $s3, . + 4 + (0x190 << 2)
    ctx->pc = 0x30C7ECu;
    {
        const bool branch_taken_0x30c7ec = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x30C7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7ECu;
        // 0x30c7f0: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7ec) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C7F4u;
    // 0x30c7f4: 0x3c02c080  lui         $v0, 0xC080
    ctx->pc = 0x30c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49280 << 16));
    // 0x30c7f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x30c7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x30c7fc: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x30c7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x30c800: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C800u;
    {
        const bool branch_taken_0x30c800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C800u;
        // 0x30c804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c800) {
            ctx->pc = 0x30C820u;
            goto label_30c820;
        }
    }
    ctx->pc = 0x30C808u;
    // 0x30c808: 0x46042001  sub.s       $f0, $f4, $f4
    ctx->pc = 0x30c808u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[4]);
    // 0x30c80c: 0x0  nop
    ctx->pc = 0x30c80cu;
    // NOP
    // 0x30c810: 0x0  nop
    ctx->pc = 0x30c810u;
    // NOP
    // 0x30c814: 0x46000103  div.s       $f4, $f0, $f0
    ctx->pc = 0x30c814u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x30c818: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x30C818u;
    {
        const bool branch_taken_0x30c818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C818u;
        // 0x30c81c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c818) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C820u;
label_30c820:
    // 0x30c820: 0x52820001  beql        $s4, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x30C820u;
    {
        const bool branch_taken_0x30c820 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x30c820) {
            ctx->pc = 0x30C824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C820u;
            // 0x30c824: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C828u;
            goto label_30c828;
        }
    }
    ctx->pc = 0x30C828u;
label_30c828:
    // 0x30c828: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x30C828u;
    {
        const bool branch_taken_0x30c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C828u;
        // 0x30c82c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c828) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C830u;
label_30c830:
    // 0x30c830: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x30c830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x30c834: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x30c834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x30c838: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30C838u;
    {
        const bool branch_taken_0x30c838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C838u;
        // 0x30c83c: 0x3c024d00  lui         $v0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c838) {
            ctx->pc = 0x30C858u;
            goto label_30c858;
        }
    }
    ctx->pc = 0x30C840u;
    // 0x30c840: 0x4614a001  sub.s       $f0, $f20, $f20
    ctx->pc = 0x30c840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[20]);
    // 0x30c844: 0x0  nop
    ctx->pc = 0x30c844u;
    // NOP
    // 0x30c848: 0x0  nop
    ctx->pc = 0x30c848u;
    // NOP
    // 0x30c84c: 0x46000003  div.s       $f0, $f0, $f0
    ctx->pc = 0x30c84cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[0]); }
    // 0x30c850: 0x10000178  b           . + 4 + (0x178 << 2)
    ctx->pc = 0x30C850u;
    {
        const bool branch_taken_0x30c850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C850u;
        // 0x30c854: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c850) {
            ctx->pc = 0x30CE34u;
            goto label_30ce34;
        }
    }
    ctx->pc = 0x30C858u;
label_30c858:
    // 0x30c858: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x30c858u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x30c85c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x30C85Cu;
    {
        const bool branch_taken_0x30c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C85Cu;
        // 0x30c860: 0x3c02001c  lui         $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c85c) {
            ctx->pc = 0x30C950u;
            goto label_30c950;
        }
    }
    ctx->pc = 0x30C864u;
    // 0x30c864: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x30c864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
    // 0x30c868: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x30c868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x30c86c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x30c86cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x30c870: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C870u;
    {
        const bool branch_taken_0x30c870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C870u;
        // 0x30c874: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c870) {
            ctx->pc = 0x30C888u;
            goto label_30c888;
        }
    }
    ctx->pc = 0x30C878u;
    // 0x30c878: 0x641000b  bgez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x30C878u;
    {
        const bool branch_taken_0x30c878 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x30C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C878u;
        // 0x30c87c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c878) {
            ctx->pc = 0x30C8A8u;
            goto label_30c8a8;
        }
    }
    ctx->pc = 0x30C880u;
    // 0x30c880: 0x1000016b  b           . + 4 + (0x16B << 2)
    ctx->pc = 0x30C880u;
    {
        const bool branch_taken_0x30c880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C880u;
        // 0x30c884: 0xc440b0c4  lwc1        $f0, -0x4F3C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c880) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C888u;
label_30c888:
    // 0x30c888: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x30c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x30c88c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x30c88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x30c890: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30C890u;
    {
        const bool branch_taken_0x30c890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C890u;
        // 0x30c894: 0x2402f000  addiu       $v0, $zero, -0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c890) {
            ctx->pc = 0x30C8B8u;
            goto label_30c8b8;
        }
    }
    ctx->pc = 0x30C898u;
    // 0x30c898: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C898u;
    {
        const bool branch_taken_0x30c898 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x30C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C898u;
        // 0x30c89c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c898) {
            ctx->pc = 0x30C8A8u;
            goto label_30c8a8;
        }
    }
    ctx->pc = 0x30C8A0u;
    // 0x30c8a0: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x30C8A0u;
    {
        const bool branch_taken_0x30c8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8A0u;
        // 0x30c8a4: 0xc440b0c4  lwc1        $f0, -0x4F3C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8a0) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30C8A8u;
label_30c8a8:
    // 0x30c8a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30c8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c8ac: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x30C8ACu;
    {
        const bool branch_taken_0x30c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8ACu;
        // 0x30c8b0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8ac) {
            ctx->pc = 0x30CE34u;
            goto label_30ce34;
        }
    }
    ctx->pc = 0x30C8B4u;
    // 0x30c8b4: 0x0  nop
    ctx->pc = 0x30c8b4u;
    // NOP
label_30c8b8:
    // 0x30c8b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30c8bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c8c0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x30c8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x30c8c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c8c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c8c8: 0x4601a301  sub.s       $f12, $f20, $f1
    ctx->pc = 0x30c8c8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x30c8cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30c8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x30c8d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30c8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c8d4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x30c8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x30c8d8: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30c8d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x30c8dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30c8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c8e0: 0x3c0136ec  lui         $at, 0x36EC
    ctx->pc = 0x30c8e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14060 << 16));
    // 0x30c8e4: 0x3421a56f  ori         $at, $at, 0xA56F
    ctx->pc = 0x30c8e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42351);
    // 0x30c8e8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30c8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30c8ec: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x30c8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x30c8f0: 0x3421aa3a  ori         $at, $at, 0xAA3A
    ctx->pc = 0x30c8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43578);
    // 0x30c8f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30c8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30c8f8: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x30c8f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x30c8fc: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x30c8fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x30c900: 0x3421aa00  ori         $at, $at, 0xAA00
    ctx->pc = 0x30c900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43520);
    // 0x30c904: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30c904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30c908: 0x460c6182  mul.s       $f6, $f12, $f12
    ctx->pc = 0x30c908u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x30c90c: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x30c90cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x30c910: 0x46056402  mul.s       $f16, $f12, $f5
    ctx->pc = 0x30c910u;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x30c914: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30c914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30c918: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30c918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30c91c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30c91cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x30c920: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x30c920u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x30c924: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x30c924u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30c928: 0x46032341  sub.s       $f13, $f4, $f3
    ctx->pc = 0x30c928u;
    ctx->f[13] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x30c92c: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x30c92cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x30c930: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30c930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30c934: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x30c934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c938: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30c93c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x30c93cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30c940: 0x46103001  sub.s       $f0, $f6, $f16
    ctx->pc = 0x30c940u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[16]);
    // 0x30c944: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x30C944u;
    {
        const bool branch_taken_0x30c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C944u;
        // 0x30c948: 0x46006881  sub.s       $f2, $f13, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c944) {
            ctx->pc = 0x30CB84u;
            goto label_30cb84;
        }
    }
    ctx->pc = 0x30C94Cu;
    // 0x30c94c: 0x0  nop
    ctx->pc = 0x30c94cu;
    // NOP
label_30c950:
    // 0x30c950: 0x2232024  and         $a0, $s1, $v1
    ctx->pc = 0x30c950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x30c954: 0x3442c471  ori         $v0, $v0, 0xC471
    ctx->pc = 0x30c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50289);
    // 0x30c958: 0x111dc3  sra         $v1, $s1, 23
    ctx->pc = 0x30c958u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 23));
    // 0x30c95c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x30c95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30c960: 0x2468ff81  addiu       $t0, $v1, -0x7F
    ctx->pc = 0x30c960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967169));
    // 0x30c964: 0x858825  or          $s1, $a0, $a1
    ctx->pc = 0x30c964u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30c968: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30C968u;
    {
        const bool branch_taken_0x30c968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C968u;
        // 0x30c96c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c968) {
            ctx->pc = 0x30C994u;
            goto label_30c994;
        }
    }
    ctx->pc = 0x30C970u;
    // 0x30c970: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x30c970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x30c974: 0x3442b3d6  ori         $v0, $v0, 0xB3D6
    ctx->pc = 0x30c974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46038);
    // 0x30c978: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x30c978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30c97c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C97Cu;
    {
        const bool branch_taken_0x30c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C97Cu;
        // 0x30c980: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c97c) {
            ctx->pc = 0x30C994u;
            goto label_30c994;
        }
    }
    ctx->pc = 0x30C984u;
    // 0x30c984: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x30c984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x30c988: 0x2468ff82  addiu       $t0, $v1, -0x7E
    ctx->pc = 0x30c988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
    // 0x30c98c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x30c98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x30c990: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30c990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c994:
    // 0x30c994: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x30c994u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30c998: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x30c998u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x30c99c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30c99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30c9a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30c9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c9a4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30c9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x30c9a8: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x30c9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x30c9ac: 0xc421b040  lwc1        $f1, -0x4FC0($at)
    ctx->pc = 0x30c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c9b0: 0x46016000  add.s       $f0, $f12, $f1
    ctx->pc = 0x30c9b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x30c9b4: 0x46016401  sub.s       $f16, $f12, $f1
    ctx->pc = 0x30c9b4u;
    ctx->f[16] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x30c9b8: 0x0  nop
    ctx->pc = 0x30c9b8u;
    // NOP
    // 0x30c9bc: 0x0  nop
    ctx->pc = 0x30c9bcu;
    // NOP
    // 0x30c9c0: 0x46001343  div.s       $f13, $f2, $f0
    ctx->pc = 0x30c9c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x30c9c4: 0x460d8502  mul.s       $f20, $f16, $f13
    ctx->pc = 0x30c9c4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[16], ctx->f[13]);
    // 0x30c9c8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x30c9c8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x30c9cc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x30c9ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30c9d0: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x30c9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30c9d4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30c9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30c9d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x30c9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x30c9dc: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x30c9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30c9e0: 0x111043  sra         $v0, $s1, 1
    ctx->pc = 0x30c9e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
    // 0x30c9e4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x30c9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x30c9e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30c9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30c9ec: 0x72540  sll         $a0, $a3, 21
    ctx->pc = 0x30c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x30c9f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30c9f4: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x30c9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x30c9f8: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x30c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x30c9fc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x30c9fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30ca00: 0x46017841  sub.s       $f1, $f15, $f1
    ctx->pc = 0x30ca00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
    // 0x30ca04: 0x3c013e53  lui         $at, 0x3E53
    ctx->pc = 0x30ca04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15955 << 16));
    // 0x30ca08: 0x3421f142  ori         $at, $at, 0xF142
    ctx->pc = 0x30ca08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61762);
    // 0x30ca0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30ca0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ca10: 0x3c013e6c  lui         $at, 0x3E6C
    ctx->pc = 0x30ca10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15980 << 16));
    // 0x30ca14: 0x34213254  ori         $at, $at, 0x3254
    ctx->pc = 0x30ca14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12884);
    // 0x30ca18: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30ca18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30ca1c: 0x3c013e8b  lui         $at, 0x3E8B
    ctx->pc = 0x30ca1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16011 << 16));
    // 0x30ca20: 0x3421a304  ori         $at, $at, 0xA304
    ctx->pc = 0x30ca20u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)41732);
    // 0x30ca24: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30ca24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x30ca28: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x30ca28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x30ca2c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x30ca2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x30ca30: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x30ca30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30ca34: 0x4614a382  mul.s       $f14, $f20, $f20
    ctx->pc = 0x30ca34u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x30ca38: 0x3c013edb  lui         $at, 0x3EDB
    ctx->pc = 0x30ca38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16091 << 16));
    // 0x30ca3c: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x30ca3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
    // 0x30ca40: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x30ca40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x30ca44: 0x46016081  sub.s       $f2, $f12, $f1
    ctx->pc = 0x30ca44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x30ca48: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x30ca48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x30ca4c: 0x34219999  ori         $at, $at, 0x9999
    ctx->pc = 0x30ca4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39321);
    // 0x30ca50: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x30ca50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x30ca54: 0x460f2842  mul.s       $f1, $f5, $f15
    ctx->pc = 0x30ca54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x30ca58: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x30ca58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x30ca5c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30ca5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30ca60: 0x46142900  add.s       $f4, $f5, $f20
    ctx->pc = 0x30ca60u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x30ca64: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x30ca64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x30ca68: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x30ca68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x30ca6c: 0x46018041  sub.s       $f1, $f16, $f1
    ctx->pc = 0x30ca6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[16], ctx->f[1]);
    // 0x30ca70: 0x460e71c2  mul.s       $f7, $f14, $f14
    ctx->pc = 0x30ca70u;
    ctx->f[7] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x30ca74: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30ca74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x30ca78: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x30ca78u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x30ca7c: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x30ca7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x30ca80: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x30ca80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x30ca84: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x30ca84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x30ca88: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x30ca88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30ca8c: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x30ca8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x30ca90: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x30ca90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x30ca94: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x30ca94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x30ca98: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x30ca98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x30ca9c: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x30ca9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x30caa0: 0x46052b82  mul.s       $f14, $f5, $f5
    ctx->pc = 0x30caa0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x30caa4: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x30caa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
    // 0x30caa8: 0x46037080  add.s       $f2, $f14, $f3
    ctx->pc = 0x30caa8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[3]);
    // 0x30caac: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x30caacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x30cab0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x30cab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x30cab4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x30cab4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x30cab8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x30cab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30cabc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x30cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cac0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30cac4: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x30cac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30cac8: 0x460378c1  sub.s       $f3, $f15, $f3
    ctx->pc = 0x30cac8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[15], ctx->f[3]);
    // 0x30cacc: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x30caccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x30cad0: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x30cad0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x30cad4: 0x460f2c02  mul.s       $f16, $f5, $f15
    ctx->pc = 0x30cad4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[5], ctx->f[15]);
    // 0x30cad8: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x30cad8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x30cadc: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x30cadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x30cae0: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x30cae0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30cae4: 0x460d8000  add.s       $f0, $f16, $f13
    ctx->pc = 0x30cae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x30cae8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x30cae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30caec: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x30caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30caf0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x30caf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x30caf4: 0x44824000  mtc1        $v0, $f8
    ctx->pc = 0x30caf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x30caf8: 0x461040c1  sub.s       $f3, $f8, $f16
    ctx->pc = 0x30caf8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[16]);
    // 0x30cafc: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x30cafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x30cb00: 0x34213800  ori         $at, $at, 0x3800
    ctx->pc = 0x30cb00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14336);
    // 0x30cb04: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30cb04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cb08: 0x3c01369d  lui         $at, 0x369D
    ctx->pc = 0x30cb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13981 << 16));
    // 0x30cb0c: 0x3421c39f  ori         $at, $at, 0xC39F
    ctx->pc = 0x30cb0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50079);
    // 0x30cb10: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30cb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30cb14: 0x3c013f76  lui         $at, 0x3F76
    ctx->pc = 0x30cb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16246 << 16));
    // 0x30cb18: 0x3421384e  ori         $at, $at, 0x384E
    ctx->pc = 0x30cb18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14414);
    // 0x30cb1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30cb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cb20: 0x460369c1  sub.s       $f7, $f13, $f3
    ctx->pc = 0x30cb20u;
    ctx->f[7] = FPU_SUB_S(ctx->f[13], ctx->f[3]);
    // 0x30cb24: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30cb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x30cb28: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x30cb28u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x30cb2c: 0xc423b048  lwc1        $f3, -0x4FB8($at)
    ctx->pc = 0x30cb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30cb30: 0x46014042  mul.s       $f1, $f8, $f1
    ctx->pc = 0x30cb30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x30cb34: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x30cb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x30cb38: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x30cb38u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x30cb3c: 0xc424b050  lwc1        $f4, -0x4FB0($at)
    ctx->pc = 0x30cb3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294946896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30cb40: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x30cb40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x30cb44: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x30cb44u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30cb48: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x30cb48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x30cb4c: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x30cb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x30cb50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x30cb50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30cb54: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x30cb54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x30cb58: 0x46011000  add.s       $f0, $f2, $f1
    ctx->pc = 0x30cb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x30cb5c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x30cb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x30cb60: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x30cb60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x30cb64: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30cb68: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x30cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cb6c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x30cb6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x30cb70: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x30cb70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30cb74: 0x460c3001  sub.s       $f0, $f6, $f12
    ctx->pc = 0x30cb74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[12]);
    // 0x30cb78: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x30cb78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x30cb7c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30cb7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30cb80: 0x46000881  sub.s       $f2, $f1, $f0
    ctx->pc = 0x30cb80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_30cb84:
    // 0x30cb84: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x30cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x30cb88: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x30cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x30cb8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30cb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30cb90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30cb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30cb94: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30cb94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30cb98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30CB98u;
    {
        const bool branch_taken_0x30cb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB98u;
        // 0x30cb9c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb98) {
            ctx->pc = 0x30CBA8u;
            goto label_30cba8;
        }
    }
    ctx->pc = 0x30CBA0u;
    // 0x30cba0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30cba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30cba4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30cba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_30cba8:
    // 0x30cba8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x30cba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30cbac: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x30cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30cbb0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x30cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x30cbb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30cbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30cbb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x30cbb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30cbbc: 0x4601a801  sub.s       $f0, $f21, $f1
    ctx->pc = 0x30cbbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x30cbc0: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x30cbc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x30cbc4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x30cbc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x30cbc8: 0x46060a02  mul.s       $f8, $f1, $f6
    ctx->pc = 0x30cbc8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x30cbcc: 0x460201c0  add.s       $f7, $f0, $f2
    ctx->pc = 0x30cbccu;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x30cbd0: 0x46083900  add.s       $f4, $f7, $f8
    ctx->pc = 0x30cbd0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x30cbd4: 0x44072000  mfc1        $a3, $f4
    ctx->pc = 0x30cbd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x30cbd8: 0x44052000  mfc1        $a1, $f4
    ctx->pc = 0x30cbd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x30cbdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x30cbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cbe0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x30cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x30cbe4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x30cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x30cbe8: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x30CBE8u;
    {
        const bool branch_taken_0x30cbe8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x30CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CBE8u;
        // 0x30cbec: 0x823024  and         $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cbe8) {
            ctx->pc = 0x30CC58u;
            goto label_30cc58;
        }
    }
    ctx->pc = 0x30CBF0u;
    // 0x30cbf0: 0x3c044301  lui         $a0, 0x4301
    ctx->pc = 0x30cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17153 << 16));
    // 0x30cbf4: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30cbf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30cbf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CBF8u;
    {
        const bool branch_taken_0x30cbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30cbf8) {
            ctx->pc = 0x30CC18u;
            goto label_30cc18;
        }
    }
    ctx->pc = 0x30CC00u;
    // 0x30cc00: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30cc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x30cc04: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30cc04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x30cc08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30cc08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30cc0c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x30CC0Cu;
    {
        const bool branch_taken_0x30cc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC0Cu;
        // 0x30cc10: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc0c) {
            ctx->pc = 0x30CC90u;
            goto label_30cc90;
        }
    }
    ctx->pc = 0x30CC14u;
    // 0x30cc14: 0x0  nop
    ctx->pc = 0x30cc14u;
    // NOP
label_30cc18:
    // 0x30cc18: 0x14c4001f  bne         $a2, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x30CC18u;
    {
        const bool branch_taken_0x30cc18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x30CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC18u;
        // 0x30cc1c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc18) {
            ctx->pc = 0x30CC98u;
            goto label_30cc98;
        }
    }
    ctx->pc = 0x30CC20u;
    // 0x30cc20: 0x3c013338  lui         $at, 0x3338
    ctx->pc = 0x30cc20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13112 << 16));
    // 0x30cc24: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x30cc24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x30cc28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30cc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cc2c: 0x46082041  sub.s       $f1, $f4, $f8
    ctx->pc = 0x30cc2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x30cc30: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x30cc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x30cc34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30cc34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cc38: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x30CC38u;
    {
        const bool branch_taken_0x30cc38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC38u;
        // 0x30cc3c: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc38) {
            ctx->pc = 0x30CC9Cu;
            goto label_30cc9c;
        }
    }
    ctx->pc = 0x30CC40u;
    // 0x30cc40: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x30cc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x30cc44: 0x3421f2c9  ori         $at, $at, 0xF2C9
    ctx->pc = 0x30cc44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62153);
    // 0x30cc48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30cc48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30cc4c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30CC4Cu;
    {
        const bool branch_taken_0x30cc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC4Cu;
        // 0x30cc50: 0x4601a002  mul.s       $f0, $f20, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc4c) {
            ctx->pc = 0x30CC90u;
            goto label_30cc90;
        }
    }
    ctx->pc = 0x30CC54u;
    // 0x30cc54: 0x0  nop
    ctx->pc = 0x30cc54u;
    // NOP
label_30cc58:
    // 0x30cc58: 0x3c0442fc  lui         $a0, 0x42FC
    ctx->pc = 0x30cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17148 << 16));
    // 0x30cc5c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30cc5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30cc60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CC60u;
    {
        const bool branch_taken_0x30cc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30cc60) {
            ctx->pc = 0x30CC80u;
            goto label_30cc80;
        }
    }
    ctx->pc = 0x30CC68u;
    // 0x30cc68: 0x14c4000b  bne         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x30CC68u;
    {
        const bool branch_taken_0x30cc68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x30CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC68u;
        // 0x30cc6c: 0x3c023f00  lui         $v0, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc68) {
            ctx->pc = 0x30CC98u;
            goto label_30cc98;
        }
    }
    ctx->pc = 0x30CC70u;
    // 0x30cc70: 0x46082001  sub.s       $f0, $f4, $f8
    ctx->pc = 0x30cc70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x30cc74: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x30cc74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30cc78: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x30CC78u;
    {
        const bool branch_taken_0x30cc78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC78u;
        // 0x30cc7c: 0x61dc3  sra         $v1, $a2, 23 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc78) {
            ctx->pc = 0x30CC9Cu;
            goto label_30cc9c;
        }
    }
    ctx->pc = 0x30CC80u;
label_30cc80:
    // 0x30cc80: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x30cc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x30cc84: 0x3421425f  ori         $at, $at, 0x425F
    ctx->pc = 0x30cc84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16991);
    // 0x30cc88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30cc88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30cc8c: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x30cc8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_30cc90:
    // 0x30cc90: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x30CC90u;
    {
        const bool branch_taken_0x30cc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC90u;
        // 0x30cc94: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc90) {
            ctx->pc = 0x30CE30u;
            goto label_30ce30;
        }
    }
    ctx->pc = 0x30CC98u;
label_30cc98:
    // 0x30cc98: 0x61dc3  sra         $v1, $a2, 23
    ctx->pc = 0x30cc98u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
label_30cc9c:
    // 0x30cc9c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x30cc9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30cca0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30CCA0u;
    {
        const bool branch_taken_0x30cca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCA0u;
        // 0x30cca4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cca0) {
            ctx->pc = 0x30CD08u;
            goto label_30cd08;
        }
    }
    ctx->pc = 0x30CCA8u;
    // 0x30cca8: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x30cca8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x30ccac: 0x2463ff82  addiu       $v1, $v1, -0x7E
    ctx->pc = 0x30ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967170));
    // 0x30ccb0: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x30ccb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x30ccb4: 0xa34021  addu        $t0, $a1, $v1
    ctx->pc = 0x30ccb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30ccb8: 0x815c2  srl         $v0, $t0, 23
    ctx->pc = 0x30ccb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 23));
    // 0x30ccbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30ccbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30ccc0: 0x2447ff81  addiu       $a3, $v0, -0x7F
    ctx->pc = 0x30ccc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x30ccc4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x30ccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x30ccc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x30ccc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x30cccc: 0xe31007  srav        $v0, $v1, $a3
    ctx->pc = 0x30ccccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x30ccd0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x30ccd0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30ccd4: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x30ccd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x30ccd8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x30ccd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30ccdc: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x30ccdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x30cce0: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x30cce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x30cce4: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x30cce4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x30cce8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30cce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30ccec: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x30ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30ccf0: 0x28a50000  slti        $a1, $a1, 0x0
    ctx->pc = 0x30ccf0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ccf4: 0x434007  srav        $t0, $v1, $v0
    ctx->pc = 0x30ccf4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x30ccf8: 0x82023  negu        $a0, $t0
    ctx->pc = 0x30ccf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x30ccfc: 0x46083800  add.s       $f0, $f7, $f8
    ctx->pc = 0x30ccfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
    // 0x30cd00: 0x85400b  movn        $t0, $a0, $a1
    ctx->pc = 0x30cd00u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x30cd04: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x30cd04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_30cd08:
    // 0x30cd08: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x30cd08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30cd0c: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x30cd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x30cd10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x30cd10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x30cd14: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x30cd14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30cd18: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x30cd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x30cd1c: 0x34217200  ori         $at, $at, 0x7200
    ctx->pc = 0x30cd1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29184);
    // 0x30cd20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30cd20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30cd24: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x30cd24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x30cd28: 0x34217217  ori         $at, $at, 0x7217
    ctx->pc = 0x30cd28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29207);
    // 0x30cd2c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x30cd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30cd30: 0x46086041  sub.s       $f1, $f12, $f8
    ctx->pc = 0x30cd30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x30cd34: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x30cd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x30cd38: 0x3421aaaa  ori         $at, $at, 0xAAAA
    ctx->pc = 0x30cd38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43690);
    // 0x30cd3c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x30cd3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x30cd40: 0x3c0135bf  lui         $at, 0x35BF
    ctx->pc = 0x30cd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13759 << 16));
    // 0x30cd44: 0x3421be8c  ori         $at, $at, 0xBE8C
    ctx->pc = 0x30cd44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)48780);
    // 0x30cd48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30cd48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30cd4c: 0x46036402  mul.s       $f16, $f12, $f3
    ctx->pc = 0x30cd4cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x30cd50: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x30cd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x30cd54: 0x3421bb4b  ori         $at, $at, 0xBB4B
    ctx->pc = 0x30cd54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47947);
    // 0x30cd58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30cd58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30cd5c: 0x46026082  mul.s       $f2, $f12, $f2
    ctx->pc = 0x30cd5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x30cd60: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x30cd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x30cd64: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x30cd64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x30cd68: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x30cd68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x30cd6c: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x30cd6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x30cd70: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x30cd70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x30cd74: 0x34210b60  ori         $at, $at, 0xB60
    ctx->pc = 0x30cd74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2912);
    // 0x30cd78: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x30cd78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x30cd7c: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x30cd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x30cd80: 0x3421b354  ori         $at, $at, 0xB354
    ctx->pc = 0x30cd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45908);
    // 0x30cd84: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x30cd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x30cd88: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30cd88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x30cd8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30cd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30cd90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30cd90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30cd94: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x30cd94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x30cd98: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x30cd98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30cd9c: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x30cd9cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30cda0: 0x460d8100  add.s       $f4, $f16, $f13
    ctx->pc = 0x30cda0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[16], ctx->f[13]);
    // 0x30cda4: 0x46042302  mul.s       $f12, $f4, $f4
    ctx->pc = 0x30cda4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x30cda8: 0x46102041  sub.s       $f1, $f4, $f16
    ctx->pc = 0x30cda8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[16]);
    // 0x30cdac: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30cdacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30cdb0: 0x46016841  sub.s       $f1, $f13, $f1
    ctx->pc = 0x30cdb0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x30cdb4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x30cdb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x30cdb8: 0x46012082  mul.s       $f2, $f4, $f1
    ctx->pc = 0x30cdb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x30cdbc: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30cdbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30cdc0: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x30cdc0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x30cdc4: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x30cdc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x30cdc8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30cdc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30cdcc: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x30cdccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x30cdd0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30cdd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30cdd4: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x30cdd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x30cdd8: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30cdd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x30cddc: 0x46002181  sub.s       $f6, $f4, $f0
    ctx->pc = 0x30cddcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30cde0: 0x46062002  mul.s       $f0, $f4, $f6
    ctx->pc = 0x30cde0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x30cde4: 0x460330c1  sub.s       $f3, $f6, $f3
    ctx->pc = 0x30cde4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
    // 0x30cde8: 0x0  nop
    ctx->pc = 0x30cde8u;
    // NOP
    // 0x30cdec: 0x0  nop
    ctx->pc = 0x30cdecu;
    // NOP
    // 0x30cdf0: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x30cdf0u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x30cdf4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x30cdf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x30cdf8: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x30cdf8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x30cdfc: 0x46014901  sub.s       $f4, $f9, $f1
    ctx->pc = 0x30cdfcu;
    ctx->f[4] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
    // 0x30ce00: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x30ce00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30ce04: 0x815c0  sll         $v0, $t0, 23
    ctx->pc = 0x30ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 23));
    // 0x30ce08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30ce08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30ce0c: 0x41dc3  sra         $v1, $a0, 23
    ctx->pc = 0x30ce0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 23));
    // 0x30ce10: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CE10u;
    {
        const bool branch_taken_0x30ce10 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x30CE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE10u;
        // 0x30ce14: 0x46002306  mov.s       $f12, $f4 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce10) {
            ctx->pc = 0x30CE28u;
            goto label_30ce28;
        }
    }
    ctx->pc = 0x30CE18u;
    // 0x30ce18: 0xc0bc268  jal         func_2F09A0
    ctx->pc = 0x30CE18u;
    SET_GPR_U32(ctx, 31, 0x30CE20u);
    ctx->pc = 0x30CE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CE18u;
    // 0x30ce1c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F09A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F09A0u, 0x30CE18u, 0x30CE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CE20u;
label_30ce20:
    // 0x30ce20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30CE20u;
    {
        const bool branch_taken_0x30ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE20u;
        // 0x30ce24: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ce20) {
            ctx->pc = 0x30CE2Cu;
            goto label_30ce2c;
        }
    }
    ctx->pc = 0x30CE28u;
label_30ce28:
    // 0x30ce28: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x30ce28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_30ce2c:
    // 0x30ce2c: 0x4604a002  mul.s       $f0, $f20, $f4
    ctx->pc = 0x30ce2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_30ce30:
    // 0x30ce30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x30ce30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_30ce34:
    // 0x30ce34: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x30ce34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30ce38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x30ce38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ce3c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x30ce3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30ce40: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x30ce40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ce44: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x30ce44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x30ce48: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x30ce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x30ce4c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x30ce4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30ce50: 0x3e00008  jr          $ra
    ctx->pc = 0x30CE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CE50u;
        // 0x30ce54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CE58u;
}
