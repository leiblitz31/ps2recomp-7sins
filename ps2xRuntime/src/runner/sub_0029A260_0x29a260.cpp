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

// Function: sub_0029A260
// Address: 0x29a260 - 0x29a530
void sub_0029A260_0x29a260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A260_0x29a260");
#endif

    switch (ctx->pc) {
        case 0x29a260u: goto label_29a260;
        case 0x29a264u: goto label_29a264;
        case 0x29a268u: goto label_29a268;
        case 0x29a26cu: goto label_29a26c;
        case 0x29a270u: goto label_29a270;
        case 0x29a274u: goto label_29a274;
        case 0x29a278u: goto label_29a278;
        case 0x29a27cu: goto label_29a27c;
        case 0x29a280u: goto label_29a280;
        case 0x29a284u: goto label_29a284;
        case 0x29a288u: goto label_29a288;
        case 0x29a28cu: goto label_29a28c;
        case 0x29a290u: goto label_29a290;
        case 0x29a294u: goto label_29a294;
        case 0x29a298u: goto label_29a298;
        case 0x29a29cu: goto label_29a29c;
        case 0x29a2a0u: goto label_29a2a0;
        case 0x29a2a4u: goto label_29a2a4;
        case 0x29a2a8u: goto label_29a2a8;
        case 0x29a2acu: goto label_29a2ac;
        case 0x29a2b0u: goto label_29a2b0;
        case 0x29a2b4u: goto label_29a2b4;
        case 0x29a2b8u: goto label_29a2b8;
        case 0x29a2bcu: goto label_29a2bc;
        case 0x29a2c0u: goto label_29a2c0;
        case 0x29a2c4u: goto label_29a2c4;
        case 0x29a2c8u: goto label_29a2c8;
        case 0x29a2ccu: goto label_29a2cc;
        case 0x29a2d0u: goto label_29a2d0;
        case 0x29a2d4u: goto label_29a2d4;
        case 0x29a2d8u: goto label_29a2d8;
        case 0x29a2dcu: goto label_29a2dc;
        case 0x29a2e0u: goto label_29a2e0;
        case 0x29a2e4u: goto label_29a2e4;
        case 0x29a2e8u: goto label_29a2e8;
        case 0x29a2ecu: goto label_29a2ec;
        case 0x29a2f0u: goto label_29a2f0;
        case 0x29a2f4u: goto label_29a2f4;
        case 0x29a2f8u: goto label_29a2f8;
        case 0x29a2fcu: goto label_29a2fc;
        case 0x29a300u: goto label_29a300;
        case 0x29a304u: goto label_29a304;
        case 0x29a308u: goto label_29a308;
        case 0x29a30cu: goto label_29a30c;
        case 0x29a310u: goto label_29a310;
        case 0x29a314u: goto label_29a314;
        case 0x29a318u: goto label_29a318;
        case 0x29a31cu: goto label_29a31c;
        case 0x29a320u: goto label_29a320;
        case 0x29a324u: goto label_29a324;
        case 0x29a328u: goto label_29a328;
        case 0x29a32cu: goto label_29a32c;
        case 0x29a330u: goto label_29a330;
        case 0x29a334u: goto label_29a334;
        case 0x29a338u: goto label_29a338;
        case 0x29a33cu: goto label_29a33c;
        case 0x29a340u: goto label_29a340;
        case 0x29a344u: goto label_29a344;
        case 0x29a348u: goto label_29a348;
        case 0x29a34cu: goto label_29a34c;
        case 0x29a350u: goto label_29a350;
        case 0x29a354u: goto label_29a354;
        case 0x29a358u: goto label_29a358;
        case 0x29a35cu: goto label_29a35c;
        case 0x29a360u: goto label_29a360;
        case 0x29a364u: goto label_29a364;
        case 0x29a368u: goto label_29a368;
        case 0x29a36cu: goto label_29a36c;
        case 0x29a370u: goto label_29a370;
        case 0x29a374u: goto label_29a374;
        case 0x29a378u: goto label_29a378;
        case 0x29a37cu: goto label_29a37c;
        case 0x29a380u: goto label_29a380;
        case 0x29a384u: goto label_29a384;
        case 0x29a388u: goto label_29a388;
        case 0x29a38cu: goto label_29a38c;
        case 0x29a390u: goto label_29a390;
        case 0x29a394u: goto label_29a394;
        case 0x29a398u: goto label_29a398;
        case 0x29a39cu: goto label_29a39c;
        case 0x29a3a0u: goto label_29a3a0;
        case 0x29a3a4u: goto label_29a3a4;
        case 0x29a3a8u: goto label_29a3a8;
        case 0x29a3acu: goto label_29a3ac;
        case 0x29a3b0u: goto label_29a3b0;
        case 0x29a3b4u: goto label_29a3b4;
        case 0x29a3b8u: goto label_29a3b8;
        case 0x29a3bcu: goto label_29a3bc;
        case 0x29a3c0u: goto label_29a3c0;
        case 0x29a3c4u: goto label_29a3c4;
        case 0x29a3c8u: goto label_29a3c8;
        case 0x29a3ccu: goto label_29a3cc;
        case 0x29a3d0u: goto label_29a3d0;
        case 0x29a3d4u: goto label_29a3d4;
        case 0x29a3d8u: goto label_29a3d8;
        case 0x29a3dcu: goto label_29a3dc;
        case 0x29a3e0u: goto label_29a3e0;
        case 0x29a3e4u: goto label_29a3e4;
        case 0x29a3e8u: goto label_29a3e8;
        case 0x29a3ecu: goto label_29a3ec;
        case 0x29a3f0u: goto label_29a3f0;
        case 0x29a3f4u: goto label_29a3f4;
        case 0x29a3f8u: goto label_29a3f8;
        case 0x29a3fcu: goto label_29a3fc;
        case 0x29a400u: goto label_29a400;
        case 0x29a404u: goto label_29a404;
        case 0x29a408u: goto label_29a408;
        case 0x29a40cu: goto label_29a40c;
        case 0x29a410u: goto label_29a410;
        case 0x29a414u: goto label_29a414;
        case 0x29a418u: goto label_29a418;
        case 0x29a41cu: goto label_29a41c;
        case 0x29a420u: goto label_29a420;
        case 0x29a424u: goto label_29a424;
        case 0x29a428u: goto label_29a428;
        case 0x29a42cu: goto label_29a42c;
        case 0x29a430u: goto label_29a430;
        case 0x29a434u: goto label_29a434;
        case 0x29a438u: goto label_29a438;
        case 0x29a43cu: goto label_29a43c;
        case 0x29a440u: goto label_29a440;
        case 0x29a444u: goto label_29a444;
        case 0x29a448u: goto label_29a448;
        case 0x29a44cu: goto label_29a44c;
        case 0x29a450u: goto label_29a450;
        case 0x29a454u: goto label_29a454;
        case 0x29a458u: goto label_29a458;
        case 0x29a45cu: goto label_29a45c;
        case 0x29a460u: goto label_29a460;
        case 0x29a464u: goto label_29a464;
        case 0x29a468u: goto label_29a468;
        case 0x29a46cu: goto label_29a46c;
        case 0x29a470u: goto label_29a470;
        case 0x29a474u: goto label_29a474;
        case 0x29a478u: goto label_29a478;
        case 0x29a47cu: goto label_29a47c;
        case 0x29a480u: goto label_29a480;
        case 0x29a484u: goto label_29a484;
        case 0x29a488u: goto label_29a488;
        case 0x29a48cu: goto label_29a48c;
        case 0x29a490u: goto label_29a490;
        case 0x29a494u: goto label_29a494;
        case 0x29a498u: goto label_29a498;
        case 0x29a49cu: goto label_29a49c;
        case 0x29a4a0u: goto label_29a4a0;
        case 0x29a4a4u: goto label_29a4a4;
        case 0x29a4a8u: goto label_29a4a8;
        case 0x29a4acu: goto label_29a4ac;
        case 0x29a4b0u: goto label_29a4b0;
        case 0x29a4b4u: goto label_29a4b4;
        case 0x29a4b8u: goto label_29a4b8;
        case 0x29a4bcu: goto label_29a4bc;
        case 0x29a4c0u: goto label_29a4c0;
        case 0x29a4c4u: goto label_29a4c4;
        case 0x29a4c8u: goto label_29a4c8;
        case 0x29a4ccu: goto label_29a4cc;
        case 0x29a4d0u: goto label_29a4d0;
        case 0x29a4d4u: goto label_29a4d4;
        case 0x29a4d8u: goto label_29a4d8;
        case 0x29a4dcu: goto label_29a4dc;
        case 0x29a4e0u: goto label_29a4e0;
        case 0x29a4e4u: goto label_29a4e4;
        case 0x29a4e8u: goto label_29a4e8;
        case 0x29a4ecu: goto label_29a4ec;
        case 0x29a4f0u: goto label_29a4f0;
        case 0x29a4f4u: goto label_29a4f4;
        case 0x29a4f8u: goto label_29a4f8;
        case 0x29a4fcu: goto label_29a4fc;
        case 0x29a500u: goto label_29a500;
        case 0x29a504u: goto label_29a504;
        case 0x29a508u: goto label_29a508;
        case 0x29a50cu: goto label_29a50c;
        case 0x29a510u: goto label_29a510;
        case 0x29a514u: goto label_29a514;
        case 0x29a518u: goto label_29a518;
        case 0x29a51cu: goto label_29a51c;
        case 0x29a520u: goto label_29a520;
        case 0x29a524u: goto label_29a524;
        case 0x29a528u: goto label_29a528;
        case 0x29a52cu: goto label_29a52c;
        default: break;
    }

    ctx->pc = 0x29a260u;

