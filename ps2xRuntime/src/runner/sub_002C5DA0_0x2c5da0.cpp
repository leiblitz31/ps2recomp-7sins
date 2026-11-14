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

// Function: sub_002C5DA0
// Address: 0x2c5da0 - 0x2c7260
void sub_002C5DA0_0x2c5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5DA0_0x2c5da0");
#endif

    switch (ctx->pc) {
        case 0x2c5e2cu: goto label_2c5e2c;
        case 0x2c5e40u: goto label_2c5e40;
        case 0x2c5e58u: goto label_2c5e58;
        case 0x2c5e84u: goto label_2c5e84;
        case 0x2c5e98u: goto label_2c5e98;
        case 0x2c5eacu: goto label_2c5eac;
        case 0x2c5f14u: goto label_2c5f14;
        case 0x2c5f24u: goto label_2c5f24;
        case 0x2c5f40u: goto label_2c5f40;
        case 0x2c5f54u: goto label_2c5f54;
        case 0x2c5f68u: goto label_2c5f68;
        case 0x2c5f84u: goto label_2c5f84;
        case 0x2c5f94u: goto label_2c5f94;
        case 0x2c5fb4u: goto label_2c5fb4;
        case 0x2c5fd0u: goto label_2c5fd0;
        case 0x2c5fe0u: goto label_2c5fe0;
        case 0x2c5fecu: goto label_2c5fec;
        case 0x2c5ffcu: goto label_2c5ffc;
        case 0x2c601cu: goto label_2c601c;
        case 0x2c603cu: goto label_2c603c;
        case 0x2c605cu: goto label_2c605c;
        case 0x2c6084u: goto label_2c6084;
        case 0x2c6090u: goto label_2c6090;
        case 0x2c60a0u: goto label_2c60a0;
        case 0x2c60d4u: goto label_2c60d4;
        case 0x2c60f4u: goto label_2c60f4;
        case 0x2c610cu: goto label_2c610c;
        case 0x2c6120u: goto label_2c6120;
        case 0x2c612cu: goto label_2c612c;
        case 0x2c6140u: goto label_2c6140;
        case 0x2c6164u: goto label_2c6164;
        case 0x2c6180u: goto label_2c6180;
        case 0x2c61b4u: goto label_2c61b4;
        case 0x2c61ccu: goto label_2c61cc;
        case 0x2c61dcu: goto label_2c61dc;
        case 0x2c61e8u: goto label_2c61e8;
        case 0x2c61f8u: goto label_2c61f8;
        case 0x2c621cu: goto label_2c621c;
        case 0x2c6238u: goto label_2c6238;
        case 0x2c626cu: goto label_2c626c;
        case 0x2c6288u: goto label_2c6288;
        case 0x2c629cu: goto label_2c629c;
        case 0x2c62d8u: goto label_2c62d8;
        case 0x2c6358u: goto label_2c6358;
        case 0x2c6378u: goto label_2c6378;
        case 0x2c6388u: goto label_2c6388;
        case 0x2c63a4u: goto label_2c63a4;
        case 0x2c63bcu: goto label_2c63bc;
        case 0x2c63d0u: goto label_2c63d0;
        case 0x2c63ecu: goto label_2c63ec;
        case 0x2c6420u: goto label_2c6420;
        case 0x2c6434u: goto label_2c6434;
        case 0x2c6448u: goto label_2c6448;
        case 0x2c647cu: goto label_2c647c;
        case 0x2c6494u: goto label_2c6494;
        case 0x2c64c0u: goto label_2c64c0;
        case 0x2c64ccu: goto label_2c64cc;
        case 0x2c64e0u: goto label_2c64e0;
        case 0x2c64f8u: goto label_2c64f8;
        case 0x2c650cu: goto label_2c650c;
        case 0x2c653cu: goto label_2c653c;
        case 0x2c6550u: goto label_2c6550;
        case 0x2c656cu: goto label_2c656c;
        case 0x2c6584u: goto label_2c6584;
        case 0x2c6590u: goto label_2c6590;
        case 0x2c65b0u: goto label_2c65b0;
        case 0x2c65dcu: goto label_2c65dc;
        case 0x2c6604u: goto label_2c6604;
        case 0x2c6614u: goto label_2c6614;
        case 0x2c6620u: goto label_2c6620;
        case 0x2c6630u: goto label_2c6630;
        case 0x2c6654u: goto label_2c6654;
        case 0x2c6680u: goto label_2c6680;
        case 0x2c66acu: goto label_2c66ac;
        case 0x2c66b8u: goto label_2c66b8;
        case 0x2c66c8u: goto label_2c66c8;
        case 0x2c66fcu: goto label_2c66fc;
        case 0x2c671cu: goto label_2c671c;
        case 0x2c6734u: goto label_2c6734;
        case 0x2c6744u: goto label_2c6744;
        case 0x2c6750u: goto label_2c6750;
        case 0x2c6760u: goto label_2c6760;
        case 0x2c678cu: goto label_2c678c;
        case 0x2c67b0u: goto label_2c67b0;
        case 0x2c67ecu: goto label_2c67ec;
        case 0x2c6804u: goto label_2c6804;
        case 0x2c6814u: goto label_2c6814;
        case 0x2c6820u: goto label_2c6820;
        case 0x2c6830u: goto label_2c6830;
        case 0x2c685cu: goto label_2c685c;
        case 0x2c6884u: goto label_2c6884;
        case 0x2c68b8u: goto label_2c68b8;
        case 0x2c68e0u: goto label_2c68e0;
        case 0x2c68f4u: goto label_2c68f4;
        case 0x2c6928u: goto label_2c6928;
        case 0x2c6948u: goto label_2c6948;
        case 0x2c6968u: goto label_2c6968;
        case 0x2c6978u: goto label_2c6978;
        case 0x2c69bcu: goto label_2c69bc;
        case 0x2c69e0u: goto label_2c69e0;
        case 0x2c6a00u: goto label_2c6a00;
        case 0x2c6a14u: goto label_2c6a14;
        case 0x2c6a34u: goto label_2c6a34;
        case 0x2c6a6cu: goto label_2c6a6c;
        case 0x2c6a98u: goto label_2c6a98;
        case 0x2c6ab8u: goto label_2c6ab8;
        case 0x2c6ad4u: goto label_2c6ad4;
        case 0x2c6b9cu: goto label_2c6b9c;
        case 0x2c6ba8u: goto label_2c6ba8;
        case 0x2c6bb4u: goto label_2c6bb4;
        case 0x2c6bc0u: goto label_2c6bc0;
        case 0x2c6c70u: goto label_2c6c70;
        case 0x2c6c7cu: goto label_2c6c7c;
        case 0x2c6c8cu: goto label_2c6c8c;
        case 0x2c6c98u: goto label_2c6c98;
        case 0x2c6d38u: goto label_2c6d38;
        case 0x2c6d44u: goto label_2c6d44;
        case 0x2c6d54u: goto label_2c6d54;
        case 0x2c6d60u: goto label_2c6d60;
        case 0x2c6e0cu: goto label_2c6e0c;
        case 0x2c6e18u: goto label_2c6e18;
        case 0x2c6e24u: goto label_2c6e24;
        case 0x2c6e30u: goto label_2c6e30;
        case 0x2c6e48u: goto label_2c6e48;
        case 0x2c6ef4u: goto label_2c6ef4;
        case 0x2c6f10u: goto label_2c6f10;
        case 0x2c6f2cu: goto label_2c6f2c;
        case 0x2c6f4cu: goto label_2c6f4c;
        case 0x2c6f64u: goto label_2c6f64;
        case 0x2c6f78u: goto label_2c6f78;
        case 0x2c6f98u: goto label_2c6f98;
        case 0x2c6fb0u: goto label_2c6fb0;
        case 0x2c6fc0u: goto label_2c6fc0;
        case 0x2c6fd0u: goto label_2c6fd0;
        case 0x2c6ff4u: goto label_2c6ff4;
        case 0x2c7024u: goto label_2c7024;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c706cu: goto label_2c706c;
        case 0x2c70c0u: goto label_2c70c0;
        case 0x2c70ecu: goto label_2c70ec;
        case 0x2c7100u: goto label_2c7100;
        case 0x2c711cu: goto label_2c711c;
        case 0x2c7140u: goto label_2c7140;
        case 0x2c7180u: goto label_2c7180;
        case 0x2c71a4u: goto label_2c71a4;
        case 0x2c71c4u: goto label_2c71c4;
        case 0x2c71f8u: goto label_2c71f8;
        case 0x2c7208u: goto label_2c7208;
        case 0x2c7224u: goto label_2c7224;
        default: break;
    }

    ctx->pc = 0x2c5da0u;

    // 0x2c5da0: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x2c5da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
    // 0x2c5da4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2c5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2c5da8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2c5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2c5dac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2c5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2c5db0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c5db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2c5db4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c5db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c5db8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2c5db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2c5dbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5dc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c5dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c5dc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c5dc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5dcc: 0xafa40290  sw          $a0, 0x290($sp)
    ctx->pc = 0x2c5dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 4));
    // 0x2c5dd0: 0xafa502a0  sw          $a1, 0x2A0($sp)
    ctx->pc = 0x2c5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 5));
    // 0x2c5dd4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2c5dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5dd8: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x2c5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
    // 0x2c5ddc: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x2c5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c5de0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c5de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2c5de4: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5DE4u;
    {
        const bool branch_taken_0x2c5de4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5de4) {
            ctx->pc = 0x2C5E04u;
            goto label_2c5e04;
        }
    }
    ctx->pc = 0x2C5DECu;
    // 0x2c5dec: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x2c5decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c5df0: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x2c5df0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c5df4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2c5df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c5df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5dfc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5DFCu;
    {
        const bool branch_taken_0x2c5dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5dfc) {
            ctx->pc = 0x2C5E10u;
            goto label_2c5e10;
        }
    }
    ctx->pc = 0x2C5E04u;
label_2c5e04:
    // 0x2c5e04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c5e08: 0x10000507  b           . + 4 + (0x507 << 2)
    ctx->pc = 0x2C5E08u;
    {
        const bool branch_taken_0x2c5e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5e08) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C5E10u;
label_2c5e10:
    // 0x2c5e10: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c5e14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c5e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c5e18: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2c5e18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c5e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e20: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c5e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c5e24: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C5E24u;
    SET_GPR_U32(ctx, 31, 0x2C5E2Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C5E24u, 0x2C5E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E2Cu;
label_2c5e2c:
    // 0x2c5e2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c5e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c5e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e34: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c5e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c5e38: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C5E38u;
    SET_GPR_U32(ctx, 31, 0x2C5E40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C5E38u, 0x2C5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E40u;
label_2c5e40:
    // 0x2c5e40: 0xafa2027c  sw          $v0, 0x27C($sp)
    ctx->pc = 0x2c5e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
    // 0x2c5e44: 0x27a501a8  addiu       $a1, $sp, 0x1A8
    ctx->pc = 0x2c5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x2c5e48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c5e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e4c: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x2c5e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x2c5e50: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C5E50u;
    SET_GPR_U32(ctx, 31, 0x2C5E58u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C5E50u, 0x2C5E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E58u;
label_2c5e58:
    // 0x2c5e58: 0x27a301a8  addiu       $v1, $sp, 0x1A8
    ctx->pc = 0x2c5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 424));
    // 0x2c5e5c: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x2c5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
    // 0x2c5e60: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c5e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5e64: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c5e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5e68: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c5e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5e6c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c5e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c5e70: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c5e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c5e74: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c5e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c5e78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e7c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C5E7Cu;
    SET_GPR_U32(ctx, 31, 0x2C5E84u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C5E7Cu, 0x2C5E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E84u;
label_2c5e84:
    // 0x2c5e84: 0x10020015  beq         $zero, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C5E84u;
    {
        const bool branch_taken_0x2c5e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5e84) {
            ctx->pc = 0x2C5EDCu;
            goto label_2c5edc;
        }
    }
    ctx->pc = 0x2C5E8Cu;
    // 0x2c5e8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5e90: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C5E90u;
    SET_GPR_U32(ctx, 31, 0x2C5E98u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C5E90u, 0x2C5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5E98u;
label_2c5e98:
    // 0x2c5e98: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2c5e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2c5e9c: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x2c5e9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c5ea0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c5ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c5ea4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C5EA4u;
    SET_GPR_U32(ctx, 31, 0x2C5EACu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C5EA4u, 0x2C5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5EACu;
label_2c5eac:
    // 0x2c5eac: 0xafa20278  sw          $v0, 0x278($sp)
    ctx->pc = 0x2c5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
    // 0x2c5eb0: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x2c5eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2c5eb4: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x2c5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x2c5eb8: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x2c5eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x2c5ebc: 0x9044007c  lbu         $a0, 0x7C($v0)
    ctx->pc = 0x2c5ebcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x2c5ec0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c5ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c5ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ec8: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C5EC8u;
    {
        const bool branch_taken_0x2c5ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5ec8) {
            ctx->pc = 0x2C5EFCu;
            goto label_2c5efc;
        }
    }
    ctx->pc = 0x2C5ED0u;
    // 0x2c5ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ed4: 0x100004d4  b           . + 4 + (0x4D4 << 2)
    ctx->pc = 0x2C5ED4u;
    {
        const bool branch_taken_0x2c5ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ed4) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C5EDCu;
label_2c5edc:
    // 0x2c5edc: 0x9244007c  lbu         $a0, 0x7C($s2)
    ctx->pc = 0x2c5edcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x2c5ee0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c5ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c5ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5ee8: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5EE8u;
    {
        const bool branch_taken_0x2c5ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c5ee8) {
            ctx->pc = 0x2C5EFCu;
            goto label_2c5efc;
        }
    }
    ctx->pc = 0x2C5EF0u;
    // 0x2c5ef0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c5ef0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ef4: 0x100004cc  b           . + 4 + (0x4CC << 2)
    ctx->pc = 0x2C5EF4u;
    {
        const bool branch_taken_0x2c5ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ef4) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C5EFCu;
label_2c5efc:
    // 0x2c5efc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5f00: 0x0  nop
    ctx->pc = 0x2c5f00u;
    // NOP
    // 0x2c5f04: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x2c5f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x2c5f08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f0c: 0xc096814  jal         func_25A050
    ctx->pc = 0x2C5F0Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F14u);
    ctx->pc = 0x25A050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A050u, 0x2C5F0Cu, 0x2C5F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F14u;
