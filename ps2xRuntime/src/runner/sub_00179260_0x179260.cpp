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

// Function: sub_00179260
// Address: 0x179260 - 0x179ce0
void sub_00179260_0x179260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179260_0x179260");
#endif

    switch (ctx->pc) {
        case 0x1792c0u: goto label_1792c0;
        case 0x1792d4u: goto label_1792d4;
        case 0x179338u: goto label_179338;
        case 0x179368u: goto label_179368;
        case 0x17937cu: goto label_17937c;
        case 0x179390u: goto label_179390;
        case 0x1793bcu: goto label_1793bc;
        case 0x1793d0u: goto label_1793d0;
        case 0x1793e4u: goto label_1793e4;
        case 0x1793f0u: goto label_1793f0;
        case 0x179410u: goto label_179410;
        case 0x179424u: goto label_179424;
        case 0x17943cu: goto label_17943c;
        case 0x179450u: goto label_179450;
        case 0x179464u: goto label_179464;
        case 0x179478u: goto label_179478;
        case 0x179494u: goto label_179494;
        case 0x1794a8u: goto label_1794a8;
        case 0x1794c8u: goto label_1794c8;
        case 0x1794e0u: goto label_1794e0;
        case 0x1794f8u: goto label_1794f8;
        case 0x17950cu: goto label_17950c;
        case 0x179524u: goto label_179524;
        case 0x179538u: goto label_179538;
        case 0x17954cu: goto label_17954c;
        case 0x1795b4u: goto label_1795b4;
        case 0x1795c8u: goto label_1795c8;
        case 0x1795e0u: goto label_1795e0;
        case 0x179608u: goto label_179608;
        case 0x17961cu: goto label_17961c;
        case 0x179634u: goto label_179634;
        case 0x179658u: goto label_179658;
        case 0x179688u: goto label_179688;
        case 0x17969cu: goto label_17969c;
        case 0x1796d0u: goto label_1796d0;
        case 0x1796e4u: goto label_1796e4;
        case 0x1796f8u: goto label_1796f8;
        case 0x179724u: goto label_179724;
        case 0x179740u: goto label_179740;
        case 0x179754u: goto label_179754;
        case 0x179780u: goto label_179780;
        case 0x1797b4u: goto label_1797b4;
        case 0x1797e0u: goto label_1797e0;
        case 0x179814u: goto label_179814;
        case 0x179840u: goto label_179840;
        case 0x179864u: goto label_179864;
        case 0x179890u: goto label_179890;
        case 0x17989cu: goto label_17989c;
        case 0x1798bcu: goto label_1798bc;
        case 0x1798f4u: goto label_1798f4;
        case 0x179910u: goto label_179910;
        case 0x179924u: goto label_179924;
        case 0x17995cu: goto label_17995c;
        case 0x1799a4u: goto label_1799a4;
        case 0x1799c4u: goto label_1799c4;
        case 0x1799fcu: goto label_1799fc;
        case 0x179a18u: goto label_179a18;
        case 0x179a2cu: goto label_179a2c;
        case 0x179a64u: goto label_179a64;
        case 0x179aa4u: goto label_179aa4;
        case 0x179ad4u: goto label_179ad4;
        case 0x179b18u: goto label_179b18;
        case 0x179b54u: goto label_179b54;
        case 0x179b80u: goto label_179b80;
        case 0x179bb8u: goto label_179bb8;
        case 0x179bd0u: goto label_179bd0;
        case 0x179be4u: goto label_179be4;
        case 0x179c24u: goto label_179c24;
        case 0x179c48u: goto label_179c48;
        case 0x179c5cu: goto label_179c5c;
        case 0x179c98u: goto label_179c98;
        default: break;
    }

    ctx->pc = 0x179260u;

    // 0x179260: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x179260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x179264: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x179264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x179268: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x179268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17926c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x179270: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x179270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x179274: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x179274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x179278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x179278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17927c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x179280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x179284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x179288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17928c: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x17928cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x179290: 0xa3a50130  sb          $a1, 0x130($sp)
    ctx->pc = 0x179290u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 5));
    // 0x179294: 0x8fb50120  lw          $s5, 0x120($sp)
    ctx->pc = 0x179294u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179298: 0x92a30098  lbu         $v1, 0x98($s5)
    ctx->pc = 0x179298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 152)));
    // 0x17929c: 0x10600283  beqz        $v1, . + 4 + (0x283 << 2)
    ctx->pc = 0x17929Cu;
    {
        const bool branch_taken_0x17929c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17929c) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x1792A4u;
    // 0x1792a4: 0x93a30130  lbu         $v1, 0x130($sp)
    ctx->pc = 0x1792a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1792a8: 0xa383badc  sb          $v1, -0x4524($gp)
    ctx->pc = 0x1792a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949596), (uint8_t)GPR_U32(ctx, 3));
    // 0x1792ac: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1792acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1792b0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1792b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1792b4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1792b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1792b8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1792B8u;
    SET_GPR_U32(ctx, 31, 0x1792C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1792B8u, 0x1792C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1792C0u;
label_1792c0:
    // 0x1792c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1792c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1792c4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1792c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1792c8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1792c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1792cc: 0xc08c9a8  jal         func_2326A0
    ctx->pc = 0x1792CCu;
    SET_GPR_U32(ctx, 31, 0x1792D4u);
    ctx->pc = 0x2326A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2326A0u, 0x1792CCu, 0x1792D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1792D4u;
label_1792d4:
    // 0x1792d4: 0x14400275  bnez        $v0, . + 4 + (0x275 << 2)
    ctx->pc = 0x1792D4u;
    {
        const bool branch_taken_0x1792d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1792d4) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x1792DCu;
    // 0x1792dc: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1792dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1792e0: 0x90830099  lbu         $v1, 0x99($a0)
    ctx->pc = 0x1792e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 153)));
    // 0x1792e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1792e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1792e8: 0x9386badc  lbu         $a2, -0x4524($gp)
    ctx->pc = 0x1792e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949596)));
    // 0x1792ec: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1792ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1792f0: 0x1087026e  beq         $a0, $a3, . + 4 + (0x26E << 2)
    ctx->pc = 0x1792F0u;
    {
        const bool branch_taken_0x1792f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        if (branch_taken_0x1792f0) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x1792F8u;
    // 0x1792f8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1792f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1792fc: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x1792fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x179300: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
    ctx->pc = 0x179300u;
    {
        const bool branch_taken_0x179300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179300) {
            ctx->pc = 0x179464u;
            goto label_179464;
        }
    }
    ctx->pc = 0x179308u;
    // 0x179308: 0x9394badc  lbu         $s4, -0x4524($gp)
    ctx->pc = 0x179308u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949596)));
    // 0x17930c: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x17930Cu;
    {
        const bool branch_taken_0x17930c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17930c) {
            ctx->pc = 0x179340u;
            goto label_179340;
        }
    }
    ctx->pc = 0x179314u;
    // 0x179314: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179318: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x179318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17931c: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x17931cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x179320: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x179320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x179324: 0x24a54d10  addiu       $a1, $a1, 0x4D10
    ctx->pc = 0x179324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19728));
    // 0x179328: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17932c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17932cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179330: 0xc08f558  jal         func_23D560
    ctx->pc = 0x179330u;
    SET_GPR_U32(ctx, 31, 0x179338u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x179330u, 0x179338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179338u;
label_179338:
    // 0x179338: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x179338u;
    {
        const bool branch_taken_0x179338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179338) {
            ctx->pc = 0x179368u;
            goto label_179368;
        }
    }
    ctx->pc = 0x179340u;