label_29a260:
    // 0x29a260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29a264:
    // 0x29a264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29a264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29a268:
    // 0x29a268: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x29a268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_29a26c:
    // 0x29a26c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29a26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29a270:
    // 0x29a270: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29a270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29a274:
    // 0x29a274: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29a274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29a278:
    // 0x29a278: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29a278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29a27c:
    // 0x29a27c: 0x320f809  jalr        $t9
label_29a280:
    if (ctx->pc == 0x29A280u) {
        ctx->pc = 0x29A284u;
        goto label_29a284;
    }
    ctx->pc = 0x29A27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29A284u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A27Cu, 0x29A284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A284u;
label_29a284:
    // 0x29a284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29a284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a288:
    // 0x29a288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_29a28c:
    // 0x29a28c: 0x3e00008  jr          $ra
label_29a290:
    if (ctx->pc == 0x29A290u) {
        ctx->pc = 0x29A294u;
        goto label_29a294;
    }
    ctx->pc = 0x29A28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A294u;
label_29a294:
    // 0x29a294: 0x0  nop
    ctx->pc = 0x29a294u;
    // NOP
label_29a298:
    // 0x29a298: 0x0  nop
    ctx->pc = 0x29a298u;
    // NOP
label_29a29c:
    // 0x29a29c: 0x0  nop
    ctx->pc = 0x29a29cu;
    // NOP
