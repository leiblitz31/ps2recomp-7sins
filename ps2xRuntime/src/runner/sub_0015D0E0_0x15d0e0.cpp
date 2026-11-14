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

// Function: sub_0015D0E0
// Address: 0x15d0e0 - 0x15e510
void sub_0015D0E0_0x15d0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D0E0_0x15d0e0");
#endif

    switch (ctx->pc) {
        case 0x15d13cu: goto label_15d13c;
        case 0x15d180u: goto label_15d180;
        case 0x15d1a4u: goto label_15d1a4;
        case 0x15d1b4u: goto label_15d1b4;
        case 0x15d1c0u: goto label_15d1c0;
        case 0x15d1d4u: goto label_15d1d4;
        case 0x15d1e0u: goto label_15d1e0;
        case 0x15d218u: goto label_15d218;
        case 0x15d250u: goto label_15d250;
        case 0x15d290u: goto label_15d290;
        case 0x15d29cu: goto label_15d29c;
        case 0x15d2acu: goto label_15d2ac;
        case 0x15d2c8u: goto label_15d2c8;
        case 0x15d2dcu: goto label_15d2dc;
        case 0x15d2e8u: goto label_15d2e8;
        case 0x15d320u: goto label_15d320;
        case 0x15d37cu: goto label_15d37c;
        case 0x15d3acu: goto label_15d3ac;
        case 0x15d3e0u: goto label_15d3e0;
        case 0x15d3ecu: goto label_15d3ec;
        case 0x15d408u: goto label_15d408;
        case 0x15d414u: goto label_15d414;
        case 0x15d420u: goto label_15d420;
        case 0x15d43cu: goto label_15d43c;
        case 0x15d45cu: goto label_15d45c;
        case 0x15d47cu: goto label_15d47c;
        case 0x15d4acu: goto label_15d4ac;
        case 0x15d4bcu: goto label_15d4bc;
        case 0x15d4e0u: goto label_15d4e0;
        case 0x15d4f4u: goto label_15d4f4;
        case 0x15d500u: goto label_15d500;
        case 0x15d518u: goto label_15d518;
        case 0x15d524u: goto label_15d524;
        case 0x15d560u: goto label_15d560;
        case 0x15d5b0u: goto label_15d5b0;
        case 0x15d5bcu: goto label_15d5bc;
        case 0x15d5ccu: goto label_15d5cc;
        case 0x15d5dcu: goto label_15d5dc;
        case 0x15d5fcu: goto label_15d5fc;
        case 0x15d620u: goto label_15d620;
        case 0x15d638u: goto label_15d638;
        case 0x15d648u: goto label_15d648;
        case 0x15d668u: goto label_15d668;
        case 0x15d678u: goto label_15d678;
        case 0x15d6b0u: goto label_15d6b0;
        case 0x15d6c0u: goto label_15d6c0;
        case 0x15d6d0u: goto label_15d6d0;
        case 0x15d6dcu: goto label_15d6dc;
        case 0x15d700u: goto label_15d700;
        case 0x15d71cu: goto label_15d71c;
        case 0x15d734u: goto label_15d734;
        case 0x15d748u: goto label_15d748;
        case 0x15d764u: goto label_15d764;
        case 0x15d7a8u: goto label_15d7a8;
        case 0x15d800u: goto label_15d800;
        case 0x15d81cu: goto label_15d81c;
        case 0x15d864u: goto label_15d864;
        case 0x15d874u: goto label_15d874;
        case 0x15d88cu: goto label_15d88c;
        case 0x15d8a4u: goto label_15d8a4;
        case 0x15d8b4u: goto label_15d8b4;
        case 0x15d8ccu: goto label_15d8cc;
        case 0x15d8e0u: goto label_15d8e0;
        case 0x15d8f4u: goto label_15d8f4;
        case 0x15d90cu: goto label_15d90c;
        case 0x15d91cu: goto label_15d91c;
        case 0x15d944u: goto label_15d944;
        case 0x15d97cu: goto label_15d97c;
        case 0x15d9a0u: goto label_15d9a0;
        case 0x15d9b4u: goto label_15d9b4;
        case 0x15d9d4u: goto label_15d9d4;
        case 0x15d9ecu: goto label_15d9ec;
        case 0x15da08u: goto label_15da08;
        case 0x15da28u: goto label_15da28;
        case 0x15da5cu: goto label_15da5c;
        case 0x15da70u: goto label_15da70;
        case 0x15da88u: goto label_15da88;
        case 0x15daf0u: goto label_15daf0;
        case 0x15db04u: goto label_15db04;
        case 0x15db18u: goto label_15db18;
        case 0x15db2cu: goto label_15db2c;
        case 0x15db40u: goto label_15db40;
        case 0x15db64u: goto label_15db64;
        case 0x15db88u: goto label_15db88;
        case 0x15dba4u: goto label_15dba4;
        case 0x15dbc4u: goto label_15dbc4;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc28u: goto label_15dc28;
        case 0x15dc48u: goto label_15dc48;
        case 0x15dc64u: goto label_15dc64;
        case 0x15dc88u: goto label_15dc88;
        case 0x15dca0u: goto label_15dca0;
        case 0x15dcb4u: goto label_15dcb4;
        case 0x15dcc4u: goto label_15dcc4;
        case 0x15dcdcu: goto label_15dcdc;
        case 0x15dcf4u: goto label_15dcf4;
        case 0x15dd10u: goto label_15dd10;
        case 0x15dd28u: goto label_15dd28;
        case 0x15dd4cu: goto label_15dd4c;
        case 0x15dd6cu: goto label_15dd6c;
        case 0x15dda8u: goto label_15dda8;
        case 0x15ddc8u: goto label_15ddc8;
        case 0x15dde4u: goto label_15dde4;
        case 0x15de04u: goto label_15de04;
        case 0x15de20u: goto label_15de20;
        case 0x15de40u: goto label_15de40;
        case 0x15de58u: goto label_15de58;
        case 0x15de6cu: goto label_15de6c;
        case 0x15de80u: goto label_15de80;
        case 0x15de90u: goto label_15de90;
        case 0x15deb0u: goto label_15deb0;
        case 0x15dec8u: goto label_15dec8;
        case 0x15dee0u: goto label_15dee0;
        case 0x15df00u: goto label_15df00;
        case 0x15df30u: goto label_15df30;
        case 0x15df4cu: goto label_15df4c;
        case 0x15df6cu: goto label_15df6c;
        case 0x15df8cu: goto label_15df8c;
        case 0x15dfa8u: goto label_15dfa8;
        case 0x15dfc8u: goto label_15dfc8;
        case 0x15dfe0u: goto label_15dfe0;
        case 0x15dff4u: goto label_15dff4;
        case 0x15e008u: goto label_15e008;
        case 0x15e018u: goto label_15e018;
        case 0x15e03cu: goto label_15e03c;
        case 0x15e054u: goto label_15e054;
        case 0x15e074u: goto label_15e074;
        case 0x15e094u: goto label_15e094;
        case 0x15e0d0u: goto label_15e0d0;
        case 0x15e0f8u: goto label_15e0f8;
        case 0x15e114u: goto label_15e114;
        case 0x15e130u: goto label_15e130;
        case 0x15e150u: goto label_15e150;
        case 0x15e174u: goto label_15e174;
        case 0x15e184u: goto label_15e184;
        case 0x15e198u: goto label_15e198;
        case 0x15e1b4u: goto label_15e1b4;
        case 0x15e1ccu: goto label_15e1cc;
        case 0x15e1e4u: goto label_15e1e4;
        case 0x15e200u: goto label_15e200;
        case 0x15e220u: goto label_15e220;
        case 0x15e23cu: goto label_15e23c;
        case 0x15e270u: goto label_15e270;
        case 0x15e2a0u: goto label_15e2a0;
        case 0x15e2c4u: goto label_15e2c4;
        case 0x15e2e8u: goto label_15e2e8;
        case 0x15e30cu: goto label_15e30c;
        case 0x15e318u: goto label_15e318;
        case 0x15e328u: goto label_15e328;
        case 0x15e34cu: goto label_15e34c;
        case 0x15e370u: goto label_15e370;
        case 0x15e388u: goto label_15e388;
        case 0x15e3b0u: goto label_15e3b0;
        case 0x15e3c4u: goto label_15e3c4;
        case 0x15e3e0u: goto label_15e3e0;
        case 0x15e3f4u: goto label_15e3f4;
        case 0x15e41cu: goto label_15e41c;
        case 0x15e440u: goto label_15e440;
        case 0x15e468u: goto label_15e468;
        case 0x15e47cu: goto label_15e47c;
        case 0x15e4b8u: goto label_15e4b8;
        default: break;
    }

    ctx->pc = 0x15d0e0u;

    // 0x15d0e0: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x15d0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
    // 0x15d0e4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15d0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15d0e8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15d0ec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15d0f0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15d0f4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15d0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15d0f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15d0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15d100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15d100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15d104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15d104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15d108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15d108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15d10c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x15d10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
    // 0x15d110: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x15d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x15d114: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x15d114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15d118: 0xafa40278  sw          $a0, 0x278($sp)
    ctx->pc = 0x15d118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 4));
    // 0x15d11c: 0x8fa50278  lw          $a1, 0x278($sp)
    ctx->pc = 0x15d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x15d120: 0x10a004eb  beqz        $a1, . + 4 + (0x4EB << 2)
    ctx->pc = 0x15D120u;
    {
        const bool branch_taken_0x15d120 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d120) {
            ctx->pc = 0x15E4D0u;
            goto label_15e4d0;
        }
    }
    ctx->pc = 0x15D128u;
    // 0x15d128: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x15d128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x15d12c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d130: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x15d130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15d134: 0xc085538  jal         func_2154E0
    ctx->pc = 0x15D134u;
    SET_GPR_U32(ctx, 31, 0x15D13Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x15D134u, 0x15D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D13Cu;
label_15d13c:
    // 0x15d13c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x15d13cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d140: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x15d140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x15d144: 0x248432f0  addiu       $a0, $a0, 0x32F0
    ctx->pc = 0x15d144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13040));
    // 0x15d148: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x15d148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x15d14c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x15d14cu;
    { uint32_t bits = FAST_READ32(0x4E32F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15d150: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x15d150u;
    { uint32_t bits = FAST_READ32(0x4E32F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15d154: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x15d154u;
    { uint32_t bits = FAST_READ32(0x4E32F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15d158: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x15d158u;
    { uint32_t bits = FAST_READ32(0x4E32FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15d15c: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x15d15cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x15d160: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x15d160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x15d164: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x15d164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x15d168: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x15d168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x15d16c: 0xa3a0027f  sb          $zero, 0x27F($sp)
    ctx->pc = 0x15d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 639), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d170: 0xa3a0027e  sb          $zero, 0x27E($sp)
    ctx->pc = 0x15d170u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 638), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d174: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x15d174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
    // 0x15d178: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x15D178u;
    {
        const bool branch_taken_0x15d178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d178) {
            ctx->pc = 0x15D270u;
            goto label_15d270;
        }
    }
    ctx->pc = 0x15D180u;
label_15d180:
    // 0x15d180: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x15d180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x15d184: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x15d184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15d188: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x15d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x15d18c: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x15d18cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x15d190: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15d194: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15d194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d198: 0x8c4501b0  lw          $a1, 0x1B0($v0)
    ctx->pc = 0x15d198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x15d19c: 0xc09681c  jal         func_25A070
    ctx->pc = 0x15D19Cu;
    SET_GPR_U32(ctx, 31, 0x15D1A4u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x15D19Cu, 0x15D1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1A4u;
label_15d1a4:
    // 0x15d1a4: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x15d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
    // 0x15d1a8: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x15d1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x15d1ac: 0xc0525e4  jal         func_149790
    ctx->pc = 0x15D1ACu;
    SET_GPR_U32(ctx, 31, 0x15D1B4u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x15D1ACu, 0x15D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1B4u;
label_15d1b4:
    // 0x15d1b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1b8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x15D1B8u;
    {
        const bool branch_taken_0x15d1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1b8) {
            ctx->pc = 0x15D244u;
            goto label_15d244;
        }
    }
    ctx->pc = 0x15D1C0u;
label_15d1c0:
    // 0x15d1c0: 0xa3a0027e  sb          $zero, 0x27E($sp)
    ctx->pc = 0x15d1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 638), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d1c4: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x15d1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d1c8: 0x24e40074  addiu       $a0, $a3, 0x74
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 116));
    // 0x15d1cc: 0xc057344  jal         func_15CD10
    ctx->pc = 0x15D1CCu;
    SET_GPR_U32(ctx, 31, 0x15D1D4u);
    ctx->pc = 0x15CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD10u, 0x15D1CCu, 0x15D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D1D4u;
label_15d1d4:
    // 0x15d1d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D1D8u;
    {
        const bool branch_taken_0x15d1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1d8) {
            ctx->pc = 0x15D204u;
            goto label_15d204;
        }
    }
    ctx->pc = 0x15D1E0u;
label_15d1e0:
    // 0x15d1e0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x15d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15d1e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d1e8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D1E8u;
    {
        const bool branch_taken_0x15d1e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d1e8) {
            ctx->pc = 0x15D200u;
            goto label_15d200;
        }
    }
    ctx->pc = 0x15D1F0u;
    // 0x15d1f0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15d1f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d1f4: 0xa3b6027e  sb          $s6, 0x27E($sp)
    ctx->pc = 0x15d1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 638), (uint8_t)GPR_U32(ctx, 22));
    // 0x15d1f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15D1F8u;
    {
        const bool branch_taken_0x15d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1f8) {
            ctx->pc = 0x15D220u;
            goto label_15d220;
        }
    }
    ctx->pc = 0x15D200u;
