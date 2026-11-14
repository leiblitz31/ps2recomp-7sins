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

// Function: sub_0037E068
// Address: 0x37e068 - 0x37e328
void sub_0037E068_0x37e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037E068_0x37e068");
#endif

    switch (ctx->pc) {
        case 0x37e068u: goto label_37e068;
        case 0x37e06cu: goto label_37e06c;
        case 0x37e070u: goto label_37e070;
        case 0x37e074u: goto label_37e074;
        case 0x37e078u: goto label_37e078;
        case 0x37e07cu: goto label_37e07c;
        case 0x37e080u: goto label_37e080;
        case 0x37e084u: goto label_37e084;
        case 0x37e088u: goto label_37e088;
        case 0x37e08cu: goto label_37e08c;
        case 0x37e090u: goto label_37e090;
        case 0x37e094u: goto label_37e094;
        case 0x37e098u: goto label_37e098;
        case 0x37e09cu: goto label_37e09c;
        case 0x37e0a0u: goto label_37e0a0;
        case 0x37e0a4u: goto label_37e0a4;
        case 0x37e0a8u: goto label_37e0a8;
        case 0x37e0acu: goto label_37e0ac;
        case 0x37e0b0u: goto label_37e0b0;
        case 0x37e0b4u: goto label_37e0b4;
        case 0x37e0b8u: goto label_37e0b8;
        case 0x37e0bcu: goto label_37e0bc;
        case 0x37e0c0u: goto label_37e0c0;
        case 0x37e0c4u: goto label_37e0c4;
        case 0x37e0c8u: goto label_37e0c8;
        case 0x37e0ccu: goto label_37e0cc;
        case 0x37e0d0u: goto label_37e0d0;
        case 0x37e0d4u: goto label_37e0d4;
        case 0x37e0d8u: goto label_37e0d8;
        case 0x37e0dcu: goto label_37e0dc;
        case 0x37e0e0u: goto label_37e0e0;
        case 0x37e0e4u: goto label_37e0e4;
        case 0x37e0e8u: goto label_37e0e8;
        case 0x37e0ecu: goto label_37e0ec;
        case 0x37e0f0u: goto label_37e0f0;
        case 0x37e0f4u: goto label_37e0f4;
        case 0x37e0f8u: goto label_37e0f8;
        case 0x37e0fcu: goto label_37e0fc;
        case 0x37e100u: goto label_37e100;
        case 0x37e104u: goto label_37e104;
        case 0x37e108u: goto label_37e108;
        case 0x37e10cu: goto label_37e10c;
        case 0x37e110u: goto label_37e110;
        case 0x37e114u: goto label_37e114;
        case 0x37e118u: goto label_37e118;
        case 0x37e11cu: goto label_37e11c;
        case 0x37e120u: goto label_37e120;
        case 0x37e124u: goto label_37e124;
        case 0x37e128u: goto label_37e128;
        case 0x37e12cu: goto label_37e12c;
        case 0x37e130u: goto label_37e130;
        case 0x37e134u: goto label_37e134;
        case 0x37e138u: goto label_37e138;
        case 0x37e13cu: goto label_37e13c;
        case 0x37e140u: goto label_37e140;
        case 0x37e144u: goto label_37e144;
        case 0x37e148u: goto label_37e148;
        case 0x37e14cu: goto label_37e14c;
        case 0x37e150u: goto label_37e150;
        case 0x37e154u: goto label_37e154;
        case 0x37e158u: goto label_37e158;
        case 0x37e15cu: goto label_37e15c;
        case 0x37e160u: goto label_37e160;
        case 0x37e164u: goto label_37e164;
        case 0x37e168u: goto label_37e168;
        case 0x37e16cu: goto label_37e16c;
        case 0x37e170u: goto label_37e170;
        case 0x37e174u: goto label_37e174;
        case 0x37e178u: goto label_37e178;
        case 0x37e17cu: goto label_37e17c;
        case 0x37e180u: goto label_37e180;
        case 0x37e184u: goto label_37e184;
        case 0x37e188u: goto label_37e188;
        case 0x37e18cu: goto label_37e18c;
        case 0x37e190u: goto label_37e190;
        case 0x37e194u: goto label_37e194;
        case 0x37e198u: goto label_37e198;
        case 0x37e19cu: goto label_37e19c;
        case 0x37e1a0u: goto label_37e1a0;
        case 0x37e1a4u: goto label_37e1a4;
        case 0x37e1a8u: goto label_37e1a8;
        case 0x37e1acu: goto label_37e1ac;
        case 0x37e1b0u: goto label_37e1b0;
        case 0x37e1b4u: goto label_37e1b4;
        case 0x37e1b8u: goto label_37e1b8;
        case 0x37e1bcu: goto label_37e1bc;
        case 0x37e1c0u: goto label_37e1c0;
        case 0x37e1c4u: goto label_37e1c4;
        case 0x37e1c8u: goto label_37e1c8;
        case 0x37e1ccu: goto label_37e1cc;
        case 0x37e1d0u: goto label_37e1d0;
        case 0x37e1d4u: goto label_37e1d4;
        case 0x37e1d8u: goto label_37e1d8;
        case 0x37e1dcu: goto label_37e1dc;
        case 0x37e1e0u: goto label_37e1e0;
        case 0x37e1e4u: goto label_37e1e4;
        case 0x37e1e8u: goto label_37e1e8;
        case 0x37e1ecu: goto label_37e1ec;
        case 0x37e1f0u: goto label_37e1f0;
        case 0x37e1f4u: goto label_37e1f4;
        case 0x37e1f8u: goto label_37e1f8;
        case 0x37e1fcu: goto label_37e1fc;
        case 0x37e200u: goto label_37e200;
        case 0x37e204u: goto label_37e204;
        case 0x37e208u: goto label_37e208;
        case 0x37e20cu: goto label_37e20c;
        case 0x37e210u: goto label_37e210;
        case 0x37e214u: goto label_37e214;
        case 0x37e218u: goto label_37e218;
        case 0x37e21cu: goto label_37e21c;
        case 0x37e220u: goto label_37e220;
        case 0x37e224u: goto label_37e224;
        case 0x37e228u: goto label_37e228;
        case 0x37e22cu: goto label_37e22c;
        case 0x37e230u: goto label_37e230;
        case 0x37e234u: goto label_37e234;
        case 0x37e238u: goto label_37e238;
        case 0x37e23cu: goto label_37e23c;
        case 0x37e240u: goto label_37e240;
        case 0x37e244u: goto label_37e244;
        case 0x37e248u: goto label_37e248;
        case 0x37e24cu: goto label_37e24c;
        case 0x37e250u: goto label_37e250;
        case 0x37e254u: goto label_37e254;
        case 0x37e258u: goto label_37e258;
        case 0x37e25cu: goto label_37e25c;
        case 0x37e260u: goto label_37e260;
        case 0x37e264u: goto label_37e264;
        case 0x37e268u: goto label_37e268;
        case 0x37e26cu: goto label_37e26c;
        case 0x37e270u: goto label_37e270;
        case 0x37e274u: goto label_37e274;
        case 0x37e278u: goto label_37e278;
        case 0x37e27cu: goto label_37e27c;
        case 0x37e280u: goto label_37e280;
        case 0x37e284u: goto label_37e284;
        case 0x37e288u: goto label_37e288;
        case 0x37e28cu: goto label_37e28c;
        case 0x37e290u: goto label_37e290;
        case 0x37e294u: goto label_37e294;
        case 0x37e298u: goto label_37e298;
        case 0x37e29cu: goto label_37e29c;
        case 0x37e2a0u: goto label_37e2a0;
        case 0x37e2a4u: goto label_37e2a4;
        case 0x37e2a8u: goto label_37e2a8;
        case 0x37e2acu: goto label_37e2ac;
        case 0x37e2b0u: goto label_37e2b0;
        case 0x37e2b4u: goto label_37e2b4;
        case 0x37e2b8u: goto label_37e2b8;
        case 0x37e2bcu: goto label_37e2bc;
        case 0x37e2c0u: goto label_37e2c0;
        case 0x37e2c4u: goto label_37e2c4;
        case 0x37e2c8u: goto label_37e2c8;
        case 0x37e2ccu: goto label_37e2cc;
        case 0x37e2d0u: goto label_37e2d0;
        case 0x37e2d4u: goto label_37e2d4;
        case 0x37e2d8u: goto label_37e2d8;
        case 0x37e2dcu: goto label_37e2dc;
        case 0x37e2e0u: goto label_37e2e0;
        case 0x37e2e4u: goto label_37e2e4;
        case 0x37e2e8u: goto label_37e2e8;
        case 0x37e2ecu: goto label_37e2ec;
        case 0x37e2f0u: goto label_37e2f0;
        case 0x37e2f4u: goto label_37e2f4;
        case 0x37e2f8u: goto label_37e2f8;
        case 0x37e2fcu: goto label_37e2fc;
        case 0x37e300u: goto label_37e300;
        case 0x37e304u: goto label_37e304;
        case 0x37e308u: goto label_37e308;
        case 0x37e30cu: goto label_37e30c;
        case 0x37e310u: goto label_37e310;
        case 0x37e314u: goto label_37e314;
        case 0x37e318u: goto label_37e318;
        case 0x37e31cu: goto label_37e31c;
        case 0x37e320u: goto label_37e320;
        case 0x37e324u: goto label_37e324;
        default: break;
    }

    ctx->pc = 0x37e068u;