label_2c5f14:
    // 0x2c5f14: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x2c5f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x2c5f18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c5f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f1c: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C5F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F24u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C5F1Cu, 0x2C5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F24u;
label_2c5f24:
    // 0x2c5f24: 0x1002018e  beq         $zero, $v0, . + 4 + (0x18E << 2)
    ctx->pc = 0x2C5F24u;
    {
        const bool branch_taken_0x2c5f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c5f24) {
            ctx->pc = 0x2C6560u;
            goto label_2c6560;
        }
    }
    ctx->pc = 0x2C5F2Cu;
    // 0x2c5f2c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c5f2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f30: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2c5f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c5f34: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c5f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f38: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2C5F38u;
    SET_GPR_U32(ctx, 31, 0x2C5F40u);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2C5F38u, 0x2C5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F40u;
label_2c5f40:
    // 0x2c5f40: 0x144004b8  bnez        $v0, . + 4 + (0x4B8 << 2)
    ctx->pc = 0x2C5F40u;
    {
        const bool branch_taken_0x2c5f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5f40) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C5F48u;
    // 0x2c5f48: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c5f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c5f4c: 0xc0afd1c  jal         func_2BF470
    ctx->pc = 0x2C5F4Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F54u);
    ctx->pc = 0x2BF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF470u, 0x2C5F4Cu, 0x2C5F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F54u;
label_2c5f54:
    // 0x2c5f54: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2c5f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2c5f58: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2c5f58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c5f5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c5f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f60: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x2C5F60u;
    SET_GPR_U32(ctx, 31, 0x2C5F68u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x2C5F60u, 0x2C5F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F68u;
label_2c5f68:
    // 0x2c5f68: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x2c5f68u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c5f6c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x2c5f6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c5f70: 0x102004ac  beqz        $at, . + 4 + (0x4AC << 2)
    ctx->pc = 0x2C5F70u;
    {
        const bool branch_taken_0x2c5f70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5f70) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C5F78u;
    // 0x2c5f78: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c5f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c5f7c: 0xc0afd1c  jal         func_2BF470
    ctx->pc = 0x2C5F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F84u);
    ctx->pc = 0x2BF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF470u, 0x2C5F7Cu, 0x2C5F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F84u;
label_2c5f84:
    // 0x2c5f84: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2c5f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c5f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5f8c: 0xc09ac70  jal         func_26B1C0
    ctx->pc = 0x2C5F8Cu;
    SET_GPR_U32(ctx, 31, 0x2C5F94u);
    ctx->pc = 0x26B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1C0u, 0x2C5F8Cu, 0x2C5F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5F94u;
label_2c5f94:
    // 0x2c5f94: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2c5f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2c5f98: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2c5f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c5f9c: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x2c5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
    // 0x2c5fa0: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x2c5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x2c5fa4: 0x8c950004  lw          $s5, 0x4($a0)
    ctx->pc = 0x2c5fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c5fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c5fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fac: 0xc048094  jal         func_120250
    ctx->pc = 0x2C5FACu;
    SET_GPR_U32(ctx, 31, 0x2C5FB4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C5FACu, 0x2C5FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FB4u;
label_2c5fb4:
    // 0x2c5fb4: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x2c5fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    // 0x2c5fb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c5fb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5fbc: 0x0  nop
    ctx->pc = 0x2c5fbcu;
    // NOP
    // 0x2c5fc0: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x2c5fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
    // 0x2c5fc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c5fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fc8: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2C5FC8u;
    SET_GPR_U32(ctx, 31, 0x2C5FD0u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2C5FC8u, 0x2C5FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FD0u;
label_2c5fd0:
    // 0x2c5fd0: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x2c5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x2c5fd4: 0x8fa40260  lw          $a0, 0x260($sp)
    ctx->pc = 0x2c5fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c5fd8: 0xc041a60  jal         func_106980
    ctx->pc = 0x2C5FD8u;
    SET_GPR_U32(ctx, 31, 0x2C5FE0u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2C5FD8u, 0x2C5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FE0u;
label_2c5fe0:
    // 0x2c5fe0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c5fe0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5fe4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C5FE4u;
    {
        const bool branch_taken_0x2c5fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5fe4) {
            ctx->pc = 0x2C604Cu;
            goto label_2c604c;
        }
    }
    ctx->pc = 0x2C5FECu;
label_2c5fec:
    // 0x2c5fec: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x2c5fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c5ff0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c5ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5ff4: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2C5FF4u;
    SET_GPR_U32(ctx, 31, 0x2C5FFCu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2C5FF4u, 0x2C5FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5FFCu;
label_2c5ffc:
    // 0x2c5ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6000: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C6000u;
    {
        const bool branch_taken_0x2c6000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6000) {
            ctx->pc = 0x2C6048u;
            goto label_2c6048;
        }
    }
    ctx->pc = 0x2C6008u;
    // 0x2c6008: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2c6008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c600c: 0x24050483  addiu       $a1, $zero, 0x483
    ctx->pc = 0x2c600cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
    // 0x2c6010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6014: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2C6014u;
    SET_GPR_U32(ctx, 31, 0x2C601Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2C6014u, 0x2C601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C601Cu;
label_2c601c:
    // 0x2c601c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2c601cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c6020: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6020u;
    {
        const bool branch_taken_0x2c6020 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6020) {
            ctx->pc = 0x2C6048u;
            goto label_2c6048;
        }
    }
    ctx->pc = 0x2C6028u;
    // 0x2c6028: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c6028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c602c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x2c602cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2c6030: 0x24050499  addiu       $a1, $zero, 0x499
    ctx->pc = 0x2c6030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
    // 0x2c6034: 0xc042090  jal         func_108240
    ctx->pc = 0x2C6034u;
    SET_GPR_U32(ctx, 31, 0x2C603Cu);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2C6034u, 0x2C603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C603Cu;
label_2c603c:
    // 0x2c603c: 0xc7a10264  lwc1        $f1, 0x264($sp)
    ctx->pc = 0x2c603cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6040: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6044: 0xe7a00264  swc1        $f0, 0x264($sp)
    ctx->pc = 0x2c6044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_2c6048:
    // 0x2c6048: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x2c6048u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2c604c:
    // 0x2c604c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2c604cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x2c6050: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6054: 0xc041a14  jal         func_106850
    ctx->pc = 0x2C6054u;
    SET_GPR_U32(ctx, 31, 0x2C605Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2C6054u, 0x2C605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C605Cu;
label_2c605c:
    // 0x2c605c: 0x17c2ffe3  bne         $fp, $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C605Cu;
    {
        const bool branch_taken_0x2c605c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c605c) {
            ctx->pc = 0x2C5FECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c5fec;
        }
    }
    ctx->pc = 0x2C6064u;
    // 0x2c6064: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c6064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6068: 0xc7a00264  lwc1        $f0, 0x264($sp)
    ctx->pc = 0x2c6068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c606c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c606cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6070: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2C6070u;
    {
        const bool branch_taken_0x2c6070 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6070) {
            ctx->pc = 0x2C60E8u;
            goto label_2c60e8;
        }
    }
    ctx->pc = 0x2C6078u;
    // 0x2c6078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c607c: 0xc05ce40  jal         func_173900
    ctx->pc = 0x2C607Cu;
    SET_GPR_U32(ctx, 31, 0x2C6084u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2C607Cu, 0x2C6084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6084u;
label_2c6084:
    // 0x2c6084: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6088: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2C6088u;
    SET_GPR_U32(ctx, 31, 0x2C6090u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C6088u, 0x2C6090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6090u;
label_2c6090:
    // 0x2c6090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6094: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c6094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c6098: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C6098u;
    SET_GPR_U32(ctx, 31, 0x2C60A0u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C6098u, 0x2C60A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60A0u;
label_2c60a0:
    // 0x2c60a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c60a4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c60a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c60a8: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x2c60a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
    // 0x2c60ac: 0xc7a1025c  lwc1        $f1, 0x25C($sp)
    ctx->pc = 0x2c60acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c60b0: 0xc7a00264  lwc1        $f0, 0x264($sp)
    ctx->pc = 0x2c60b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c60b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c60b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c60b8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C60B8u;
    {
        const bool branch_taken_0x2c60b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c60b8) {
            ctx->pc = 0x2C60E8u;
            goto label_2c60e8;
        }
    }
    ctx->pc = 0x2C60C0u;
    // 0x2c60c0: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2c60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c60c4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c60c8: 0x24a5e170  addiu       $a1, $a1, -0x1E90
    ctx->pc = 0x2c60c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959472));
    // 0x2c60cc: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C60CCu;
    SET_GPR_U32(ctx, 31, 0x2C60D4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C60CCu, 0x2C60D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60D4u;
label_2c60d4:
    // 0x2c60d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c60d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c60d8: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x2c60d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c60dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c60dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60e0: 0x10000451  b           . + 4 + (0x451 << 2)
    ctx->pc = 0x2C60E0u;
    {
        const bool branch_taken_0x2c60e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c60e0) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C60E8u;
label_2c60e8:
    // 0x2c60e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c60e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60ec: 0xc096e88  jal         func_25BA20
    ctx->pc = 0x2C60ECu;
    SET_GPR_U32(ctx, 31, 0x2C60F4u);
    ctx->pc = 0x25BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA20u, 0x2C60ECu, 0x2C60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60F4u;
label_2c60f4:
    // 0x2c60f4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2c60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c60f8: 0x1444005f  bne         $v0, $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2C60F8u;
    {
        const bool branch_taken_0x2c60f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c60f8) {
            ctx->pc = 0x2C6278u;
            goto label_2c6278;
        }
    }
    ctx->pc = 0x2C6100u;
    // 0x2c6100: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c6100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6104: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2C6104u;
    SET_GPR_U32(ctx, 31, 0x2C610Cu);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2C6104u, 0x2C610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C610Cu;
label_2c610c:
    // 0x2c610c: 0xafa20258  sw          $v0, 0x258($sp)
    ctx->pc = 0x2c610cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 2));
    // 0x2c6110: 0x8fa60258  lw          $a2, 0x258($sp)
    ctx->pc = 0x2c6110u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2c6114: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c6114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6118: 0xc041a60  jal         func_106980
    ctx->pc = 0x2C6118u;
    SET_GPR_U32(ctx, 31, 0x2C6120u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2C6118u, 0x2C6120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6120u;
label_2c6120:
    // 0x2c6120: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x2c6120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x2c6124: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2C6124u;
    {
        const bool branch_taken_0x2c6124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6124) {
            ctx->pc = 0x2C61A0u;
            goto label_2c61a0;
        }
    }
    ctx->pc = 0x2C612Cu;