label_29a2a0:
    // 0x29a2a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_29a2a4:
    // 0x29a2a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_29a2a8:
    // 0x29a2a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29a2ac:
    // 0x29a2ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29a2b0:
    // 0x29a2b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29a2b4:
    // 0x29a2b4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x29a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_29a2b8:
    // 0x29a2b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x29a2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_29a2bc:
    // 0x29a2bc: 0xc08ec5c  jal         func_23B170
label_29a2c0:
    if (ctx->pc == 0x29A2C0u) {
        ctx->pc = 0x29A2C4u;
        goto label_29a2c4;
    }
    ctx->pc = 0x29A2BCu;
    SET_GPR_U32(ctx, 31, 0x29A2C4u);
    ctx->pc = 0x23B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B170u, 0x29A2BCu, 0x29A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2C4u;
label_29a2c4:
    // 0x29a2c4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x29a2c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29a2c8:
    // 0x29a2c8: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x29a2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_29a2cc:
    // 0x29a2cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29a2d0:
    // 0x29a2d0: 0x14620048  bne         $v1, $v0, . + 4 + (0x48 << 2)
label_29a2d4:
    if (ctx->pc == 0x29A2D4u) {
        ctx->pc = 0x29A2D8u;
        goto label_29a2d8;
    }
    ctx->pc = 0x29A2D0u;
    {
        const bool branch_taken_0x29a2d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a2d0) {
            ctx->pc = 0x29A3F4u;
            goto label_29a3f4;
        }
    }
    ctx->pc = 0x29A2D8u;