label_37e068:
    // 0x37e068: 0x24ca010c  addiu       $t2, $a2, 0x10C
    ctx->pc = 0x37e068u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 268));
label_37e06c:
    // 0x37e06c: 0x24c800bc  addiu       $t0, $a2, 0xBC
    ctx->pc = 0x37e06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 188));
label_37e070:
    // 0x37e070: 0x24c60094  addiu       $a2, $a2, 0x94
    ctx->pc = 0x37e070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 148));
label_37e074:
    // 0x37e074: 0xc4e4000c  lwc1        $f4, 0xC($a3)
    ctx->pc = 0x37e074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37e078:
    // 0x37e078: 0xc4e70000  lwc1        $f7, 0x0($a3)
    ctx->pc = 0x37e078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37e07c:
    // 0x37e07c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x37e07cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37e080:
    // 0x37e080: 0xc4e60004  lwc1        $f6, 0x4($a3)
    ctx->pc = 0x37e080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_37e084:
    // 0x37e084: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x37e084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37e088:
    // 0x37e088: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x37e088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_37e08c:
    // 0x37e08c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x37e08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37e090:
    // 0x37e090: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x37e090u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37e094:
    // 0x37e094: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x37e094u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37e098:
    // 0x37e098: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x37e098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e09c:
    // 0x37e09c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x37e09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37e0a0:
    // 0x37e0a0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x37e0a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_37e0a4:
    // 0x37e0a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x37e0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e0a8:
    // 0x37e0a8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x37e0a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_37e0ac:
    // 0x37e0ac: 0xc4e3000c  lwc1        $f3, 0xC($a3)
    ctx->pc = 0x37e0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37e0b0:
    // 0x37e0b0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x37e0b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_37e0b4:
    // 0x37e0b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x37e0b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37e0b8:
    // 0x37e0b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37e0b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37e0bc:
    // 0x37e0bc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x37e0bcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_37e0c0:
    // 0x37e0c0: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x37e0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e0c4:
    // 0x37e0c4: 0x0  nop
    ctx->pc = 0x37e0c4u;
    // NOP