label_2c612c:
    // 0x2c612c: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x2c612cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2c6130: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c6130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6134: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6138: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2C6138u;
    SET_GPR_U32(ctx, 31, 0x2C6140u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2C6138u, 0x2C6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6140u;
label_2c6140:
    // 0x2c6140: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2c6140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2c6144: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C6144u;
    {
        const bool branch_taken_0x2c6144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c6144) {
            ctx->pc = 0x2C6194u;
            goto label_2c6194;
        }
    }
    ctx->pc = 0x2C614Cu;
    // 0x2c614c: 0x8fa50254  lw          $a1, 0x254($sp)
    ctx->pc = 0x2c614cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2c6150: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2c6150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2c6154: 0x2785a4d0  addiu       $a1, $gp, -0x5B30
    ctx->pc = 0x2c6154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943952));
    // 0x2c6158: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c6158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c615c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2C615Cu;
    SET_GPR_U32(ctx, 31, 0x2C6164u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2C615Cu, 0x2C6164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6164u;
label_2c6164:
    // 0x2c6164: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C6164u;
    {
        const bool branch_taken_0x2c6164 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c6164) {
            ctx->pc = 0x2C6194u;
            goto label_2c6194;
        }
    }
    ctx->pc = 0x2C616Cu;
    // 0x2c616c: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2c616cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c6170: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c6170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c6174: 0x24a5e188  addiu       $a1, $a1, -0x1E78
    ctx->pc = 0x2c6174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959496));
    // 0x2c6178: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C6178u;
    SET_GPR_U32(ctx, 31, 0x2C6180u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C6178u, 0x2C6180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6180u;
label_2c6180:
    // 0x2c6180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6184: 0xa243007c  sb          $v1, 0x7C($s2)
    ctx->pc = 0x2c6184u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c618c: 0x10000426  b           . + 4 + (0x426 << 2)
    ctx->pc = 0x2C618Cu;
    {
        const bool branch_taken_0x2c618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c618c) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C6194u;
label_2c6194:
    // 0x2c6194: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x2c6194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2c6198: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c619c: 0xafa40254  sw          $a0, 0x254($sp)
    ctx->pc = 0x2c619cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 4));
label_2c61a0:
    // 0x2c61a0: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x2c61a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2c61a4: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2c61a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2c61a8: 0x8fa40258  lw          $a0, 0x258($sp)
    ctx->pc = 0x2c61a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x2c61ac: 0xc041a14  jal         func_106850
    ctx->pc = 0x2C61ACu;
    SET_GPR_U32(ctx, 31, 0x2C61B4u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2C61ACu, 0x2C61B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61B4u;
label_2c61b4:
    // 0x2c61b4: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2c61b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c61b8: 0x1462ffdc  bne         $v1, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x2C61B8u;
    {
        const bool branch_taken_0x2c61b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c61b8) {
            ctx->pc = 0x2C612Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c612c;
        }
    }
    ctx->pc = 0x2C61C0u;
    // 0x2c61c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c61c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c61c4: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x2C61C4u;
    SET_GPR_U32(ctx, 31, 0x2C61CCu);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2C61C4u, 0x2C61CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61CCu;
label_2c61cc:
    // 0x2c61cc: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x2c61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x2c61d0: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2c61d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c61d4: 0xc041a60  jal         func_106980
    ctx->pc = 0x2C61D4u;
    SET_GPR_U32(ctx, 31, 0x2C61DCu);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2C61D4u, 0x2C61DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61DCu;
label_2c61dc:
    // 0x2c61dc: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x2c61dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    // 0x2c61e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C61E0u;
    {
        const bool branch_taken_0x2c61e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c61e0) {
            ctx->pc = 0x2C6258u;
            goto label_2c6258;
        }
    }
    ctx->pc = 0x2C61E8u;
label_2c61e8:
    // 0x2c61e8: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x2c61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2c61ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c61f0: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2C61F0u;
    SET_GPR_U32(ctx, 31, 0x2C61F8u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2C61F0u, 0x2C61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61F8u;
label_2c61f8:
    // 0x2c61f8: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2c61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2c61fc: 0x14440013  bne         $v0, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C61FCu;
    {
        const bool branch_taken_0x2c61fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c61fc) {
            ctx->pc = 0x2C624Cu;
            goto label_2c624c;
        }
    }
    ctx->pc = 0x2C6204u;
    // 0x2c6204: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x2c6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2c6208: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c6208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c620c: 0x2785a4d0  addiu       $a1, $gp, -0x5B30
    ctx->pc = 0x2c620cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943952));
    // 0x2c6210: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c6210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6214: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2C6214u;
    SET_GPR_U32(ctx, 31, 0x2C621Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2C6214u, 0x2C621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C621Cu;
label_2c621c:
    // 0x2c621c: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2C621Cu;
    {
        const bool branch_taken_0x2c621c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c621c) {
            ctx->pc = 0x2C624Cu;
            goto label_2c624c;
        }
    }
    ctx->pc = 0x2C6224u;
    // 0x2c6224: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2c6224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c6228: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c6228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c622c: 0x24a5e188  addiu       $a1, $a1, -0x1E78
    ctx->pc = 0x2c622cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959496));
    // 0x2c6230: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C6230u;
    SET_GPR_U32(ctx, 31, 0x2C6238u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C6230u, 0x2C6238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6238u;
label_2c6238:
    // 0x2c6238: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c623c: 0xa244007c  sb          $a0, 0x7C($s2)
    ctx->pc = 0x2c623cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6240: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6244: 0x100003f8  b           . + 4 + (0x3F8 << 2)
    ctx->pc = 0x2C6244u;
    {
        const bool branch_taken_0x2c6244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6244) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C624Cu;
label_2c624c:
    // 0x2c624c: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x2c624cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2c6250: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c6250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c6254: 0xafa2024c  sw          $v0, 0x24C($sp)
    ctx->pc = 0x2c6254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
label_2c6258:
    // 0x2c6258: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x2c6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2c625c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2c6260: 0x8fa40250  lw          $a0, 0x250($sp)
    ctx->pc = 0x2c6260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2c6264: 0xc041a14  jal         func_106850
    ctx->pc = 0x2C6264u;
    SET_GPR_U32(ctx, 31, 0x2C626Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2C6264u, 0x2C626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C626Cu;
label_2c626c:
    // 0x2c626c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2c626cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c6270: 0x1462ffdd  bne         $v1, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x2C6270u;
    {
        const bool branch_taken_0x2c6270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6270) {
            ctx->pc = 0x2C61E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c61e8;
        }
    }
    ctx->pc = 0x2C6278u;
label_2c6278:
    // 0x2c6278: 0xa3a0028f  sb          $zero, 0x28F($sp)
    ctx->pc = 0x2c6278u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 655), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c627c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c627cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6280: 0xc048094  jal         func_120250
    ctx->pc = 0x2C6280u;
    SET_GPR_U32(ctx, 31, 0x2C6288u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C6280u, 0x2C6288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6288u;
label_2c6288:
    // 0x2c6288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c628c: 0x24050553  addiu       $a1, $zero, 0x553
    ctx->pc = 0x2c628cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
    // 0x2c6290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6294: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2C6294u;
    SET_GPR_U32(ctx, 31, 0x2C629Cu);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2C6294u, 0x2C629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C629Cu;
label_2c629c:
    // 0x2c629c: 0xa3a2028e  sb          $v0, 0x28E($sp)
    ctx->pc = 0x2c629cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 654), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c62a0: 0x93a2028e  lbu         $v0, 0x28E($sp)
    ctx->pc = 0x2c62a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 654)));
    // 0x2c62a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2c62a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c62a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c62a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c62ac: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C62ACu;
    {
        const bool branch_taken_0x2c62ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c62ac) {
            ctx->pc = 0x2C62CCu;
            goto label_2c62cc;
        }
    }
    ctx->pc = 0x2C62B4u;
    // 0x2c62b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x2c62b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x2c62b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c62b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c62bc: 0x0  nop
    ctx->pc = 0x2c62bcu;
    // NOP
    // 0x2c62c0: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x2c62c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x2c62c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C62C4u;
    {
        const bool branch_taken_0x2c62c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c62c4) {
            ctx->pc = 0x2C62F4u;
            goto label_2c62f4;
        }
    }
    ctx->pc = 0x2C62CCu;
label_2c62cc:
    // 0x2c62cc: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c62ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c62d0: 0xc0b0874  jal         func_2C21D0
    ctx->pc = 0x2C62D0u;
    SET_GPR_U32(ctx, 31, 0x2C62D8u);
    ctx->pc = 0x2C21D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C21D0u, 0x2C62D0u, 0x2C62D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C62D8u;
label_2c62d8:
    // 0x2c62d8: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x2c62d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x2c62dc: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x2c62dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c62e0: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2c62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2c62e4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C62E4u;
    {
        const bool branch_taken_0x2c62e4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2c62e4) {
            ctx->pc = 0x2C62F4u;
            goto label_2c62f4;
        }
    }
    ctx->pc = 0x2C62ECu;
    // 0x2c62ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c62ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c62f0: 0xa3a2028f  sb          $v0, 0x28F($sp)
    ctx->pc = 0x2c62f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 655), (uint8_t)GPR_U32(ctx, 2));
label_2c62f4:
    // 0x2c62f4: 0xa3a0028d  sb          $zero, 0x28D($sp)
    ctx->pc = 0x2c62f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 653), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c62f8: 0xc7a10274  lwc1        $f1, 0x274($sp)
    ctx->pc = 0x2c62f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c62fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c62fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6300: 0x0  nop
    ctx->pc = 0x2c6300u;
    // NOP
    // 0x2c6304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6308: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c630c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C630Cu;
    {
        const bool branch_taken_0x2c630c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c630c) {
            ctx->pc = 0x2C6318u;
            goto label_2c6318;
        }
    }
    ctx->pc = 0x2C6314u;
    // 0x2c6314: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2c6314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6318:
    // 0x2c6318: 0xa3a4028c  sb          $a0, 0x28C($sp)
    ctx->pc = 0x2c6318u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 652), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c631c: 0x93a5028c  lbu         $a1, 0x28C($sp)
    ctx->pc = 0x2c631cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2c6320: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x2c6320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2c6324: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6328: 0x14440037  bne         $v0, $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2C6328u;
    {
        const bool branch_taken_0x2c6328 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c6328) {
            ctx->pc = 0x2C6408u;
            goto label_2c6408;
        }
    }
    ctx->pc = 0x2C6330u;
    // 0x2c6330: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x2c6330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c6334: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2c6334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2c6338: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x2c6338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c633c: 0x1480003d  bnez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C633Cu;
    {
        const bool branch_taken_0x2c633c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c633c) {
            ctx->pc = 0x2C6434u;
            goto label_2c6434;
        }
    }
    ctx->pc = 0x2C6344u;
    // 0x2c6344: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x2c6344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c6348: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c634c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c634cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6350: 0xc0b0978  jal         func_2C25E0
    ctx->pc = 0x2C6350u;
    SET_GPR_U32(ctx, 31, 0x2C6358u);
    ctx->pc = 0x2C25E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C25E0u, 0x2C6350u, 0x2C6358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6358u;
