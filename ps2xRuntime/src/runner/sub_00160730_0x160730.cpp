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

// Function: sub_00160730
// Address: 0x160730 - 0x160c70
void sub_00160730_0x160730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160730_0x160730");
#endif

    switch (ctx->pc) {
        case 0x1607a0u: goto label_1607a0;
        case 0x1607b4u: goto label_1607b4;
        case 0x1607ccu: goto label_1607cc;
        case 0x1607e0u: goto label_1607e0;
        case 0x1607f8u: goto label_1607f8;
        case 0x16080cu: goto label_16080c;
        case 0x160824u: goto label_160824;
        case 0x160838u: goto label_160838;
        case 0x160850u: goto label_160850;
        case 0x160864u: goto label_160864;
        case 0x16087cu: goto label_16087c;
        case 0x1608a0u: goto label_1608a0;
        case 0x1608d0u: goto label_1608d0;
        case 0x1608f4u: goto label_1608f4;
        case 0x160924u: goto label_160924;
        case 0x160938u: goto label_160938;
        case 0x160968u: goto label_160968;
        case 0x160988u: goto label_160988;
        case 0x1609b8u: goto label_1609b8;
        case 0x1609ccu: goto label_1609cc;
        case 0x1609fcu: goto label_1609fc;
        case 0x160a10u: goto label_160a10;
        case 0x160a24u: goto label_160a24;
        case 0x160a3cu: goto label_160a3c;
        case 0x160a50u: goto label_160a50;
        case 0x160a80u: goto label_160a80;
        case 0x160a9cu: goto label_160a9c;
        case 0x160ab0u: goto label_160ab0;
        case 0x160ac8u: goto label_160ac8;
        case 0x160adcu: goto label_160adc;
        case 0x160b0cu: goto label_160b0c;
        case 0x160b38u: goto label_160b38;
        case 0x160b74u: goto label_160b74;
        case 0x160b94u: goto label_160b94;
        case 0x160bd8u: goto label_160bd8;
        case 0x160bf0u: goto label_160bf0;
        case 0x160c0cu: goto label_160c0c;
        case 0x160c3cu: goto label_160c3c;
        default: break;
    }

    ctx->pc = 0x160730u;

    // 0x160730: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x160730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x160734: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x160734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x160738: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x160738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16073c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160740: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160744: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x160748: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x160748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16074c: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x16074cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
    // 0x160750: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x160750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160754: 0x906300a0  lbu         $v1, 0xA0($v1)
    ctx->pc = 0x160754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x160758: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160758u;
    {
        const bool branch_taken_0x160758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160758) {
            ctx->pc = 0x160768u;
            goto label_160768;
        }
    }
    ctx->pc = 0x160760u;
    // 0x160760: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x160760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160764: 0xa06000e4  sb          $zero, 0xE4($v1)
    ctx->pc = 0x160764u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 228), (uint8_t)GPR_U32(ctx, 0));
label_160768:
    // 0x160768: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x160768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16076c: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x16076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x160770: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x160770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x160774: 0x14600135  bnez        $v1, . + 4 + (0x135 << 2)
    ctx->pc = 0x160774u;
    {
        const bool branch_taken_0x160774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160774) {
            ctx->pc = 0x160C4Cu;
            goto label_160c4c;
        }
    }
    ctx->pc = 0x16077Cu;
    // 0x16077c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x16077cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160780: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x160780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x160784: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x160784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x160788: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x160788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x16078c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160790: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160794: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x160794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x160798: 0xc08c910  jal         func_232440
    ctx->pc = 0x160798u;
    SET_GPR_U32(ctx, 31, 0x1607A0u);
    ctx->pc = 0x232440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232440u, 0x160798u, 0x1607A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607A0u;