label_37e0c8:
    // 0x37e0c8: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_37e0cc:
    if (ctx->pc == 0x37E0CCu) {
        ctx->pc = 0x37E0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0C8u;
        // 0x37e0cc: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E0D0u;
        goto label_37e0d0;
    }
    ctx->pc = 0x37E0C8u;
    {
        const bool branch_taken_0x37e0c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37e0c8) {
            ctx->pc = 0x37E0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E0C8u;
            // 0x37e0cc: 0x46002007  neg.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E0D8u;
            goto label_37e0d8;
        }
    }
    ctx->pc = 0x37E0D0u;
label_37e0d0:
    // 0x37e0d0: 0x3e00008  jr          $ra
label_37e0d4:
    if (ctx->pc == 0x37E0D4u) {
        ctx->pc = 0x37E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0D0u;
        // 0x37e0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E0D8u;
        goto label_37e0d8;
    }
    ctx->pc = 0x37E0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0D0u;
        // 0x37e0d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E0D8u;
label_37e0d8:
    // 0x37e0d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37e0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e0dc:
    // 0x37e0dc: 0x0  nop
    ctx->pc = 0x37e0dcu;
    // NOP
label_37e0e0:
    // 0x37e0e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_37e0e4:
    if (ctx->pc == 0x37E0E4u) {
        ctx->pc = 0x37E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0E0u;
        // 0x37e0e4: 0xc8102a  slt         $v0, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E0E8u;
        goto label_37e0e8;
    }
    ctx->pc = 0x37E0E0u;
    {
        const bool branch_taken_0x37e0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0E0u;
        // 0x37e0e4: 0xc8102a  slt         $v0, $a2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0e0) {
            ctx->pc = 0x37E0F0u;
            goto label_37e0f0;
        }
    }
    ctx->pc = 0x37E0E8u;