label_15d200:
    // 0x15d200: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_15d204:
    // 0x15d204: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d208: 0x24430074  addiu       $v1, $v0, 0x74
    ctx->pc = 0x15d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15d20c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15d20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d210: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x15D210u;
    SET_GPR_U32(ctx, 31, 0x15D218u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x15D210u, 0x15D218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D218u;
label_15d218:
    // 0x15d218: 0x1622fff1  bne         $s1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15D218u;
    {
        const bool branch_taken_0x15d218 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d218) {
            ctx->pc = 0x15D1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d1e0;
        }
    }
    ctx->pc = 0x15D220u;
label_15d220:
    // 0x15d220: 0x93a5027e  lbu         $a1, 0x27E($sp)
    ctx->pc = 0x15d220u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 638)));
    // 0x15d224: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x15d224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15d228: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D228u;
    {
        const bool branch_taken_0x15d228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d228) {
            ctx->pc = 0x15D240u;
            goto label_15d240;
        }
    }
    ctx->pc = 0x15D230u;
    // 0x15d230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d234: 0xa3a2027f  sb          $v0, 0x27F($sp)
    ctx->pc = 0x15d234u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 639), (uint8_t)GPR_U32(ctx, 2));
    // 0x15d238: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D238u;
    {
        const bool branch_taken_0x15d238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d238) {
            ctx->pc = 0x15D25Cu;
            goto label_15d25c;
        }
    }
    ctx->pc = 0x15D240u;
label_15d240:
    // 0x15d240: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15d240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_15d244:
    // 0x15d244: 0x8fa40270  lw          $a0, 0x270($sp)
    ctx->pc = 0x15d244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x15d248: 0xc0525dc  jal         func_149770
    ctx->pc = 0x15D248u;
    SET_GPR_U32(ctx, 31, 0x15D250u);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x15D248u, 0x15D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D250u;
label_15d250:
    // 0x15d250: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d254: 0x1605ffda  bne         $s0, $a1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x15D254u;
    {
        const bool branch_taken_0x15d254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        if (branch_taken_0x15d254) {
            ctx->pc = 0x15D1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d1c0;
        }
    }
    ctx->pc = 0x15D25Cu;
label_15d25c:
    // 0x15d25c: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x15d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x15d260: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x15d260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x15d264: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x15d264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x15d268: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x15d268u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15d26c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x15d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_15d270:
    // 0x15d270: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x15d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x15d274: 0x2c850004  sltiu       $a1, $a0, 0x4
    ctx->pc = 0x15d274u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x15d278: 0x14a0ffc1  bnez        $a1, . + 4 + (-0x3F << 2)
    ctx->pc = 0x15D278u;
    {
        const bool branch_taken_0x15d278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d278) {
            ctx->pc = 0x15D180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d180;
        }
    }
    ctx->pc = 0x15D280u;
    // 0x15d280: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d284: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15d284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15d288: 0xc057344  jal         func_15CD10
    ctx->pc = 0x15D288u;
    SET_GPR_U32(ctx, 31, 0x15D290u);
    ctx->pc = 0x15CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD10u, 0x15D288u, 0x15D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D290u;
label_15d290:
    // 0x15d290: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d294: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15D294u;
    {
        const bool branch_taken_0x15d294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d294) {
            ctx->pc = 0x15D364u;
            goto label_15d364;
        }
    }
    ctx->pc = 0x15D29Cu;
label_15d29c:
    // 0x15d29c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x15d29cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2a0: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x15d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
    // 0x15d2a4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15D2A4u;
    {
        const bool branch_taken_0x15d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d2a4) {
            ctx->pc = 0x15D334u;
            goto label_15d334;
        }
    }
    ctx->pc = 0x15D2ACu;
label_15d2ac:
    // 0x15d2ac: 0x8fa7026c  lw          $a3, 0x26C($sp)
    ctx->pc = 0x15d2acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x15d2b0: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x15d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x15d2b4: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x15d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x15d2b8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15d2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2bc: 0x8c4501b0  lw          $a1, 0x1B0($v0)
    ctx->pc = 0x15d2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x15d2c0: 0xc09681c  jal         func_25A070
    ctx->pc = 0x15D2C0u;
    SET_GPR_U32(ctx, 31, 0x15D2C8u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x15D2C0u, 0x15D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2C8u;
label_15d2c8:
    // 0x15d2c8: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x15d2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
    // 0x15d2cc: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x15d2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x15d2d0: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15d2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2d4: 0xc0525e4  jal         func_149790
    ctx->pc = 0x15D2D4u;
    SET_GPR_U32(ctx, 31, 0x15D2DCu);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x15D2D4u, 0x15D2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D2DCu;
label_15d2dc:
    // 0x15d2dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d2dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D2E0u;
    {
        const bool branch_taken_0x15d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d2e0) {
            ctx->pc = 0x15D30Cu;
            goto label_15d30c;
        }
    }
    ctx->pc = 0x15D2E8u;
label_15d2e8:
    // 0x15d2e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d2ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15d2f0: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x15d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x15d2f4: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x15d2f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15d2f8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D2F8u;
    {
        const bool branch_taken_0x15d2f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d2f8) {
            ctx->pc = 0x15D308u;
            goto label_15d308;
        }
    }
    ctx->pc = 0x15D300u;
    // 0x15d300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d304: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x15d304u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15d308:
    // 0x15d308: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15d308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_15d30c:
    // 0x15d30c: 0x16e00006  bnez        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x15D30Cu;
    {
        const bool branch_taken_0x15d30c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d30c) {
            ctx->pc = 0x15D328u;
            goto label_15d328;
        }
    }
    ctx->pc = 0x15D314u;
    // 0x15d314: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x15d314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
    // 0x15d318: 0xc0525dc  jal         func_149770
    ctx->pc = 0x15D318u;
    SET_GPR_U32(ctx, 31, 0x15D320u);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x15D318u, 0x15D320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D320u;
label_15d320:
    // 0x15d320: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x15D320u;
    {
        const bool branch_taken_0x15d320 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d320) {
            ctx->pc = 0x15D2E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d2e8;
        }
    }
    ctx->pc = 0x15D328u;
label_15d328:
    // 0x15d328: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x15d328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x15d32c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x15d32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d330: 0xafa4026c  sw          $a0, 0x26C($sp)
    ctx->pc = 0x15d330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
label_15d334:
    // 0x15d334: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D334u;
    {
        const bool branch_taken_0x15d334 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d334) {
            ctx->pc = 0x15D34Cu;
            goto label_15d34c;
        }
    }
    ctx->pc = 0x15D33Cu;
    // 0x15d33c: 0x8fa5026c  lw          $a1, 0x26C($sp)
    ctx->pc = 0x15d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
    // 0x15d340: 0x2ca60004  sltiu       $a2, $a1, 0x4
    ctx->pc = 0x15d340u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x15d344: 0x14c0ffd9  bnez        $a2, . + 4 + (-0x27 << 2)
    ctx->pc = 0x15D344u;
    {
        const bool branch_taken_0x15d344 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d344) {
            ctx->pc = 0x15D2ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d2ac;
        }
    }
    ctx->pc = 0x15D34Cu;
label_15d34c:
    // 0x15d34c: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x15d34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x15d350: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D350u;
    {
        const bool branch_taken_0x15d350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d350) {
            ctx->pc = 0x15D360u;
            goto label_15d360;
        }
    }
    ctx->pc = 0x15D358u;
    // 0x15d358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15d358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d35c: 0xa3a4027f  sb          $a0, 0x27F($sp)
    ctx->pc = 0x15d35cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 639), (uint8_t)GPR_U32(ctx, 4));
label_15d360:
    // 0x15d360: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x15d360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_15d364:
    // 0x15d364: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d368: 0x24620074  addiu       $v0, $v1, 0x74
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x15d36c: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x15d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x15d370: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x15d370u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15d374: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x15D374u;
    SET_GPR_U32(ctx, 31, 0x15D37Cu);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x15D374u, 0x15D37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D37Cu;
label_15d37c:
    // 0x15d37c: 0x222282b  sltu        $a1, $s1, $v0
    ctx->pc = 0x15d37cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15d380: 0x14a0ffc6  bnez        $a1, . + 4 + (-0x3A << 2)
    ctx->pc = 0x15D380u;
    {
        const bool branch_taken_0x15d380 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d380) {
            ctx->pc = 0x15D29Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d29c;
        }
    }
    ctx->pc = 0x15D388u;
    // 0x15d388: 0x93a6027f  lbu         $a2, 0x27F($sp)
    ctx->pc = 0x15d388u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 639)));
    // 0x15d38c: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x15d38cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15d390: 0x1060044f  beqz        $v1, . + 4 + (0x44F << 2)
    ctx->pc = 0x15D390u;
    {
        const bool branch_taken_0x15d390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d390) {
            ctx->pc = 0x15E4D0u;
            goto label_15e4d0;
        }
    }
    ctx->pc = 0x15D398u;
    // 0x15d398: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d39c: 0x24870074  addiu       $a3, $a0, 0x74
    ctx->pc = 0x15d39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x15d3a0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3a4: 0xc0572c0  jal         func_15CB00
    ctx->pc = 0x15D3A4u;
    SET_GPR_U32(ctx, 31, 0x15D3ACu);
    ctx->pc = 0x15CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CB00u, 0x15D3A4u, 0x15D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3ACu;