label_2c6358:
    // 0x2c6358: 0x14400036  bnez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x2C6358u;
    {
        const bool branch_taken_0x2c6358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6358) {
            ctx->pc = 0x2C6434u;
            goto label_2c6434;
        }
    }
    ctx->pc = 0x2C6360u;
    // 0x2c6360: 0xa3a0028c  sb          $zero, 0x28C($sp)
    ctx->pc = 0x2c6360u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 652), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6364: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6368: 0xa3a4028d  sb          $a0, 0x28D($sp)
    ctx->pc = 0x2c6368u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 653), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c636c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c636cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6370: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C6370u;
    SET_GPR_U32(ctx, 31, 0x2C6378u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C6370u, 0x2C6378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6378u;
label_2c6378:
    // 0x2c6378: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c637c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c637cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c6380: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C6380u;
    SET_GPR_U32(ctx, 31, 0x2C6388u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C6380u, 0x2C6388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6388u;
label_2c6388:
    // 0x2c6388: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x2c6388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x2c638c: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x2c638cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2c6390: 0x10050028  beq         $zero, $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2C6390u;
    {
        const bool branch_taken_0x2c6390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c6390) {
            ctx->pc = 0x2C6434u;
            goto label_2c6434;
        }
    }
    ctx->pc = 0x2C6398u;
    // 0x2c6398: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c6398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c639c: 0xc048094  jal         func_120250
    ctx->pc = 0x2C639Cu;
    SET_GPR_U32(ctx, 31, 0x2C63A4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C639Cu, 0x2C63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63A4u;
label_2c63a4:
    // 0x2c63a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c63a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63a8: 0x24050475  addiu       $a1, $zero, 0x475
    ctx->pc = 0x2c63a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1141));
    // 0x2c63ac: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2c63acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2c63b0: 0x24c6e1a0  addiu       $a2, $a2, -0x1E60
    ctx->pc = 0x2c63b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959520));
    // 0x2c63b4: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C63B4u;
    SET_GPR_U32(ctx, 31, 0x2C63BCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C63B4u, 0x2C63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63BCu;
label_2c63bc:
    // 0x2c63bc: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x2c63bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2c63c0: 0x24a40070  addiu       $a0, $a1, 0x70
    ctx->pc = 0x2c63c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x2c63c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c63c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63c8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C63C8u;
    SET_GPR_U32(ctx, 31, 0x2C63D0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C63C8u, 0x2C63D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63D0u;
label_2c63d0:
    // 0x2c63d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c63d4: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x2c63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2c63d8: 0xa082007c  sb          $v0, 0x7C($a0)
    ctx->pc = 0x2c63d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c63dc: 0x8fa40248  lw          $a0, 0x248($sp)
    ctx->pc = 0x2c63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2c63e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c63e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c63e4: 0xc096eac  jal         func_25BAB0
    ctx->pc = 0x2C63E4u;
    SET_GPR_U32(ctx, 31, 0x2C63ECu);
    ctx->pc = 0x25BAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BAB0u, 0x2C63E4u, 0x2C63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C63ECu;
label_2c63ec:
    // 0x2c63ec: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x2c63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x2c63f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c63f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c63f4: 0x0  nop
    ctx->pc = 0x2c63f4u;
    // NOP
    // 0x2c63f8: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x2c63f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
    // 0x2c63fc: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x2c63fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x2c6400: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2C6400u;
    {
        const bool branch_taken_0x2c6400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6400) {
            ctx->pc = 0x2C6434u;
            goto label_2c6434;
        }
    }
    ctx->pc = 0x2C6408u;
label_2c6408:
    // 0x2c6408: 0x93a4028f  lbu         $a0, 0x28F($sp)
    ctx->pc = 0x2c6408u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 655)));
    // 0x2c640c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C640Cu;
    {
        const bool branch_taken_0x2c640c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c640c) {
            ctx->pc = 0x2C6434u;
            goto label_2c6434;
        }
    }
    ctx->pc = 0x2C6414u;
    // 0x2c6414: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c6414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6418: 0xc048094  jal         func_120250
    ctx->pc = 0x2C6418u;
    SET_GPR_U32(ctx, 31, 0x2C6420u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C6418u, 0x2C6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6420u;
label_2c6420:
    // 0x2c6420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6424: 0x2405052e  addiu       $a1, $zero, 0x52E
    ctx->pc = 0x2c6424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1326));
    // 0x2c6428: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c6428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c642c: 0xc041b54  jal         func_106D50
    ctx->pc = 0x2C642Cu;
    SET_GPR_U32(ctx, 31, 0x2C6434u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x2C642Cu, 0x2C6434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6434u;
label_2c6434:
    // 0x2c6434: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c6434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c6438: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c6438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c643c: 0x93a6028c  lbu         $a2, 0x28C($sp)
    ctx->pc = 0x2c643cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2c6440: 0xc0b1c98  jal         func_2C7260
    ctx->pc = 0x2C6440u;
    SET_GPR_U32(ctx, 31, 0x2C6448u);
    ctx->pc = 0x2C7260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7260u, 0x2C6440u, 0x2C6448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6448u;
label_2c6448:
    // 0x2c6448: 0x93a3028d  lbu         $v1, 0x28D($sp)
    ctx->pc = 0x2c6448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 653)));
    // 0x2c644c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C644Cu;
    {
        const bool branch_taken_0x2c644c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c644c) {
            ctx->pc = 0x2C64E0u;
            goto label_2c64e0;
        }
    }
    ctx->pc = 0x2C6454u;
    // 0x2c6454: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c6454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c6458: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c6458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c645c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2c645cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2c6460: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2c6460u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x2c6464: 0x24c6e1b0  addiu       $a2, $a2, -0x1E50
    ctx->pc = 0x2c6464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959536));
    // 0x2c6468: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c6468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c646c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6470: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c6470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6474: 0xc08f558  jal         func_23D560
    ctx->pc = 0x2C6474u;
    SET_GPR_U32(ctx, 31, 0x2C647Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2C6474u, 0x2C647Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C647Cu;
label_2c647c:
    // 0x2c647c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c647cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6480: 0x8fa5026c  lw          $a1, 0x26C($sp)
    ctx->pc = 0x2c6480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x2c6484: 0x93a6028c  lbu         $a2, 0x28C($sp)
    ctx->pc = 0x2c6484u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2c6488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c6488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c648c: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C648Cu;
    SET_GPR_U32(ctx, 31, 0x2C6494u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C648Cu, 0x2C6494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6494u;
label_2c6494:
    // 0x2c6494: 0x93a4028c  lbu         $a0, 0x28C($sp)
    ctx->pc = 0x2c6494u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2c6498: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2c6498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2c649c: 0xafa50280  sw          $a1, 0x280($sp)
    ctx->pc = 0x2c649cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 5));
    // 0x2c64a0: 0x93a7028c  lbu         $a3, 0x28C($sp)
    ctx->pc = 0x2c64a0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x2c64a4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C64A4u;
    {
        const bool branch_taken_0x2c64a4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c64a4) {
            ctx->pc = 0x2C64C0u;
            goto label_2c64c0;
        }
    }
    ctx->pc = 0x2C64ACu;
    // 0x2c64ac: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c64acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c64b0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c64b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64b4: 0x8fa6026c  lw          $a2, 0x26C($sp)
    ctx->pc = 0x2c64b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x2c64b8: 0xc0b06d0  jal         func_2C1B40
    ctx->pc = 0x2C64B8u;
    SET_GPR_U32(ctx, 31, 0x2C64C0u);
    ctx->pc = 0x2C1B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B40u, 0x2C64B8u, 0x2C64C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64C0u;
label_2c64c0:
    // 0x2c64c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c64c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64c4: 0xc048094  jal         func_120250
    ctx->pc = 0x2C64C4u;
    SET_GPR_U32(ctx, 31, 0x2C64CCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C64C4u, 0x2C64CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64CCu;
label_2c64cc:
    // 0x2c64cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c64ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64d0: 0x2405052e  addiu       $a1, $zero, 0x52E
    ctx->pc = 0x2c64d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1326));
    // 0x2c64d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c64d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64d8: 0xc041b54  jal         func_106D50
    ctx->pc = 0x2C64D8u;
    SET_GPR_U32(ctx, 31, 0x2C64E0u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x2C64D8u, 0x2C64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64E0u;
label_2c64e0:
    // 0x2c64e0: 0xa3a00287  sb          $zero, 0x287($sp)
    ctx->pc = 0x2c64e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 647), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c64e4: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2C64E4u;
    {
        const bool branch_taken_0x2c64e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c64e4) {
            ctx->pc = 0x2C6520u;
            goto label_2c6520;
        }
    }
    ctx->pc = 0x2C64ECu;
    // 0x2c64ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c64ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64f0: 0xc048094  jal         func_120250
    ctx->pc = 0x2C64F0u;
    SET_GPR_U32(ctx, 31, 0x2C64F8u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C64F0u, 0x2C64F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C64F8u;
label_2c64f8:
    // 0x2c64f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c64f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c64fc: 0x2405047f  addiu       $a1, $zero, 0x47F
    ctx->pc = 0x2c64fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1151));
    // 0x2c6500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c6500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6504: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x2C6504u;
    SET_GPR_U32(ctx, 31, 0x2C650Cu);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x2C6504u, 0x2C650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C650Cu;
label_2c650c:
    // 0x2c650c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6510: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6510u;
    {
        const bool branch_taken_0x2c6510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c6510) {
            ctx->pc = 0x2C6520u;
            goto label_2c6520;
        }
    }
    ctx->pc = 0x2C6518u;
    // 0x2c6518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c651c: 0xa3a30287  sb          $v1, 0x287($sp)
    ctx->pc = 0x2c651cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 647), (uint8_t)GPR_U32(ctx, 3));
label_2c6520:
    // 0x2c6520: 0x93a40287  lbu         $a0, 0x287($sp)
    ctx->pc = 0x2c6520u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 647)));
    // 0x2c6524: 0xa3a4028b  sb          $a0, 0x28B($sp)
    ctx->pc = 0x2c6524u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 651), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c6528: 0x93a2028b  lbu         $v0, 0x28B($sp)
    ctx->pc = 0x2c6528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 651)));
    // 0x2c652c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2c652cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2c6530: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6534: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C6534u;
    SET_GPR_U32(ctx, 31, 0x2C653Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C6534u, 0x2C653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C653Cu;
label_2c653c:
    // 0x2c653c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6540: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x2c6540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c6544: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2c6544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6548: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C6548u;
    SET_GPR_U32(ctx, 31, 0x2C6550u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C6548u, 0x2C6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6550u;
label_2c6550:
    // 0x2c6550: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2c6550u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c6554: 0xa0430054  sb          $v1, 0x54($v0)
    ctx->pc = 0x2c6554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 84), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c6558: 0x10000332  b           . + 4 + (0x332 << 2)
    ctx->pc = 0x2C6558u;
    {
        const bool branch_taken_0x2c6558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6558) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C6560u;
label_2c6560:
    // 0x2c6560: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2c6560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c6564: 0xc056a94  jal         func_15AA50
    ctx->pc = 0x2C6564u;
    SET_GPR_U32(ctx, 31, 0x2C656Cu);
    ctx->pc = 0x15AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA50u, 0x2C6564u, 0x2C656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C656Cu;
label_2c656c:
    // 0x2c656c: 0x1440032d  bnez        $v0, . + 4 + (0x32D << 2)
    ctx->pc = 0x2C656Cu;
    {
        const bool branch_taken_0x2c656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c656c) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C6574u;
    // 0x2c6574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c6574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6578: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x2c6578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c657c: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2C657Cu;
    SET_GPR_U32(ctx, 31, 0x2C6584u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2C657Cu, 0x2C6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6584u;
label_2c6584:
    // 0x2c6584: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2c6584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6588: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2C6588u;
    {
        const bool branch_taken_0x2c6588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6588) {
            ctx->pc = 0x2C65CCu;
            goto label_2c65cc;
        }
    }
    ctx->pc = 0x2C6590u;
label_2c6590:
    // 0x2c6590: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c6590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c6594: 0x1004000c  beq         $zero, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6594u;
    {
        const bool branch_taken_0x2c6594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c6594) {
            ctx->pc = 0x2C65C8u;
            goto label_2c65c8;
        }
    }
    ctx->pc = 0x2C659Cu;
    // 0x2c659c: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x2c659cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2c65a0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c65a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2c65a4: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c65a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c65a8: 0xc099938  jal         func_2664E0
    ctx->pc = 0x2C65A8u;
    SET_GPR_U32(ctx, 31, 0x2C65B0u);
    ctx->pc = 0x2664E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664E0u, 0x2C65A8u, 0x2C65B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65B0u;
label_2c65b0:
    // 0x2c65b0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x2c65b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c65b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C65B4u;
    {
        const bool branch_taken_0x2c65b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c65b4) {
            ctx->pc = 0x2C65C8u;
            goto label_2c65c8;
        }
    }
    ctx->pc = 0x2C65BCu;
    // 0x2c65bc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2c65bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C65C0u;
    {
        const bool branch_taken_0x2c65c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65c0) {
            ctx->pc = 0x2C65E4u;
            goto label_2c65e4;
        }
    }
    ctx->pc = 0x2C65C8u;
label_2c65c8:
    // 0x2c65c8: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x2c65c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_2c65cc:
    // 0x2c65cc: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x2c65ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x2c65d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c65d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c65d4: 0xc0525dc  jal         func_149770
    ctx->pc = 0x2C65D4u;
    SET_GPR_U32(ctx, 31, 0x2C65DCu);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x2C65D4u, 0x2C65DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C65DCu;
label_2c65dc:
    // 0x2c65dc: 0x1682ffec  bne         $s4, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2C65DCu;
    {
        const bool branch_taken_0x2c65dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c65dc) {
            ctx->pc = 0x2C6590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6590;
        }
    }
    ctx->pc = 0x2C65E4u;