label_179340:
    // 0x179340: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x179340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x179344: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x179344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x179348: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x179348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x17934c: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x17934cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x179350: 0x24c64d30  addiu       $a2, $a2, 0x4D30
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19760));
    // 0x179354: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x179354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17935c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x17935cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179360: 0xc08f558  jal         func_23D560
    ctx->pc = 0x179360u;
    SET_GPR_U32(ctx, 31, 0x179368u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x179360u, 0x179368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179368u;
label_179368:
    // 0x179368: 0x8fb40120  lw          $s4, 0x120($sp)
    ctx->pc = 0x179368u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17936c: 0x8e840070  lw          $a0, 0x70($s4)
    ctx->pc = 0x17936cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x179370: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x179370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x179374: 0xc085538  jal         func_2154E0
    ctx->pc = 0x179374u;
    SET_GPR_U32(ctx, 31, 0x17937Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x179374u, 0x17937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17937Cu;
label_17937c:
    // 0x17937c: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x17937cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x179380: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x179380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x179384: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x179384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179388: 0xc0a85e0  jal         func_2A1780
    ctx->pc = 0x179388u;
    SET_GPR_U32(ctx, 31, 0x179390u);
    ctx->pc = 0x2A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1780u, 0x179388u, 0x179390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179390u;
label_179390:
    // 0x179390: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x179390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x179394: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x179394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x179398: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x179398u;
    {
        const bool branch_taken_0x179398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x179398) {
            ctx->pc = 0x17943Cu;
            goto label_17943c;
        }
    }
    ctx->pc = 0x1793A0u;
    // 0x1793a0: 0x93a20130  lbu         $v0, 0x130($sp)
    ctx->pc = 0x1793a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1793a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1793A4u;
    {
        const bool branch_taken_0x1793a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1793a4) {
            ctx->pc = 0x17943Cu;
            goto label_17943c;
        }
    }
    ctx->pc = 0x1793ACu;
    // 0x1793ac: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1793acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1793b0: 0x24844d50  addiu       $a0, $a0, 0x4D50
    ctx->pc = 0x1793b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19792));
    // 0x1793b4: 0xc107156  jal         func_41C558
    ctx->pc = 0x1793B4u;
    SET_GPR_U32(ctx, 31, 0x1793BCu);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x1793B4u, 0x1793BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793BCu;