label_37e0e8:
    // 0x37e0e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_37e0ec:
    if (ctx->pc == 0x37E0ECu) {
        ctx->pc = 0x37E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0E8u;
        // 0x37e0ec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E0F0u;
        goto label_37e0f0;
    }
    ctx->pc = 0x37E0E8u;
    {
        const bool branch_taken_0x37e0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E0E8u;
        // 0x37e0ec: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e0e8) {
            ctx->pc = 0x37E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e0d0;
        }
    }
    ctx->pc = 0x37E0F0u;
label_37e0f0:
    // 0x37e0f0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x37e0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e0f4:
    // 0x37e0f4: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x37e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37e0f8:
    // 0x37e0f8: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x37e0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_37e0fc:
    // 0x37e0fc: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x37e0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e100:
    // 0x37e100: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x37e100u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_37e104:
    // 0x37e104: 0xc4e30020  lwc1        $f3, 0x20($a3)
    ctx->pc = 0x37e104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37e108:
    // 0x37e108: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x37e108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_37e10c:
    // 0x37e10c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x37e10cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37e110:
    // 0x37e110: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37e110u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37e114:
    // 0x37e114: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x37e114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_37e118:
    // 0x37e118: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x37e118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e11c:
    // 0x37e11c: 0x0  nop
    ctx->pc = 0x37e11cu;
    // NOP
label_37e120:
    // 0x37e120: 0x4501ffeb  bc1t        . + 4 + (-0x15 << 2)
label_37e124:
    if (ctx->pc == 0x37E124u) {
        ctx->pc = 0x37E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E120u;
        // 0x37e124: 0x24c20014  addiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E128u;
        goto label_37e128;
    }
    ctx->pc = 0x37E120u;
    {
        const bool branch_taken_0x37e120 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E120u;
        // 0x37e124: 0x24c20014  addiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e120) {
            ctx->pc = 0x37E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e0d0;
        }
    }
    ctx->pc = 0x37E128u;
label_37e128:
    // 0x37e128: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x37e128u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_37e12c:
    // 0x37e12c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37e12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e130:
    // 0x37e130: 0x0  nop
    ctx->pc = 0x37e130u;
    // NOP
label_37e134:
    // 0x37e134: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_37e138:
    if (ctx->pc == 0x37E138u) {
        ctx->pc = 0x37E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E134u;
        // 0x37e138: 0x48102a  slt         $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E13Cu;
        goto label_37e13c;
    }
    ctx->pc = 0x37E134u;
    {
        const bool branch_taken_0x37e134 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E134u;
        // 0x37e138: 0x48102a  slt         $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e134) {
            ctx->pc = 0x37E144u;
            goto label_37e144;
        }
    }
    ctx->pc = 0x37E13Cu;