label_2c65e4:
    // 0x2c65e4: 0x1200030f  beqz        $s0, . + 4 + (0x30F << 2)
    ctx->pc = 0x2C65E4u;
    {
        const bool branch_taken_0x2c65e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c65e4) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C65ECu;
    // 0x2c65ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c65ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c65f0: 0x0  nop
    ctx->pc = 0x2c65f0u;
    // NOP
    // 0x2c65f4: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2c65f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
    // 0x2c65f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c65f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c65fc: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2C65FCu;
    SET_GPR_U32(ctx, 31, 0x2C6604u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2C65FCu, 0x2C6604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6604u;
label_2c6604:
    // 0x2c6604: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x2c6604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x2c6608: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x2c6608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c660c: 0xc041a60  jal         func_106980
    ctx->pc = 0x2C660Cu;
    SET_GPR_U32(ctx, 31, 0x2C6614u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2C660Cu, 0x2C6614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6614u;
label_2c6614:
    // 0x2c6614: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x2c6614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x2c6618: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2C6618u;
    {
        const bool branch_taken_0x2c6618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6618) {
            ctx->pc = 0x2C666Cu;
            goto label_2c666c;
        }
    }
    ctx->pc = 0x2C6620u;
label_2c6620:
    // 0x2c6620: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x2c6620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x2c6624: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c6624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6628: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2C6628u;
    SET_GPR_U32(ctx, 31, 0x2C6630u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2C6628u, 0x2C6630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6630u;
label_2c6630:
    // 0x2c6630: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c6630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6634: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2C6634u;
    {
        const bool branch_taken_0x2c6634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6634) {
            ctx->pc = 0x2C6660u;
            goto label_2c6660;
        }
    }
    ctx->pc = 0x2C663Cu;
    // 0x2c663c: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x2c663cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x2c6640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c6640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c6644: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c6644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6648: 0x24050499  addiu       $a1, $zero, 0x499
    ctx->pc = 0x2c6648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1177));
    // 0x2c664c: 0xc042090  jal         func_108240
    ctx->pc = 0x2C664Cu;
    SET_GPR_U32(ctx, 31, 0x2C6654u);
    ctx->pc = 0x108240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108240u, 0x2C664Cu, 0x2C6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6654u;
label_2c6654:
    // 0x2c6654: 0xc7a10244  lwc1        $f1, 0x244($sp)
    ctx->pc = 0x2c6654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6658: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c665c: 0xe7a00244  swc1        $f0, 0x244($sp)
    ctx->pc = 0x2c665cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_2c6660:
    // 0x2c6660: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x2c6660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x2c6664: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c6664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c6668: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x2c6668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_2c666c:
    // 0x2c666c: 0x8fa2023c  lw          $v0, 0x23C($sp)
    ctx->pc = 0x2c666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x2c6670: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2c6670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x2c6674: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x2c6674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x2c6678: 0xc041a14  jal         func_106850
    ctx->pc = 0x2C6678u;
    SET_GPR_U32(ctx, 31, 0x2C6680u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2C6678u, 0x2C6680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6680u;
label_2c6680:
    // 0x2c6680: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2c6680u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c6684: 0x1462ffe6  bne         $v1, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2C6684u;
    {
        const bool branch_taken_0x2c6684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6684) {
            ctx->pc = 0x2C6620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6620;
        }
    }
    ctx->pc = 0x2C668Cu;
    // 0x2c668c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c668cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6690: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x2c6690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6694: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6698: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x2C6698u;
    {
        const bool branch_taken_0x2c6698 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6698) {
            ctx->pc = 0x2C6710u;
            goto label_2c6710;
        }
    }
    ctx->pc = 0x2C66A0u;
    // 0x2c66a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c66a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66a4: 0xc05ce40  jal         func_173900
    ctx->pc = 0x2C66A4u;
    SET_GPR_U32(ctx, 31, 0x2C66ACu);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2C66A4u, 0x2C66ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66ACu;
label_2c66ac:
    // 0x2c66ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c66acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66b0: 0xc040aa8  jal         func_102AA0
    ctx->pc = 0x2C66B0u;
    SET_GPR_U32(ctx, 31, 0x2C66B8u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C66B0u, 0x2C66B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66B8u;
label_2c66b8:
    // 0x2c66b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c66b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c66bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c66bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c66c0: 0xc040a90  jal         func_102A40
    ctx->pc = 0x2C66C0u;
    SET_GPR_U32(ctx, 31, 0x2C66C8u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C66C0u, 0x2C66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66C8u;
label_2c66c8:
    // 0x2c66c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c66cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c66ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66d0: 0xe7a00238  swc1        $f0, 0x238($sp)
    ctx->pc = 0x2c66d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
    // 0x2c66d4: 0xc7a10238  lwc1        $f1, 0x238($sp)
    ctx->pc = 0x2c66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c66d8: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x2c66d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c66dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c66dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c66e0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2C66E0u;
    {
        const bool branch_taken_0x2c66e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c66e0) {
            ctx->pc = 0x2C6710u;
            goto label_2c6710;
        }
    }
    ctx->pc = 0x2C66E8u;
    // 0x2c66e8: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2c66e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c66ec: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c66ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c66f0: 0x24a5e170  addiu       $a1, $a1, -0x1E90
    ctx->pc = 0x2c66f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959472));
    // 0x2c66f4: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C66F4u;
    SET_GPR_U32(ctx, 31, 0x2C66FCu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C66F4u, 0x2C66FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C66FCu;
label_2c66fc:
    // 0x2c66fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6700: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x2c6700u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c6704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6708: 0x100002c7  b           . + 4 + (0x2C7 << 2)
    ctx->pc = 0x2C6708u;
    {
        const bool branch_taken_0x2c6708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6708) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C6710u;
label_2c6710:
    // 0x2c6710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6714: 0xc096e88  jal         func_25BA20
    ctx->pc = 0x2C6714u;
    SET_GPR_U32(ctx, 31, 0x2C671Cu);
    ctx->pc = 0x25BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA20u, 0x2C6714u, 0x2C671Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C671Cu;
label_2c671c:
    // 0x2c671c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2c671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2c6720: 0x14430069  bne         $v0, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x2C6720u;
    {
        const bool branch_taken_0x2c6720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6720) {
            ctx->pc = 0x2C68C8u;
            goto label_2c68c8;
        }
    }
    ctx->pc = 0x2C6728u;
    // 0x2c6728: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c6728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c672c: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x2C672Cu;
    SET_GPR_U32(ctx, 31, 0x2C6734u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x2C672Cu, 0x2C6734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6734u;
label_2c6734:
    // 0x2c6734: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x2c6734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x2c6738: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x2c6738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2c673c: 0xc041a60  jal         func_106980
    ctx->pc = 0x2C673Cu;
    SET_GPR_U32(ctx, 31, 0x2C6744u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2C673Cu, 0x2C6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6744u;
label_2c6744:
    // 0x2c6744: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x2c6744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
    // 0x2c6748: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6748u;
    {
        const bool branch_taken_0x2c6748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6748) {
            ctx->pc = 0x2C67D4u;
            goto label_2c67d4;
        }
    }
    ctx->pc = 0x2C6750u;
label_2c6750:
    // 0x2c6750: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2c6750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c6754: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c6754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6758: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2C6758u;
    SET_GPR_U32(ctx, 31, 0x2C6760u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2C6758u, 0x2C6760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6760u;
label_2c6760:
    // 0x2c6760: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c6760u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6764: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x2c6764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2c6768: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C6768u;
    {
        const bool branch_taken_0x2c6768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c6768) {
            ctx->pc = 0x2C67C8u;
            goto label_2c67c8;
        }
    }
    ctx->pc = 0x2C6770u;
    // 0x2c6770: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2c6770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c6774: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c6774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6778: 0x2785a4d0  addiu       $a1, $gp, -0x5B30
    ctx->pc = 0x2c6778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943952));
    // 0x2c677c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6780: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c6780u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6784: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2C6784u;
    SET_GPR_U32(ctx, 31, 0x2C678Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2C6784u, 0x2C678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C678Cu;
label_2c678c:
    // 0x2c678c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c678cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6790: 0x18a0000d  blez        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6790u;
    {
        const bool branch_taken_0x2c6790 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x2c6790) {
            ctx->pc = 0x2C67C8u;
            goto label_2c67c8;
        }
    }
    ctx->pc = 0x2C6798u;
    // 0x2c6798: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x2c6798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c679c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c679cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c67a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c67a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c67a4: 0x24a5e188  addiu       $a1, $a1, -0x1E78
    ctx->pc = 0x2c67a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959496));
    // 0x2c67a8: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C67A8u;
    SET_GPR_U32(ctx, 31, 0x2C67B0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C67A8u, 0x2C67B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C67B0u;
label_2c67b0:
    // 0x2c67b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c67b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c67b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c67b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c67b8: 0xa243007c  sb          $v1, 0x7C($s2)
    ctx->pc = 0x2c67b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c67bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c67bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c67c0: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x2C67C0u;
    {
        const bool branch_taken_0x2c67c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c67c0) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C67C8u;
label_2c67c8:
    // 0x2c67c8: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2c67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c67cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2c67ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c67d0: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x2c67d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_2c67d4:
    // 0x2c67d4: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x2c67d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x2c67d8: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x2c67d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x2c67dc: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2c67dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2c67e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c67e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c67e4: 0xc041a14  jal         func_106850
    ctx->pc = 0x2C67E4u;
    SET_GPR_U32(ctx, 31, 0x2C67ECu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2C67E4u, 0x2C67ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C67ECu;
label_2c67ec:
    // 0x2c67ec: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x2c67ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2c67f0: 0x1462ffd7  bne         $v1, $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2C67F0u;
    {
        const bool branch_taken_0x2c67f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c67f0) {
            ctx->pc = 0x2C6750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6750;
        }
    }
    ctx->pc = 0x2C67F8u;
    // 0x2c67f8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c67f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c67fc: 0xc041a68  jal         func_1069A0
    ctx->pc = 0x2C67FCu;
    SET_GPR_U32(ctx, 31, 0x2C6804u);
    ctx->pc = 0x1069A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069A0u, 0x2C67FCu, 0x2C6804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6804u;
label_2c6804:
    // 0x2c6804: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x2c6804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x2c6808: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x2c6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2c680c: 0xc041a60  jal         func_106980
    ctx->pc = 0x2C680Cu;
    SET_GPR_U32(ctx, 31, 0x2C6814u);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x2C680Cu, 0x2C6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6814u;
label_2c6814:
    // 0x2c6814: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x2c6814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
    // 0x2c6818: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2C6818u;
    {
        const bool branch_taken_0x2c6818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6818) {
            ctx->pc = 0x2C68A4u;
            goto label_2c68a4;
        }
    }
    ctx->pc = 0x2C6820u;
label_2c6820:
    // 0x2c6820: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x2c6820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2c6824: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c6828: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x2C6828u;
    SET_GPR_U32(ctx, 31, 0x2C6830u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x2C6828u, 0x2C6830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6830u;
label_2c6830:
    // 0x2c6830: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x2c6830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2c6834: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C6834u;
    {
        const bool branch_taken_0x2c6834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c6834) {
            ctx->pc = 0x2C6898u;
            goto label_2c6898;
        }
    }
    ctx->pc = 0x2C683Cu;
    // 0x2c683c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2c683cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2c6840: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c6840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c6844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6848: 0x2785a4d0  addiu       $a1, $gp, -0x5B30
    ctx->pc = 0x2c6848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943952));
    // 0x2c684c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6850: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c6850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6854: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2C6854u;
    SET_GPR_U32(ctx, 31, 0x2C685Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2C6854u, 0x2C685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C685Cu;
label_2c685c:
    // 0x2c685c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6860: 0x1880000d  blez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6860u;
    {
        const bool branch_taken_0x2c6860 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2c6860) {
            ctx->pc = 0x2C6898u;
            goto label_2c6898;
        }
    }
    ctx->pc = 0x2C6868u;
    // 0x2c6868: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x2c6868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c686c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x2c686cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x2c6870: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x2c6870u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2c6874: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c6874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c6878: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60
    ctx->pc = 0x2c6878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    // 0x2c687c: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C687Cu;
    SET_GPR_U32(ctx, 31, 0x2C6884u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C687Cu, 0x2C6884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6884u;
label_2c6884:
    // 0x2c6884: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c6884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6888: 0xa244007c  sb          $a0, 0x7C($s2)
    ctx->pc = 0x2c6888u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c688c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c688cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6890: 0x10000265  b           . + 4 + (0x265 << 2)
    ctx->pc = 0x2C6890u;
    {
        const bool branch_taken_0x2c6890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6890) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C6898u;
label_2c6898:
    // 0x2c6898: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2c6898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2c689c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c689cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c68a0: 0xafa40228  sw          $a0, 0x228($sp)
    ctx->pc = 0x2c68a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 4));
label_2c68a4:
    // 0x2c68a4: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x2c68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x2c68a8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x2c68a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x2c68ac: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x2c68acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x2c68b0: 0xc041a14  jal         func_106850
    ctx->pc = 0x2C68B0u;
    SET_GPR_U32(ctx, 31, 0x2C68B8u);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x2C68B0u, 0x2C68B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68B8u;