label_1793bc:
    // 0x1793bc: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x1793bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1793c0: 0x24e40058  addiu       $a0, $a3, 0x58
    ctx->pc = 0x1793c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 88));
    // 0x1793c4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1793c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1793c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1793C8u;
    SET_GPR_U32(ctx, 31, 0x1793D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1793C8u, 0x1793D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793D0u;
label_1793d0:
    // 0x1793d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1793d4: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1793d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1793d8: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x1793d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1793dc: 0xc0a85e0  jal         func_2A1780
    ctx->pc = 0x1793DCu;
    SET_GPR_U32(ctx, 31, 0x1793E4u);
    ctx->pc = 0x2A1780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1780u, 0x1793DCu, 0x1793E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793E4u;
label_1793e4:
    // 0x1793e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1793e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793e8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1793E8u;
    SET_GPR_U32(ctx, 31, 0x1793F0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1793E8u, 0x1793F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793F0u;
label_1793f0:
    // 0x1793f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1793f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793f4: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1793f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1793f8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1793f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1793fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1793fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179400: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x179400u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x179404: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x179404u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179408: 0xc08c800  jal         func_232000
    ctx->pc = 0x179408u;
    SET_GPR_U32(ctx, 31, 0x179410u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x179408u, 0x179410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179410u;
label_179410:
    // 0x179410: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179414: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x179414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x179418: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x179418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17941c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17941Cu;
    SET_GPR_U32(ctx, 31, 0x179424u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17941Cu, 0x179424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179424u;
label_179424:
    // 0x179424: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179428: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x179428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17942c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x17942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x179430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179434: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x179434u;
    SET_GPR_U32(ctx, 31, 0x17943Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x179434u, 0x17943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17943Cu;
label_17943c:
    // 0x17943c: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x17943cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179440: 0x8ce40070  lw          $a0, 0x70($a3)
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x179444: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x179444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x179448: 0xc085538  jal         func_2154E0
    ctx->pc = 0x179448u;
    SET_GPR_U32(ctx, 31, 0x179450u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x179448u, 0x179450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179450u;
label_179450:
    // 0x179450: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x179450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x179454: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x179454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179458: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x179458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17945c: 0xc05e070  jal         func_1781C0
    ctx->pc = 0x17945Cu;
    SET_GPR_U32(ctx, 31, 0x179464u);
    ctx->pc = 0x1781C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1781C0u, 0x17945Cu, 0x179464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179464u;
label_179464:
    // 0x179464: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x179464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179468: 0x24640058  addiu       $a0, $v1, 0x58
    ctx->pc = 0x179468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 88));
    // 0x17946c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17946cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179470: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179470u;
    SET_GPR_U32(ctx, 31, 0x179478u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179470u, 0x179478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179478u;
label_179478:
    // 0x179478: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x179478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17947c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179480: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179484: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x179484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179488: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x179488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x17948c: 0xc08c744  jal         func_231D10
    ctx->pc = 0x17948Cu;
    SET_GPR_U32(ctx, 31, 0x179494u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x17948Cu, 0x179494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179494u;
label_179494:
    // 0x179494: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x179494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179498: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x179498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x17949c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x17949cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1794a0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1794A0u;
    SET_GPR_U32(ctx, 31, 0x1794A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1794A0u, 0x1794A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794A8u;
label_1794a8:
    // 0x1794a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1794a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1794ac: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x1794acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1794b0: 0x8cc70034  lw          $a3, 0x34($a2)
    ctx->pc = 0x1794b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x1794b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1794b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1794b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794bc: 0x27a600e8  addiu       $a2, $sp, 0xE8
    ctx->pc = 0x1794bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x1794c0: 0xc08c744  jal         func_231D10
    ctx->pc = 0x1794C0u;
    SET_GPR_U32(ctx, 31, 0x1794C8u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x1794C0u, 0x1794C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794C8u;
label_1794c8:
    // 0x1794c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1794c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1794ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1794d0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1794d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1794d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1794d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1794d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1794D8u;
    SET_GPR_U32(ctx, 31, 0x1794E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1794D8u, 0x1794E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794E0u;
label_1794e0:
    // 0x1794e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1794e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1794e4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1794e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1794e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1794e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1794ec: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x1794ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1794f0: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x1794F0u;
    SET_GPR_U32(ctx, 31, 0x1794F8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1794F0u, 0x1794F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1794F8u;
label_1794f8:
    // 0x1794f8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1794f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1794fc: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1794fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x179500: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x179500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179504: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179504u;
    SET_GPR_U32(ctx, 31, 0x17950Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179504u, 0x17950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17950Cu;
label_17950c:
    // 0x17950c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17950cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179510: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179514: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179518: 0x27a600d8  addiu       $a2, $sp, 0xD8
    ctx->pc = 0x179518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x17951c: 0xc08c6c8  jal         func_231B20
    ctx->pc = 0x17951Cu;
    SET_GPR_U32(ctx, 31, 0x179524u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x17951Cu, 0x179524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179524u;
label_179524:
    // 0x179524: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179528: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x179528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x17952c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x17952cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179530: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179530u;
    SET_GPR_U32(ctx, 31, 0x179538u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179530u, 0x179538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179538u;
label_179538:
    // 0x179538: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17953c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17953cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179540: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179544: 0xc08c954  jal         func_232550
    ctx->pc = 0x179544u;
    SET_GPR_U32(ctx, 31, 0x17954Cu);
    ctx->pc = 0x232550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232550u, 0x179544u, 0x17954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17954Cu;
label_17954c:
    // 0x17954c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x17954cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x179550: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x179550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x179554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x179554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179558: 0x0  nop
    ctx->pc = 0x179558u;
    // NOP
    // 0x17955c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x17955cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x179560: 0x9383badc  lbu         $v1, -0x4524($gp)
    ctx->pc = 0x179560u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949596)));
    // 0x179564: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x179564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x179568: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x179568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17956c: 0x148300ff  bne         $a0, $v1, . + 4 + (0xFF << 2)
    ctx->pc = 0x17956Cu;
    {
        const bool branch_taken_0x17956c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17956c) {
            ctx->pc = 0x17996Cu;
            goto label_17996c;
        }
    }
    ctx->pc = 0x179574u;
    // 0x179574: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x179574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179578: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x179578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x17957c: 0x106000fb  beqz        $v1, . + 4 + (0xFB << 2)
    ctx->pc = 0x17957Cu;
    {
        const bool branch_taken_0x17957c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17957c) {
            ctx->pc = 0x17996Cu;
            goto label_17996c;
        }
    }
    ctx->pc = 0x179584u;
    // 0x179584: 0x9383badc  lbu         $v1, -0x4524($gp)
    ctx->pc = 0x179584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949596)));
    // 0x179588: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17958c: 0xa0430099  sb          $v1, 0x99($v0)
    ctx->pc = 0x17958cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 3));
    // 0x179590: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x179590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x179594: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x179594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179598: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x179598u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17959c: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x17959Cu;
    {
        const bool branch_taken_0x17959c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17959c) {
            ctx->pc = 0x1796D0u;
            goto label_1796d0;
        }
    }
    ctx->pc = 0x1795A4u;
    // 0x1795a4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1795a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1795a8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1795a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1795ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1795ACu;
    {
        const bool branch_taken_0x1795ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1795ac) {
            ctx->pc = 0x1795ECu;
            goto label_1795ec;
        }
    }
    ctx->pc = 0x1795B4u;
label_1795b4:
    // 0x1795b4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1795b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1795b8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1795b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1795bc: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x1795bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1795c0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1795C0u;
    SET_GPR_U32(ctx, 31, 0x1795C8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1795C0u, 0x1795C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795C8u;
label_1795c8:
    // 0x1795c8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1795c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1795cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1795ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1795d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1795d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1795d4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1795d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1795d8: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1795D8u;
    SET_GPR_U32(ctx, 31, 0x1795E0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1795D8u, 0x1795E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1795E0u;
label_1795e0:
    // 0x1795e0: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1795e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1795e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1795e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1795e8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1795e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_1795ec:
    // 0x1795ec: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1795ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1795f0: 0x2c410019  sltiu       $at, $v0, 0x19
    ctx->pc = 0x1795f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1795f4: 0x1420ffef  bnez        $at, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1795F4u;
    {
        const bool branch_taken_0x1795f4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1795f4) {
            ctx->pc = 0x1795B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1795b4;
        }
    }
    ctx->pc = 0x1795FCu;
    // 0x1795fc: 0x241e0006  addiu       $fp, $zero, 0x6
    ctx->pc = 0x1795fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x179600: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x179600u;
    {
        const bool branch_taken_0x179600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179600) {
            ctx->pc = 0x179638u;
            goto label_179638;
        }
    }
    ctx->pc = 0x179608u;
label_179608:
    // 0x179608: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17960c: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x17960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x179610: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x179610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179614: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179614u;
    SET_GPR_U32(ctx, 31, 0x17961Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179614u, 0x17961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17961Cu;
label_17961c:
    // 0x17961c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17961cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179620: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179624: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x179624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x179628: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17962c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x17962Cu;
    SET_GPR_U32(ctx, 31, 0x179634u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x17962Cu, 0x179634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179634u;
label_179634:
    // 0x179634: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x179634u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_179638:
    // 0x179638: 0x2fc10014  sltiu       $at, $fp, 0x14
    ctx->pc = 0x179638u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17963c: 0x1420fff2  bnez        $at, . + 4 + (-0xE << 2)
    ctx->pc = 0x17963Cu;
    {
        const bool branch_taken_0x17963c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17963c) {
            ctx->pc = 0x179608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179608;
        }
    }
    ctx->pc = 0x179644u;
    // 0x179644: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179648: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x179648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x17964c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x17964cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179650: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179650u;
    SET_GPR_U32(ctx, 31, 0x179658u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179650u, 0x179658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179658u;
label_179658:
    // 0x179658: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179658u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17965c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179660: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x179660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179664: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x179664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179668: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x179668u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17966c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x17966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179670: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x179670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179674: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x179674u;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x179678: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x17967c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17967cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179680: 0xc08c208  jal         func_230820
    ctx->pc = 0x179680u;
    SET_GPR_U32(ctx, 31, 0x179688u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x179680u, 0x179688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179688u;
label_179688:
    // 0x179688: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17968c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x17968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x179690: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x179690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179694: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179694u;
    SET_GPR_U32(ctx, 31, 0x17969Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179694u, 0x17969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17969Cu;
label_17969c:
    // 0x17969c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x17969cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1796a0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1796a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1796a4: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1796a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1796a8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x1796a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796ac: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1796acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1796b0: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1796b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1796b4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x1796b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1796b8: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x1796b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1796bc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1796bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1796c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1796c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796c8: 0xc08c544  jal         func_231510
    ctx->pc = 0x1796C8u;
    SET_GPR_U32(ctx, 31, 0x1796D0u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1796C8u, 0x1796D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796D0u;
label_1796d0:
    // 0x1796d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1796d4: 0xa3a2011f  sb          $v0, 0x11F($sp)
    ctx->pc = 0x1796d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 287), (uint8_t)GPR_U32(ctx, 2));
    // 0x1796d8: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x1796d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1796dc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1796DCu;
    {
        const bool branch_taken_0x1796dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1796dc) {
            ctx->pc = 0x179728u;
            goto label_179728;
        }
    }
    ctx->pc = 0x1796E4u;
label_1796e4:
    // 0x1796e4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1796e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1796e8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1796e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1796ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1796ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1796f0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1796F0u;
    SET_GPR_U32(ctx, 31, 0x1796F8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1796F0u, 0x1796F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1796F8u;
label_1796f8:
    // 0x1796f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1796f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1796fc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1796fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179700: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x179700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179704: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179708: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x179708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17970c: 0x27a7011f  addiu       $a3, $sp, 0x11F
    ctx->pc = 0x17970cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 287));
    // 0x179710: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x179710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179714: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179718: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179718u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17971c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x17971Cu;
    SET_GPR_U32(ctx, 31, 0x179724u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x17971Cu, 0x179724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179724u;
label_179724:
    // 0x179724: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x179724u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_179728:
    // 0x179728: 0x2ee10019  sltiu       $at, $s7, 0x19
    ctx->pc = 0x179728u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x17972c: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17972Cu;
    {
        const bool branch_taken_0x17972c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17972c) {
            ctx->pc = 0x1796E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1796e4;
        }
    }
    ctx->pc = 0x179734u;
    // 0x179734: 0x24160006  addiu       $s6, $zero, 0x6
    ctx->pc = 0x179734u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x179738: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x179738u;
    {
        const bool branch_taken_0x179738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179738) {
            ctx->pc = 0x179784u;
            goto label_179784;
        }
    }
    ctx->pc = 0x179740u;
label_179740:
    // 0x179740: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179744: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x179744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x179748: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x179748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17974c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17974Cu;
    SET_GPR_U32(ctx, 31, 0x179754u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17974Cu, 0x179754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179754u;
label_179754:
    // 0x179754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179758: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17975c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x17975cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179760: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179764: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x179764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179768: 0x27a7011f  addiu       $a3, $sp, 0x11F
    ctx->pc = 0x179768u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 287));
    // 0x17976c: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x17976cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179770: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179774: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179774u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179778: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179778u;
    SET_GPR_U32(ctx, 31, 0x179780u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179778u, 0x179780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179780u;
label_179780:
    // 0x179780: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x179780u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_179784:
    // 0x179784: 0x2ec10014  sltiu       $at, $s6, 0x14
    ctx->pc = 0x179784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179788: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
    ctx->pc = 0x179788u;
    {
        const bool branch_taken_0x179788 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x179788) {
            ctx->pc = 0x179740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179740;
        }
    }
    ctx->pc = 0x179790u;
    // 0x179790: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x179790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x179794: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x179794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179798: 0x0  nop
    ctx->pc = 0x179798u;
    // NOP
    // 0x17979c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x17979cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1797a0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1797a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1797a4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1797a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1797a8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1797a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1797ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1797ACu;
    SET_GPR_U32(ctx, 31, 0x1797B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1797ACu, 0x1797B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797B4u;
label_1797b4:
    // 0x1797b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1797b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1797b8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1797b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1797bc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1797bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1797c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1797c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1797c4: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1797c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1797c8: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x1797c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1797cc: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x1797ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1797d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1797d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1797d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797d8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1797D8u;
    SET_GPR_U32(ctx, 31, 0x1797E0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1797D8u, 0x1797E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1797E0u;
label_1797e0:
    // 0x1797e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1797e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1797e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1797e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1797e8: 0x0  nop
    ctx->pc = 0x1797e8u;
    // NOP
    // 0x1797ec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1797ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1797f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1797f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1797f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1797f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1797f8: 0x0  nop
    ctx->pc = 0x1797f8u;
    // NOP
    // 0x1797fc: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1797fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x179800: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179804: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x179804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x179808: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x179808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17980c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17980Cu;
    SET_GPR_U32(ctx, 31, 0x179814u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17980Cu, 0x179814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179814u;
label_179814:
    // 0x179814: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179814u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179818: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17981c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17981cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x179820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179824: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x179824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x179828: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x179828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17982c: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x17982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x179830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179834: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179838: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179838u;
    SET_GPR_U32(ctx, 31, 0x179840u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179838u, 0x179840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179840u;
label_179840:
    // 0x179840: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x179840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179844: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x179844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x179848: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x179848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17984c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x17984cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x179850: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179854: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x179854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x179858: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x179858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x17985c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17985Cu;
    SET_GPR_U32(ctx, 31, 0x179864u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17985Cu, 0x179864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179864u;
label_179864:
    // 0x179864: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179868: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17986c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x17986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179874: 0x27a700c8  addiu       $a3, $sp, 0xC8
    ctx->pc = 0x179874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x179878: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x179878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x17987c: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x17987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x179880: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179884: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179884u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179888: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179888u;
    SET_GPR_U32(ctx, 31, 0x179890u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179888u, 0x179890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179890u;
label_179890:
    // 0x179890: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x179890u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179894: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x179894u;
    {
        const bool branch_taken_0x179894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179894) {
            ctx->pc = 0x1798F8u;
            goto label_1798f8;
        }
    }
    ctx->pc = 0x17989Cu;
label_17989c:
    // 0x17989c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x17989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1798a0: 0x12230014  beq         $s1, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1798A0u;
    {
        const bool branch_taken_0x1798a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x1798a0) {
            ctx->pc = 0x1798F4u;
            goto label_1798f4;
        }
    }
    ctx->pc = 0x1798A8u;
    // 0x1798a8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1798a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1798ac: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1798acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x1798b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1798b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798b4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1798B4u;
    SET_GPR_U32(ctx, 31, 0x1798BCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1798B4u, 0x1798BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798BCu;
label_1798bc:
    // 0x1798bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1798bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1798c0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1798c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1798c4: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x1798c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1798c8: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x1798c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1798cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1798ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1798d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1798d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1798d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1798d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1798d8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1798d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1798dc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1798dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1798e0: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1798e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1798e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1798e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1798e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1798ec: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1798ECu;
    SET_GPR_U32(ctx, 31, 0x1798F4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1798ECu, 0x1798F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1798F4u;
label_1798f4:
    // 0x1798f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1798f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1798f8:
    // 0x1798f8: 0x2e210019  sltiu       $at, $s1, 0x19
    ctx->pc = 0x1798f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1798fc: 0x1420ffe7  bnez        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1798FCu;
    {
        const bool branch_taken_0x1798fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1798fc) {
            ctx->pc = 0x17989Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17989c;
        }
    }
    ctx->pc = 0x179904u;
    // 0x179904: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x179904u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x179908: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x179908u;
    {
        const bool branch_taken_0x179908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179908) {
            ctx->pc = 0x179960u;
            goto label_179960;
        }
    }
    ctx->pc = 0x179910u;
label_179910:
    // 0x179910: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179914: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x179914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x179918: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x179918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17991c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x17991Cu;
    SET_GPR_U32(ctx, 31, 0x179924u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17991Cu, 0x179924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179924u;
label_179924:
    // 0x179924: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179928: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x179928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17992c: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x17992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179930: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x179930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179934: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x179934u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179938: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x179938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x17993c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x17993cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179940: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x179940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x179944: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x179944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179948: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x179948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17994c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17994cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179954: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179954u;
    SET_GPR_U32(ctx, 31, 0x17995Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179954u, 0x17995Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17995Cu;
label_17995c:
    // 0x17995c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17995cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_179960:
    // 0x179960: 0x2ea10014  sltiu       $at, $s5, 0x14
    ctx->pc = 0x179960u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179964: 0x1420ffea  bnez        $at, . + 4 + (-0x16 << 2)
    ctx->pc = 0x179964u;
    {
        const bool branch_taken_0x179964 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x179964) {
            ctx->pc = 0x179910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179910;
        }
    }
    ctx->pc = 0x17996Cu;
label_17996c:
    // 0x17996c: 0x9383badc  lbu         $v1, -0x4524($gp)
    ctx->pc = 0x17996cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949596)));
    // 0x179970: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x179970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x179974: 0x146000cd  bnez        $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x179974u;
    {
        const bool branch_taken_0x179974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179974) {
            ctx->pc = 0x179CACu;
            goto label_179cac;
        }
    }
    ctx->pc = 0x17997Cu;
    // 0x17997c: 0x9382badc  lbu         $v0, -0x4524($gp)
    ctx->pc = 0x17997cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949596)));
    // 0x179980: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x179980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179984: 0xa0820099  sb          $v0, 0x99($a0)
    ctx->pc = 0x179984u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 153), (uint8_t)GPR_U32(ctx, 2));
    // 0x179988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x179988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17998c: 0x0  nop
    ctx->pc = 0x17998cu;
    // NOP
    // 0x179990: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x179990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x179994: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x179994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x179998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17999c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17999Cu;
    {
        const bool branch_taken_0x17999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17999c) {
            ctx->pc = 0x179A00u;
            goto label_179a00;
        }
    }
    ctx->pc = 0x1799A4u;