label_37e13c:
    // 0x37e13c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_37e140:
    if (ctx->pc == 0x37E140u) {
        ctx->pc = 0x37E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E13Cu;
        // 0x37e140: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E144u;
        goto label_37e144;
    }
    ctx->pc = 0x37E13Cu;
    {
        const bool branch_taken_0x37e13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E13Cu;
        // 0x37e140: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e13c) {
            ctx->pc = 0x37E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e0d0;
        }
    }
    ctx->pc = 0x37E144u;
label_37e144:
    // 0x37e144: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x37e144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37e148:
    // 0x37e148: 0xc482002c  lwc1        $f2, 0x2C($a0)
    ctx->pc = 0x37e148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37e14c:
    // 0x37e14c: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x37e14cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_37e150:
    // 0x37e150: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x37e150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37e154:
    // 0x37e154: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x37e154u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_37e158:
    // 0x37e158: 0xc4e30034  lwc1        $f3, 0x34($a3)
    ctx->pc = 0x37e158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37e15c:
    // 0x37e15c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x37e15cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_37e160:
    // 0x37e160: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x37e160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37e164:
    // 0x37e164: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37e164u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37e168:
    // 0x37e168: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x37e168u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_37e16c:
    // 0x37e16c: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x37e16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e170:
    // 0x37e170: 0x0  nop
    ctx->pc = 0x37e170u;
    // NOP
label_37e174:
    // 0x37e174: 0x4501ffd6  bc1t        . + 4 + (-0x2A << 2)
label_37e178:
    if (ctx->pc == 0x37E178u) {
        ctx->pc = 0x37E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E174u;
        // 0x37e178: 0x24c20028  addiu       $v0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E17Cu;
        goto label_37e17c;
    }
    ctx->pc = 0x37E174u;
    {
        const bool branch_taken_0x37e174 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E174u;
        // 0x37e178: 0x24c20028  addiu       $v0, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e174) {
            ctx->pc = 0x37E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e0d0;
        }
    }
    ctx->pc = 0x37E17Cu;
label_37e17c:
    // 0x37e17c: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x37e17cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
label_37e180:
    // 0x37e180: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37e180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37e184:
    // 0x37e184: 0x0  nop
    ctx->pc = 0x37e184u;
    // NOP
label_37e188:
    // 0x37e188: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_37e18c:
    if (ctx->pc == 0x37E18Cu) {
        ctx->pc = 0x37E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E188u;
        // 0x37e18c: 0x48102a  slt         $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E190u;
        goto label_37e190;
    }
    ctx->pc = 0x37E188u;
    {
        const bool branch_taken_0x37e188 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x37E18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E188u;
        // 0x37e18c: 0x48102a  slt         $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e188) {
            ctx->pc = 0x37E198u;
            goto label_37e198;
        }
    }
    ctx->pc = 0x37E190u;
label_37e190:
    // 0x37e190: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_37e194:
    if (ctx->pc == 0x37E194u) {
        ctx->pc = 0x37E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E190u;
        // 0x37e194: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E198u;
        goto label_37e198;
    }
    ctx->pc = 0x37E190u;
    {
        const bool branch_taken_0x37e190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E190u;
        // 0x37e194: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e190) {
            ctx->pc = 0x37E0D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e0d0;
        }
    }
    ctx->pc = 0x37E198u;
label_37e198:
    // 0x37e198: 0x24c6003c  addiu       $a2, $a2, 0x3C
    ctx->pc = 0x37e198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 60));
label_37e19c:
    // 0x37e19c: 0x24e7003c  addiu       $a3, $a3, 0x3C
    ctx->pc = 0x37e19cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 60));
label_37e1a0:
    // 0x37e1a0: 0x24a5003c  addiu       $a1, $a1, 0x3C
    ctx->pc = 0x37e1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