label_29a2d8:
    // 0x29a2d8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x29a2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_29a2dc:
    // 0x29a2dc: 0x2463d770  addiu       $v1, $v1, -0x2890
    ctx->pc = 0x29a2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956912));
label_29a2e0:
    // 0x29a2e0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x29a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_29a2e4:
    // 0x29a2e4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x29a2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_29a2e8:
    // 0x29a2e8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x29a2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29a2ec:
    // 0x29a2ec: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x29a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29a2f0:
    // 0x29a2f0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x29a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29a2f4:
    // 0x29a2f4: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x29a2f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29a2f8:
    // 0x29a2f8: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x29a2f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_29a2fc:
    // 0x29a2fc: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x29a2fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_29a300:
    // 0x29a300: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x29a300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_29a304:
    // 0x29a304: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x29a304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_29a308:
    // 0x29a308: 0x24c6d780  addiu       $a2, $a2, -0x2880
    ctx->pc = 0x29a308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956928));
label_29a30c:
    // 0x29a30c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29a30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_29a310:
    // 0x29a310: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_29a314:
    // 0x29a314: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x29a314u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_29a318:
    // 0x29a318: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x29a318u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_29a31c:
    // 0x29a31c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x29a31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_29a320:
    // 0x29a320: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x29a320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_29a324:
    // 0x29a324: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x29a324u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_29a328:
    // 0x29a328: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x29a328u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_29a32c:
    // 0x29a32c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x29a32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_29a330:
    // 0x29a330: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_29a334:
    if (ctx->pc == 0x29A334u) {
        ctx->pc = 0x29A338u;
        goto label_29a338;
    }
    ctx->pc = 0x29A330u;
    {
        const bool branch_taken_0x29a330 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x29a330) {
            ctx->pc = 0x29A314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a314;
        }
    }
    ctx->pc = 0x29A338u;
label_29a338:
    // 0x29a338: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x29a338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_29a33c:
    // 0x29a33c: 0x2484d790  addiu       $a0, $a0, -0x2870
    ctx->pc = 0x29a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956944));
label_29a340:
    // 0x29a340: 0xc107156  jal         func_41C558
label_29a344:
    if (ctx->pc == 0x29A344u) {
        ctx->pc = 0x29A348u;
        goto label_29a348;
    }
    ctx->pc = 0x29A340u;
    SET_GPR_U32(ctx, 31, 0x29A348u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x29A340u, 0x29A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A348u;
label_29a348:
    // 0x29a348: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29a348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a34c:
    // 0x29a34c: 0x10000026  b           . + 4 + (0x26 << 2)
label_29a350:
    if (ctx->pc == 0x29A350u) {
        ctx->pc = 0x29A354u;
        goto label_29a354;
    }
    ctx->pc = 0x29A34Cu;
    {
        const bool branch_taken_0x29a34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a34c) {
            ctx->pc = 0x29A3E8u;
            goto label_29a3e8;
        }
    }
    ctx->pc = 0x29A354u;
label_29a354:
    // 0x29a354: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x29a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_29a358:
    // 0x29a358: 0xc119b68  jal         func_466DA0