label_2c68b8:
    // 0x2c68b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c68b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68bc: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x2c68bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2c68c0: 0x1455ffd7  bne         $v0, $s5, . + 4 + (-0x29 << 2)
    ctx->pc = 0x2C68C0u;
    {
        const bool branch_taken_0x2c68c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c68c0) {
            ctx->pc = 0x2C6820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6820;
        }
    }
    ctx->pc = 0x2C68C8u;
label_2c68c8:
    // 0x2c68c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c68c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c68cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c68ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c68d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c68d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68d4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c68d8: 0xc048094  jal         func_120250
    ctx->pc = 0x2C68D8u;
    SET_GPR_U32(ctx, 31, 0x2C68E0u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C68D8u, 0x2C68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68E0u;
label_2c68e0:
    // 0x2c68e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c68e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68e4: 0x24050553  addiu       $a1, $zero, 0x553
    ctx->pc = 0x2c68e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
    // 0x2c68e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c68e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c68ec: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x2C68ECu;
    SET_GPR_U32(ctx, 31, 0x2C68F4u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x2C68ECu, 0x2C68F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C68F4u;
label_2c68f4:
    // 0x2c68f4: 0xa3a2028a  sb          $v0, 0x28A($sp)
    ctx->pc = 0x2c68f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 650), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c68f8: 0x93a3028a  lbu         $v1, 0x28A($sp)
    ctx->pc = 0x2c68f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 650)));
    // 0x2c68fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2c68fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2c6900: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c6900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6904: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6904u;
    {
        const bool branch_taken_0x2c6904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c6904) {
            ctx->pc = 0x2C6910u;
            goto label_2c6910;
        }
    }
    ctx->pc = 0x2C690Cu;
    // 0x2c690c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c690cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6910:
    // 0x2c6910: 0xa3a00289  sb          $zero, 0x289($sp)
    ctx->pc = 0x2c6910u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 649), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6914: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x2c6914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c6918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c691c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2c691cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c6920: 0xc0b0978  jal         func_2C25E0
    ctx->pc = 0x2C6920u;
    SET_GPR_U32(ctx, 31, 0x2C6928u);
    ctx->pc = 0x2C25E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C25E0u, 0x2C6920u, 0x2C6928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6928u;
label_2c6928:
    // 0x2c6928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c692c: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C692Cu;
    {
        const bool branch_taken_0x2c692c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c692c) {
            ctx->pc = 0x2C69A0u;
            goto label_2c69a0;
        }
    }
    ctx->pc = 0x2C6934u;
    // 0x2c6934: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c6934u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6938: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2c6938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c693c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6940: 0xc048094  jal         func_120250
    ctx->pc = 0x2C6940u;
    SET_GPR_U32(ctx, 31, 0x2C6948u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2C6940u, 0x2C6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6948u;
label_2c6948:
    // 0x2c6948: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c6948u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c694c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c694cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6950: 0x24050475  addiu       $a1, $zero, 0x475
    ctx->pc = 0x2c6950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1141));
    // 0x2c6954: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c6954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2c6958: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x2c6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
    // 0x2c695c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c695cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6960: 0xc041a50  jal         func_106940
    ctx->pc = 0x2C6960u;
    SET_GPR_U32(ctx, 31, 0x2C6968u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2C6960u, 0x2C6968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6968u;
label_2c6968:
    // 0x2c6968: 0x26440070  addiu       $a0, $s2, 0x70
    ctx->pc = 0x2c6968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x2c696c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c696cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6970: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C6970u;
    SET_GPR_U32(ctx, 31, 0x2C6978u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C6970u, 0x2C6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6978u;
label_2c6978:
    // 0x2c6978: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c697c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c697cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6980: 0xa242007c  sb          $v0, 0x7C($s2)
    ctx->pc = 0x2c6980u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 124), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c6984: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6988: 0xa3a20289  sb          $v0, 0x289($sp)
    ctx->pc = 0x2c6988u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 649), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c698c: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x2c698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x2c6990: 0x3c04c2c8  lui         $a0, 0xC2C8
    ctx->pc = 0x2c6990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49864 << 16));
    // 0x2c6994: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c6994u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6998: 0x0  nop
    ctx->pc = 0x2c6998u;
    // NOP
    // 0x2c699c: 0xe7a00274  swc1        $f0, 0x274($sp)
    ctx->pc = 0x2c699cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 628), bits); }
label_2c69a0:
    // 0x2c69a0: 0x8fa50290  lw          $a1, 0x290($sp)
    ctx->pc = 0x2c69a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c69a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c69a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c69ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c69acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69b0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2c69b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69b4: 0xc0b1c98  jal         func_2C7260
    ctx->pc = 0x2C69B4u;
    SET_GPR_U32(ctx, 31, 0x2C69BCu);
    ctx->pc = 0x2C7260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7260u, 0x2C69B4u, 0x2C69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69BCu;
label_2c69bc:
    // 0x2c69bc: 0xa3a00288  sb          $zero, 0x288($sp)
    ctx->pc = 0x2c69bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 648), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c69c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c69c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c69c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c69c8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c69c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2c69cc: 0x2442e1c0  addiu       $v0, $v0, -0x1E40
    ctx->pc = 0x2c69ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959552));
    // 0x2c69d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c69d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69d4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2c69d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2c69d8: 0xc0bc66e  jal         func_2F19B8
    ctx->pc = 0x2C69D8u;
    SET_GPR_U32(ctx, 31, 0x2C69E0u);
    ctx->pc = 0x2F19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F19B8u, 0x2C69D8u, 0x2C69E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C69E0u;
label_2c69e0:
    // 0x2c69e0: 0x14400193  bnez        $v0, . + 4 + (0x193 << 2)
    ctx->pc = 0x2C69E0u;
    {
        const bool branch_taken_0x2c69e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c69e0) {
            ctx->pc = 0x2C7030u;
            goto label_2c7030;
        }
    }
    ctx->pc = 0x2C69E8u;
    // 0x2c69e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c69ec: 0xa3a20288  sb          $v0, 0x288($sp)
    ctx->pc = 0x2c69ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 648), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c69f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c69f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c69f4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c69f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c69f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C69F8u;
    SET_GPR_U32(ctx, 31, 0x2C6A00u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C69F8u, 0x2C6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A00u;
label_2c6a00:
    // 0x2c6a00: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x2c6a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x2c6a04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c6a08: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c6a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2c6a0c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C6A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C6A14u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C6A0Cu, 0x2C6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A14u;
label_2c6a14:
    // 0x2c6a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a18: 0xafa40220  sw          $a0, 0x220($sp)
    ctx->pc = 0x2c6a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 4));
    // 0x2c6a1c: 0x27a50198  addiu       $a1, $sp, 0x198
    ctx->pc = 0x2c6a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2c6a20: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a24: 0x8fa60224  lw          $a2, 0x224($sp)
    ctx->pc = 0x2c6a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x2c6a28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c6a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a2c: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C6A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C6A34u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C6A2Cu, 0x2C6A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A34u;
label_2c6a34:
    // 0x2c6a34: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x2c6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
    // 0x2c6a38: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x2c6a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
    // 0x2c6a3c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2c6a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6a40: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2c6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6a44: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6a48: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x2c6a48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c6a4c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2c6a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c6a50: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2c6a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c6a54: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x2c6a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2c6a58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a5c: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x2c6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c6a60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6a60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6a64: 0xc090f80  jal         func_243E00
    ctx->pc = 0x2C6A64u;
    SET_GPR_U32(ctx, 31, 0x2C6A6Cu);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x2C6A64u, 0x2C6A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A6Cu;
label_2c6a6c:
    // 0x2c6a6c: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x2c6a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x2c6a70: 0x27a201d8  addiu       $v0, $sp, 0x1D8
    ctx->pc = 0x2c6a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
    // 0x2c6a74: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2c6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6a78: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2c6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6a7c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c6a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6a80: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x2c6a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2c6a84: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c6a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c6a88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c6a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c6a8c: 0x8fa40224  lw          $a0, 0x224($sp)
    ctx->pc = 0x2c6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x2c6a90: 0xc091018  jal         func_244060
    ctx->pc = 0x2C6A90u;
    SET_GPR_U32(ctx, 31, 0x2C6A98u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2C6A90u, 0x2C6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6A98u;
label_2c6a98:
    // 0x2c6a98: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2c6a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x2c6a9c: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x2c6a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2c6aa0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2c6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c6aa4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c6aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6aa8: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x2c6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x2c6aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ab0: 0xc091018  jal         func_244060
    ctx->pc = 0x2C6AB0u;
    SET_GPR_U32(ctx, 31, 0x2C6AB8u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2C6AB0u, 0x2C6AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6AB8u;
label_2c6ab8:
    // 0x2c6ab8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2c6ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2c6abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c6abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ac0: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x2c6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x2c6ac4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2c6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c6ac8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C6AC8u;
    {
        const bool branch_taken_0x2c6ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ac8) {
            ctx->pc = 0x2C6AF0u;
            goto label_2c6af0;
        }
    }
    ctx->pc = 0x2C6AD0u;
    // 0x2c6ad0: 0x402021  addu        $a0, $v0, $zero
    ctx->pc = 0x2c6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_2c6ad4:
    // 0x2c6ad4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2c6ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c6ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c6ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2c6adc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c6adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c6ae0: 0x0  nop
    ctx->pc = 0x2c6ae0u;
    // NOP
    // 0x2c6ae4: 0x0  nop
    ctx->pc = 0x2c6ae4u;
    // NOP
    // 0x2c6ae8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2C6AE8u;
    {
        const bool branch_taken_0x2c6ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ae8) {
            ctx->pc = 0x2C6AD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6ad4;
        }
    }
    ctx->pc = 0x2C6AF0u;