label_1799a4:
    // 0x1799a4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1799a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1799a8: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1799A8u;
    {
        const bool branch_taken_0x1799a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1799a8) {
            ctx->pc = 0x1799FCu;
            goto label_1799fc;
        }
    }
    ctx->pc = 0x1799B0u;
    // 0x1799b0: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1799b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1799b4: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x1799b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x1799b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1799b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799bc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1799BCu;
    SET_GPR_U32(ctx, 31, 0x1799C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1799BCu, 0x1799C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799C4u;
label_1799c4:
    // 0x1799c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1799c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1799c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1799cc: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x1799ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1799d0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x1799d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x1799d4: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1799d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1799d8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x1799d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1799dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1799dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1799e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1799e4: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x1799e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x1799e8: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x1799e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1799ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1799ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1799f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1799f4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1799F4u;
    SET_GPR_U32(ctx, 31, 0x1799FCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1799F4u, 0x1799FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1799FCu;
label_1799fc:
    // 0x1799fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1799fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_179a00:
    // 0x179a00: 0x2e010019  sltiu       $at, $s0, 0x19
    ctx->pc = 0x179a00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x179a04: 0x1420ffe7  bnez        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x179A04u;
    {
        const bool branch_taken_0x179a04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x179a04) {
            ctx->pc = 0x1799A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1799a4;
        }
    }
    ctx->pc = 0x179A0Cu;
    // 0x179a0c: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x179a0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x179a10: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x179A10u;
    {
        const bool branch_taken_0x179a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a10) {
            ctx->pc = 0x179A68u;
            goto label_179a68;
        }
    }
    ctx->pc = 0x179A18u;