label_37e1a4:
    // 0x37e1a4: 0x2484003c  addiu       $a0, $a0, 0x3C
    ctx->pc = 0x37e1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_37e1a8:
    // 0x37e1a8: 0xca102a  slt         $v0, $a2, $t2
    ctx->pc = 0x37e1a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_37e1ac:
    // 0x37e1ac: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_37e1b0:
    if (ctx->pc == 0x37E1B0u) {
        ctx->pc = 0x37E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1ACu;
        // 0x37e1b0: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E1B4u;
        goto label_37e1b4;
    }
    ctx->pc = 0x37E1ACu;
    {
        const bool branch_taken_0x37e1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1ACu;
        // 0x37e1b0: 0x2463003c  addiu       $v1, $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e1ac) {
            ctx->pc = 0x37E098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37e098;
        }
    }
    ctx->pc = 0x37E1B4u;
label_37e1b4:
    // 0x37e1b4: 0x3e00008  jr          $ra
label_37e1b8:
    if (ctx->pc == 0x37E1B8u) {
        ctx->pc = 0x37E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1B4u;
        // 0x37e1b8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E1BCu;
        goto label_37e1bc;
    }
    ctx->pc = 0x37E1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1B4u;
        // 0x37e1b8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E1BCu;
label_37e1bc:
    // 0x37e1bc: 0x0  nop
    ctx->pc = 0x37e1bcu;
    // NOP
label_37e1c0:
    // 0x37e1c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37e1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37e1c4:
    // 0x37e1c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37e1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_37e1c8:
    // 0x37e1c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37e1cc:
    // 0x37e1cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37e1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e1d0:
    // 0x37e1d0: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x37e1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e1d4:
    // 0x37e1d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37e1d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e1d8:
    // 0x37e1d8: 0xc111718  jal         func_445C60
label_37e1dc:
    if (ctx->pc == 0x37E1DCu) {
        ctx->pc = 0x37E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1D8u;
        // 0x37e1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E1E0u;
        goto label_37e1e0;
    }
    ctx->pc = 0x37E1D8u;
    SET_GPR_U32(ctx, 31, 0x37E1E0u);
    ctx->pc = 0x37E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E1D8u;
    // 0x37e1dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x37E1D8u, 0x37E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E1E0u;
label_37e1e0:
    // 0x37e1e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37e1e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e1e4:
    // 0x37e1e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37e1e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37e1e8:
    // 0x37e1e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37e1ec:
    // 0x37e1ec: 0x3e00008  jr          $ra
label_37e1f0:
    if (ctx->pc == 0x37E1F0u) {
        ctx->pc = 0x37E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1ECu;
        // 0x37e1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E1F4u;
        goto label_37e1f4;
    }
    ctx->pc = 0x37E1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E1ECu;
        // 0x37e1f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E1F4u;
label_37e1f4:
    // 0x37e1f4: 0x0  nop
    ctx->pc = 0x37e1f4u;
    // NOP
label_37e1f8:
    // 0x37e1f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37e1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37e1fc:
    // 0x37e1fc: 0x3c0338e3  lui         $v1, 0x38E3
    ctx->pc = 0x37e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14563 << 16));
label_37e200:
    // 0x37e200: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x37e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_37e204:
    // 0x37e204: 0x34638e39  ori         $v1, $v1, 0x8E39
    ctx->pc = 0x37e204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36409);