label_29a35c:
    if (ctx->pc == 0x29A35Cu) {
        ctx->pc = 0x29A360u;
        goto label_29a360;
    }
    ctx->pc = 0x29A358u;
    SET_GPR_U32(ctx, 31, 0x29A360u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x29A358u, 0x29A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A360u;
label_29a360:
    // 0x29a360: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x29a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_29a364:
    // 0x29a364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29a364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a368:
    // 0x29a368: 0xc0400e0  jal         func_100380
label_29a36c:
    if (ctx->pc == 0x29A36Cu) {
        ctx->pc = 0x29A370u;
        goto label_29a370;
    }
    ctx->pc = 0x29A368u;
    SET_GPR_U32(ctx, 31, 0x29A370u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x29A368u, 0x29A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A370u;
label_29a370:
    // 0x29a370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a374:
    // 0x29a374: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_29a378:
    if (ctx->pc == 0x29A378u) {
        ctx->pc = 0x29A37Cu;
        goto label_29a37c;
    }
    ctx->pc = 0x29A374u;
    {
        const bool branch_taken_0x29a374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a374) {
            ctx->pc = 0x29A3A4u;
            goto label_29a3a4;
        }
    }
    ctx->pc = 0x29A37Cu;
label_29a37c:
    // 0x29a37c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29a380:
    // 0x29a380: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x29a380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29a384:
    // 0x29a384: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x29a384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29a388:
    // 0x29a388: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29a388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_29a38c:
    // 0x29a38c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29a390:
    // 0x29a390: 0x8c650050  lw          $a1, 0x50($v1)
    ctx->pc = 0x29a390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_29a394:
    // 0x29a394: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x29a394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_29a398:
    // 0x29a398: 0xc0a66ec  jal         func_299BB0
label_29a39c:
    if (ctx->pc == 0x29A39Cu) {
        ctx->pc = 0x29A3A0u;
        goto label_29a3a0;
    }
    ctx->pc = 0x29A398u;
    SET_GPR_U32(ctx, 31, 0x29A3A0u);
    ctx->pc = 0x299BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299BB0u, 0x29A398u, 0x29A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A3A0u;
label_29a3a0:
    // 0x29a3a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a3a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a3a4:
    // 0x29a3a4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29a3a8:
    // 0x29a3a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_29a3ac:
    // 0x29a3ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29a3b0:
    // 0x29a3b0: 0xac51004c  sw          $s1, 0x4C($v0)
    ctx->pc = 0x29a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 17));
label_29a3b4:
    // 0x29a3b4: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_29a3b8:
    if (ctx->pc == 0x29A3B8u) {
        ctx->pc = 0x29A3BCu;
        goto label_29a3bc;
    }
    ctx->pc = 0x29A3B4u;
    {
        const bool branch_taken_0x29a3b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a3b4) {
            ctx->pc = 0x29A3E4u;
            goto label_29a3e4;
        }
    }
    ctx->pc = 0x29A3BCu;
label_29a3bc:
    // 0x29a3bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x29a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_29a3c0:
    // 0x29a3c0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x29a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_29a3c4:
    // 0x29a3c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x29a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29a3c8:
    // 0x29a3c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_29a3cc:
    // 0x29a3cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29a3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29a3d0:
    // 0x29a3d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x29a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_29a3d4:
    // 0x29a3d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29a3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_29a3d8:
    // 0x29a3d8: 0x8c64004c  lw          $a0, 0x4C($v1)
    ctx->pc = 0x29a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_29a3dc:
    // 0x29a3dc: 0xc0a66bc  jal         func_299AF0
label_29a3e0:
    if (ctx->pc == 0x29A3E0u) {
        ctx->pc = 0x29A3E4u;
        goto label_29a3e4;
    }
    ctx->pc = 0x29A3DCu;
    SET_GPR_U32(ctx, 31, 0x29A3E4u);
    ctx->pc = 0x299AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299AF0u, 0x29A3DCu, 0x29A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A3E4u;
label_29a3e4:
    // 0x29a3e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29a3e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29a3e8:
    // 0x29a3e8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x29a3e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_29a3ec:
    // 0x29a3ec: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_29a3f0:
    if (ctx->pc == 0x29A3F0u) {
        ctx->pc = 0x29A3F4u;
        goto label_29a3f4;
    }
    ctx->pc = 0x29A3ECu;
    {
        const bool branch_taken_0x29a3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a3ec) {
            ctx->pc = 0x29A354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a354;
        }
    }
    ctx->pc = 0x29A3F4u;
label_29a3f4:
    // 0x29a3f4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29a3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29a3f8:
    // 0x29a3f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29a3fc:
    // 0x29a3fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a3fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29a400:
    // 0x29a400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a404:
    // 0x29a404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a408:
    // 0x29a408: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29a408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_29a40c:
    // 0x29a40c: 0x3e00008  jr          $ra