label_179a18:
    // 0x179a18: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179a1c: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x179a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x179a20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x179a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a24: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179A24u;
    SET_GPR_U32(ctx, 31, 0x179A2Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179A24u, 0x179A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A2Cu;
label_179a2c:
    // 0x179a2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a30: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x179a30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179a34: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179a38: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x179a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x179a3c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x179a3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179a40: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179a44: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x179a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x179a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179a4c: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x179a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x179a50: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x179a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179a54: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179a54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a5c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179A5Cu;
    SET_GPR_U32(ctx, 31, 0x179A64u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179A5Cu, 0x179A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179A64u;
label_179a64:
    // 0x179a64: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x179a64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_179a68:
    // 0x179a68: 0x2e810014  sltiu       $at, $s4, 0x14
    ctx->pc = 0x179a68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179a6c: 0x1420ffea  bnez        $at, . + 4 + (-0x16 << 2)
    ctx->pc = 0x179A6Cu;
    {
        const bool branch_taken_0x179a6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x179a6c) {
            ctx->pc = 0x179A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179a18;
        }
    }
    ctx->pc = 0x179A74u;
    // 0x179a74: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x179a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179a78: 0x3c043e80  lui         $a0, 0x3E80
    ctx->pc = 0x179a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16000 << 16));
    // 0x179a7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x179a7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x179a80: 0x0  nop
    ctx->pc = 0x179a80u;
    // NOP
    // 0x179a84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x179a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179a88: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x179a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x179a8c: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x179a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179a90: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x179a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x179a94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179a98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x179a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179a9c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179A9Cu;
    SET_GPR_U32(ctx, 31, 0x179AA4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179A9Cu, 0x179AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AA4u;
label_179aa4:
    // 0x179aa4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x179aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x179aa8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179aac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x179aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179ab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x179ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179ab4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x179ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ab8: 0x27a700fc  addiu       $a3, $sp, 0xFC
    ctx->pc = 0x179ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 252));
    // 0x179abc: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x179abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179ac0: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x179ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x179ac4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ac8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179ac8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179acc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179ACCu;
    SET_GPR_U32(ctx, 31, 0x179AD4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179ACCu, 0x179AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179AD4u;
label_179ad4:
    // 0x179ad4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ad8: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x179ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179adc: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x179adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179ae0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x179ae0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x179ae4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x179ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x179ae8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x179ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179aec: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x179aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179af0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x179af0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x179af4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x179af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x179af8: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x179af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179afc: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x179afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
    // 0x179b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b04: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x179b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179b08: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x179b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x179b0c: 0x7ba500a0  lq          $a1, 0xA0($sp)
    ctx->pc = 0x179b0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x179b10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179B10u;
    SET_GPR_U32(ctx, 31, 0x179B18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179B10u, 0x179B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B18u;
label_179b18:
    // 0x179b18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b1c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179b20: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x179b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179b24: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x179b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x179b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x179b30: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x179b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b34: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x179b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x179b38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x179b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b3c: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x179b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179b40: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x179b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x179b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b48: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179b48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b4c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179B4Cu;
    SET_GPR_U32(ctx, 31, 0x179B54u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179B4Cu, 0x179B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B54u;
label_179b54:
    // 0x179b54: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x179b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179b58: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x179b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x179b5c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x179b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179b60: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x179b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x179b64: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x179b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179b68: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x179b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x179b6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x179b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b70: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179b74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b78: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179B78u;
    SET_GPR_U32(ctx, 31, 0x179B80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179B78u, 0x179B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B80u;
label_179b80:
    // 0x179b80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b84: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x179b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179b88: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x179b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179b8c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x179b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x179b90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b94: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x179b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179b9c: 0x27a700b8  addiu       $a3, $sp, 0xB8
    ctx->pc = 0x179b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x179ba0: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x179ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x179ba4: 0xc7ad0108  lwc1        $f13, 0x108($sp)
    ctx->pc = 0x179ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x179ba8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179ba8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bb0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179BB0u;
    SET_GPR_U32(ctx, 31, 0x179BB8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179BB0u, 0x179BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BB8u;
label_179bb8:
    // 0x179bb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bbc: 0xa3a0011e  sb          $zero, 0x11E($sp)
    ctx->pc = 0x179bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 286), (uint8_t)GPR_U32(ctx, 0));
    // 0x179bc0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x179bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x179bc4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x179bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bc8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x179BC8u;
    {
        const bool branch_taken_0x179bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179bc8) {
            ctx->pc = 0x179C2Cu;
            goto label_179c2c;
        }
    }
    ctx->pc = 0x179BD0u;
label_179bd0:
    // 0x179bd0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179bd4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x179bd8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x179bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179bdc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179BDCu;
    SET_GPR_U32(ctx, 31, 0x179BE4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179BDCu, 0x179BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BE4u;
label_179be4:
    // 0x179be4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179be8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x179be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x179bec: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x179becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179bf0: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x179bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179bf4: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x179bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179bf8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x179bf8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179bfc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x179bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179c00: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x179c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x179c04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c08: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x179c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179c0c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x179c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c10: 0x27a7011e  addiu       $a3, $sp, 0x11E
    ctx->pc = 0x179c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 286));
    // 0x179c14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c1c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179C1Cu;
    SET_GPR_U32(ctx, 31, 0x179C24u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179C1Cu, 0x179C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C24u;
label_179c24:
    // 0x179c24: 0x26640001  addiu       $a0, $s3, 0x1
    ctx->pc = 0x179c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x179c28: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179c2c:
    // 0x179c2c: 0x2e610019  sltiu       $at, $s3, 0x19
    ctx->pc = 0x179c2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x179c30: 0x1420ffe7  bnez        $at, . + 4 + (-0x19 << 2)
    ctx->pc = 0x179C30u;
    {
        const bool branch_taken_0x179c30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x179c30) {
            ctx->pc = 0x179BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179bd0;
        }
    }
    ctx->pc = 0x179C38u;
    // 0x179c38: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x179c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x179c3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x179c3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c40: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x179C40u;
    {
        const bool branch_taken_0x179c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c40) {
            ctx->pc = 0x179CA0u;
            goto label_179ca0;
        }
    }
    ctx->pc = 0x179C48u;