label_37e208:
    // 0x37e208: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x37e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_37e20c:
    // 0x37e20c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37e20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e210:
    // 0x37e210: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x37e210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_37e214:
    // 0x37e214: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x37e214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37e218:
    // 0x37e218: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x37e218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_37e21c:
    // 0x37e21c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x37e21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_37e220:
    // 0x37e220: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x37e220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37e224:
    // 0x37e224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37e224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37e228:
    // 0x37e228: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x37e228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37e22c:
    // 0x37e22c: 0x8e260100  lw          $a2, 0x100($s1)
    ctx->pc = 0x37e22cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_37e230:
    // 0x37e230: 0x8e280110  lw          $t0, 0x110($s1)
    ctx->pc = 0x37e230u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_37e234:
    // 0x37e234: 0x8cc20058  lw          $v0, 0x58($a2)
    ctx->pc = 0x37e234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_37e238:
    // 0x37e238: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x37e238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_37e23c:
    // 0x37e23c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x37e23cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_37e240:
    // 0x37e240: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_37e244:
    if (ctx->pc == 0x37E244u) {
        ctx->pc = 0x37E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E240u;
        // 0x37e244: 0x29143  sra         $s2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E248u;
        goto label_37e248;
    }
    ctx->pc = 0x37E240u;
    {
        const bool branch_taken_0x37e240 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E240u;
        // 0x37e244: 0x29143  sra         $s2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e240) {
            ctx->pc = 0x37E260u;
            goto label_37e260;
        }
    }
    ctx->pc = 0x37E248u;
label_37e248:
    // 0x37e248: 0x8e270118  lw          $a3, 0x118($s1)
    ctx->pc = 0x37e248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_37e24c:
    // 0x37e24c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37e24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37e250:
    // 0x37e250: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37e250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37e254:
    // 0x37e254: 0x100f809  jalr        $t0
label_37e258:
    if (ctx->pc == 0x37E258u) {
        ctx->pc = 0x37E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E254u;
        // 0x37e258: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E25Cu;
        goto label_37e25c;
    }
    ctx->pc = 0x37E254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x37E25Cu);
        ctx->pc = 0x37E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E254u;
        // 0x37e258: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E254u, 0x37E25Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37E25Cu;
label_37e25c:
    // 0x37e25c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x37e25cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37e260:
    // 0x37e260: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x37e260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_37e264:
    // 0x37e264: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37e264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e268:
    // 0x37e268: 0xc111718  jal         func_445C60
label_37e26c:
    if (ctx->pc == 0x37E26Cu) {
        ctx->pc = 0x37E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E268u;
        // 0x37e26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E270u;
        goto label_37e270;
    }
    ctx->pc = 0x37E268u;
    SET_GPR_U32(ctx, 31, 0x37E270u);
    ctx->pc = 0x37E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37E268u;
    // 0x37e26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445C60u, 0x37E268u, 0x37E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37E270u;
label_37e270:
    // 0x37e270: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x37e270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
label_37e274:
    // 0x37e274: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_37e278:
    if (ctx->pc == 0x37E278u) {
        ctx->pc = 0x37E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E274u;
        // 0x37e278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E27Cu;
        goto label_37e27c;
    }
    ctx->pc = 0x37E274u;
    {
        const bool branch_taken_0x37e274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e274) {
            ctx->pc = 0x37E278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37E274u;
            // 0x37e278: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37E29Cu;
            goto label_37e29c;
        }
    }
    ctx->pc = 0x37E27Cu;
label_37e27c:
    // 0x37e27c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_37e280:
    if (ctx->pc == 0x37E280u) {
        ctx->pc = 0x37E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E27Cu;
        // 0x37e280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E284u;
        goto label_37e284;
    }
    ctx->pc = 0x37E27Cu;
    {
        const bool branch_taken_0x37e27c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E27Cu;
        // 0x37e280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e27c) {
            ctx->pc = 0x37E298u;
            goto label_37e298;
        }
    }
    ctx->pc = 0x37E284u;
label_37e284:
    // 0x37e284: 0x8e270118  lw          $a3, 0x118($s1)
    ctx->pc = 0x37e284u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
label_37e288:
    // 0x37e288: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37e288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_37e28c:
    // 0x37e28c: 0x40f809  jalr        $v0
label_37e290:
    if (ctx->pc == 0x37E290u) {
        ctx->pc = 0x37E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E28Cu;
        // 0x37e290: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E294u;
        goto label_37e294;
    }
    ctx->pc = 0x37E28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x37E294u);
        ctx->pc = 0x37E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E28Cu;
        // 0x37e290: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E28Cu, 0x37E294u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37E294u;