label_29a410:
    if (ctx->pc == 0x29A410u) {
        ctx->pc = 0x29A414u;
        goto label_29a414;
    }
    ctx->pc = 0x29A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A414u;
label_29a414:
    // 0x29a414: 0x0  nop
    ctx->pc = 0x29a414u;
    // NOP
label_29a418:
    // 0x29a418: 0x0  nop
    ctx->pc = 0x29a418u;
    // NOP
label_29a41c:
    // 0x29a41c: 0x0  nop
    ctx->pc = 0x29a41cu;
    // NOP
label_29a420:
    // 0x29a420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_29a424:
    // 0x29a424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29a424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29a428:
    // 0x29a428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29a428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_29a42c:
    // 0x29a42c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_29a430:
    // 0x29a430: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29a434:
    // 0x29a434: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29a438:
    // 0x29a438: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x29a438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_29a43c:
    // 0x29a43c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x29a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29a440:
    // 0x29a440: 0xc08ec70  jal         func_23B1C0
label_29a444:
    if (ctx->pc == 0x29A444u) {
        ctx->pc = 0x29A448u;
        goto label_29a448;
    }
    ctx->pc = 0x29A440u;
    SET_GPR_U32(ctx, 31, 0x29A448u);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x29A440u, 0x29A448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A448u;
label_29a448:
    // 0x29a448: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x29a448u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29a44c:
    // 0x29a44c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29a44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a450:
    // 0x29a450: 0x1000002a  b           . + 4 + (0x2A << 2)
label_29a454:
    if (ctx->pc == 0x29A454u) {
        ctx->pc = 0x29A458u;
        goto label_29a458;
    }
    ctx->pc = 0x29A450u;
    {
        const bool branch_taken_0x29a450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a450) {
            ctx->pc = 0x29A4FCu;
            goto label_29a4fc;
        }
    }
    ctx->pc = 0x29A458u;
label_29a458:
    // 0x29a458: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x29a458u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_29a45c:
    // 0x29a45c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29a45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29a460:
    // 0x29a460: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29a464:
    // 0x29a464: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29a464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29a468:
    // 0x29a468: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29a46c:
    // 0x29a46c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_29a470:
    // 0x29a470: 0xc0a69a8  jal         func_29A6A0
label_29a474:
    if (ctx->pc == 0x29A474u) {
        ctx->pc = 0x29A478u;
        goto label_29a478;
    }
    ctx->pc = 0x29A470u;
    SET_GPR_U32(ctx, 31, 0x29A478u);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x29A470u, 0x29A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A478u;
label_29a478:
    // 0x29a478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29a47c:
    // 0x29a47c: 0x1000000c  b           . + 4 + (0xC << 2)
label_29a480:
    if (ctx->pc == 0x29A480u) {
        ctx->pc = 0x29A484u;
        goto label_29a484;
    }
    ctx->pc = 0x29A47Cu;
    {
        const bool branch_taken_0x29a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a47c) {
            ctx->pc = 0x29A4B0u;
            goto label_29a4b0;
        }
    }
    ctx->pc = 0x29A484u;
label_29a484:
    // 0x29a484: 0x8e320000  lw          $s2, 0x0($s1)
    ctx->pc = 0x29a484u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29a488:
    // 0x29a488: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_29a48c:
    if (ctx->pc == 0x29A48Cu) {
        ctx->pc = 0x29A490u;
        goto label_29a490;
    }
    ctx->pc = 0x29A488u;
    {
        const bool branch_taken_0x29a488 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a488) {
            ctx->pc = 0x29A4ACu;
            goto label_29a4ac;
        }
    }
    ctx->pc = 0x29A490u;
label_29a490:
    // 0x29a490: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29a494:
    // 0x29a494: 0xc0a6998  jal         func_29A660
label_29a498:
    if (ctx->pc == 0x29A498u) {
        ctx->pc = 0x29A49Cu;
        goto label_29a49c;
    }
    ctx->pc = 0x29A494u;
    SET_GPR_U32(ctx, 31, 0x29A49Cu);
    ctx->pc = 0x29A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A660u, 0x29A494u, 0x29A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A49Cu;
