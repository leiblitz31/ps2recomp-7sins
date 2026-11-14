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

// Function: sub_001F67F0
// Address: 0x1f67f0 - 0x1f6da0
void sub_001F67F0_0x1f67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F67F0_0x1f67f0");
#endif

    switch (ctx->pc) {
        case 0x1f6814u: goto label_1f6814;
        case 0x1f682cu: goto label_1f682c;
        case 0x1f6838u: goto label_1f6838;
        case 0x1f6850u: goto label_1f6850;
        case 0x1f685cu: goto label_1f685c;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6880u: goto label_1f6880;
        case 0x1f6898u: goto label_1f6898;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68bcu: goto label_1f68bc;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68e0u: goto label_1f68e0;
        case 0x1f68ecu: goto label_1f68ec;
        case 0x1f6904u: goto label_1f6904;
        case 0x1f6910u: goto label_1f6910;
        case 0x1f6928u: goto label_1f6928;
        case 0x1f6934u: goto label_1f6934;
        case 0x1f694cu: goto label_1f694c;
        case 0x1f6958u: goto label_1f6958;
        case 0x1f6970u: goto label_1f6970;
        case 0x1f697cu: goto label_1f697c;
        case 0x1f6994u: goto label_1f6994;
        case 0x1f69a0u: goto label_1f69a0;
        case 0x1f69b8u: goto label_1f69b8;
        case 0x1f69c4u: goto label_1f69c4;
        case 0x1f69dcu: goto label_1f69dc;
        case 0x1f69e8u: goto label_1f69e8;
        case 0x1f6a00u: goto label_1f6a00;
        case 0x1f6a0cu: goto label_1f6a0c;
        case 0x1f6a24u: goto label_1f6a24;
        case 0x1f6a30u: goto label_1f6a30;
        case 0x1f6a48u: goto label_1f6a48;
        case 0x1f6a54u: goto label_1f6a54;
        case 0x1f6a6cu: goto label_1f6a6c;
        case 0x1f6a78u: goto label_1f6a78;
        case 0x1f6a90u: goto label_1f6a90;
        case 0x1f6a9cu: goto label_1f6a9c;
        case 0x1f6ab4u: goto label_1f6ab4;
        case 0x1f6ac0u: goto label_1f6ac0;
        case 0x1f6ad8u: goto label_1f6ad8;
        case 0x1f6ae4u: goto label_1f6ae4;
        case 0x1f6afcu: goto label_1f6afc;
        case 0x1f6b08u: goto label_1f6b08;
        case 0x1f6b20u: goto label_1f6b20;
        case 0x1f6b2cu: goto label_1f6b2c;
        case 0x1f6b44u: goto label_1f6b44;
        case 0x1f6b50u: goto label_1f6b50;
        case 0x1f6b68u: goto label_1f6b68;
        case 0x1f6b74u: goto label_1f6b74;
        case 0x1f6b8cu: goto label_1f6b8c;
        case 0x1f6b98u: goto label_1f6b98;
        case 0x1f6bb0u: goto label_1f6bb0;
        case 0x1f6bbcu: goto label_1f6bbc;
        case 0x1f6bd4u: goto label_1f6bd4;
        case 0x1f6be0u: goto label_1f6be0;
        case 0x1f6bf8u: goto label_1f6bf8;
        case 0x1f6c04u: goto label_1f6c04;
        case 0x1f6c1cu: goto label_1f6c1c;
        case 0x1f6c28u: goto label_1f6c28;
        case 0x1f6c40u: goto label_1f6c40;
        case 0x1f6c4cu: goto label_1f6c4c;
        case 0x1f6c58u: goto label_1f6c58;
        case 0x1f6c70u: goto label_1f6c70;
        case 0x1f6c84u: goto label_1f6c84;
        case 0x1f6c90u: goto label_1f6c90;
        case 0x1f6ca8u: goto label_1f6ca8;
        case 0x1f6cbcu: goto label_1f6cbc;
        case 0x1f6cc8u: goto label_1f6cc8;
        case 0x1f6ce0u: goto label_1f6ce0;
        case 0x1f6cf4u: goto label_1f6cf4;
        case 0x1f6d00u: goto label_1f6d00;
        case 0x1f6d18u: goto label_1f6d18;
        case 0x1f6d2cu: goto label_1f6d2c;
        case 0x1f6d38u: goto label_1f6d38;
        case 0x1f6d50u: goto label_1f6d50;
        case 0x1f6d64u: goto label_1f6d64;
        default: break;
    }

    ctx->pc = 0x1f67f0u;

    // 0x1f67f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f67f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f67f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f67f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f67fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f67fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f6800: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1f6800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1f6804: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6804u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f6808: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f680c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F680Cu;
    SET_GPR_U32(ctx, 31, 0x1F6814u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F680Cu, 0x1F6814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6814u;
label_1f6814:
    // 0x1f6814: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f681c: 0x8c650240  lw          $a1, 0x240($v1)
    ctx->pc = 0x1f681cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 576)));
    // 0x1f6820: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6824: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6824u;
    SET_GPR_U32(ctx, 31, 0x1F682Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6824u, 0x1F682Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F682Cu;
label_1f682c:
    // 0x1f682c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6830: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6830u;
    SET_GPR_U32(ctx, 31, 0x1F6838u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6830u, 0x1F6838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6838u;
label_1f6838:
    // 0x1f6838: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f683c: 0x8c65011c  lw          $a1, 0x11C($v1)
    ctx->pc = 0x1f683cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x1f6840: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6844: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6848: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6848u;
    SET_GPR_U32(ctx, 31, 0x1F6850u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6848u, 0x1F6850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6850u;
label_1f6850:
    // 0x1f6850: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6854: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6854u;
    SET_GPR_U32(ctx, 31, 0x1F685Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6854u, 0x1F685Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F685Cu;
label_1f685c:
    // 0x1f685c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f685cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6860: 0x8c65012c  lw          $a1, 0x12C($v1)
    ctx->pc = 0x1f6860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
    // 0x1f6864: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6868: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f686c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F686Cu;
    SET_GPR_U32(ctx, 31, 0x1F6874u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F686Cu, 0x1F6874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6874u;
label_1f6874:
    // 0x1f6874: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6878: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6878u;
    SET_GPR_U32(ctx, 31, 0x1F6880u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6878u, 0x1F6880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6880u;
label_1f6880:
    // 0x1f6880: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6884: 0x8c650120  lw          $a1, 0x120($v1)
    ctx->pc = 0x1f6884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
    // 0x1f6888: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f688c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6890: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6890u;
    SET_GPR_U32(ctx, 31, 0x1F6898u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6890u, 0x1F6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6898u;
label_1f6898:
    // 0x1f6898: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f689c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F689Cu;
    SET_GPR_U32(ctx, 31, 0x1F68A4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F689Cu, 0x1F68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68A4u;
label_1f68a4:
    // 0x1f68a4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f68a8: 0x8c650124  lw          $a1, 0x124($v1)
    ctx->pc = 0x1f68a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x1f68ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f68acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68b0: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f68b4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F68B4u;
    SET_GPR_U32(ctx, 31, 0x1F68BCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F68B4u, 0x1F68BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68BCu;
label_1f68bc:
    // 0x1f68bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f68bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f68c0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F68C0u;
    SET_GPR_U32(ctx, 31, 0x1F68C8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F68C0u, 0x1F68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68C8u;
label_1f68c8:
    // 0x1f68c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f68c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f68cc: 0x8c650128  lw          $a1, 0x128($v1)
    ctx->pc = 0x1f68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 296)));
    // 0x1f68d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f68d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68d4: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f68d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f68d8: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F68D8u;
    SET_GPR_U32(ctx, 31, 0x1F68E0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F68D8u, 0x1F68E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68E0u;
label_1f68e0:
    // 0x1f68e0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f68e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F68E4u;
    SET_GPR_U32(ctx, 31, 0x1F68ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F68E4u, 0x1F68ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68ECu;
label_1f68ec:
    // 0x1f68ec: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f68f0: 0x8c650130  lw          $a1, 0x130($v1)
    ctx->pc = 0x1f68f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1f68f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f68f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68f8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f68f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f68fc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F68FCu;
    SET_GPR_U32(ctx, 31, 0x1F6904u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F68FCu, 0x1F6904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6904u;
label_1f6904:
    // 0x1f6904: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6908: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6908u;
    SET_GPR_U32(ctx, 31, 0x1F6910u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6908u, 0x1F6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6910u;
label_1f6910:
    // 0x1f6910: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6914: 0x8c650134  lw          $a1, 0x134($v1)
    ctx->pc = 0x1f6914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1f6918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f691c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f691cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6920: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6920u;
    SET_GPR_U32(ctx, 31, 0x1F6928u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6920u, 0x1F6928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6928u;
label_1f6928:
    // 0x1f6928: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f692c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F692Cu;
    SET_GPR_U32(ctx, 31, 0x1F6934u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F692Cu, 0x1F6934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6934u;
label_1f6934:
    // 0x1f6934: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6938: 0x8c650138  lw          $a1, 0x138($v1)
    ctx->pc = 0x1f6938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1f693c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f693cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6940: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6944: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6944u;
    SET_GPR_U32(ctx, 31, 0x1F694Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6944u, 0x1F694Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F694Cu;
label_1f694c:
    // 0x1f694c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f694cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6950: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6950u;
    SET_GPR_U32(ctx, 31, 0x1F6958u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6950u, 0x1F6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6958u;
label_1f6958:
    // 0x1f6958: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f695c: 0x8c65017c  lw          $a1, 0x17C($v1)
    ctx->pc = 0x1f695cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
    // 0x1f6960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6964: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6968: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6968u;
    SET_GPR_U32(ctx, 31, 0x1F6970u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6968u, 0x1F6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6970u;
label_1f6970:
    // 0x1f6970: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6974: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6974u;
    SET_GPR_U32(ctx, 31, 0x1F697Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6974u, 0x1F697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F697Cu;
label_1f697c:
    // 0x1f697c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f697cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6980: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x1f6980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
    // 0x1f6984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6988: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f698c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F698Cu;
    SET_GPR_U32(ctx, 31, 0x1F6994u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F698Cu, 0x1F6994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6994u;
label_1f6994:
    // 0x1f6994: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6998: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6998u;
    SET_GPR_U32(ctx, 31, 0x1F69A0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6998u, 0x1F69A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69A0u;
label_1f69a0:
    // 0x1f69a0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f69a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f69a4: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x1f69a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1f69a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f69a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69ac: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f69acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f69b0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F69B0u;
    SET_GPR_U32(ctx, 31, 0x1F69B8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F69B0u, 0x1F69B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69B8u;
label_1f69b8:
    // 0x1f69b8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f69b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f69bc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F69BCu;
    SET_GPR_U32(ctx, 31, 0x1F69C4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F69BCu, 0x1F69C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69C4u;
label_1f69c4:
    // 0x1f69c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f69c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f69c8: 0x8c650144  lw          $a1, 0x144($v1)
    ctx->pc = 0x1f69c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x1f69cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f69ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69d0: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f69d4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F69D4u;
    SET_GPR_U32(ctx, 31, 0x1F69DCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F69D4u, 0x1F69DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69DCu;
label_1f69dc:
    // 0x1f69dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f69dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f69e0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F69E0u;
    SET_GPR_U32(ctx, 31, 0x1F69E8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F69E0u, 0x1F69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69E8u;
label_1f69e8:
    // 0x1f69e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f69e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f69ec: 0x8c650148  lw          $a1, 0x148($v1)
    ctx->pc = 0x1f69ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 328)));
    // 0x1f69f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f69f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69f4: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f69f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f69f8: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F69F8u;
    SET_GPR_U32(ctx, 31, 0x1F6A00u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F69F8u, 0x1F6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A00u;
label_1f6a00:
    // 0x1f6a00: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a04: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6A04u;
    SET_GPR_U32(ctx, 31, 0x1F6A0Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6A04u, 0x1F6A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A0Cu;
label_1f6a0c:
    // 0x1f6a0c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a10: 0x8c65014c  lw          $a1, 0x14C($v1)
    ctx->pc = 0x1f6a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 332)));
    // 0x1f6a14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a18: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6a1c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A24u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6A1Cu, 0x1F6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A24u;
label_1f6a24:
    // 0x1f6a24: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a28: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6A28u;
    SET_GPR_U32(ctx, 31, 0x1F6A30u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6A28u, 0x1F6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A30u;
label_1f6a30:
    // 0x1f6a30: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a34: 0x8c650150  lw          $a1, 0x150($v1)
    ctx->pc = 0x1f6a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1f6a38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a3c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6a40: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6A40u;
    SET_GPR_U32(ctx, 31, 0x1F6A48u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6A40u, 0x1F6A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A48u;
label_1f6a48:
    // 0x1f6a48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a4c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A54u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6A4Cu, 0x1F6A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A54u;
label_1f6a54:
    // 0x1f6a54: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a58: 0x8c650154  lw          $a1, 0x154($v1)
    ctx->pc = 0x1f6a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1f6a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a60: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6a64: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6A64u;
    SET_GPR_U32(ctx, 31, 0x1F6A6Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6A64u, 0x1F6A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A6Cu;
label_1f6a6c:
    // 0x1f6a6c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a70: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6A70u;
    SET_GPR_U32(ctx, 31, 0x1F6A78u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6A70u, 0x1F6A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A78u;
label_1f6a78:
    // 0x1f6a78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a7c: 0x8c650158  lw          $a1, 0x158($v1)
    ctx->pc = 0x1f6a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x1f6a80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a84: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6a88: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6A88u;
    SET_GPR_U32(ctx, 31, 0x1F6A90u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6A88u, 0x1F6A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A90u;
label_1f6a90:
    // 0x1f6a90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a94: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6A94u;
    SET_GPR_U32(ctx, 31, 0x1F6A9Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6A94u, 0x1F6A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A9Cu;
label_1f6a9c:
    // 0x1f6a9c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6aa0: 0x8c65015c  lw          $a1, 0x15C($v1)
    ctx->pc = 0x1f6aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x1f6aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6aa8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6aac: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6AACu;
    SET_GPR_U32(ctx, 31, 0x1F6AB4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6AACu, 0x1F6AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AB4u;
label_1f6ab4:
    // 0x1f6ab4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6ab8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6AB8u;
    SET_GPR_U32(ctx, 31, 0x1F6AC0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6AB8u, 0x1F6AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AC0u;
label_1f6ac0:
    // 0x1f6ac0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6ac4: 0x8c650160  lw          $a1, 0x160($v1)
    ctx->pc = 0x1f6ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x1f6ac8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6acc: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6ad0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6AD0u;
    SET_GPR_U32(ctx, 31, 0x1F6AD8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6AD0u, 0x1F6AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AD8u;
label_1f6ad8:
    // 0x1f6ad8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6adc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6ADCu;
    SET_GPR_U32(ctx, 31, 0x1F6AE4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6ADCu, 0x1F6AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AE4u;
label_1f6ae4:
    // 0x1f6ae4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6ae8: 0x8c650164  lw          $a1, 0x164($v1)
    ctx->pc = 0x1f6ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x1f6aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6af0: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6af4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6AF4u;
    SET_GPR_U32(ctx, 31, 0x1F6AFCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6AF4u, 0x1F6AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6AFCu;
label_1f6afc:
    // 0x1f6afc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b00: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6B00u;
    SET_GPR_U32(ctx, 31, 0x1F6B08u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6B00u, 0x1F6B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B08u;
label_1f6b08:
    // 0x1f6b08: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b0c: 0x8c650168  lw          $a1, 0x168($v1)
    ctx->pc = 0x1f6b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x1f6b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b14: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6b18: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6B18u;
    SET_GPR_U32(ctx, 31, 0x1F6B20u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6B18u, 0x1F6B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B20u;
label_1f6b20:
    // 0x1f6b20: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b24: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6B24u;
    SET_GPR_U32(ctx, 31, 0x1F6B2Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6B24u, 0x1F6B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B2Cu;
label_1f6b2c:
    // 0x1f6b2c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b30: 0x8c65016c  lw          $a1, 0x16C($v1)
    ctx->pc = 0x1f6b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 364)));
    // 0x1f6b34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b38: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6b3c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6B3Cu;
    SET_GPR_U32(ctx, 31, 0x1F6B44u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6B3Cu, 0x1F6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B44u;
label_1f6b44:
    // 0x1f6b44: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b48: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6B48u;
    SET_GPR_U32(ctx, 31, 0x1F6B50u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6B48u, 0x1F6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B50u;
label_1f6b50:
    // 0x1f6b50: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b54: 0x8c650170  lw          $a1, 0x170($v1)
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 368)));
    // 0x1f6b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b5c: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6b60: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6B60u;
    SET_GPR_U32(ctx, 31, 0x1F6B68u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6B60u, 0x1F6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B68u;
label_1f6b68:
    // 0x1f6b68: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b6c: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F6B74u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6B6Cu, 0x1F6B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B74u;
label_1f6b74:
    // 0x1f6b74: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b78: 0x8c650174  lw          $a1, 0x174($v1)
    ctx->pc = 0x1f6b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
    // 0x1f6b7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6b80: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6b84: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6B84u;
    SET_GPR_U32(ctx, 31, 0x1F6B8Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6B84u, 0x1F6B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B8Cu;
label_1f6b8c:
    // 0x1f6b8c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b90: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6B90u;
    SET_GPR_U32(ctx, 31, 0x1F6B98u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6B90u, 0x1F6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6B98u;
label_1f6b98:
    // 0x1f6b98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6b9c: 0x8c650178  lw          $a1, 0x178($v1)
    ctx->pc = 0x1f6b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x1f6ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ba4: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6ba8: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6BA8u;
    SET_GPR_U32(ctx, 31, 0x1F6BB0u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6BA8u, 0x1F6BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BB0u;
label_1f6bb0:
    // 0x1f6bb0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6bb4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6BB4u;
    SET_GPR_U32(ctx, 31, 0x1F6BBCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6BB4u, 0x1F6BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BBCu;
label_1f6bbc:
    // 0x1f6bbc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6bc0: 0x8c65015c  lw          $a1, 0x15C($v1)
    ctx->pc = 0x1f6bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
    // 0x1f6bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bc8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6bcc: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6BCCu;
    SET_GPR_U32(ctx, 31, 0x1F6BD4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6BCCu, 0x1F6BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BD4u;
label_1f6bd4:
    // 0x1f6bd4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6bd8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6BD8u;
    SET_GPR_U32(ctx, 31, 0x1F6BE0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6BD8u, 0x1F6BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BE0u;
label_1f6be0:
    // 0x1f6be0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6be4: 0x8c650160  lw          $a1, 0x160($v1)
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x1f6be8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6bec: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6bf0: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6BF0u;
    SET_GPR_U32(ctx, 31, 0x1F6BF8u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6BF0u, 0x1F6BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6BF8u;
label_1f6bf8:
    // 0x1f6bf8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6bfc: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6BFCu;
    SET_GPR_U32(ctx, 31, 0x1F6C04u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6BFCu, 0x1F6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C04u;
label_1f6c04:
    // 0x1f6c04: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c08: 0x8c650164  lw          $a1, 0x164($v1)
    ctx->pc = 0x1f6c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x1f6c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c10: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6c14: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6C14u;
    SET_GPR_U32(ctx, 31, 0x1F6C1Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6C14u, 0x1F6C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C1Cu;
label_1f6c1c:
    // 0x1f6c1c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c20: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6C20u;
    SET_GPR_U32(ctx, 31, 0x1F6C28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6C20u, 0x1F6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C28u;
label_1f6c28:
    // 0x1f6c28: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c2c: 0x8c650168  lw          $a1, 0x168($v1)
    ctx->pc = 0x1f6c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 360)));
    // 0x1f6c30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f6c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c34: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6c38: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6C38u;
    SET_GPR_U32(ctx, 31, 0x1F6C40u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6C38u, 0x1F6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C40u;
label_1f6c40:
    // 0x1f6c40: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f6c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c44: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1F6C44u;
    {
        const bool branch_taken_0x1f6c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6c44) {
            ctx->pc = 0x1F6D68u;
            goto label_1f6d68;
        }
    }
    ctx->pc = 0x1F6C4Cu;
label_1f6c4c:
    // 0x1f6c4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c50: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6C50u;
    SET_GPR_U32(ctx, 31, 0x1F6C58u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6C50u, 0x1F6C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C58u;
label_1f6c58:
    // 0x1f6c58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c60: 0x244401f0  addiu       $a0, $v0, 0x1F0
    ctx->pc = 0x1f6c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    // 0x1f6c64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c68: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F6C68u;
    SET_GPR_U32(ctx, 31, 0x1F6C70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6C68u, 0x1F6C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C70u;
label_1f6c70:
    // 0x1f6c70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6c74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c78: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6c7c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F6C84u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6C7Cu, 0x1F6C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C84u;
label_1f6c84:
    // 0x1f6c84: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c88: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6C88u;
    SET_GPR_U32(ctx, 31, 0x1F6C90u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6C88u, 0x1F6C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6C90u;
label_1f6c90:
    // 0x1f6c90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6c94: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6c98: 0x244401fc  addiu       $a0, $v0, 0x1FC
    ctx->pc = 0x1f6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 508));
    // 0x1f6c9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ca0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F6CA0u;
    SET_GPR_U32(ctx, 31, 0x1F6CA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6CA0u, 0x1F6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CA8u;
label_1f6ca8:
    // 0x1f6ca8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6cac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cb0: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6cb4: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6CB4u;
    SET_GPR_U32(ctx, 31, 0x1F6CBCu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6CB4u, 0x1F6CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CBCu;
label_1f6cbc:
    // 0x1f6cbc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6cc0: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6CC0u;
    SET_GPR_U32(ctx, 31, 0x1F6CC8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6CC0u, 0x1F6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CC8u;
label_1f6cc8:
    // 0x1f6cc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ccc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6cd0: 0x24440208  addiu       $a0, $v0, 0x208
    ctx->pc = 0x1f6cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1f6cd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cd8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F6CD8u;
    SET_GPR_U32(ctx, 31, 0x1F6CE0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6CD8u, 0x1F6CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CE0u;
label_1f6ce0:
    // 0x1f6ce0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ce8: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6cec: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6CECu;
    SET_GPR_U32(ctx, 31, 0x1F6CF4u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6CECu, 0x1F6CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6CF4u;
label_1f6cf4:
    // 0x1f6cf4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6cf8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6CF8u;
    SET_GPR_U32(ctx, 31, 0x1F6D00u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6CF8u, 0x1F6D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D00u;
label_1f6d00:
    // 0x1f6d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6d08: 0x24440214  addiu       $a0, $v0, 0x214
    ctx->pc = 0x1f6d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x1f6d0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d10: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F6D10u;
    SET_GPR_U32(ctx, 31, 0x1F6D18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6D10u, 0x1F6D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D18u;
label_1f6d18:
    // 0x1f6d18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d20: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6d24: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6D24u;
    SET_GPR_U32(ctx, 31, 0x1F6D2Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6D24u, 0x1F6D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D2Cu;
label_1f6d2c:
    // 0x1f6d2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1f6d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6d30: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F6D30u;
    SET_GPR_U32(ctx, 31, 0x1F6D38u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F6D30u, 0x1F6D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D38u;
label_1f6d38:
    // 0x1f6d38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f6d38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d3c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1f6d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6d40: 0x24440220  addiu       $a0, $v0, 0x220
    ctx->pc = 0x1f6d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x1f6d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d48: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F6D48u;
    SET_GPR_U32(ctx, 31, 0x1F6D50u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F6D48u, 0x1F6D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D50u;
label_1f6d50:
    // 0x1f6d50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f6d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f6d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d58: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x1f6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6d5c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x1F6D5Cu;
    SET_GPR_U32(ctx, 31, 0x1F6D64u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1F6D5Cu, 0x1F6D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D64u;
label_1f6d64:
    // 0x1f6d64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f6d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f6d68:
    // 0x1f6d68: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1f6d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6d6c: 0x8c6300a4  lw          $v1, 0xA4($v1)
    ctx->pc = 0x1f6d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
    // 0x1f6d70: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x1f6d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f6d74: 0x1460ffb5  bnez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1F6D74u;
    {
        const bool branch_taken_0x1f6d74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6d74) {
            ctx->pc = 0x1F6C4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6D7Cu;
    // 0x1f6d7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f6d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6d80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f6d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6d84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f6d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6d88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f6d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f6d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6D94u;
    // 0x1f6d94: 0x0  nop
    ctx->pc = 0x1f6d94u;
    // NOP
    // 0x1f6d98: 0x0  nop
    ctx->pc = 0x1f6d98u;
    // NOP
    // 0x1f6d9c: 0x0  nop
    ctx->pc = 0x1f6d9cu;
    // NOP
    ctx->pc = 0x1f6da0u;
}