label_15d3ac:
    // 0x15d3ac: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d3b0: 0xac4000fc  sw          $zero, 0xFC($v0)
    ctx->pc = 0x15d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 0));
    // 0x15d3b4: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x15d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x15d3b8: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d3bc: 0xaca40094  sw          $a0, 0x94($a1)
    ctx->pc = 0x15d3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 148), GPR_U32(ctx, 4));
    // 0x15d3c0: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x15d3c4: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15d3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d3c8: 0xaca20098  sw          $v0, 0x98($a1)
    ctx->pc = 0x15d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 2));
    // 0x15d3cc: 0x8f82baa8  lw          $v0, -0x4558($gp)
    ctx->pc = 0x15d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x15d3d0: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x15d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x15d3d4: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x15d3d4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15d3d8: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x15D3D8u;
    SET_GPR_U32(ctx, 31, 0x15D3E0u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15D3D8u, 0x15D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3E0u;
label_15d3e0:
    // 0x15d3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3e4: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x15D3E4u;
    SET_GPR_U32(ctx, 31, 0x15D3ECu);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15D3E4u, 0x15D3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D3ECu;
label_15d3ec:
    // 0x15d3ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3f0: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x15d3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d3f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15d3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3f8: 0x8cc20094  lw          $v0, 0x94($a2)
    ctx->pc = 0x15d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
    // 0x15d3fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d3fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d400: 0xc0b134c  jal         func_2C4D30
    ctx->pc = 0x15D400u;
    SET_GPR_U32(ctx, 31, 0x15D408u);
    ctx->pc = 0x2C4D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D30u, 0x15D400u, 0x15D408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D408u;
label_15d408:
    // 0x15d408: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x15d40c: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x15D40Cu;
    SET_GPR_U32(ctx, 31, 0x15D414u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15D40Cu, 0x15D414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D414u;
label_15d414:
    // 0x15d414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d418: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x15D418u;
    SET_GPR_U32(ctx, 31, 0x15D420u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15D418u, 0x15D420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D420u;
label_15d420:
    // 0x15d420: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d428: 0x8c620098  lw          $v0, 0x98($v1)
    ctx->pc = 0x15d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
    // 0x15d42c: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x15d42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x15d430: 0x7ba50150  lq          $a1, 0x150($sp)
    ctx->pc = 0x15d430u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15d434: 0xc0b1358  jal         func_2C4D60
    ctx->pc = 0x15D434u;
    SET_GPR_U32(ctx, 31, 0x15D43Cu);
    ctx->pc = 0x2C4D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D60u, 0x15D434u, 0x15D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D43Cu;
label_15d43c:
    // 0x15d43c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d444: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x15d444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x15d448: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x15d448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x15d44c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x15d44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x15d450: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x15d450u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15d454: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x15D454u;
    SET_GPR_U32(ctx, 31, 0x15D45Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15D454u, 0x15D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D45Cu;
label_15d45c:
    // 0x15d45c: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x15d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
    // 0x15d460: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15d460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d464: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15d464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d468: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x15d468u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x15d46c: 0x24e73310  addiu       $a3, $a3, 0x3310
    ctx->pc = 0x15d46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13072));
    // 0x15d470: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15d470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d474: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x15D474u;
    SET_GPR_U32(ctx, 31, 0x15D47Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x15D474u, 0x15D47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D47Cu;
label_15d47c:
    // 0x15d47c: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x15d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
    // 0x15d480: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15d480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d484: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x15d484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x15d488: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x15d488u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d48c: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x15d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x15d490: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x15d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x15d494: 0x8ce40034  lw          $a0, 0x34($a3)
    ctx->pc = 0x15d494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x15d498: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x15d498u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15d49c: 0x27868e08  addiu       $a2, $gp, -0x71F8
    ctx->pc = 0x15d49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938120));
    // 0x15d4a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15d4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d4a4: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x15D4A4u;
    SET_GPR_U32(ctx, 31, 0x15D4ACu);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x15D4A4u, 0x15D4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4ACu;
label_15d4ac:
    // 0x15d4ac: 0xafa0025c  sw          $zero, 0x25C($sp)
    ctx->pc = 0x15d4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
    // 0x15d4b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15d4b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4b4: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x15D4B4u;
    {
        const bool branch_taken_0x15d4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4b4) {
            ctx->pc = 0x15D830u;
            goto label_15d830;
        }
    }
    ctx->pc = 0x15D4BCu;
label_15d4bc:
    // 0x15d4bc: 0xafa00258  sw          $zero, 0x258($sp)
    ctx->pc = 0x15d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 0));
    // 0x15d4c0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x15d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15d4c4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x15d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x15d4c8: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x15d4c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15d4cc: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x15d4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15d4d0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15d4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4d4: 0x8c6501b0  lw          $a1, 0x1B0($v1)
    ctx->pc = 0x15d4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x15d4d8: 0xc09681c  jal         func_25A070
    ctx->pc = 0x15D4D8u;
    SET_GPR_U32(ctx, 31, 0x15D4E0u);
    ctx->pc = 0x25A070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A070u, 0x15D4D8u, 0x15D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4E0u;
label_15d4e0:
    // 0x15d4e0: 0xafa20254  sw          $v0, 0x254($sp)
    ctx->pc = 0x15d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 2));
    // 0x15d4e4: 0x8fa70254  lw          $a3, 0x254($sp)
    ctx->pc = 0x15d4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x15d4e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15d4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4ec: 0xc0525e4  jal         func_149790
    ctx->pc = 0x15D4ECu;
    SET_GPR_U32(ctx, 31, 0x15D4F4u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x15D4ECu, 0x15D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D4F4u;
label_15d4f4:
    // 0x15d4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4f8: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x15D4F8u;
    {
        const bool branch_taken_0x15d4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d4f8) {
            ctx->pc = 0x15D810u;
            goto label_15d810;
        }
    }
    ctx->pc = 0x15D500u;
label_15d500:
    // 0x15d500: 0xa3a0027d  sb          $zero, 0x27D($sp)
    ctx->pc = 0x15d500u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 637), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d504: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15d504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d508: 0x24a60074  addiu       $a2, $a1, 0x74
    ctx->pc = 0x15d508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 116));
    // 0x15d50c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15d50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d510: 0xc057344  jal         func_15CD10
    ctx->pc = 0x15D510u;
    SET_GPR_U32(ctx, 31, 0x15D518u);
    ctx->pc = 0x15CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD10u, 0x15D510u, 0x15D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D518u;
label_15d518:
    // 0x15d518: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15d518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d51c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15D51Cu;
    {
        const bool branch_taken_0x15d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d51c) {
            ctx->pc = 0x15D550u;
            goto label_15d550;
        }
    }
    ctx->pc = 0x15D524u;
label_15d524:
    // 0x15d524: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x15d524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15d528: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x15d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x15d52c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d530: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x15d530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15d534: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D534u;
    {
        const bool branch_taken_0x15d534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d534) {
            ctx->pc = 0x15D54Cu;
            goto label_15d54c;
        }
    }
    ctx->pc = 0x15D53Cu;
    // 0x15d53c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d540: 0xa3a5027d  sb          $a1, 0x27D($sp)
    ctx->pc = 0x15d540u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 637), (uint8_t)GPR_U32(ctx, 5));
    // 0x15d544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15D544u;
    {
        const bool branch_taken_0x15d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d544) {
            ctx->pc = 0x15D568u;
            goto label_15d568;
        }
    }
    ctx->pc = 0x15D54Cu;
label_15d54c:
    // 0x15d54c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x15d54cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_15d550:
    // 0x15d550: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d554: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15d554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15d558: 0xc05733c  jal         func_15CCF0
    ctx->pc = 0x15D558u;
    SET_GPR_U32(ctx, 31, 0x15D560u);
    ctx->pc = 0x15CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCF0u, 0x15D558u, 0x15D560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D560u;
label_15d560:
    // 0x15d560: 0x1622fff0  bne         $s1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x15D560u;
    {
        const bool branch_taken_0x15d560 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d560) {
            ctx->pc = 0x15D524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d524;
        }
    }
    ctx->pc = 0x15D568u;
label_15d568:
    // 0x15d568: 0x93a2027d  lbu         $v0, 0x27D($sp)
    ctx->pc = 0x15d568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 637)));
    // 0x15d56c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15d56cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15d570: 0x14c000a6  bnez        $a2, . + 4 + (0xA6 << 2)
    ctx->pc = 0x15D570u;
    {
        const bool branch_taken_0x15d570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d570) {
            ctx->pc = 0x15D80Cu;
            goto label_15d80c;
        }
    }
    ctx->pc = 0x15D578u;
    // 0x15d578: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15d57c: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x15d57cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x15d580: 0x8ca601b0  lw          $a2, 0x1B0($a1)
    ctx->pc = 0x15d580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x15d584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15d584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15d588: 0x14c2003d  bne         $a2, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x15D588u;
    {
        const bool branch_taken_0x15d588 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d588) {
            ctx->pc = 0x15D680u;
            goto label_15d680;
        }
    }
    ctx->pc = 0x15D590u;
    // 0x15d590: 0x8fa7025c  lw          $a3, 0x25C($sp)
    ctx->pc = 0x15d590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x15d594: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d598: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x15d598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x15d59c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x15d59cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15d5a0: 0xac470094  sw          $a3, 0x94($v0)
    ctx->pc = 0x15d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 7));
    // 0x15d5a4: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x15d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x15d5a8: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x15D5A8u;
    SET_GPR_U32(ctx, 31, 0x15D5B0u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15D5A8u, 0x15D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5B0u;
label_15d5b0:
    // 0x15d5b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5b4: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x15D5B4u;
    SET_GPR_U32(ctx, 31, 0x15D5BCu);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15D5B4u, 0x15D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5BCu;
label_15d5bc:
    // 0x15d5bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5c0: 0x8fa50258  lw          $a1, 0x258($sp)
    ctx->pc = 0x15d5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x15d5c4: 0xc0b134c  jal         func_2C4D30
    ctx->pc = 0x15D5C4u;
    SET_GPR_U32(ctx, 31, 0x15D5CCu);
    ctx->pc = 0x2C4D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D30u, 0x15D5C4u, 0x15D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5CCu;
label_15d5cc:
    // 0x15d5cc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d5d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5d4: 0xc048094  jal         func_120250
    ctx->pc = 0x15D5D4u;
    SET_GPR_U32(ctx, 31, 0x15D5DCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x15D5D4u, 0x15D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5DCu;
label_15d5dc:
    // 0x15d5dc: 0xafa20250  sw          $v0, 0x250($sp)
    ctx->pc = 0x15d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 2));
    // 0x15d5e0: 0x8fa50250  lw          $a1, 0x250($sp)
    ctx->pc = 0x15d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x15d5e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15d5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d5e8: 0x24050474  addiu       $a1, $zero, 0x474
    ctx->pc = 0x15d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
    // 0x15d5ec: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x15d5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x15d5f0: 0x24c63320  addiu       $a2, $a2, 0x3320
    ctx->pc = 0x15d5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13088));
    // 0x15d5f4: 0xc041a50  jal         func_106940
    ctx->pc = 0x15D5F4u;
    SET_GPR_U32(ctx, 31, 0x15D5FCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x15D5F4u, 0x15D5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D5FCu;
label_15d5fc:
    // 0x15d5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d600: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x15d600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x15d604: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15d604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d608: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x15d608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15d60c: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x15d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15d610: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x15d610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x15d614: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x15d614u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15d618: 0xc08e5d8  jal         func_239760
    ctx->pc = 0x15D618u;
    SET_GPR_U32(ctx, 31, 0x15D620u);
    ctx->pc = 0x239760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239760u, 0x15D618u, 0x15D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D620u;
label_15d620:
    // 0x15d620: 0x8f86bbdc  lw          $a2, -0x4424($gp)
    ctx->pc = 0x15d620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15d624: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15d624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d628: 0x8fa7024c  lw          $a3, 0x24C($sp)
    ctx->pc = 0x15d628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x15d62c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15d62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d630: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x15D630u;
    SET_GPR_U32(ctx, 31, 0x15D638u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x15D630u, 0x15D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D638u;
label_15d638:
    // 0x15d638: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x15d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x15d63c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d640: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x15D640u;
    SET_GPR_U32(ctx, 31, 0x15D648u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x15D640u, 0x15D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D648u;
label_15d648:
    // 0x15d648: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15d648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d64c: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15d64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d650: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x15d650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
    // 0x15d654: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15d658: 0x27a60200  addiu       $a2, $sp, 0x200
    ctx->pc = 0x15d658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x15d65c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15d65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d660: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15D660u;
    SET_GPR_U32(ctx, 31, 0x15D668u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15D660u, 0x15D668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D668u;
label_15d668:
    // 0x15d668: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x15d66c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15d670: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x15D670u;
    SET_GPR_U32(ctx, 31, 0x15D678u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x15D670u, 0x15D678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D678u;
label_15d678:
    // 0x15d678: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x15D678u;
    {
        const bool branch_taken_0x15d678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d678) {
            ctx->pc = 0x15D7C0u;
            goto label_15d7c0;
        }
    }
    ctx->pc = 0x15D680u;
label_15d680:
    // 0x15d680: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x15d680u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15d684: 0x9d3821  addu        $a3, $a0, $sp
    ctx->pc = 0x15d684u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x15d688: 0x8ce201b0  lw          $v0, 0x1B0($a3)
    ctx->pc = 0x15d688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 432)));
    // 0x15d68c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x15d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15d690: 0x14430047  bne         $v0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x15D690u;
    {
        const bool branch_taken_0x15d690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15d690) {
            ctx->pc = 0x15D7B0u;
            goto label_15d7b0;
        }
    }
    ctx->pc = 0x15D698u;
    // 0x15d698: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x15d698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x15d69c: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d6a0: 0xaca40098  sw          $a0, 0x98($a1)
    ctx->pc = 0x15d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 152), GPR_U32(ctx, 4));
    // 0x15d6a4: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x15d6a8: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x15D6A8u;
    SET_GPR_U32(ctx, 31, 0x15D6B0u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15D6A8u, 0x15D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6B0u;
label_15d6b0:
    // 0x15d6b0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x15d6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x15d6b4: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x15d6b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15d6b8: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x15D6B8u;
    SET_GPR_U32(ctx, 31, 0x15D6C0u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15D6B8u, 0x15D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6C0u;
label_15d6c0:
    // 0x15d6c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6c4: 0x8fa50258  lw          $a1, 0x258($sp)
    ctx->pc = 0x15d6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x15d6c8: 0xc0b1358  jal         func_2C4D60
    ctx->pc = 0x15D6C8u;
    SET_GPR_U32(ctx, 31, 0x15D6D0u);
    ctx->pc = 0x2C4D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4D60u, 0x15D6C8u, 0x15D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6D0u;
label_15d6d0:
    // 0x15d6d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d6d4: 0xc048094  jal         func_120250
    ctx->pc = 0x15D6D4u;
    SET_GPR_U32(ctx, 31, 0x15D6DCu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x15D6D4u, 0x15D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6DCu;
label_15d6dc:
    // 0x15d6dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6e0: 0xafa40248  sw          $a0, 0x248($sp)
    ctx->pc = 0x15d6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 4));
    // 0x15d6e4: 0x8fa70248  lw          $a3, 0x248($sp)
    ctx->pc = 0x15d6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x15d6e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15d6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6ec: 0x24050474  addiu       $a1, $zero, 0x474
    ctx->pc = 0x15d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1140));
    // 0x15d6f0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x15d6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x15d6f4: 0x24c63320  addiu       $a2, $a2, 0x3320
    ctx->pc = 0x15d6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13088));
    // 0x15d6f8: 0xc041a50  jal         func_106940
    ctx->pc = 0x15D6F8u;
    SET_GPR_U32(ctx, 31, 0x15D700u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x15D6F8u, 0x15D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D700u;
label_15d700:
    // 0x15d700: 0xafa20244  sw          $v0, 0x244($sp)
    ctx->pc = 0x15d700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 2));
    // 0x15d704: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x15d704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d708: 0x8f86bbdc  lw          $a2, -0x4424($gp)
    ctx->pc = 0x15d708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15d70c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15d70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d710: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x15d710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15d714: 0xc08e5d8  jal         func_239760
    ctx->pc = 0x15D714u;
    SET_GPR_U32(ctx, 31, 0x15D71Cu);
    ctx->pc = 0x239760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239760u, 0x15D714u, 0x15D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D71Cu;
