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

// Function: sub_00162710
// Address: 0x162710 - 0x162bf0
void sub_00162710_0x162710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162710_0x162710");
#endif

    switch (ctx->pc) {
        case 0x162734u: goto label_162734;
        case 0x16274cu: goto label_16274c;
        case 0x162764u: goto label_162764;
        case 0x162780u: goto label_162780;
        case 0x162798u: goto label_162798;
        case 0x1627b4u: goto label_1627b4;
        case 0x1627ccu: goto label_1627cc;
        case 0x1627e8u: goto label_1627e8;
        case 0x162800u: goto label_162800;
        case 0x16281cu: goto label_16281c;
        case 0x162834u: goto label_162834;
        case 0x162850u: goto label_162850;
        case 0x162868u: goto label_162868;
        case 0x162884u: goto label_162884;
        case 0x16289cu: goto label_16289c;
        case 0x1628b8u: goto label_1628b8;
        case 0x1628d0u: goto label_1628d0;
        case 0x1628ecu: goto label_1628ec;
        case 0x162904u: goto label_162904;
        case 0x162920u: goto label_162920;
        case 0x162938u: goto label_162938;
        case 0x162954u: goto label_162954;
        case 0x16296cu: goto label_16296c;
        case 0x162988u: goto label_162988;
        case 0x1629a0u: goto label_1629a0;
        case 0x1629bcu: goto label_1629bc;
        case 0x1629d4u: goto label_1629d4;
        case 0x1629f0u: goto label_1629f0;
        case 0x162a08u: goto label_162a08;
        case 0x162a24u: goto label_162a24;
        case 0x162a3cu: goto label_162a3c;
        case 0x162a54u: goto label_162a54;
        case 0x162a6cu: goto label_162a6c;
        case 0x162a80u: goto label_162a80;
        case 0x162a98u: goto label_162a98;
        case 0x162aacu: goto label_162aac;
        case 0x162abcu: goto label_162abc;
        case 0x162ad4u: goto label_162ad4;
        case 0x162ae8u: goto label_162ae8;
        case 0x162af8u: goto label_162af8;
        case 0x162b10u: goto label_162b10;
        case 0x162b24u: goto label_162b24;
        case 0x162b34u: goto label_162b34;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b60u: goto label_162b60;
        case 0x162b70u: goto label_162b70;
        case 0x162b88u: goto label_162b88;
        case 0x162b9cu: goto label_162b9c;
        case 0x162bacu: goto label_162bac;
        case 0x162bc4u: goto label_162bc4;
        case 0x162bd8u: goto label_162bd8;
        default: break;
    }

    ctx->pc = 0x162710u;

    // 0x162710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x162710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x162714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x162714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x162718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16271c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x16271cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x162720: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162724: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162728: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x162728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16272c: 0xc056708  jal         func_159C20
    ctx->pc = 0x16272Cu;
    SET_GPR_U32(ctx, 31, 0x162734u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x16272Cu, 0x162734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162734u;
label_162734:
    // 0x162734: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162738: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x16273c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16273cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162740: 0x24a535f0  addiu       $a1, $a1, 0x35F0
    ctx->pc = 0x162740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13808));
    // 0x162744: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162744u;
    SET_GPR_U32(ctx, 31, 0x16274Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162744u, 0x16274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16274Cu;
label_16274c:
    // 0x16274c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16274cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162750: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162754: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x162758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16275c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x16275Cu;
    SET_GPR_U32(ctx, 31, 0x162764u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16275Cu, 0x162764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162764u;
label_162764:
    // 0x162764: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162768: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16276c: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x16276cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162770: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x162770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162774: 0x24a53610  addiu       $a1, $a1, 0x3610
    ctx->pc = 0x162774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13840));
    // 0x162778: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162778u;
    SET_GPR_U32(ctx, 31, 0x162780u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162778u, 0x162780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162780u;
label_162780:
    // 0x162780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162784: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162788: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x16278c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16278cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162790: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162790u;
    SET_GPR_U32(ctx, 31, 0x162798u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162790u, 0x162798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162798u;
label_162798:
    // 0x162798: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x16279c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1627a0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x1627a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1627a4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1627a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1627a8: 0x24a53630  addiu       $a1, $a1, 0x3630
    ctx->pc = 0x1627a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13872));
    // 0x1627ac: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1627ACu;
    SET_GPR_U32(ctx, 31, 0x1627B4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1627ACu, 0x1627B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627B4u;
label_1627b4:
    // 0x1627b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1627b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1627b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1627bc: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1627bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1627c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1627c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1627c4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1627C4u;
    SET_GPR_U32(ctx, 31, 0x1627CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1627C4u, 0x1627CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627CCu;
label_1627cc:
    // 0x1627cc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1627ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1627d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1627d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1627d4: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x1627d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1627d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1627d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1627dc: 0x24a53650  addiu       $a1, $a1, 0x3650
    ctx->pc = 0x1627dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13904));
    // 0x1627e0: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1627E0u;
    SET_GPR_U32(ctx, 31, 0x1627E8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1627E0u, 0x1627E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1627E8u;
label_1627e8:
    // 0x1627e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1627e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1627ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1627f0: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1627f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1627f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1627f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1627f8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1627F8u;
    SET_GPR_U32(ctx, 31, 0x162800u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1627F8u, 0x162800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162800u;
label_162800:
    // 0x162800: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162804: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162808: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x16280c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16280cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162810: 0x24a53670  addiu       $a1, $a1, 0x3670
    ctx->pc = 0x162810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13936));
    // 0x162814: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162814u;
    SET_GPR_U32(ctx, 31, 0x16281Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162814u, 0x16281Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16281Cu;
label_16281c:
    // 0x16281c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16281cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162820: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162824: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162828: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x162828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16282c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x16282Cu;
    SET_GPR_U32(ctx, 31, 0x162834u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16282Cu, 0x162834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162834u;
label_162834:
    // 0x162834: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162838: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16283c: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x16283cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162840: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x162840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162844: 0x24a53690  addiu       $a1, $a1, 0x3690
    ctx->pc = 0x162844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
    // 0x162848: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162848u;
    SET_GPR_U32(ctx, 31, 0x162850u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162848u, 0x162850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162850u;
label_162850:
    // 0x162850: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162854: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162858: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x16285c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16285cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x162860: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162860u;
    SET_GPR_U32(ctx, 31, 0x162868u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162860u, 0x162868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162868u;
label_162868:
    // 0x162868: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x16286c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162870: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162874: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x162874u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162878: 0x24a536b0  addiu       $a1, $a1, 0x36B0
    ctx->pc = 0x162878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14000));
    // 0x16287c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x16287Cu;
    SET_GPR_U32(ctx, 31, 0x162884u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16287Cu, 0x162884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162884u;
label_162884:
    // 0x162884: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162888: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16288c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x16288cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162890: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x162890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x162894: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162894u;
    SET_GPR_U32(ctx, 31, 0x16289Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162894u, 0x16289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16289Cu;
label_16289c:
    // 0x16289c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x16289cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1628a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1628a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1628a4: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x1628a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1628a8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1628a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1628ac: 0x24a536d0  addiu       $a1, $a1, 0x36D0
    ctx->pc = 0x1628acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14032));
    // 0x1628b0: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1628B0u;
    SET_GPR_U32(ctx, 31, 0x1628B8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1628B0u, 0x1628B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628B8u;
label_1628b8:
    // 0x1628b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1628b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628bc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1628bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1628c0: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1628c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1628c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1628c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1628c8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1628C8u;
    SET_GPR_U32(ctx, 31, 0x1628D0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1628C8u, 0x1628D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628D0u;
label_1628d0:
    // 0x1628d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1628d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1628d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1628d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1628d8: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x1628d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1628dc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1628dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1628e0: 0x24a536f0  addiu       $a1, $a1, 0x36F0
    ctx->pc = 0x1628e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14064));
    // 0x1628e4: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1628E4u;
    SET_GPR_U32(ctx, 31, 0x1628ECu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1628E4u, 0x1628ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1628ECu;
label_1628ec:
    // 0x1628ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1628ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1628f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1628f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1628f4: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1628f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1628f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1628f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1628fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1628FCu;
    SET_GPR_U32(ctx, 31, 0x162904u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1628FCu, 0x162904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162904u;
label_162904:
    // 0x162904: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162904u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162908: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16290c: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x16290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162910: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x162910u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162914: 0x24a53708  addiu       $a1, $a1, 0x3708
    ctx->pc = 0x162914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14088));
    // 0x162918: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162918u;
    SET_GPR_U32(ctx, 31, 0x162920u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162918u, 0x162920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162920u;
label_162920:
    // 0x162920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162924: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162928: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x16292c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16292cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x162930: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162930u;
    SET_GPR_U32(ctx, 31, 0x162938u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162930u, 0x162938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162938u;
label_162938:
    // 0x162938: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x16293c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16293cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162940: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162944: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x162944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162948: 0x24a53718  addiu       $a1, $a1, 0x3718
    ctx->pc = 0x162948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14104));
    // 0x16294c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x16294Cu;
    SET_GPR_U32(ctx, 31, 0x162954u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x16294Cu, 0x162954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162954u;
label_162954:
    // 0x162954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162958: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16295c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x16295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162960: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x162960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162964: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162964u;
    SET_GPR_U32(ctx, 31, 0x16296Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162964u, 0x16296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16296Cu;
label_16296c:
    // 0x16296c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x16296cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162970: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162974: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162978: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x162978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16297c: 0x24a53730  addiu       $a1, $a1, 0x3730
    ctx->pc = 0x16297cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14128));
    // 0x162980: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162980u;
    SET_GPR_U32(ctx, 31, 0x162988u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162980u, 0x162988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162988u;
label_162988:
    // 0x162988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16298c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x16298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162990: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162994: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x162994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x162998: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162998u;
    SET_GPR_U32(ctx, 31, 0x1629A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162998u, 0x1629A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629A0u;
label_1629a0:
    // 0x1629a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1629a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1629a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1629a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1629a8: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x1629a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1629ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1629acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1629b0: 0x24a53750  addiu       $a1, $a1, 0x3750
    ctx->pc = 0x1629b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14160));
    // 0x1629b4: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1629B4u;
    SET_GPR_U32(ctx, 31, 0x1629BCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1629B4u, 0x1629BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629BCu;
label_1629bc:
    // 0x1629bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1629bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1629c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1629c4: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1629c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1629c8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1629c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1629cc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1629CCu;
    SET_GPR_U32(ctx, 31, 0x1629D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1629CCu, 0x1629D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629D4u;
label_1629d4:
    // 0x1629d4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1629d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1629d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1629d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1629dc: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x1629dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x1629e0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1629e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1629e4: 0x24a53770  addiu       $a1, $a1, 0x3770
    ctx->pc = 0x1629e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14192));
    // 0x1629e8: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x1629E8u;
    SET_GPR_U32(ctx, 31, 0x1629F0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1629E8u, 0x1629F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1629F0u;
label_1629f0:
    // 0x1629f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1629f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1629f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1629f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1629f8: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x1629f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x1629fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1629fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x162a00: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162A00u;
    SET_GPR_U32(ctx, 31, 0x162A08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162A00u, 0x162A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A08u;
label_162a08:
    // 0x162a08: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162a0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a10: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162a14: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x162a14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x162a18: 0x24a53790  addiu       $a1, $a1, 0x3790
    ctx->pc = 0x162a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14224));
    // 0x162a1c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162A1Cu;
    SET_GPR_U32(ctx, 31, 0x162A24u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162A1Cu, 0x162A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A24u;
label_162a24:
    // 0x162a24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a28: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a2c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162a30: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x162a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x162a34: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162A34u;
    SET_GPR_U32(ctx, 31, 0x162A3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162A34u, 0x162A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A3Cu;
label_162a3c:
    // 0x162a3c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162a40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a44: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162a48: 0x27858e10  addiu       $a1, $gp, -0x71F0
    ctx->pc = 0x162a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938128));
    // 0x162a4c: 0xc0552e4  jal         func_154B90
    ctx->pc = 0x162A4Cu;
    SET_GPR_U32(ctx, 31, 0x162A54u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x162A4Cu, 0x162A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A54u;
label_162a54:
    // 0x162a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a5c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162a60: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x162a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x162a64: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162A64u;
    SET_GPR_U32(ctx, 31, 0x162A6Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162A64u, 0x162A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A6Cu;
label_162a6c:
    // 0x162a6c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x162a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x162a70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a74: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162a78: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x162A78u;
    SET_GPR_U32(ctx, 31, 0x162A80u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x162A78u, 0x162A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A80u;
label_162a80:
    // 0x162a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162a84: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162a88: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162a8c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x162a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x162a90: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162A90u;
    SET_GPR_U32(ctx, 31, 0x162A98u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162A90u, 0x162A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162A98u;
label_162a98:
    // 0x162a98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162aa4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x162AA4u;
    SET_GPR_U32(ctx, 31, 0x162AACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x162AA4u, 0x162AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AACu;
label_162aac:
    // 0x162aac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162ab0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162ab4: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x162AB4u;
    SET_GPR_U32(ctx, 31, 0x162ABCu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x162AB4u, 0x162ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162ABCu;
label_162abc:
    // 0x162abc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ac0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162ac4: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162ac8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x162ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x162acc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162ACCu;
    SET_GPR_U32(ctx, 31, 0x162AD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162ACCu, 0x162AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AD4u;
label_162ad4:
    // 0x162ad4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162adc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ae0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x162AE0u;
    SET_GPR_U32(ctx, 31, 0x162AE8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x162AE0u, 0x162AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AE8u;
label_162ae8:
    // 0x162ae8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162aec: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162af0: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x162AF0u;
    SET_GPR_U32(ctx, 31, 0x162AF8u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x162AF0u, 0x162AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162AF8u;
label_162af8:
    // 0x162af8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162af8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162afc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162b00: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162b04: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x162b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x162b08: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162B08u;
    SET_GPR_U32(ctx, 31, 0x162B10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162B08u, 0x162B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B10u;
label_162b10:
    // 0x162b10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162b14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b1c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x162B1Cu;
    SET_GPR_U32(ctx, 31, 0x162B24u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x162B1Cu, 0x162B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B24u;
label_162b24:
    // 0x162b24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162b28: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162b2c: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x162B2Cu;
    SET_GPR_U32(ctx, 31, 0x162B34u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x162B2Cu, 0x162B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B34u;
label_162b34:
    // 0x162b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b38: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162b3c: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162b40: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x162b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x162b44: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162B44u;
    SET_GPR_U32(ctx, 31, 0x162B4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162B44u, 0x162B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B4Cu;
label_162b4c:
    // 0x162b4c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b58: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x162B58u;
    SET_GPR_U32(ctx, 31, 0x162B60u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x162B58u, 0x162B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B60u;
label_162b60:
    // 0x162b60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162b64: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162b68: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x162B68u;
    SET_GPR_U32(ctx, 31, 0x162B70u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x162B68u, 0x162B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B70u;
label_162b70:
    // 0x162b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162b78: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162b7c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x162b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x162b80: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162B80u;
    SET_GPR_U32(ctx, 31, 0x162B88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162B80u, 0x162B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B88u;
label_162b88:
    // 0x162b88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b94: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x162B94u;
    SET_GPR_U32(ctx, 31, 0x162B9Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x162B94u, 0x162B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B9Cu;
label_162b9c:
    // 0x162b9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162ba0: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x162ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x162ba4: 0xc0552dc  jal         func_154B70
    ctx->pc = 0x162BA4u;
    SET_GPR_U32(ctx, 31, 0x162BACu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x162BA4u, 0x162BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BACu;
label_162bac:
    // 0x162bac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x162bacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x162bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162bb4: 0x244400b8  addiu       $a0, $v0, 0xB8
    ctx->pc = 0x162bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x162bb8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x162bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x162bbc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x162BBCu;
    SET_GPR_U32(ctx, 31, 0x162BC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x162BBCu, 0x162BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BC4u;
label_162bc4:
    // 0x162bc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x162bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162bd0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x162BD0u;
    SET_GPR_U32(ctx, 31, 0x162BD8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x162BD0u, 0x162BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162BD8u;
label_162bd8:
    // 0x162bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x162bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x162bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162be0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x162be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x162be4: 0x3e00008  jr          $ra
    ctx->pc = 0x162BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162BECu;
    // 0x162bec: 0x0  nop
    ctx->pc = 0x162becu;
    // NOP
    ctx->pc = 0x162bf0u;
}