label_29a49c:
    // 0x29a49c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29a4a0:
    // 0x29a4a0: 0xc119c5c  jal         func_467170
label_29a4a4:
    if (ctx->pc == 0x29A4A4u) {
        ctx->pc = 0x29A4A8u;
        goto label_29a4a8;
    }
    ctx->pc = 0x29A4A0u;
    SET_GPR_U32(ctx, 31, 0x29A4A8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x29A4A0u, 0x29A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4A8u;
label_29a4a8:
    // 0x29a4a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29a4a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a4ac:
    // 0x29a4ac: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x29a4acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_29a4b0:
    // 0x29a4b0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x29a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_29a4b4:
    // 0x29a4b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29a4b8:
    // 0x29a4b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29a4bc:
    // 0x29a4bc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29a4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29a4c0:
    // 0x29a4c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29a4c4:
    // 0x29a4c4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_29a4c8:
    // 0x29a4c8: 0xc0a6990  jal         func_29A640
label_29a4cc:
    if (ctx->pc == 0x29A4CCu) {
        ctx->pc = 0x29A4D0u;
        goto label_29a4d0;
    }
    ctx->pc = 0x29A4C8u;
    SET_GPR_U32(ctx, 31, 0x29A4D0u);
    ctx->pc = 0x29A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A640u, 0x29A4C8u, 0x29A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4D0u;
label_29a4d0:
    // 0x29a4d0: 0x1622ffec  bne         $s1, $v0, . + 4 + (-0x14 << 2)
label_29a4d4:
    if (ctx->pc == 0x29A4D4u) {
        ctx->pc = 0x29A4D8u;
        goto label_29a4d8;
    }
    ctx->pc = 0x29A4D0u;
    {
        const bool branch_taken_0x29a4d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a4d0) {
            ctx->pc = 0x29A484u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a484;
        }
    }
    ctx->pc = 0x29A4D8u;
label_29a4d8:
    // 0x29a4d8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x29a4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_29a4dc:
    // 0x29a4dc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_29a4e0:
    // 0x29a4e0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29a4e4:
    // 0x29a4e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_29a4e8:
    // 0x29a4e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29a4ec:
    // 0x29a4ec: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_29a4f0:
    // 0x29a4f0: 0xc0a694c  jal         func_29A530
label_29a4f4:
    if (ctx->pc == 0x29A4F4u) {
        ctx->pc = 0x29A4F8u;
        goto label_29a4f8;
    }
    ctx->pc = 0x29A4F0u;
    SET_GPR_U32(ctx, 31, 0x29A4F8u);
    ctx->pc = 0x29A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A530u, 0x29A4F0u, 0x29A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4F8u;
label_29a4f8:
    // 0x29a4f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29a4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29a4fc:
    // 0x29a4fc: 0x2e020003  sltiu       $v0, $s0, 0x3
    ctx->pc = 0x29a4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_29a500:
    // 0x29a500: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_29a504:
    if (ctx->pc == 0x29A504u) {
        ctx->pc = 0x29A508u;
        goto label_29a508;
    }
    ctx->pc = 0x29A500u;
    {
        const bool branch_taken_0x29a500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a500) {
            ctx->pc = 0x29A458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a458;
        }
    }
    ctx->pc = 0x29A508u;
label_29a508:
    // 0x29a508: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x29a508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29a50c:
    // 0x29a50c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29a50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29a510:
    // 0x29a510: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29a510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29a514:
    // 0x29a514: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29a518:
    // 0x29a518: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29a51c:
    // 0x29a51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29a520:
    // 0x29a520: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_29a524:
    // 0x29a524: 0x3e00008  jr          $ra
label_29a528:
    if (ctx->pc == 0x29A528u) {
        ctx->pc = 0x29A52Cu;
        goto label_29a52c;
    }
    ctx->pc = 0x29A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A52Cu;
label_29a52c:
    // 0x29a52c: 0x0  nop
    ctx->pc = 0x29a52cu;
    // NOP
    ctx->pc = 0x29a530u;
}