label_15d71c:
    // 0x15d71c: 0x8f82bbdc  lw          $v0, -0x4424($gp)
    ctx->pc = 0x15d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15d720: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x15d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x15d724: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x15d724u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15d728: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x15d728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x15d72c: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x15D72Cu;
    SET_GPR_U32(ctx, 31, 0x15D734u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x15D72Cu, 0x15D734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D734u;
label_15d734:
    // 0x15d734: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x15d734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x15d738: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15d738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d73c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d73cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d740: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x15D740u;
    SET_GPR_U32(ctx, 31, 0x15D748u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x15D740u, 0x15D748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D748u;
label_15d748:
    // 0x15d748: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15d748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d74c: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x15d74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x15d750: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15d750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15d754: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x15d754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x15d758: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15d758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d75c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15D75Cu;
    SET_GPR_U32(ctx, 31, 0x15D764u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15D75Cu, 0x15D764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D764u;
label_15d764:
    // 0x15d764: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15d764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d768: 0xac8000f8  sw          $zero, 0xF8($a0)
    ctx->pc = 0x15d768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 0));
    // 0x15d76c: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d770: 0x8ca20098  lw          $v0, 0x98($a1)
    ctx->pc = 0x15d770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x15d774: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x15d774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x15d778: 0x7fa300c0  sq          $v1, 0xC0($sp)
    ctx->pc = 0x15d778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
    // 0x15d77c: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x15d77cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15d780: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D780u;
    {
        const bool branch_taken_0x15d780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x15d780) {
            ctx->pc = 0x15D794u;
            goto label_15d794;
        }
    }
    ctx->pc = 0x15D788u;
    // 0x15d788: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15d788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d78c: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15d78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d790: 0xaca400e8  sw          $a0, 0xE8($a1)
    ctx->pc = 0x15d790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 4));
label_15d794:
    // 0x15d794: 0x27a601f0  addiu       $a2, $sp, 0x1F0
    ctx->pc = 0x15d794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
    // 0x15d798: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15d798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d79c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15d7a0: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x15D7A0u;
    SET_GPR_U32(ctx, 31, 0x15D7A8u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x15D7A0u, 0x15D7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7A8u;
label_15d7a8:
    // 0x15d7a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15D7A8u;
    {
        const bool branch_taken_0x15d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d7a8) {
            ctx->pc = 0x15D7C0u;
            goto label_15d7c0;
        }
    }
    ctx->pc = 0x15D7B0u;
label_15d7b0:
    // 0x15d7b0: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x15d7b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d7b4: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x15d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x15d7b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d7bc: 0xace200fc  sw          $v0, 0xFC($a3)
    ctx->pc = 0x15d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 252), GPR_U32(ctx, 2));
label_15d7c0:
    // 0x15d7c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15d7c4: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x15d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x15d7c8: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
    // 0x15d7cc: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x15d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d7d0: 0xafa40258  sw          $a0, 0x258($sp)
    ctx->pc = 0x15d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 4));
    // 0x15d7d4: 0xafa201e8  sw          $v0, 0x1E8($sp)
    ctx->pc = 0x15d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 2));
    // 0x15d7d8: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x15d7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15d7dc: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x15d7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x15d7e0: 0x8c4501b0  lw          $a1, 0x1B0($v0)
    ctx->pc = 0x15d7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x15d7e4: 0xafa501e4  sw          $a1, 0x1E4($sp)
    ctx->pc = 0x15d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 484), GPR_U32(ctx, 5));
    // 0x15d7e8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d7ec: 0x24440074  addiu       $a0, $v0, 0x74
    ctx->pc = 0x15d7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15d7f0: 0x27a701e0  addiu       $a3, $sp, 0x1E0
    ctx->pc = 0x15d7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x15d7f4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15d7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d7f8: 0xc057964  jal         func_15E590
    ctx->pc = 0x15D7F8u;
    SET_GPR_U32(ctx, 31, 0x15D800u);
    ctx->pc = 0x15E590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E590u, 0x15D7F8u, 0x15D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D800u;
label_15d800:
    // 0x15d800: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x15d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
    // 0x15d804: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x15d804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15d808: 0xafa4025c  sw          $a0, 0x25C($sp)
    ctx->pc = 0x15d808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 4));
label_15d80c:
    // 0x15d80c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x15d80cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_15d810:
    // 0x15d810: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x15d810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x15d814: 0xc0525dc  jal         func_149770
    ctx->pc = 0x15D814u;
    SET_GPR_U32(ctx, 31, 0x15D81Cu);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x15D814u, 0x15D81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D81Cu;
label_15d81c:
    // 0x15d81c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x15d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x15d820: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x15d820u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15d824: 0x1602ff36  bne         $s0, $v0, . + 4 + (-0xCA << 2)
    ctx->pc = 0x15D824u;
    {
        const bool branch_taken_0x15d824 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d824) {
            ctx->pc = 0x15D500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d500;
        }
    }
    ctx->pc = 0x15D82Cu;
    // 0x15d82c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d82cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15d830:
    // 0x15d830: 0x2e650004  sltiu       $a1, $s3, 0x4
    ctx->pc = 0x15d830u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x15d834: 0x14a0ff21  bnez        $a1, . + 4 + (-0xDF << 2)
    ctx->pc = 0x15D834u;
    {
        const bool branch_taken_0x15d834 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d834) {
            ctx->pc = 0x15D4BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d4bc;
        }
    }
    ctx->pc = 0x15D83Cu;
    // 0x15d83c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d840: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x15d840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x15d844: 0x24042710  addiu       $a0, $zero, 0x2710
    ctx->pc = 0x15d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x15d848: 0x14640055  bne         $v1, $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x15D848u;
    {
        const bool branch_taken_0x15d848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15d848) {
            ctx->pc = 0x15D9A0u;
            goto label_15d9a0;
        }
    }
    ctx->pc = 0x15D850u;
    // 0x15d850: 0x8fa70278  lw          $a3, 0x278($sp)
    ctx->pc = 0x15d850u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x15d854: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15d854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d858: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x15d858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x15d85c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x15D85Cu;
    SET_GPR_U32(ctx, 31, 0x15D864u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x15D85Cu, 0x15D864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D864u;
label_15d864:
    // 0x15d864: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x15d864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x15d868: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x15d868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x15d86c: 0xc096880  jal         func_25A200
    ctx->pc = 0x15D86Cu;
    SET_GPR_U32(ctx, 31, 0x15D874u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x15D86Cu, 0x15D874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D874u;
label_15d874:
    // 0x15d874: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x15d874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
    // 0x15d878: 0x8fa6023c  lw          $a2, 0x23C($sp)
    ctx->pc = 0x15d878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x15d87c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15d87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d880: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x15d880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15d884: 0xc085538  jal         func_2154E0
    ctx->pc = 0x15D884u;
    SET_GPR_U32(ctx, 31, 0x15D88Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x15D884u, 0x15D88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D88Cu;
label_15d88c:
    // 0x15d88c: 0xafa20238  sw          $v0, 0x238($sp)
    ctx->pc = 0x15d88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
    // 0x15d890: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x15d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x15d894: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x15d894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x15d898: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x15d898u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15d89c: 0xc0984a4  jal         func_261290
    ctx->pc = 0x15D89Cu;
    SET_GPR_U32(ctx, 31, 0x15D8A4u);
    ctx->pc = 0x261290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261290u, 0x15D89Cu, 0x15D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8A4u;
label_15d8a4:
    // 0x15d8a4: 0xafa20234  sw          $v0, 0x234($sp)
    ctx->pc = 0x15d8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    // 0x15d8a8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x15d8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8ac: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x15D8ACu;
    SET_GPR_U32(ctx, 31, 0x15D8B4u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x15D8ACu, 0x15D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8B4u;
label_15d8b4:
    // 0x15d8b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8b8: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x15d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x15d8bc: 0x8fa40230  lw          $a0, 0x230($sp)
    ctx->pc = 0x15d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x15d8c0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x15d8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15d8c4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x15D8C4u;
    SET_GPR_U32(ctx, 31, 0x15D8CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x15D8C4u, 0x15D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8CCu;
label_15d8cc:
    // 0x15d8cc: 0xafa2022c  sw          $v0, 0x22C($sp)
    ctx->pc = 0x15d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 2));
    // 0x15d8d0: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x15d8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x15d8d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15d8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d8d8: 0xc048bc4  jal         func_122F10
    ctx->pc = 0x15D8D8u;
    SET_GPR_U32(ctx, 31, 0x15D8E0u);
    ctx->pc = 0x122F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F10u, 0x15D8D8u, 0x15D8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8E0u;
label_15d8e0:
    // 0x15d8e0: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x15d8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x15d8e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d8e8: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x15d8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x15d8ec: 0xc09bc24  jal         func_26F090
    ctx->pc = 0x15D8ECu;
    SET_GPR_U32(ctx, 31, 0x15D8F4u);
    ctx->pc = 0x26F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F090u, 0x15D8ECu, 0x15D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D8F4u;
label_15d8f4:
    // 0x15d8f4: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x15d8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x15d8f8: 0xafa00228  sw          $zero, 0x228($sp)
    ctx->pc = 0x15d8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 0));
    // 0x15d8fc: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x15d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x15d900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d904: 0xc041a60  jal         func_106980
    ctx->pc = 0x15D904u;
    SET_GPR_U32(ctx, 31, 0x15D90Cu);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x15D904u, 0x15D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D90Cu;
label_15d90c:
    // 0x15d90c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15d90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d910: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x15d910u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d914: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15D914u;
    {
        const bool branch_taken_0x15d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d914) {
            ctx->pc = 0x15D96Cu;
            goto label_15d96c;
        }
    }
    ctx->pc = 0x15D91Cu;