label_179c48:
    // 0x179c48: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179c4c: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x179c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x179c50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c54: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x179C54u;
    SET_GPR_U32(ctx, 31, 0x179C5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x179C54u, 0x179C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C5Cu;
label_179c5c:
    // 0x179c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x179c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179c64: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x179c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x179c68: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x179c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x179c6c: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x179c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x179c70: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x179c70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x179c74: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x179c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x179c78: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x179c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x179c7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x179c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x179c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x179c84: 0x27a7011e  addiu       $a3, $sp, 0x11E
    ctx->pc = 0x179c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 286));
    // 0x179c88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179c88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c90: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x179C90u;
    SET_GPR_U32(ctx, 31, 0x179C98u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x179C90u, 0x179C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C98u;
label_179c98:
    // 0x179c98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x179c98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179c9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x179c9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_179ca0:
    // 0x179ca0: 0x2e410014  sltiu       $at, $s2, 0x14
    ctx->pc = 0x179ca0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x179ca4: 0x1420ffe8  bnez        $at, . + 4 + (-0x18 << 2)
    ctx->pc = 0x179CA4u;
    {
        const bool branch_taken_0x179ca4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x179ca4) {
            ctx->pc = 0x179C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179c48;
        }
    }
    ctx->pc = 0x179CACu;
label_179cac:
    // 0x179cac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x179cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x179cb0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x179cb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x179cb4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x179cb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x179cb8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x179cb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x179cbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x179cbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x179cc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x179cc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x179cc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x179cc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179cd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x179cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179cd4: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x179cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x179cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x179CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179CE0u;
}