label_2c6af0:
    // 0x2c6af0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c6af4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c6af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c6af8: 0x0  nop
    ctx->pc = 0x2c6af8u;
    // NOP
    // 0x2c6afc: 0xe7a0021c  swc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
    // 0x2c6b00: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x2c6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b04: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b0c: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2c6b10: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x2c6b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b14: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b18: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b1c: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2c6b20: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x2c6b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b24: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b2c: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2c6b30: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c6b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b34: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b3c: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x2c6b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2c6b40: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2c6b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b44: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b4c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x2c6b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x2c6b50: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c6b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b54: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b5c: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2c6b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x2c6b60: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c6b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b64: 0xc7a00158  lwc1        $f0, 0x158($sp)
    ctx->pc = 0x2c6b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b68: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b68u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b6c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2c6b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2c6b70: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x2c6b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b74: 0xc7a0015c  lwc1        $f0, 0x15C($sp)
    ctx->pc = 0x2c6b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b7c: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2c6b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2c6b80: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2c6b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6b84: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2c6b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6b88: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6b88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6b8c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2c6b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2c6b90: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x2c6b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2c6b94: 0xc104d24  jal         func_413490
    ctx->pc = 0x2C6B94u;
    SET_GPR_U32(ctx, 31, 0x2C6B9Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2C6B94u, 0x2C6B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6B9Cu;
label_2c6b9c:
    // 0x2c6b9c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6b9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6ba0: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2C6BA0u;
    SET_GPR_U32(ctx, 31, 0x2C6BA8u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2C6BA0u, 0x2C6BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BA8u;
label_2c6ba8:
    // 0x2c6ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bac: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2C6BACu;
    SET_GPR_U32(ctx, 31, 0x2C6BB4u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2C6BACu, 0x2C6BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BB4u;
label_2c6bb4:
    // 0x2c6bb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6bb8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2C6BB8u;
    SET_GPR_U32(ctx, 31, 0x2C6BC0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2C6BB8u, 0x2C6BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6BC0u;
label_2c6bc0:
    // 0x2c6bc0: 0xe7a00178  swc1        $f0, 0x178($sp)
    ctx->pc = 0x2c6bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x2c6bc4: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6bc8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c6bc8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6bcc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2c6bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6bd0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6bd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6bd4: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2c6bd8: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6bdc: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c6bdcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6be0: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2c6be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6be4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6be8: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2c6bec: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6bf0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c6bf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6bf4: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x2c6bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6bf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6bfc: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2c6c00: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c6c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c04: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6c08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c0c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x2c6c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x2c6c10: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2c6c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c14: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c18: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c1c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x2c6c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x2c6c20: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c24: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c2c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x2c6c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x2c6c30: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c6c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c34: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2c6c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c38: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6c38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c3c: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2c6c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2c6c40: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x2c6c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c44: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x2c6c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6c48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c4c: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2c6c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2c6c50: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2c6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6c54: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x2c6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6c58: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6c58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6c5c: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2c6c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2c6c60: 0x27a501b8  addiu       $a1, $sp, 0x1B8
    ctx->pc = 0x2c6c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2c6c64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c68: 0xc104d24  jal         func_413490
    ctx->pc = 0x2C6C68u;
    SET_GPR_U32(ctx, 31, 0x2C6C70u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2C6C68u, 0x2C6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C70u;
label_2c6c70:
    // 0x2c6c70: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6c70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6c74: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2C6C74u;
    SET_GPR_U32(ctx, 31, 0x2C6C7Cu);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2C6C74u, 0x2C6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C7Cu;
label_2c6c7c:
    // 0x2c6c7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c6c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c6c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c84: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2C6C84u;
    SET_GPR_U32(ctx, 31, 0x2C6C8Cu);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2C6C84u, 0x2C6C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C8Cu;
label_2c6c8c:
    // 0x2c6c8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6c90: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2C6C90u;
    SET_GPR_U32(ctx, 31, 0x2C6C98u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2C6C90u, 0x2C6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6C98u;
label_2c6c98:
    // 0x2c6c98: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x2c6c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x2c6c9c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2c6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ca0: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ca4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6ca4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6ca8: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2c6cac: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c6cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6cb0: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cb4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6cb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6cb8: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2c6cbc: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2c6cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6cc0: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c6cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c6cc8: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2c6ccc: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c6cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6cd0: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cd4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6cd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6cd8: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x2c6cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
    // 0x2c6cdc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2c6cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6ce0: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6ce4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6ce4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6ce8: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2c6ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2c6cec: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c6cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6cf0: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6cf4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6cf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6cf8: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x2c6cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
    // 0x2c6cfc: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c6cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d00: 0xc7a00164  lwc1        $f0, 0x164($sp)
    ctx->pc = 0x2c6d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d04: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6d04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6d08: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2c6d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2c6d0c: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x2c6d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d10: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x2c6d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d14: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6d14u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6d18: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2c6d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2c6d1c: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2c6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6d20: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2c6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6d24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6d28: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2c6d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2c6d2c: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x2c6d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2c6d30: 0xc104d24  jal         func_413490
    ctx->pc = 0x2C6D30u;
    SET_GPR_U32(ctx, 31, 0x2C6D38u);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2C6D30u, 0x2C6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D38u;
label_2c6d38:
    // 0x2c6d38: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6d38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6d3c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2C6D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C6D44u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2C6D3Cu, 0x2C6D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D44u;
label_2c6d44:
    // 0x2c6d44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d4c: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2C6D4Cu;
    SET_GPR_U32(ctx, 31, 0x2C6D54u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2C6D4Cu, 0x2C6D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D54u;
label_2c6d54:
    // 0x2c6d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6d58: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2C6D58u;
    SET_GPR_U32(ctx, 31, 0x2C6D60u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2C6D58u, 0x2C6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6D60u;
label_2c6d60:
    // 0x2c6d60: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x2c6d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    // 0x2c6d64: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d68: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c6d68u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6d6c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2c6d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6d74: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2c6d78: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d7c: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c6d7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6d80: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2c6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6d88: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    // 0x2c6d8c: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x2c6d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d90: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x2c6d90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x2c6d94: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2c6d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6d98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c6d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c6d9c: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2c6da0: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x2c6da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6da4: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x2c6da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6da8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6dac: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x2c6dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
    // 0x2c6db0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2c6db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6db4: 0xc7a001cc  lwc1        $f0, 0x1CC($sp)
    ctx->pc = 0x2c6db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6db8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6db8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6dbc: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2c6dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2c6dc0: 0xc6210038  lwc1        $f1, 0x38($s1)
    ctx->pc = 0x2c6dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6dc4: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2c6dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6dc8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c6dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c6dcc: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x2c6dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
    // 0x2c6dd0: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x2c6dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6dd4: 0xc7a0014c  lwc1        $f0, 0x14C($sp)
    ctx->pc = 0x2c6dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6dd8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6ddc: 0xe7a001b8  swc1        $f0, 0x1B8($sp)
    ctx->pc = 0x2c6ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2c6de0: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x2c6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6de4: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2c6de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6de8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6de8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6dec: 0xe7a001bc  swc1        $f0, 0x1BC($sp)
    ctx->pc = 0x2c6decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
    // 0x2c6df0: 0xc6610038  lwc1        $f1, 0x38($s3)
    ctx->pc = 0x2c6df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6df4: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x2c6df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6df8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c6df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6dfc: 0xe7a001c0  swc1        $f0, 0x1C0($sp)
    ctx->pc = 0x2c6dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2c6e00: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x2c6e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x2c6e04: 0xc104d24  jal         func_413490
    ctx->pc = 0x2C6E04u;
    SET_GPR_U32(ctx, 31, 0x2C6E0Cu);
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x2C6E04u, 0x2C6E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E0Cu;
label_2c6e0c:
    // 0x2c6e0c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2c6e0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2c6e10: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x2C6E10u;
    SET_GPR_U32(ctx, 31, 0x2C6E18u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x2C6E10u, 0x2C6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E18u;
label_2c6e18:
    // 0x2c6e18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e1c: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x2C6E1Cu;
    SET_GPR_U32(ctx, 31, 0x2C6E24u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x2C6E1Cu, 0x2C6E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E24u;
label_2c6e24:
    // 0x2c6e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6e28: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x2C6E28u;
    SET_GPR_U32(ctx, 31, 0x2C6E30u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x2C6E28u, 0x2C6E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6E30u;
label_2c6e30:
    // 0x2c6e30: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x2c6e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x2c6e34: 0xc78081c0  lwc1        $f0, -0x7E40($gp)
    ctx->pc = 0x2c6e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6e38: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x2c6e38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x2c6e3c: 0xafa00210  sw          $zero, 0x210($sp)
    ctx->pc = 0x2c6e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 0));
    // 0x2c6e40: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C6E40u;
    {
        const bool branch_taken_0x2c6e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6e40) {
            ctx->pc = 0x2C6E98u;
            goto label_2c6e98;
        }
    }
    ctx->pc = 0x2C6E48u;
label_2c6e48:
    // 0x2c6e48: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2c6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c6e4c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c6e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2c6e50: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2c6e50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2c6e54: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2c6e54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c6e58: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x2c6e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x2c6e5c: 0xc4410170  lwc1        $f1, 0x170($v0)
    ctx->pc = 0x2c6e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6e60: 0xc7a00214  lwc1        $f0, 0x214($sp)
    ctx->pc = 0x2c6e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6e64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c6e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6e68: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6E68u;
    {
        const bool branch_taken_0x2c6e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c6e68) {
            ctx->pc = 0x2C6E8Cu;
            goto label_2c6e8c;
        }
    }
    ctx->pc = 0x2C6E70u;
    // 0x2c6e70: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2c6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c6e74: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x2c6e74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c6e78: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x2c6e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x2c6e7c: 0xc4400170  lwc1        $f0, 0x170($v0)
    ctx->pc = 0x2c6e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6e80: 0xe7a00214  swc1        $f0, 0x214($sp)
    ctx->pc = 0x2c6e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
    // 0x2c6e84: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2c6e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c6e88: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x2c6e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_2c6e8c:
    // 0x2c6e8c: 0x8fa30210  lw          $v1, 0x210($sp)
    ctx->pc = 0x2c6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c6e90: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x2c6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c6e94: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x2c6e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_2c6e98:
    // 0x2c6e98: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x2c6e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x2c6e9c: 0x2c440004  sltiu       $a0, $v0, 0x4
    ctx->pc = 0x2c6e9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2c6ea0: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2C6EA0u;
    {
        const bool branch_taken_0x2c6ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ea0) {
            ctx->pc = 0x2C6E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6e48;
        }
    }
    ctx->pc = 0x2C6EA8u;
    // 0x2c6ea8: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x2c6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x2c6eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6eb0: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C6EB0u;
    {
        const bool branch_taken_0x2c6eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c6eb0) {
            ctx->pc = 0x2C6F34u;
            goto label_2c6f34;
        }
    }
    ctx->pc = 0x2C6EB8u;
    // 0x2c6eb8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c6eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6ebc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C6EBCu;
    {
        const bool branch_taken_0x2c6ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c6ebc) {
            ctx->pc = 0x2C6F18u;
            goto label_2c6f18;
        }
    }
    ctx->pc = 0x2C6EC4u;
    // 0x2c6ec4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6EC4u;
    {
        const bool branch_taken_0x2c6ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ec4) {
            ctx->pc = 0x2C6EFCu;
            goto label_2c6efc;
        }
    }
    ctx->pc = 0x2C6ECCu;
    // 0x2c6ecc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c6eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c6ed0: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6ED0u;
    {
        const bool branch_taken_0x2c6ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c6ed0) {
            ctx->pc = 0x2C6EE0u;
            goto label_2c6ee0;
        }
    }
    ctx->pc = 0x2C6ED8u;
    // 0x2c6ed8: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2C6ED8u;
    {
        const bool branch_taken_0x2c6ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ed8) {
            ctx->pc = 0x2C6F50u;
            goto label_2c6f50;
        }
    }
    ctx->pc = 0x2C6EE0u;
label_2c6ee0:
    // 0x2c6ee0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2c6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c6ee4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c6ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c6ee8: 0x24a5e1d0  addiu       $a1, $a1, -0x1E30
    ctx->pc = 0x2c6ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959568));
    // 0x2c6eec: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2C6EECu;
    SET_GPR_U32(ctx, 31, 0x2C6EF4u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2C6EECu, 0x2C6EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6EF4u;
label_2c6ef4:
    // 0x2c6ef4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C6EF4u;
    {
        const bool branch_taken_0x2c6ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ef4) {
            ctx->pc = 0x2C6F50u;
            goto label_2c6f50;
        }
    }
    ctx->pc = 0x2C6EFCu;
label_2c6efc:
    // 0x2c6efc: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2c6efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c6f00: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c6f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c6f04: 0x24a5e1e0  addiu       $a1, $a1, -0x1E20
    ctx->pc = 0x2c6f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959584));
    // 0x2c6f08: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2C6F08u;
    SET_GPR_U32(ctx, 31, 0x2C6F10u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2C6F08u, 0x2C6F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F10u;
label_2c6f10:
    // 0x2c6f10: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C6F10u;
    {
        const bool branch_taken_0x2c6f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f10) {
            ctx->pc = 0x2C6F50u;
            goto label_2c6f50;
        }
    }
    ctx->pc = 0x2C6F18u;
label_2c6f18:
    // 0x2c6f18: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2c6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c6f1c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c6f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c6f20: 0x24a5e1f0  addiu       $a1, $a1, -0x1E10
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959600));
    // 0x2c6f24: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2C6F24u;
    SET_GPR_U32(ctx, 31, 0x2C6F2Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2C6F24u, 0x2C6F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F2Cu;
label_2c6f2c:
    // 0x2c6f2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C6F2Cu;
    {
        const bool branch_taken_0x2c6f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f2c) {
            ctx->pc = 0x2C6F50u;
            goto label_2c6f50;
        }
    }
    ctx->pc = 0x2C6F34u;