label_37e294:
    // 0x37e294: 0x0  nop
    ctx->pc = 0x37e294u;
    // NOP
label_37e298:
    // 0x37e298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37e298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37e29c:
    // 0x37e29c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37e29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37e2a0:
    // 0x37e2a0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x37e2a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_37e2a4:
    // 0x37e2a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37e2a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37e2a8:
    // 0x37e2a8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x37e2a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37e2ac:
    // 0x37e2ac: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x37e2acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37e2b0:
    // 0x37e2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37e2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37e2b4:
    // 0x37e2b4: 0x3e00008  jr          $ra
label_37e2b8:
    if (ctx->pc == 0x37E2B8u) {
        ctx->pc = 0x37E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E2B4u;
        // 0x37e2b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E2BCu;
        goto label_37e2bc;
    }
    ctx->pc = 0x37E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E2B4u;
        // 0x37e2b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E2BCu;
label_37e2bc:
    // 0x37e2bc: 0x0  nop
    ctx->pc = 0x37e2bcu;
    // NOP
label_37e2c0:
    // 0x37e2c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x37e2c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37e2c4:
    // 0x37e2c4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x37e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_37e2c8:
    // 0x37e2c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_37e2cc:
    if (ctx->pc == 0x37E2CCu) {
        ctx->pc = 0x37E2D0u;
        goto label_37e2d0;
    }
    ctx->pc = 0x37E2C8u;
    {
        const bool branch_taken_0x37e2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37e2c8) {
            ctx->pc = 0x37E2E8u;
            goto label_37e2e8;
        }
    }
    ctx->pc = 0x37E2D0u;
label_37e2d0:
    // 0x37e2d0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x37e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_37e2d4:
    // 0x37e2d4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x37e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_37e2d8:
    // 0x37e2d8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_37e2dc:
    // 0x37e2dc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x37e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_37e2e0:
    // 0x37e2e0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x37e2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_37e2e4:
    // 0x37e2e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x37e2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_37e2e8:
    // 0x37e2e8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_37e2ec:
    if (ctx->pc == 0x37E2ECu) {
        ctx->pc = 0x37E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E2E8u;
        // 0x37e2ec: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E2F0u;
        goto label_37e2f0;
    }
    ctx->pc = 0x37E2E8u;
    {
        const bool branch_taken_0x37e2e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37E2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E2E8u;
        // 0x37e2ec: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37e2e8) {
            ctx->pc = 0x37E310u;
            goto label_37e310;
        }
    }
    ctx->pc = 0x37E2F0u;
label_37e2f0:
    // 0x37e2f0: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x37e2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_37e2f4:
    // 0x37e2f4: 0x24a20090  addiu       $v0, $a1, 0x90
    ctx->pc = 0x37e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_37e2f8:
    // 0x37e2f8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x37e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_37e2fc:
    // 0x37e2fc: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x37e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_37e300:
    // 0x37e300: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x37e300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_37e304:
    // 0x37e304: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x37e304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
label_37e308:
    // 0x37e308: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x37e308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_37e30c:
    // 0x37e30c: 0xaca30090  sw          $v1, 0x90($a1)
    ctx->pc = 0x37e30cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
label_37e310:
    // 0x37e310: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x37e310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_37e314:
    // 0x37e314: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x37e314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37e318:
    // 0x37e318: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x37e318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_37e31c:
    // 0x37e31c: 0x3e00008  jr          $ra
label_37e320:
    if (ctx->pc == 0x37E320u) {
        ctx->pc = 0x37E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E31Cu;
        // 0x37e320: 0xa0c30003  sb          $v1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37E324u;
        goto label_37e324;
    }
    ctx->pc = 0x37E31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37E320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37E31Cu;
        // 0x37e320: 0xa0c30003  sb          $v1, 0x3($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37E31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37E324u;
label_37e324:
    // 0x37e324: 0x0  nop
    ctx->pc = 0x37e324u;
    // NOP
    ctx->pc = 0x37e328u;
}