label_15d91c:
    // 0x15d91c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x15d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x15d920: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x15d920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x15d924: 0x8fa40224  lw          $a0, 0x224($sp)
    ctx->pc = 0x15d924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x15d928: 0x3c10004e  lui         $s0, 0x4E
    ctx->pc = 0x15d928u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)78 << 16));
    // 0x15d92c: 0x26103330  addiu       $s0, $s0, 0x3330
    ctx->pc = 0x15d92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13104));
    // 0x15d930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d934: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15d934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d938: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15d938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d93c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x15D93Cu;
    SET_GPR_U32(ctx, 31, 0x15D944u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x15D93Cu, 0x15D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D944u;
label_15d944:
    // 0x15d944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d948: 0xafa40220  sw          $a0, 0x220($sp)
    ctx->pc = 0x15d948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 4));
    // 0x15d94c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x15d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x15d950: 0x8fa30220  lw          $v1, 0x220($sp)
    ctx->pc = 0x15d950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x15d954: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x15d954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15d958: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D958u;
    {
        const bool branch_taken_0x15d958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d958) {
            ctx->pc = 0x15D968u;
            goto label_15d968;
        }
    }
    ctx->pc = 0x15D960u;
    // 0x15d960: 0x8fa20220  lw          $v0, 0x220($sp)
    ctx->pc = 0x15d960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x15d964: 0xafa20228  sw          $v0, 0x228($sp)
    ctx->pc = 0x15d964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
label_15d968:
    // 0x15d968: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x15d968u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_15d96c:
    // 0x15d96c: 0x27b101d0  addiu       $s1, $sp, 0x1D0
    ctx->pc = 0x15d96cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x15d970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d974: 0xc041a14  jal         func_106850
    ctx->pc = 0x15D974u;
    SET_GPR_U32(ctx, 31, 0x15D97Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x15D974u, 0x15D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D97Cu;
label_15d97c:
    // 0x15d97c: 0x16c2ffe7  bne         $s6, $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x15D97Cu;
    {
        const bool branch_taken_0x15d97c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x15d97c) {
            ctx->pc = 0x15D91Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15d91c;
        }
    }
    ctx->pc = 0x15D984u;
    // 0x15d984: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15d984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d988: 0xac6000e8  sw          $zero, 0xE8($v1)
    ctx->pc = 0x15d988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
    // 0x15d98c: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x15d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x15d990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d994: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15d994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15d998: 0xc048b2c  jal         func_122CB0
    ctx->pc = 0x15D998u;
    SET_GPR_U32(ctx, 31, 0x15D9A0u);
    ctx->pc = 0x122CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122CB0u, 0x15D998u, 0x15D9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9A0u;
label_15d9a0:
    // 0x15d9a0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d9a4: 0x24500074  addiu       $s0, $v0, 0x74
    ctx->pc = 0x15d9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15d9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15d9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9ac: 0xc05742c  jal         func_15D0B0
    ctx->pc = 0x15D9ACu;
    SET_GPR_U32(ctx, 31, 0x15D9B4u);
    ctx->pc = 0x15D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D0B0u, 0x15D9ACu, 0x15D9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9B4u;
label_15d9b4:
    // 0x15d9b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9b8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x15d9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x15d9bc: 0x14a002b0  bnez        $a1, . + 4 + (0x2B0 << 2)
    ctx->pc = 0x15D9BCu;
    {
        const bool branch_taken_0x15d9bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d9bc) {
            ctx->pc = 0x15E480u;
            goto label_15e480;
        }
    }
    ctx->pc = 0x15D9C4u;
    // 0x15d9c4: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x15d9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
    // 0x15d9c8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x15d9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15d9cc: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x15D9CCu;
    SET_GPR_U32(ctx, 31, 0x15D9D4u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x15D9CCu, 0x15D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9D4u;
label_15d9d4:
    // 0x15d9d4: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x15d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x15d9d8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x15d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x15d9dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x15d9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x15d9e0: 0x24a53348  addiu       $a1, $a1, 0x3348
    ctx->pc = 0x15d9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13128));
    // 0x15d9e4: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x15D9E4u;
    SET_GPR_U32(ctx, 31, 0x15D9ECu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x15D9E4u, 0x15D9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D9ECu;
label_15d9ec:
    // 0x15d9ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15d9ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d9f0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d9f4: 0x8c910080  lw          $s1, 0x80($a0)
    ctx->pc = 0x15d9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x15d9f8: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x15d9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15d9fc: 0x24e40074  addiu       $a0, $a3, 0x74
    ctx->pc = 0x15d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 116));
    // 0x15da00: 0xc057954  jal         func_15E550
    ctx->pc = 0x15DA00u;
    SET_GPR_U32(ctx, 31, 0x15DA08u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x15DA00u, 0x15DA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA08u;
label_15da08:
    // 0x15da08: 0x222282b  sltu        $a1, $s1, $v0
    ctx->pc = 0x15da08u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15da0c: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x15DA0Cu;
    {
        const bool branch_taken_0x15da0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x15da0c) {
            ctx->pc = 0x15DA90u;
            goto label_15da90;
        }
    }
    ctx->pc = 0x15DA14u;
    // 0x15da14: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15da14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da18: 0x24460074  addiu       $a2, $v0, 0x74
    ctx->pc = 0x15da18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15da1c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15da1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da20: 0xc057954  jal         func_15E550
    ctx->pc = 0x15DA20u;
    SET_GPR_U32(ctx, 31, 0x15DA28u);
    ctx->pc = 0x15E550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E550u, 0x15DA20u, 0x15DA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA28u;
label_15da28:
    // 0x15da28: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x15da28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15da2c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da30: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x15da30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x15da34: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x15da34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15da38: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x15da38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x15da3c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da40: 0x8fb70280  lw          $s7, 0x280($sp)
    ctx->pc = 0x15da40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da44: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x15da44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da48: 0x8c500080  lw          $s0, 0x80($v0)
    ctx->pc = 0x15da48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15da4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15da4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15da50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da54: 0xc0584ec  jal         func_1613B0
    ctx->pc = 0x15DA54u;
    SET_GPR_U32(ctx, 31, 0x15DA5Cu);
    ctx->pc = 0x1613B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1613B0u, 0x15DA54u, 0x15DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA5Cu;
label_15da5c:
    // 0x15da5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15da5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15da60: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da64: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x15da64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
    // 0x15da68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15DA68u;
    {
        const bool branch_taken_0x15da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15da68) {
            ctx->pc = 0x15DA90u;
            goto label_15da90;
        }
    }
    ctx->pc = 0x15DA70u;
label_15da70:
    // 0x15da70: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da74: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15da74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da78: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15da78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15da7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15da7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15da80: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15DA80u;
    SET_GPR_U32(ctx, 31, 0x15DA88u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15DA80u, 0x15DA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DA88u;
label_15da88:
    // 0x15da88: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15da88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da8c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x15da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_15da90:
    // 0x15da90: 0x8fb10280  lw          $s1, 0x280($sp)
    ctx->pc = 0x15da90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da94: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x15da94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x15da98: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15da9c: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x15da9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x15daa0: 0x7ba20170  lq          $v0, 0x170($sp)
    ctx->pc = 0x15daa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15daa4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15daa8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15DAA8u;
    {
        const bool branch_taken_0x15daa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x15daa8) {
            ctx->pc = 0x15DAC8u;
            goto label_15dac8;
        }
    }
    ctx->pc = 0x15DAB0u;
    // 0x15dab0: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15dab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dab4: 0x8ca60094  lw          $a2, 0x94($a1)
    ctx->pc = 0x15dab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
    // 0x15dab8: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dabc: 0x8c640080  lw          $a0, 0x80($v1)
    ctx->pc = 0x15dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x15dac0: 0x14c40005  bne         $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15DAC0u;
    {
        const bool branch_taken_0x15dac0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x15dac0) {
            ctx->pc = 0x15DAD8u;
            goto label_15dad8;
        }
    }
    ctx->pc = 0x15DAC8u;
label_15dac8:
    // 0x15dac8: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x15dac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dacc: 0x8ce200fc  lw          $v0, 0xFC($a3)
    ctx->pc = 0x15daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 252)));
    // 0x15dad0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x15DAD0u;
    {
        const bool branch_taken_0x15dad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dad0) {
            ctx->pc = 0x15DA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15da70;
        }
    }
    ctx->pc = 0x15DAD8u;