label_2c6f34:
    // 0x2c6f34: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c6f38: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c6f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x2c6f3c: 0x2442e200  addiu       $v0, $v0, -0x1E00
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959616));
    // 0x2c6f40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f44: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x2C6F44u;
    SET_GPR_U32(ctx, 31, 0x2C6F4Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x2C6F44u, 0x2C6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F4Cu;
label_2c6f4c:
    // 0x2c6f4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f50:
    // 0x2c6f50: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c6f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c6f54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f58: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c6f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c6f5c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C6F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C6F64u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C6F5Cu, 0x2C6F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F64u;
label_2c6f64:
    // 0x2c6f64: 0xafa2020c  sw          $v0, 0x20C($sp)
    ctx->pc = 0x2c6f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 2));
    // 0x2c6f68: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x2c6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
    // 0x2c6f6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c6f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f70: 0xc096950  jal         func_25A540
    ctx->pc = 0x2C6F70u;
    SET_GPR_U32(ctx, 31, 0x2C6F78u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2C6F70u, 0x2C6F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F78u;
label_2c6f78:
    // 0x2c6f78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c6f78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f7c: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C6F7Cu;
    {
        const bool branch_taken_0x2c6f7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6f7c) {
            ctx->pc = 0x2C6F9Cu;
            goto label_2c6f9c;
        }
    }
    ctx->pc = 0x2C6F84u;
    // 0x2c6f84: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2c6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c6f88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f8c: 0x2785a4d8  addiu       $a1, $gp, -0x5B28
    ctx->pc = 0x2c6f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943960));
    // 0x2c6f90: 0xc0bc4c4  jal         func_2F1310
    ctx->pc = 0x2C6F90u;
    SET_GPR_U32(ctx, 31, 0x2C6F98u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x2C6F90u, 0x2C6F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6F98u;
label_2c6f98:
    // 0x2c6f98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f9c:
    // 0x2c6f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2c6fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c6fa4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fa8: 0xc09681c  jal         func_25A070
    ctx->pc = 0x2C6FA8u;
    SET_GPR_U32(ctx, 31, 0x2C6FB0u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x2C6FA8u, 0x2C6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FB0u;
label_2c6fb0:
    // 0x2c6fb0: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x2c6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
    // 0x2c6fb4: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x2c6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2c6fb8: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2C6FB8u;
    SET_GPR_U32(ctx, 31, 0x2C6FC0u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2C6FB8u, 0x2C6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FC0u;
label_2c6fc0:
    // 0x2c6fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fc4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c6fc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2C6FC8u;
    {
        const bool branch_taken_0x2c6fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6fc8) {
            ctx->pc = 0x2C7014u;
            goto label_2c7014;
        }
    }
    ctx->pc = 0x2C6FD0u;
label_2c6fd0:
    // 0x2c6fd0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2c6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c6fd4: 0x1002000d  beq         $zero, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C6FD4u;
    {
        const bool branch_taken_0x2c6fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c6fd4) {
            ctx->pc = 0x2C700Cu;
            goto label_2c700c;
        }
    }
    ctx->pc = 0x2C6FDCu;
    // 0x2c6fdc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2c6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2c6fe0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2c6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c6fe4: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x2c6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2c6fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6fec: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2C6FECu;
    SET_GPR_U32(ctx, 31, 0x2C6FF4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2C6FECu, 0x2C6FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6FF4u;
label_2c6ff4:
    // 0x2c6ff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c6ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6ff8: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6FF8u;
    {
        const bool branch_taken_0x2c6ff8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6ff8) {
            ctx->pc = 0x2C700Cu;
            goto label_2c700c;
        }
    }
    ctx->pc = 0x2C7000u;
    // 0x2c7000: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2c7000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7004: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2C7004u;
    {
        const bool branch_taken_0x2c7004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7004) {
            ctx->pc = 0x2C7030u;
            goto label_2c7030;
        }
    }
    ctx->pc = 0x2C700Cu;
label_2c700c:
    // 0x2c700c: 0x2686000c  addiu       $a2, $s4, 0xC
    ctx->pc = 0x2c700cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2c7010: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2c7010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c7014:
    // 0x2c7014: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x2c7014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x2c7018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c701c: 0xc0525dc  jal         func_149770
    ctx->pc = 0x2C701Cu;
    SET_GPR_U32(ctx, 31, 0x2C7024u);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x2C701Cu, 0x2C7024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7024u;
label_2c7024:
    // 0x2c7024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7028: 0x1684ffe9  bne         $s4, $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2C7028u;
    {
        const bool branch_taken_0x2c7028 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c7028) {
            ctx->pc = 0x2C6FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c6fd0;
        }
    }
    ctx->pc = 0x2C7030u;
label_2c7030:
    // 0x2c7030: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2c7030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c7034: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2c7034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7038: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2C7038u;
    SET_GPR_U32(ctx, 31, 0x2C7040u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2C7038u, 0x2C7040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7040u;
label_2c7040:
    // 0x2c7040: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2c7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c7044: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2C7044u;
    {
        const bool branch_taken_0x2c7044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c7044) {
            ctx->pc = 0x2C7090u;
            goto label_2c7090;
        }
    }
    ctx->pc = 0x2C704Cu;
    // 0x2c704c: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C704Cu;
    {
        const bool branch_taken_0x2c704c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c704c) {
            ctx->pc = 0x2C7090u;
            goto label_2c7090;
        }
    }
    ctx->pc = 0x2C7054u;
    // 0x2c7054: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c7054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c7058: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c7058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c705c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2c705cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c7060: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2c7060u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c7064: 0xc0aff64  jal         func_2BFD90
    ctx->pc = 0x2C7064u;
    SET_GPR_U32(ctx, 31, 0x2C706Cu);
    ctx->pc = 0x2BFD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFD90u, 0x2C7064u, 0x2C706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C706Cu;
label_2c706c:
    // 0x2c706c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c706cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c7070: 0x0  nop
    ctx->pc = 0x2c7070u;
    // NOP
    // 0x2c7074: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2c7074u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c707c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C707Cu;
    {
        const bool branch_taken_0x2c707c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c707c) {
            ctx->pc = 0x2C7088u;
            goto label_2c7088;
        }
    }
    ctx->pc = 0x2C7084u;
    // 0x2c7084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7088:
    // 0x2c7088: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2c7088u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c708c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2c708cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7090:
    // 0x2c7090: 0x93a60289  lbu         $a2, 0x289($sp)
    ctx->pc = 0x2c7090u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 649)));
    // 0x2c7094: 0x14c00063  bnez        $a2, . + 4 + (0x63 << 2)
    ctx->pc = 0x2C7094u;
    {
        const bool branch_taken_0x2c7094 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7094) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C709Cu;
    // 0x2c709c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2c709cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2c70a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c70a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c70a4: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x2c70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x2c70a8: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2c70ac: 0x24a5e1b0  addiu       $a1, $a1, -0x1E50
    ctx->pc = 0x2c70acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959536));
    // 0x2c70b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c70b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c70b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c70b8: 0xc08f558  jal         func_23D560
    ctx->pc = 0x2C70B8u;
    SET_GPR_U32(ctx, 31, 0x2C70C0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x2C70B8u, 0x2C70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C70C0u;
label_2c70c0:
    // 0x2c70c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c70c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70c4: 0x8f86bbb4  lw          $a2, -0x444C($gp)
    ctx->pc = 0x2c70c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x2c70c8: 0x90c20028  lbu         $v0, 0x28($a2)
    ctx->pc = 0x2c70c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 40)));
    // 0x2c70cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C70CCu;
    {
        const bool branch_taken_0x2c70cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c70cc) {
            ctx->pc = 0x2C70F4u;
            goto label_2c70f4;
        }
    }
    ctx->pc = 0x2C70D4u;
    // 0x2c70d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c70d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c70d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70dc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2c70dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c70e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70e4: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C70E4u;
    SET_GPR_U32(ctx, 31, 0x2C70ECu);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C70E4u, 0x2C70ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C70ECu;
label_2c70ec:
    // 0x2c70ec: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2C70ECu;
    {
        const bool branch_taken_0x2c70ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c70ec) {
            ctx->pc = 0x2C71A4u;
            goto label_2c71a4;
        }
    }
    ctx->pc = 0x2C70F4u;
label_2c70f4:
    // 0x2c70f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c70f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70f8: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x2C70F8u;
    SET_GPR_U32(ctx, 31, 0x2C7100u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C70F8u, 0x2C7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7100u;
label_2c7100:
    // 0x2c7100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c7100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7104: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C7104u;
    {
        const bool branch_taken_0x2c7104 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7104) {
            ctx->pc = 0x2C7128u;
            goto label_2c7128;
        }
    }
    ctx->pc = 0x2C710Cu;
    // 0x2c710c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c7110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7114: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2C7114u;
    SET_GPR_U32(ctx, 31, 0x2C711Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2C7114u, 0x2C711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C711Cu;
label_2c711c:
    // 0x2c711c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c7120: 0x14450009  bne         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C7120u;
    {
        const bool branch_taken_0x2c7120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c7120) {
            ctx->pc = 0x2C7148u;
            goto label_2c7148;
        }
    }
    ctx->pc = 0x2C7128u;
label_2c7128:
    // 0x2c7128: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c7128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c712c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c712cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7130: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2c7130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7134: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7138: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C7138u;
    SET_GPR_U32(ctx, 31, 0x2C7140u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C7138u, 0x2C7140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7140u;
label_2c7140:
    // 0x2c7140: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2C7140u;
    {
        const bool branch_taken_0x2c7140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7140) {
            ctx->pc = 0x2C71A4u;
            goto label_2c71a4;
        }
    }
    ctx->pc = 0x2C7148u;
label_2c7148:
    // 0x2c7148: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c7148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c714c: 0x8fa30290  lw          $v1, 0x290($sp)
    ctx->pc = 0x2c714cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c7150: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x2c7150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x2c7154: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c7154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7158: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c7158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c715c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2c715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x2c7160: 0x7ba600c0  lq          $a2, 0xC0($sp)
    ctx->pc = 0x2c7160u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2c7164: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2c7164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c7168: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2c7168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c716c: 0x8c680094  lw          $t0, 0x94($v1)
    ctx->pc = 0x2c716cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x2c7170: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c7170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c7174: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2c7174u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7178: 0xc0b43d8  jal         func_2D0F60
    ctx->pc = 0x2C7178u;
    SET_GPR_U32(ctx, 31, 0x2C7180u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2C7178u, 0x2C7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7180u;
label_2c7180:
    // 0x2c7180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7184: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7184u;
    {
        const bool branch_taken_0x2c7184 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7184) {
            ctx->pc = 0x2C71A4u;
            goto label_2c71a4;
        }
    }
    ctx->pc = 0x2C718Cu;
    // 0x2c718c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c718cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7190: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c7190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7194: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x2c7194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7198: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c7198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c719c: 0xc0af028  jal         func_2BC0A0
    ctx->pc = 0x2C719Cu;
    SET_GPR_U32(ctx, 31, 0x2C71A4u);
    ctx->pc = 0x2BC0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0A0u, 0x2C719Cu, 0x2C71A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71A4u;
label_2c71a4:
    // 0x2c71a4: 0x32e400ff  andi        $a0, $s7, 0xFF
    ctx->pc = 0x2c71a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x2c71a8: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x2c71a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
    // 0x2c71ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c71acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c71b0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C71B0u;
    {
        const bool branch_taken_0x2c71b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c71b0) {
            ctx->pc = 0x2C7208u;
            goto label_2c7208;
        }
    }
    ctx->pc = 0x2C71B8u;
    // 0x2c71b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2c71b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c71bc: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2C71BCu;
    SET_GPR_U32(ctx, 31, 0x2C71C4u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2C71BCu, 0x2C71C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71C4u;
label_2c71c4:
    // 0x2c71c4: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c71c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x2c71c8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2c71c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2c71cc: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2c71ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2c71d0: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C71D0u;
    {
        const bool branch_taken_0x2c71d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2c71d0) {
            ctx->pc = 0x2C7208u;
            goto label_2c7208;
        }
    }
    ctx->pc = 0x2C71D8u;
    // 0x2c71d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c71dc: 0x1056000a  beq         $v0, $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x2C71DCu;
    {
        const bool branch_taken_0x2c71dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2c71dc) {
            ctx->pc = 0x2C7208u;
            goto label_2c7208;
        }
    }
    ctx->pc = 0x2C71E4u;
    // 0x2c71e4: 0x8e140008  lw          $s4, 0x8($s0)
    ctx->pc = 0x2c71e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2c71e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c71e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c71ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c71ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c71f0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C71F0u;
    SET_GPR_U32(ctx, 31, 0x2C71F8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C71F0u, 0x2C71F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C71F8u;
label_2c71f8:
    // 0x2c71f8: 0xafa20204  sw          $v0, 0x204($sp)
    ctx->pc = 0x2c71f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 2));
    // 0x2c71fc: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x2c71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x2c7200: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2C7200u;
    SET_GPR_U32(ctx, 31, 0x2C7208u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2C7200u, 0x2C7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7208u;
label_2c7208:
    // 0x2c7208: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C7208u;
    {
        const bool branch_taken_0x2c7208 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7208) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C7210u;
    // 0x2c7210: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x2c7210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2c7214: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c7214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7218: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c7218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c721c: 0xc0b06d0  jal         func_2C1B40
    ctx->pc = 0x2C721Cu;
    SET_GPR_U32(ctx, 31, 0x2C7224u);
    ctx->pc = 0x2C1B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B40u, 0x2C721Cu, 0x2C7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7224u;
label_2c7224:
    // 0x2c7224: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x2c7224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_2c7228:
    // 0x2c7228: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2c7228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c722c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2c722cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c7230: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2c7230u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c7234: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c7234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c7238: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c7238u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c723c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2c723cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7240: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7240u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7244: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c724c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c724cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7250: 0x27bd02b0  addiu       $sp, $sp, 0x2B0
    ctx->pc = 0x2c7250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
    // 0x2c7254: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C725Cu;
    // 0x2c725c: 0x0  nop
    ctx->pc = 0x2c725cu;
    // NOP
    ctx->pc = 0x2c7260u;
}