label_1607a0:
    // 0x1607a0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1607a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1607a4: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1607a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x1607a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1607a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1607ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1607ACu;
    SET_GPR_U32(ctx, 31, 0x1607B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1607ACu, 0x1607B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607B4u;
label_1607b4:
    // 0x1607b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1607b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1607b8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1607b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1607bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1607bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1607c0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1607c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1607c4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1607C4u;
    SET_GPR_U32(ctx, 31, 0x1607CCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1607C4u, 0x1607CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607CCu;
label_1607cc:
    // 0x1607cc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1607ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1607d0: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1607d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x1607d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1607d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1607d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1607D8u;
    SET_GPR_U32(ctx, 31, 0x1607E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1607D8u, 0x1607E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607E0u;
label_1607e0:
    // 0x1607e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1607e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1607e4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1607e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1607e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1607e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1607ec: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1607ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1607f0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1607F0u;
    SET_GPR_U32(ctx, 31, 0x1607F8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1607F0u, 0x1607F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1607F8u;
label_1607f8:
    // 0x1607f8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1607f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1607fc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1607fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160800: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x160800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x160804: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160804u;
    SET_GPR_U32(ctx, 31, 0x16080Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160804u, 0x16080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16080Cu;
label_16080c:
    // 0x16080c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160810: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160818: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16081c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x16081Cu;
    SET_GPR_U32(ctx, 31, 0x160824u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16081Cu, 0x160824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160824u;
label_160824:
    // 0x160824: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160828: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x16082c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160830: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160830u;
    SET_GPR_U32(ctx, 31, 0x160838u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160830u, 0x160838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160838u;
label_160838:
    // 0x160838: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16083c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160844: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160848: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160848u;
    SET_GPR_U32(ctx, 31, 0x160850u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160848u, 0x160850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160850u;
label_160850:
    // 0x160850: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160854: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160858: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x160858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16085c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x16085Cu;
    SET_GPR_U32(ctx, 31, 0x160864u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16085Cu, 0x160864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160864u;
label_160864:
    // 0x160864: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160868: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x16086c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16086cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160870: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160874: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160874u;
    SET_GPR_U32(ctx, 31, 0x16087Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160874u, 0x16087Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16087Cu;
label_16087c:
    // 0x16087c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x160880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160884: 0x0  nop
    ctx->pc = 0x160884u;
    // NOP
    // 0x160888: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x160888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x16088c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160890: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x160894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160898: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160898u;
    SET_GPR_U32(ctx, 31, 0x1608A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160898u, 0x1608A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1608A0u;
label_1608a0:
    // 0x1608a0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1608a4: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1608a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1608a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1608ac: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1608acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1608b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1608b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1608b4: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1608b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1608b8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1608b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1608bc: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x1608bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1608c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1608c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1608c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1608c8: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1608C8u;
    SET_GPR_U32(ctx, 31, 0x1608D0u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1608C8u, 0x1608D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1608D0u;
label_1608d0:
    // 0x1608d0: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1608d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1608d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1608d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1608d8: 0x0  nop
    ctx->pc = 0x1608d8u;
    // NOP
    // 0x1608dc: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1608dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1608e0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1608e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1608e4: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1608e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x1608e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1608ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1608ECu;
    SET_GPR_U32(ctx, 31, 0x1608F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1608ECu, 0x1608F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1608F4u;
label_1608f4:
    // 0x1608f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1608f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1608f8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1608f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1608fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1608fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160900: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x160904: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x160904u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160908: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16090c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160910: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x160910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x160914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160918: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16091c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16091Cu;
    SET_GPR_U32(ctx, 31, 0x160924u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16091Cu, 0x160924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160924u;
label_160924:
    // 0x160924: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160928: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x16092c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160930: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160930u;
    SET_GPR_U32(ctx, 31, 0x160938u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160930u, 0x160938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160938u;
label_160938:
    // 0x160938: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16093c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x16093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160940: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160944: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x160944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x160948: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x160948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16094c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16094cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x160950: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160954: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x160954u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x160958: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160958u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16095c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16095cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160960: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160960u;
    SET_GPR_U32(ctx, 31, 0x160968u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160960u, 0x160968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160968u;
label_160968:
    // 0x160968: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x160968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16096c: 0x0  nop
    ctx->pc = 0x16096cu;
    // NOP
    // 0x160970: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x160970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x160974: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160978: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x160978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x16097c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160980: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160980u;
    SET_GPR_U32(ctx, 31, 0x160988u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160980u, 0x160988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160988u;
label_160988:
    // 0x160988: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16098c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160990: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160990u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160994: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x160994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x160998: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x160998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16099c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16099cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1609a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1609a4: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x1609a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1609a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1609a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1609acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609b0: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1609B0u;
    SET_GPR_U32(ctx, 31, 0x1609B8u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1609B0u, 0x1609B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609B8u;
label_1609b8:
    // 0x1609b8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1609bc: 0x24440068  addiu       $a0, $v0, 0x68
    ctx->pc = 0x1609bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
    // 0x1609c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1609c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1609c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1609C4u;
    SET_GPR_U32(ctx, 31, 0x1609CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1609C4u, 0x1609CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609CCu;
label_1609cc:
    // 0x1609cc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1609ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1609d0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1609d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1609d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1609d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1609d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1609d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1609dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1609dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1609e0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1609e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1609e8: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x1609e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x1609ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1609ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1609f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609f4: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1609F4u;
    SET_GPR_U32(ctx, 31, 0x1609FCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1609F4u, 0x1609FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1609FCu;
label_1609fc:
    // 0x1609fc: 0xc78080ac  lwc1        $f0, -0x7F54($gp)
    ctx->pc = 0x1609fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160a00: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x160a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x160a04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x160a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a08: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x160A08u;
    {
        const bool branch_taken_0x160a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a08) {
            ctx->pc = 0x160A84u;
            goto label_160a84;
        }
    }
    ctx->pc = 0x160A10u;
label_160a10:
    // 0x160a10: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160a14: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x160a18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a1c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160A1Cu;
    SET_GPR_U32(ctx, 31, 0x160A24u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160A1Cu, 0x160A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A24u;
label_160a24:
    // 0x160a24: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160a28: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160a2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160a30: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160a34: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160A34u;
    SET_GPR_U32(ctx, 31, 0x160A3Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160A34u, 0x160A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A3Cu;
label_160a3c:
    // 0x160a3c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160a40: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x160a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x160a44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a48: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160A48u;
    SET_GPR_U32(ctx, 31, 0x160A50u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160A48u, 0x160A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A50u;
label_160a50:
    // 0x160a50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160a54: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x160a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160a58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160a5c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x160a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x160a60: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x160a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160a64: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x160a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x160a68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160a6c: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x160a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x160a70: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160a70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160a74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a78: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160A78u;
    SET_GPR_U32(ctx, 31, 0x160A80u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160A78u, 0x160A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A80u;
label_160a80:
    // 0x160a80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x160a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_160a84:
    // 0x160a84: 0x2a230007  slti        $v1, $s1, 0x7
    ctx->pc = 0x160a84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x160a88: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x160A88u;
    {
        const bool branch_taken_0x160a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160a88) {
            ctx->pc = 0x160A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160a10;
        }
    }
    ctx->pc = 0x160A90u;
    // 0x160a90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x160a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a94: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x160A94u;
    {
        const bool branch_taken_0x160a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a94) {
            ctx->pc = 0x160B10u;
            goto label_160b10;
        }
    }
    ctx->pc = 0x160A9Cu;
label_160a9c:
    // 0x160a9c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160aa0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x160aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x160aa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160aa8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160AA8u;
    SET_GPR_U32(ctx, 31, 0x160AB0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160AA8u, 0x160AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AB0u;
label_160ab0:
    // 0x160ab0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160ab4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160ab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160abc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160ac0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160AC0u;
    SET_GPR_U32(ctx, 31, 0x160AC8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160AC0u, 0x160AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160AC8u;
label_160ac8:
    // 0x160ac8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160acc: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x160accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x160ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ad4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x160AD4u;
    SET_GPR_U32(ctx, 31, 0x160ADCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x160AD4u, 0x160ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160ADCu;
label_160adc:
    // 0x160adc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x160adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160ae0: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x160ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160ae4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160ae8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x160ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x160aec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x160aecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160af0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x160af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x160af4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160af8: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x160af8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x160afc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160b00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b04: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160B04u;
    SET_GPR_U32(ctx, 31, 0x160B0Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160B04u, 0x160B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B0Cu;
label_160b0c:
    // 0x160b0c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x160b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_160b10:
    // 0x160b10: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x160b10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x160b14: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x160B14u;
    {
        const bool branch_taken_0x160b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160b14) {
            ctx->pc = 0x160A9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160a9c;
        }
    }
    ctx->pc = 0x160B1Cu;
    // 0x160b1c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x160b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x160b20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160b20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160b24: 0x0  nop
    ctx->pc = 0x160b24u;
    // NOP
    // 0x160b28: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x160b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x160b2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x160b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b30: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x160B30u;
    {
        const bool branch_taken_0x160b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160b30) {
            ctx->pc = 0x160B78u;
            goto label_160b78;
        }
    }
    ctx->pc = 0x160B38u;
label_160b38:
    // 0x160b38: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x160b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160b3c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x160b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x160b40: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160b44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x160b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x160b48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160b4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x160b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x160b50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x160b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160b54: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x160b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x160b58: 0x8c6500d0  lw          $a1, 0xD0($v1)
    ctx->pc = 0x160b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x160b5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160b60: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x160b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x160b64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160b64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160b68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160b6c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160B6Cu;
    SET_GPR_U32(ctx, 31, 0x160B74u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160B6Cu, 0x160B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160B74u;
label_160b74:
    // 0x160b74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x160b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_160b78:
    // 0x160b78: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x160b78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x160b7c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x160B7Cu;
    {
        const bool branch_taken_0x160b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160b7c) {
            ctx->pc = 0x160B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b38;
        }
    }
    ctx->pc = 0x160B84u;
    // 0x160b84: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x160b84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x160b88: 0x24e73520  addiu       $a3, $a3, 0x3520
    ctx->pc = 0x160b88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13600));
    // 0x160b8c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x160b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x160b90: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x160b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_160b94:
    // 0x160b94: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x160b94u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x160b98: 0x80e30001  lb          $v1, 0x1($a3)
    ctx->pc = 0x160b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x160b9c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x160b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x160ba0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x160ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x160ba4: 0xa0c40000  sb          $a0, 0x0($a2)
    ctx->pc = 0x160ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x160ba8: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x160ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x160bac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x160bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x160bb0: 0x1ca0fff8  bgtz        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x160BB0u;
    {
        const bool branch_taken_0x160bb0 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x160bb0) {
            ctx->pc = 0x160B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160b94;
        }
    }
    ctx->pc = 0x160BB8u;
    // 0x160bb8: 0x3c03004e  lui         $v1, 0x4E
    ctx->pc = 0x160bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)78 << 16));
    // 0x160bbc: 0x246335c0  addiu       $v1, $v1, 0x35C0
    ctx->pc = 0x160bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13760));
    // 0x160bc0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x160bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x160bc4: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x160bc4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x4E35C0u));
    // 0x160bc8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x160bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x160bcc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bd0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x160BD0u;
    {
        const bool branch_taken_0x160bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160bd0) {
            ctx->pc = 0x160C40u;
            goto label_160c40;
        }
    }
    ctx->pc = 0x160BD8u;
label_160bd8:
    // 0x160bd8: 0x121140  sll         $v0, $s2, 5
    ctx->pc = 0x160bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x160bdc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x160bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x160be0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x160be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160be4: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x160be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x160be8: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x160BE8u;
    SET_GPR_U32(ctx, 31, 0x160BF0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x160BE8u, 0x160BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160BF0u;
label_160bf0:
    // 0x160bf0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x160bf0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160bf4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x160bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160bf8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160bfc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160c00: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c04: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x160C04u;
    SET_GPR_U32(ctx, 31, 0x160C0Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x160C04u, 0x160C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C0Cu;
label_160c0c:
    // 0x160c0c: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x160c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x160c10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x160c10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x160c14: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x160c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x160c18: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x160c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x160c1c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x160c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x160c20: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c24: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x160c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160c28: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x160c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x160c2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160c2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160c30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160c34: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160C34u;
    SET_GPR_U32(ctx, 31, 0x160C3Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160C34u, 0x160C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160C3Cu;
label_160c3c:
    // 0x160c3c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x160c3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_160c40:
    // 0x160c40: 0x2a430005  slti        $v1, $s2, 0x5
    ctx->pc = 0x160c40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x160c44: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x160C44u;
    {
        const bool branch_taken_0x160c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x160c44) {
            ctx->pc = 0x160BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160bd8;
        }
    }
    ctx->pc = 0x160C4Cu;
label_160c4c:
    // 0x160c4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x160c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160c50: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x160c50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160c54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x160c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160c58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x160c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160c5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x160c5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160c60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x160c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x160c64: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x160c64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x160c68: 0x3e00008  jr          $ra
    ctx->pc = 0x160C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160C70u;
}