label_15dad8:
    // 0x15dad8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dadc: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dae0: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15dae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15dae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dae8: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15DAE8u;
    SET_GPR_U32(ctx, 31, 0x15DAF0u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15DAE8u, 0x15DAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DAF0u;
label_15daf0:
    // 0x15daf0: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x15daf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x15daf4: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x15daf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15daf8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15daf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dafc: 0xc041010  jal         func_104040
    ctx->pc = 0x15DAFCu;
    SET_GPR_U32(ctx, 31, 0x15DB04u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15DAFCu, 0x15DB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB04u;
label_15db04:
    // 0x15db04: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x15db04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x15db08: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15db08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15db0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15db0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db10: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15DB10u;
    SET_GPR_U32(ctx, 31, 0x15DB18u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15DB10u, 0x15DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB18u;
label_15db18:
    // 0x15db18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15db18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db1c: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x15db1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15db20: 0x27a6021c  addiu       $a2, $sp, 0x21C
    ctx->pc = 0x15db20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15db24: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15DB24u;
    SET_GPR_U32(ctx, 31, 0x15DB2Cu);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15DB24u, 0x15DB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB2Cu;
label_15db2c:
    // 0x15db2c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15db2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db30: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15db34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15db34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db38: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15DB38u;
    SET_GPR_U32(ctx, 31, 0x15DB40u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15DB38u, 0x15DB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB40u;
label_15db40:
    // 0x15db40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15db40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db44: 0x16440022  bne         $s2, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15DB44u;
    {
        const bool branch_taken_0x15db44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x15db44) {
            ctx->pc = 0x15DBD0u;
            goto label_15dbd0;
        }
    }
    ctx->pc = 0x15DB4Cu;
    // 0x15db4c: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15db50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db54: 0x27a2021c  addiu       $v0, $sp, 0x21C
    ctx->pc = 0x15db54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15db58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15db58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db5c: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15DB5Cu;
    SET_GPR_U32(ctx, 31, 0x15DB64u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15DB5Cu, 0x15DB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB64u;
label_15db64:
    // 0x15db64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15db64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db68: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15db68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15db6c: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x15db6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x15db70: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x15db70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15db74: 0x24420068  addiu       $v0, $v0, 0x68
    ctx->pc = 0x15db74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15db78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15db78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15db7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db80: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DB80u;
    SET_GPR_U32(ctx, 31, 0x15DB88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DB80u, 0x15DB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DB88u;
label_15db88:
    // 0x15db88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15db8c: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x15db8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x15db90: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15db90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15db94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15db94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15db98: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15db98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15db9c: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15DB9Cu;
    SET_GPR_U32(ctx, 31, 0x15DBA4u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15DB9Cu, 0x15DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBA4u;
label_15dba4:
    // 0x15dba4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15dba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dba8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dbac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15dbb0: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x15dbb0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15dbb4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15dbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dbbc: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DBBCu;
    SET_GPR_U32(ctx, 31, 0x15DBC4u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DBBCu, 0x15DBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBC4u;
label_15dbc4:
    // 0x15dbc4: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x15dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x15dbc8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x15DBC8u;
    {
        const bool branch_taken_0x15dbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dbc8) {
            ctx->pc = 0x15DC88u;
            goto label_15dc88;
        }
    }
    ctx->pc = 0x15DBD0u;
label_15dbd0:
    // 0x15dbd0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dbd4: 0x8c8600fc  lw          $a2, 0xFC($a0)
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x15dbd8: 0x2cc10002  sltiu       $at, $a2, 0x2
    ctx->pc = 0x15dbd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15dbdc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x15DBDCu;
    {
        const bool branch_taken_0x15dbdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dbdc) {
            ctx->pc = 0x15DC30u;
            goto label_15dc30;
        }
    }
    ctx->pc = 0x15DBE4u;
    // 0x15dbe4: 0x8fa70280  lw          $a3, 0x280($sp)
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dbe8: 0x24e20068  addiu       $v0, $a3, 0x68
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 104));
    // 0x15dbec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15dbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dbf4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DBF4u;
    SET_GPR_U32(ctx, 31, 0x15DBFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DBF4u, 0x15DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBFCu;
label_15dbfc:
    // 0x15dbfc: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x15dbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x15dc00: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x15dc00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15dc04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dc08: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dc0c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x15dc10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc14: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15dc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc18: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15dc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15dc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dc20: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DC20u;
    SET_GPR_U32(ctx, 31, 0x15DC28u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DC20u, 0x15DC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC28u;
label_15dc28:
    // 0x15dc28: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15DC28u;
    {
        const bool branch_taken_0x15dc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dc28) {
            ctx->pc = 0x15DC88u;
            goto label_15dc88;
        }
    }
    ctx->pc = 0x15DC30u;
label_15dc30:
    // 0x15dc30: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15dc30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dc34: 0x24a60068  addiu       $a2, $a1, 0x68
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x15dc38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15dc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc40: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DC40u;
    SET_GPR_U32(ctx, 31, 0x15DC48u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DC40u, 0x15DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC48u;
label_15dc48:
    // 0x15dc48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15dc4c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x15dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x15dc50: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dc54: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x15dc54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc58: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15dc5c: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15DC5Cu;
    SET_GPR_U32(ctx, 31, 0x15DC64u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15DC5Cu, 0x15DC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC64u;
label_15dc64:
    // 0x15dc64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15dc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc68: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dc6c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15dc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15dc70: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x15dc70u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15dc74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15dc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dc7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15dc7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dc80: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DC80u;
    SET_GPR_U32(ctx, 31, 0x15DC88u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DC80u, 0x15DC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC88u;
label_15dc88:
    // 0x15dc88: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x15dc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dc8c: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dc90: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x15dc94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dc98: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15DC98u;
    SET_GPR_U32(ctx, 31, 0x15DCA0u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15DC98u, 0x15DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCA0u;
label_15dca0:
    // 0x15dca0: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x15dca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x15dca4: 0x27a701c0  addiu       $a3, $sp, 0x1C0
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15dca8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15dca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dcac: 0xc041010  jal         func_104040
    ctx->pc = 0x15DCACu;
    SET_GPR_U32(ctx, 31, 0x15DCB4u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15DCACu, 0x15DCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCB4u;
label_15dcb4:
    // 0x15dcb4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x15dcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x15dcb8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x15dcb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15dcbc: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15DCBCu;
    SET_GPR_U32(ctx, 31, 0x15DCC4u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15DCBCu, 0x15DCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCC4u;
label_15dcc4:
    // 0x15dcc4: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x15dcc4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15dcc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dccc: 0x27a2021c  addiu       $v0, $sp, 0x21C
    ctx->pc = 0x15dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15dcd0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15dcd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dcd4: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15DCD4u;
    SET_GPR_U32(ctx, 31, 0x15DCDCu);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15DCD4u, 0x15DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCDCu;
label_15dcdc:
    // 0x15dcdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dce0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15dce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dce4: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15dce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dcec: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15DCECu;
    SET_GPR_U32(ctx, 31, 0x15DCF4u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15DCECu, 0x15DCF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DCF4u;
label_15dcf4:
    // 0x15dcf4: 0x16420020  bne         $s2, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15DCF4u;
    {
        const bool branch_taken_0x15dcf4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15dcf4) {
            ctx->pc = 0x15DD78u;
            goto label_15dd78;
        }
    }
    ctx->pc = 0x15DCFCu;
    // 0x15dcfc: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15dd00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd04: 0x27a5021c  addiu       $a1, $sp, 0x21C
    ctx->pc = 0x15dd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15dd08: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15DD08u;
    SET_GPR_U32(ctx, 31, 0x15DD10u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15DD08u, 0x15DD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD10u;
label_15dd10:
    // 0x15dd10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd14: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x15dd14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dd18: 0x24c40068  addiu       $a0, $a2, 0x68
    ctx->pc = 0x15dd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
    // 0x15dd1c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15dd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15dd20: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DD20u;
    SET_GPR_U32(ctx, 31, 0x15DD28u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DD20u, 0x15DD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD28u;
label_15dd28:
    // 0x15dd28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15dd30: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x15dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x15dd34: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dd38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd3c: 0x8fa6021c  lw          $a2, 0x21C($sp)
    ctx->pc = 0x15dd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15dd40: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15dd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd44: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15DD44u;
    SET_GPR_U32(ctx, 31, 0x15DD4Cu);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15DD44u, 0x15DD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD4Cu;
label_15dd4c:
    // 0x15dd4c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15dd4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd50: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dd54: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15dd58: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x15dd58u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15dd5c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x15dd5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15dd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dd64: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DD64u;
    SET_GPR_U32(ctx, 31, 0x15DD6Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DD64u, 0x15DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DD6Cu;
label_15dd6c:
    // 0x15dd6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15dd6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd70: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15DD70u;
    {
        const bool branch_taken_0x15dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dd70) {
            ctx->pc = 0x15DE24u;
            goto label_15de24;
        }
    }
    ctx->pc = 0x15DD78u;
label_15dd78:
    // 0x15dd78: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15dd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dd7c: 0x8ca400fc  lw          $a0, 0xFC($a1)
    ctx->pc = 0x15dd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x15dd80: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x15dd80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15dd84: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x15DD84u;
    {
        const bool branch_taken_0x15dd84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dd84) {
            ctx->pc = 0x15DDD0u;
            goto label_15ddd0;
        }
    }
    ctx->pc = 0x15DD8Cu;
    // 0x15dd8c: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x15dd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dd90: 0x24c70068  addiu       $a3, $a2, 0x68
    ctx->pc = 0x15dd90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 104));
    // 0x15dd94: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15dd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dd98: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15dd9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dda0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DDA0u;
    SET_GPR_U32(ctx, 31, 0x15DDA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DDA0u, 0x15DDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDA8u;
label_15dda8:
    // 0x15dda8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddac: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x15ddacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ddb0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15ddb4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ddb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ddb8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15ddb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddbc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15ddbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ddc0: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DDC0u;
    SET_GPR_U32(ctx, 31, 0x15DDC8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DDC0u, 0x15DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDC8u;
label_15ddc8:
    // 0x15ddc8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15DDC8u;
    {
        const bool branch_taken_0x15ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ddc8) {
            ctx->pc = 0x15DE24u;
            goto label_15de24;
        }
    }
    ctx->pc = 0x15DDD0u;
label_15ddd0:
    // 0x15ddd0: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15ddd4: 0x24640068  addiu       $a0, $v1, 0x68
    ctx->pc = 0x15ddd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 104));
    // 0x15ddd8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x15dddc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DDDCu;
    SET_GPR_U32(ctx, 31, 0x15DDE4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DDDCu, 0x15DDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DDE4u;
label_15dde4:
    // 0x15dde4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dde8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15ddec: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x15ddecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x15ddf0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15ddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15ddf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15ddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ddf8: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15ddfc: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15DDFCu;
    SET_GPR_U32(ctx, 31, 0x15DE04u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15DDFCu, 0x15DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE04u;
label_15de04:
    // 0x15de04: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15de08: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15de08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15de0c: 0x7ba500e0  lq          $a1, 0xE0($sp)
    ctx->pc = 0x15de0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x15de10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15de10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15de14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15de18: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DE18u;
    SET_GPR_U32(ctx, 31, 0x15DE20u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DE18u, 0x15DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE20u;
label_15de20:
    // 0x15de20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15de20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15de24:
    // 0x15de24: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x15de24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15de28: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15de28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15de2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15de2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de30: 0x8cc50080  lw          $a1, 0x80($a2)
    ctx->pc = 0x15de30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x15de34: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x15de34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15de38: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15DE38u;
    SET_GPR_U32(ctx, 31, 0x15DE40u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15DE38u, 0x15DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE40u;
label_15de40:
    // 0x15de40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15de40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de44: 0xafa5021c  sw          $a1, 0x21C($sp)
    ctx->pc = 0x15de44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 5));
    // 0x15de48: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15de4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15de4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de50: 0xc041010  jal         func_104040
    ctx->pc = 0x15DE50u;
    SET_GPR_U32(ctx, 31, 0x15DE58u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15DE50u, 0x15DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE58u;
label_15de58:
    // 0x15de58: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x15de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x15de5c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x15de5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15de60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15de60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de64: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15DE64u;
    SET_GPR_U32(ctx, 31, 0x15DE6Cu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15DE64u, 0x15DE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE6Cu;
label_15de6c:
    // 0x15de6c: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x15de6cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15de70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15de70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de74: 0x27a6021c  addiu       $a2, $sp, 0x21C
    ctx->pc = 0x15de74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15de78: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15DE78u;
    SET_GPR_U32(ctx, 31, 0x15DE80u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15DE78u, 0x15DE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE80u;
label_15de80:
    // 0x15de80: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15de80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de84: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x15de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15de88: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15DE88u;
    SET_GPR_U32(ctx, 31, 0x15DE90u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15DE88u, 0x15DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE90u;
label_15de90:
    // 0x15de90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15de90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de94: 0x1645001c  bne         $s2, $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x15DE94u;
    {
        const bool branch_taken_0x15de94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x15de94) {
            ctx->pc = 0x15DF08u;
            goto label_15df08;
        }
    }
    ctx->pc = 0x15DE9Cu;
    // 0x15de9c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x15de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15dea0: 0x27a6021c  addiu       $a2, $sp, 0x21C
    ctx->pc = 0x15dea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15dea4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15dea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dea8: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15DEA8u;
    SET_GPR_U32(ctx, 31, 0x15DEB0u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15DEA8u, 0x15DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEB0u;
label_15deb0:
    // 0x15deb0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15deb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15deb4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15deb8: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15deb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15debc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15debcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dec0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DEC0u;
    SET_GPR_U32(ctx, 31, 0x15DEC8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DEC0u, 0x15DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEC8u;
label_15dec8:
    // 0x15dec8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15dec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15decc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x15deccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x15ded0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15ded0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15ded4: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15ded4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15ded8: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15DED8u;
    SET_GPR_U32(ctx, 31, 0x15DEE0u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15DED8u, 0x15DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DEE0u;
label_15dee0:
    // 0x15dee0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15dee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dee4: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15dee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dee8: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x15dee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x15deec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15deecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15def0: 0x7ba500c0  lq          $a1, 0xC0($sp)
    ctx->pc = 0x15def0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15def4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15def4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15def8: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DEF8u;
    SET_GPR_U32(ctx, 31, 0x15DF00u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DEF8u, 0x15DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF00u;
label_15df00:
    // 0x15df00: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15DF00u;
    {
        const bool branch_taken_0x15df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df00) {
            ctx->pc = 0x15DFACu;
            goto label_15dfac;
        }
    }
    ctx->pc = 0x15DF08u;
label_15df08:
    // 0x15df08: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15df08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15df0c: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x15df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15df10: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x15df10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15df14: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x15DF14u;
    {
        const bool branch_taken_0x15df14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df14) {
            ctx->pc = 0x15DF54u;
            goto label_15df54;
        }
    }
    ctx->pc = 0x15DF1Cu;
    // 0x15df1c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15df20: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15df20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15df24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15df24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df28: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DF28u;
    SET_GPR_U32(ctx, 31, 0x15DF30u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DF28u, 0x15DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF30u;
label_15df30:
    // 0x15df30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15df30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15df34: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15df34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15df38: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15df38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15df3c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15df3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15df40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df44: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DF44u;
    SET_GPR_U32(ctx, 31, 0x15DF4Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DF44u, 0x15DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF4Cu;
label_15df4c:
    // 0x15df4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x15DF4Cu;
    {
        const bool branch_taken_0x15df4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15df4c) {
            ctx->pc = 0x15DFACu;
            goto label_15dfac;
        }
    }
    ctx->pc = 0x15DF54u;
label_15df54:
    // 0x15df54: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15df58: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15df58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15df5c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x15df5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15df60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15df60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df64: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15DF64u;
    SET_GPR_U32(ctx, 31, 0x15DF6Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15DF64u, 0x15DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF6Cu;
label_15df6c:
    // 0x15df6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15df6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15df70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15df74: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x15df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x15df78: 0x8fb30280  lw          $s3, 0x280($sp)
    ctx->pc = 0x15df78u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15df7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15df7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df80: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15df80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15df84: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15DF84u;
    SET_GPR_U32(ctx, 31, 0x15DF8Cu);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15DF84u, 0x15DF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DF8Cu;
label_15df8c:
    // 0x15df8c: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15df8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15df90: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15df90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15df94: 0x7ba500b0  lq          $a1, 0xB0($sp)
    ctx->pc = 0x15df94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15df98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15df98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15df9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15df9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15dfa0: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15DFA0u;
    SET_GPR_U32(ctx, 31, 0x15DFA8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15DFA0u, 0x15DFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFA8u;
label_15dfa8:
    // 0x15dfa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15dfac:
    // 0x15dfac: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15dfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dfb0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15dfb4: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15dfb8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dfb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15dfbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15dfc0: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15DFC0u;
    SET_GPR_U32(ctx, 31, 0x15DFC8u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15DFC0u, 0x15DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFC8u;
label_15dfc8:
    // 0x15dfc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dfc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfcc: 0xafa5021c  sw          $a1, 0x21C($sp)
    ctx->pc = 0x15dfccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 5));
    // 0x15dfd0: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15dfd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfd8: 0xc041010  jal         func_104040
    ctx->pc = 0x15DFD8u;
    SET_GPR_U32(ctx, 31, 0x15DFE0u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15DFD8u, 0x15DFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFE0u;
label_15dfe0:
    // 0x15dfe0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x15dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x15dfe4: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15dfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15dfe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dfec: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15DFECu;
    SET_GPR_U32(ctx, 31, 0x15DFF4u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15DFECu, 0x15DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DFF4u;
label_15dff4:
    // 0x15dff4: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x15dff4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15dff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15dff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15dffc: 0x27a6021c  addiu       $a2, $sp, 0x21C
    ctx->pc = 0x15dffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15e000: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15E000u;
    SET_GPR_U32(ctx, 31, 0x15E008u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15E000u, 0x15E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E008u;
label_15e008:
    // 0x15e008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15e008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e00c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x15e00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15e010: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15E010u;
    SET_GPR_U32(ctx, 31, 0x15E018u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15E010u, 0x15E018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E018u;
label_15e018:
    // 0x15e018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e01c: 0x16440020  bne         $s2, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15E01Cu;
    {
        const bool branch_taken_0x15e01c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 4));
        if (branch_taken_0x15e01c) {
            ctx->pc = 0x15E0A0u;
            goto label_15e0a0;
        }
    }
    ctx->pc = 0x15E024u;
    // 0x15e024: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x15e024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15e028: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e02c: 0x27a2021c  addiu       $v0, $sp, 0x21C
    ctx->pc = 0x15e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15e030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e034: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15E034u;
    SET_GPR_U32(ctx, 31, 0x15E03Cu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15E034u, 0x15E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E03Cu;
label_15e03c:
    // 0x15e03c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e040: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e044: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15e044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15e048: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15e048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15e04c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15E04Cu;
    SET_GPR_U32(ctx, 31, 0x15E054u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15E04Cu, 0x15E054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E054u;
label_15e054:
    // 0x15e054: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e058: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x15e058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15e05c: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x15e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
    // 0x15e060: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e064: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e068: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15e068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15e06c: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15E06Cu;
    SET_GPR_U32(ctx, 31, 0x15E074u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15E06Cu, 0x15E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E074u;
label_15e074:
    // 0x15e074: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e078: 0x8c900034  lw          $s0, 0x34($a0)
    ctx->pc = 0x15e078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15e07c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e080: 0x7ba501a0  lq          $a1, 0x1A0($sp)
    ctx->pc = 0x15e080u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x15e084: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e088: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e08c: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15E08Cu;
    SET_GPR_U32(ctx, 31, 0x15E094u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15E08Cu, 0x15E094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E094u;
label_15e094:
    // 0x15e094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e098: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x15E098u;
    {
        const bool branch_taken_0x15e098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e098) {
            ctx->pc = 0x15E154u;
            goto label_15e154;
        }
    }
    ctx->pc = 0x15E0A0u;
label_15e0a0:
    // 0x15e0a0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e0a4: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x15e0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15e0a8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x15e0a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e0ac: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x15E0ACu;
    {
        const bool branch_taken_0x15e0ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e0ac) {
            ctx->pc = 0x15E100u;
            goto label_15e100;
        }
    }
    ctx->pc = 0x15E0B4u;
    // 0x15e0b4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e0b8: 0x24560068  addiu       $s6, $v0, 0x68
    ctx->pc = 0x15e0b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15e0bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x15e0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0c0: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x15e0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15e0c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15E0C8u;
    SET_GPR_U32(ctx, 31, 0x15E0D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15E0C8u, 0x15E0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0D0u;
label_15e0d0:
    // 0x15e0d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15e0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e0d4: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e0d8: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x15e0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15e0dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x15e0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15e0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e0ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15e0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e0f0: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15E0F0u;
    SET_GPR_U32(ctx, 31, 0x15E0F8u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15E0F0u, 0x15E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E0F8u;
label_15e0f8:
    // 0x15e0f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x15E0F8u;
    {
        const bool branch_taken_0x15e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e0f8) {
            ctx->pc = 0x15E154u;
            goto label_15e154;
        }
    }
    ctx->pc = 0x15E100u;
label_15e100:
    // 0x15e100: 0x8fb00280  lw          $s0, 0x280($sp)
    ctx->pc = 0x15e100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e104: 0x26040068  addiu       $a0, $s0, 0x68
    ctx->pc = 0x15e104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
    // 0x15e108: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15e108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15e10c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15E10Cu;
    SET_GPR_U32(ctx, 31, 0x15E114u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15E10Cu, 0x15E114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E114u;
label_15e114:
    // 0x15e114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e118: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x15e118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15e11c: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x15e11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x15e120: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e124: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15e124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15e128: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15E128u;
    SET_GPR_U32(ctx, 31, 0x15E130u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15E128u, 0x15E130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E130u;
label_15e130:
    // 0x15e130: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e134: 0x8c910034  lw          $s1, 0x34($a0)
    ctx->pc = 0x15e134u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15e138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e13c: 0x7ba50190  lq          $a1, 0x190($sp)
    ctx->pc = 0x15e13cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15e140: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e144: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e148: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15E148u;
    SET_GPR_U32(ctx, 31, 0x15E150u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15E148u, 0x15E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E150u;
label_15e150:
    // 0x15e150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e154:
    // 0x15e154: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e158: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15e158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e15c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e160: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x15e160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15e164: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e168: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x15e168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x15e16c: 0xc058828  jal         func_1620A0
    ctx->pc = 0x15E16Cu;
    SET_GPR_U32(ctx, 31, 0x15E174u);
    ctx->pc = 0x1620A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1620A0u, 0x15E16Cu, 0x15E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E174u;
label_15e174:
    // 0x15e174: 0xafa2021c  sw          $v0, 0x21C($sp)
    ctx->pc = 0x15e174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
    // 0x15e178: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x15e178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15e17c: 0xc041010  jal         func_104040
    ctx->pc = 0x15E17Cu;
    SET_GPR_U32(ctx, 31, 0x15E184u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x15E17Cu, 0x15E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E184u;
label_15e184:
    // 0x15e184: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x15e184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x15e188: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15e188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15e18c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e18cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e190: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15E190u;
    SET_GPR_U32(ctx, 31, 0x15E198u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15E190u, 0x15E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E198u;
label_15e198:
    // 0x15e198: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x15e198u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e19c: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x15e19cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x15e1a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x15e1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1a4: 0x27b0021c  addiu       $s0, $sp, 0x21C
    ctx->pc = 0x15e1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15e1a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15e1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1ac: 0xc058b78  jal         func_162DE0
    ctx->pc = 0x15E1ACu;
    SET_GPR_U32(ctx, 31, 0x15E1B4u);
    ctx->pc = 0x162DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162DE0u, 0x15E1ACu, 0x15E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1B4u;
label_15e1b4:
    // 0x15e1b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15e1b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1bc: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x15e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15e1c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1c4: 0xc040ff8  jal         func_103FE0
    ctx->pc = 0x15E1C4u;
    SET_GPR_U32(ctx, 31, 0x15E1CCu);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x15E1C4u, 0x15E1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1CCu;
label_15e1cc:
    // 0x15e1cc: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x15E1CCu;
    {
        const bool branch_taken_0x15e1cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15e1cc) {
            ctx->pc = 0x15E244u;
            goto label_15e244;
        }
    }
    ctx->pc = 0x15E1D4u;
    // 0x15e1d4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x15e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15e1d8: 0x27a5021c  addiu       $a1, $sp, 0x21C
    ctx->pc = 0x15e1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 540));
    // 0x15e1dc: 0xc0444e0  jal         func_111380
    ctx->pc = 0x15E1DCu;
    SET_GPR_U32(ctx, 31, 0x15E1E4u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x15E1DCu, 0x15E1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1E4u;
label_15e1e4:
    // 0x15e1e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1e8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e1ec: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x15e1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x15e1f0: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15e1f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e1f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e1f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15E1F8u;
    SET_GPR_U32(ctx, 31, 0x15E200u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15E1F8u, 0x15E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E200u;
label_15e200:
    // 0x15e200: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15e200u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e204: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15e204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e208: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x15e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x15e20c: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e214: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x15e214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15e218: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15E218u;
    SET_GPR_U32(ctx, 31, 0x15E220u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15E218u, 0x15E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E220u;
label_15e220:
    // 0x15e220: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e224: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15e224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e228: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x15e228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15e22c: 0x7ba50170  lq          $a1, 0x170($sp)
    ctx->pc = 0x15e22cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x15e230: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e230u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e234: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15E234u;
    SET_GPR_U32(ctx, 31, 0x15E23Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15E234u, 0x15E23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E23Cu;
label_15e23c:
    // 0x15e23c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x15E23Cu;
    {
        const bool branch_taken_0x15e23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e23c) {
            ctx->pc = 0x15E30Cu;
            goto label_15e30c;
        }
    }
    ctx->pc = 0x15E244u;
label_15e244:
    // 0x15e244: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e248: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x15e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x15e24c: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x15e24cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15e250: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x15E250u;
    {
        const bool branch_taken_0x15e250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e250) {
            ctx->pc = 0x15E2A8u;
            goto label_15e2a8;
        }
    }
    ctx->pc = 0x15E258u;
    // 0x15e258: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15e258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e25c: 0x24a20068  addiu       $v0, $a1, 0x68
    ctx->pc = 0x15e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 104));
    // 0x15e260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e264: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15e264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e268: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15E268u;
    SET_GPR_U32(ctx, 31, 0x15E270u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15E268u, 0x15E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E270u;
label_15e270:
    // 0x15e270: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x15e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
    // 0x15e274: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x15e274u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x15e278: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15e278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e27c: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15e27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e280: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x15e280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x15e284: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x15e284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e288: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e28c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x15e28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e290: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e294: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15e294u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e298: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15E298u;
    SET_GPR_U32(ctx, 31, 0x15E2A0u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15E298u, 0x15E2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2A0u;
label_15e2a0:
    // 0x15e2a0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15E2A0u;
    {
        const bool branch_taken_0x15e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e2a0) {
            ctx->pc = 0x15E30Cu;
            goto label_15e30c;
        }
    }
    ctx->pc = 0x15E2A8u;
label_15e2a8:
    // 0x15e2a8: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e2ac: 0x24820068  addiu       $v0, $a0, 0x68
    ctx->pc = 0x15e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
    // 0x15e2b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15e2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15e2b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15E2BCu;
    SET_GPR_U32(ctx, 31, 0x15E2C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15E2BCu, 0x15E2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2C4u;
label_15e2c4:
    // 0x15e2c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15e2c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15e2cc: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x15e2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x15e2d0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e2d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2d8: 0x8fa2021c  lw          $v0, 0x21C($sp)
    ctx->pc = 0x15e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
    // 0x15e2dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2e0: 0xc057b30  jal         func_15ECC0
    ctx->pc = 0x15E2E0u;
    SET_GPR_U32(ctx, 31, 0x15E2E8u);
    ctx->pc = 0x15ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ECC0u, 0x15E2E0u, 0x15E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2E8u;
label_15e2e8:
    // 0x15e2e8: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x15e2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
    // 0x15e2ec: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e2f0: 0x8c450034  lw          $a1, 0x34($v0)
    ctx->pc = 0x15e2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15e2f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e2f8: 0x7ba50150  lq          $a1, 0x150($sp)
    ctx->pc = 0x15e2f8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x15e2fc: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x15e2fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x15e300: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e300u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e304: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x15E304u;
    SET_GPR_U32(ctx, 31, 0x15E30Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x15E304u, 0x15E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E30Cu;
label_15e30c:
    // 0x15e30c: 0x8f84baa8  lw          $a0, -0x4558($gp)
    ctx->pc = 0x15e30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949544)));
    // 0x15e310: 0xc0412ec  jal         func_104BB0
    ctx->pc = 0x15E310u;
    SET_GPR_U32(ctx, 31, 0x15E318u);
    ctx->pc = 0x104BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104BB0u, 0x15E310u, 0x15E318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E318u;
label_15e318:
    // 0x15e318: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15e318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e31c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15e31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e320: 0xc0ac868  jal         func_2B21A0
    ctx->pc = 0x15E320u;
    SET_GPR_U32(ctx, 31, 0x15E328u);
    ctx->pc = 0x2B21A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B21A0u, 0x15E320u, 0x15E328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E328u;
label_15e328:
    // 0x15e328: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x15e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
    // 0x15e32c: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e330: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x15e330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e334: 0x24870074  addiu       $a3, $a0, 0x74
    ctx->pc = 0x15e334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x15e338: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x15e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e33c: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x15e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x15e340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e344: 0xc057944  jal         func_15E510
    ctx->pc = 0x15E344u;
    SET_GPR_U32(ctx, 31, 0x15E34Cu);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15E344u, 0x15E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E34Cu;
label_15e34c:
    // 0x15e34c: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x15e34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
    // 0x15e350: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15e350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e354: 0x8fa50280  lw          $a1, 0x280($sp)
    ctx->pc = 0x15e354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e358: 0x24620074  addiu       $v0, $v1, 0x74
    ctx->pc = 0x15e358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x15e35c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e360: 0x8ca70080  lw          $a3, 0x80($a1)
    ctx->pc = 0x15e360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x15e364: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x15e364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e368: 0xc057944  jal         func_15E510
    ctx->pc = 0x15E368u;
    SET_GPR_U32(ctx, 31, 0x15E370u);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15E368u, 0x15E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E370u;
label_15e370:
    // 0x15e370: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x15e370u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x15e374: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x15e374u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x15e378: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x15e378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15e37c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x15e37cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15e380: 0xc0b133c  jal         func_2C4CF0
    ctx->pc = 0x15E380u;
    SET_GPR_U32(ctx, 31, 0x15E388u);
    ctx->pc = 0x2C4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4CF0u, 0x15E380u, 0x15E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E388u;
label_15e388:
    // 0x15e388: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e38c: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x15e38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    // 0x15e390: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x15e390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e394: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x15e394u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x15e398: 0x24450074  addiu       $a1, $v0, 0x74
    ctx->pc = 0x15e398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 116));
    // 0x15e39c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3a0: 0x8c710080  lw          $s1, 0x80($v1)
    ctx->pc = 0x15e3a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x15e3a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3a8: 0xc057944  jal         func_15E510
    ctx->pc = 0x15E3A8u;
    SET_GPR_U32(ctx, 31, 0x15E3B0u);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15E3A8u, 0x15E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3B0u;
label_15e3b0:
    // 0x15e3b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15e3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15e3b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15e3b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3bc: 0xc048094  jal         func_120250
    ctx->pc = 0x15E3BCu;
    SET_GPR_U32(ctx, 31, 0x15E3C4u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x15E3BCu, 0x15E3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3C4u;
label_15e3c4:
    // 0x15e3c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3c8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x15e3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x15e3cc: 0x24423358  addiu       $v0, $v0, 0x3358
    ctx->pc = 0x15e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13144));
    // 0x15e3d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3d4: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x15e3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x15e3d8: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x15E3D8u;
    SET_GPR_U32(ctx, 31, 0x15E3E0u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x15E3D8u, 0x15E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3E0u;
label_15e3e0:
    // 0x15e3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3e4: 0xafa40218  sw          $a0, 0x218($sp)
    ctx->pc = 0x15e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 4));
    // 0x15e3e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3ec: 0xc099948  jal         func_266520
    ctx->pc = 0x15E3ECu;
    SET_GPR_U32(ctx, 31, 0x15E3F4u);
    ctx->pc = 0x266520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266520u, 0x15E3ECu, 0x15E3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3F4u;
label_15e3f4:
    // 0x15e3f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e3f8: 0xafa50214  sw          $a1, 0x214($sp)
    ctx->pc = 0x15e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 5));
    // 0x15e3fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e400: 0x24060011  addiu       $a2, $zero, 0x11
    ctx->pc = 0x15e400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x15e404: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x15e404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e408: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e40c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e410: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e414: 0xc09a060  jal         func_268180
    ctx->pc = 0x15E414u;
    SET_GPR_U32(ctx, 31, 0x15E41Cu);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x15E414u, 0x15E41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E41Cu;
label_15e41c:
    // 0x15e41c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x15e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x15e420: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x15e420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15e424: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15E424u;
    {
        const bool branch_taken_0x15e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e424) {
            ctx->pc = 0x15E434u;
            goto label_15e434;
        }
    }
    ctx->pc = 0x15E42Cu;
    // 0x15e42c: 0x240403e7  addiu       $a0, $zero, 0x3E7
    ctx->pc = 0x15e42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x15e430: 0xafa40214  sw          $a0, 0x214($sp)
    ctx->pc = 0x15e430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 4));
label_15e434:
    // 0x15e434: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x15e434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e438: 0xc0999bc  jal         func_2666F0
    ctx->pc = 0x15E438u;
    SET_GPR_U32(ctx, 31, 0x15E440u);
    ctx->pc = 0x2666F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2666F0u, 0x15E438u, 0x15E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E440u;
label_15e440:
    // 0x15e440: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x15e440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
    // 0x15e444: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x15e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e44c: 0x8fa50218  lw          $a1, 0x218($sp)
    ctx->pc = 0x15e44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x15e450: 0x8fa20214  lw          $v0, 0x214($sp)
    ctx->pc = 0x15e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
    // 0x15e454: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e458: 0x8fa20210  lw          $v0, 0x210($sp)
    ctx->pc = 0x15e458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x15e45c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15e45cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e460: 0xc057b5c  jal         func_15ED70
    ctx->pc = 0x15E460u;
    SET_GPR_U32(ctx, 31, 0x15E468u);
    ctx->pc = 0x15ED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED70u, 0x15E460u, 0x15E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E468u;
label_15e468:
    // 0x15e468: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x15e468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x15e46c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15e46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e470: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x15e470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15e474: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x15E474u;
    SET_GPR_U32(ctx, 31, 0x15E47Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x15E474u, 0x15E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E47Cu;
label_15e47c:
    // 0x15e47c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15e47cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e480:
    // 0x15e480: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e484: 0x8c8500f8  lw          $a1, 0xF8($a0)
    ctx->pc = 0x15e484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x15e488: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x15E488u;
    {
        const bool branch_taken_0x15e488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e488) {
            ctx->pc = 0x15E4C0u;
            goto label_15e4c0;
        }
    }
    ctx->pc = 0x15E490u;
    // 0x15e490: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e494: 0x8fa20260  lw          $v0, 0x260($sp)
    ctx->pc = 0x15e494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x15e498: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x15e498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x15e49c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x15e49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15e4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e4a4: 0x7ba500f0  lq          $a1, 0xF0($sp)
    ctx->pc = 0x15e4a4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15e4a8: 0x27868e08  addiu       $a2, $gp, -0x71F8
    ctx->pc = 0x15e4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938120));
    // 0x15e4ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x15e4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e4b0: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x15E4B0u;
    SET_GPR_U32(ctx, 31, 0x15E4B8u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x15E4B0u, 0x15E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4B8u;
label_15e4b8:
    // 0x15e4b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15E4B8u;
    {
        const bool branch_taken_0x15e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4b8) {
            ctx->pc = 0x15E4D0u;
            goto label_15e4d0;
        }
    }
    ctx->pc = 0x15E4C0u;
label_15e4c0:
    // 0x15e4c0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x15e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x15e4c4: 0x8c8700f8  lw          $a3, 0xF8($a0)
    ctx->pc = 0x15e4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
    // 0x15e4c8: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x15e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15e4cc: 0xac8300f8  sw          $v1, 0xF8($a0)
    ctx->pc = 0x15e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 3));
label_15e4d0:
    // 0x15e4d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15e4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15e4d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15e4d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e4d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15e4d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e4dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15e4dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e4e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15e4e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e4e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e4e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e4e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15e4e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e4ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e4f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15e4f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15e4f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15e4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15e4f8: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x15e4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x15e4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15E4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E504u;
    // 0x15e504: 0x0  nop
    ctx->pc = 0x15e504u;
    // NOP
    // 0x15e508: 0x0  nop
    ctx->pc = 0x15e508u;
    // NOP
    // 0x15e50c: 0x0  nop
    ctx->pc = 0x15e50cu;
    // NOP
    ctx->pc = 0x15e510u;
}
