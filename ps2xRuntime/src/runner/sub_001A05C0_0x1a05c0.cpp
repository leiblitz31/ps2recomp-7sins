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

// Function: sub_001A05C0
// Address: 0x1a05c0 - 0x1a0d60
void sub_001A05C0_0x1a05c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A05C0_0x1a05c0");
#endif

    switch (ctx->pc) {
        case 0x1a05dcu: goto label_1a05dc;
        case 0x1a0628u: goto label_1a0628;
        case 0x1a0638u: goto label_1a0638;
        case 0x1a0674u: goto label_1a0674;
        case 0x1a0684u: goto label_1a0684;
        case 0x1a0690u: goto label_1a0690;
        case 0x1a06a0u: goto label_1a06a0;
        case 0x1a06b0u: goto label_1a06b0;
        case 0x1a06bcu: goto label_1a06bc;
        case 0x1a06ccu: goto label_1a06cc;
        case 0x1a0744u: goto label_1a0744;
        case 0x1a0784u: goto label_1a0784;
        case 0x1a0798u: goto label_1a0798;
        case 0x1a07c4u: goto label_1a07c4;
        case 0x1a07e4u: goto label_1a07e4;
        case 0x1a0810u: goto label_1a0810;
        case 0x1a0844u: goto label_1a0844;
        case 0x1a0850u: goto label_1a0850;
        case 0x1a08a4u: goto label_1a08a4;
        case 0x1a08b0u: goto label_1a08b0;
        case 0x1a08c8u: goto label_1a08c8;
        case 0x1a08f4u: goto label_1a08f4;
        case 0x1a0908u: goto label_1a0908;
        case 0x1a0934u: goto label_1a0934;
        case 0x1a0948u: goto label_1a0948;
        case 0x1a0974u: goto label_1a0974;
        case 0x1a0988u: goto label_1a0988;
        case 0x1a09b4u: goto label_1a09b4;
        case 0x1a09c8u: goto label_1a09c8;
        case 0x1a09f4u: goto label_1a09f4;
        case 0x1a0a08u: goto label_1a0a08;
        case 0x1a0a34u: goto label_1a0a34;
        case 0x1a0a40u: goto label_1a0a40;
        case 0x1a0a4cu: goto label_1a0a4c;
        case 0x1a0a60u: goto label_1a0a60;
        case 0x1a0a78u: goto label_1a0a78;
        case 0x1a0a98u: goto label_1a0a98;
        case 0x1a0accu: goto label_1a0acc;
        case 0x1a0af8u: goto label_1a0af8;
        case 0x1a0b14u: goto label_1a0b14;
        case 0x1a0b24u: goto label_1a0b24;
        case 0x1a0b38u: goto label_1a0b38;
        case 0x1a0b48u: goto label_1a0b48;
        case 0x1a0b54u: goto label_1a0b54;
        case 0x1a0b6cu: goto label_1a0b6c;
        case 0x1a0b80u: goto label_1a0b80;
        case 0x1a0b98u: goto label_1a0b98;
        case 0x1a0bb0u: goto label_1a0bb0;
        case 0x1a0bc8u: goto label_1a0bc8;
        case 0x1a0be0u: goto label_1a0be0;
        case 0x1a0bf8u: goto label_1a0bf8;
        case 0x1a0c10u: goto label_1a0c10;
        case 0x1a0c28u: goto label_1a0c28;
        case 0x1a0c40u: goto label_1a0c40;
        case 0x1a0c58u: goto label_1a0c58;
        case 0x1a0c70u: goto label_1a0c70;
        case 0x1a0c88u: goto label_1a0c88;
        case 0x1a0ca4u: goto label_1a0ca4;
        case 0x1a0cb8u: goto label_1a0cb8;
        case 0x1a0cdcu: goto label_1a0cdc;
        case 0x1a0cf0u: goto label_1a0cf0;
        case 0x1a0d14u: goto label_1a0d14;
        case 0x1a0d24u: goto label_1a0d24;
        default: break;
    }

    ctx->pc = 0x1a05c0u;

label_1a05c0:
    // 0x1a05c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a05c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a05c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a05c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a05c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a05c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a05cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a05ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a05d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a05d4: 0xc04809c  jal         func_120270
    ctx->pc = 0x1A05D4u;
    SET_GPR_U32(ctx, 31, 0x1A05DCu);
    ctx->pc = 0x120270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120270u, 0x1A05D4u, 0x1A05DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A05DCu;
label_1a05dc:
    // 0x1a05dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a05dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a05e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a05e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a05e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a05e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a05e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a05e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a05ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a05ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a05f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A05F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A05F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A05F8u;
    // 0x1a05f8: 0x0  nop
    ctx->pc = 0x1a05f8u;
    // NOP
    // 0x1a05fc: 0x0  nop
    ctx->pc = 0x1a05fcu;
    // NOP
    // 0x1a0600: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a0600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a0604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a0604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a0608: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a0608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a060c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a060cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0610: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x1a0610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x1a0614: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a0614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a0618: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a0618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a061c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a061cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a0620: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A0620u;
    SET_GPR_U32(ctx, 31, 0x1A0628u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A0620u, 0x1A0628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0628u;
label_1a0628:
    // 0x1a0628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a062c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a062cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a0630: 0xc050530  jal         func_1414C0
    ctx->pc = 0x1A0630u;
    SET_GPR_U32(ctx, 31, 0x1A0638u);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1A0630u, 0x1A0638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0638u;
label_1a0638:
    // 0x1a0638: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a0638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1a063c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a063cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0640: 0x0  nop
    ctx->pc = 0x1a0640u;
    // NOP
    // 0x1a0644: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a0644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a0648: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1a0648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1a064c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a064cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0650: 0x0  nop
    ctx->pc = 0x1a0650u;
    // NOP
    // 0x1a0654: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1a0654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a0658: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1a0658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1a065c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a065cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0660: 0x0  nop
    ctx->pc = 0x1a0660u;
    // NOP
    // 0x1a0664: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a0664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a0668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a066c: 0xc091008  jal         func_244020
    ctx->pc = 0x1A066Cu;
    SET_GPR_U32(ctx, 31, 0x1A0674u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1A066Cu, 0x1A0674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0674u;
label_1a0674:
    // 0x1a0674: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1a0674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1a0678: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1a0678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a067c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x1A067Cu;
    SET_GPR_U32(ctx, 31, 0x1A0684u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x1A067Cu, 0x1A0684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0684u;
label_1a0684:
    // 0x1a0684: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0688: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x1A0688u;
    SET_GPR_U32(ctx, 31, 0x1A0690u);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x1A0688u, 0x1A0690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0690u;
label_1a0690:
    // 0x1a0690: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a0690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0694: 0x2404005a  addiu       $a0, $zero, 0x5A
    ctx->pc = 0x1a0694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1a0698: 0xc0beeea  jal         func_2FBBA8
    ctx->pc = 0x1A0698u;
    SET_GPR_U32(ctx, 31, 0x1A06A0u);
    ctx->pc = 0x2FBBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBBA8u, 0x1A0698u, 0x1A06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06A0u;
label_1a06a0:
    // 0x1a06a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a06a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a06a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06a8: 0xc0bed82  jal         func_2FB608
    ctx->pc = 0x1A06A8u;
    SET_GPR_U32(ctx, 31, 0x1A06B0u);
    ctx->pc = 0x2FB608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB608u, 0x1A06A8u, 0x1A06B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06B0u;
label_1a06b0:
    // 0x1a06b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a06b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06b4: 0xc0c3808  jal         func_30E020
    ctx->pc = 0x1A06B4u;
    SET_GPR_U32(ctx, 31, 0x1A06BCu);
    ctx->pc = 0x30E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E020u, 0x1A06B4u, 0x1A06BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06BCu;
label_1a06bc:
    // 0x1a06bc: 0xdf858010  ld          $a1, -0x7FF0($gp)
    ctx->pc = 0x1a06bcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x1a06c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a06c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a06c4: 0xc09007c  jal         func_2401F0
    ctx->pc = 0x1A06C4u;
    SET_GPR_U32(ctx, 31, 0x1A06CCu);
    ctx->pc = 0x2401F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2401F0u, 0x1A06C4u, 0x1A06CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A06CCu;
label_1a06cc:
    // 0x1a06cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A06CCu;
    {
        const bool branch_taken_0x1a06cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a06cc) {
            ctx->pc = 0x1A06ECu;
            goto label_1a06ec;
        }
    }
    ctx->pc = 0x1A06D4u;
    // 0x1a06d4: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1a06d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a06d8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1a06d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1a06dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a06dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a06e0: 0x0  nop
    ctx->pc = 0x1a06e0u;
    // NOP
    // 0x1a06e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1a06e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a06e8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1a06e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_1a06ec:
    // 0x1a06ec: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1a06ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a06f0: 0x3c0242dc  lui         $v0, 0x42DC
    ctx->pc = 0x1a06f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17116 << 16));
    // 0x1a06f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a06f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a06f8: 0x0  nop
    ctx->pc = 0x1a06f8u;
    // NOP
    // 0x1a06fc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1a06fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1a0700: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1a0700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1a0704: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1a0704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1a0708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a070c: 0x0  nop
    ctx->pc = 0x1a070cu;
    // NOP
    // 0x1a0710: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1a0710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1a0714: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1a0714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1a0718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a071c: 0x0  nop
    ctx->pc = 0x1a071cu;
    // NOP
    // 0x1a0720: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1a0720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1a0724: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1a0724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
    // 0x1a0728: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a0728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a072c: 0x0  nop
    ctx->pc = 0x1a072cu;
    // NOP
    // 0x1a0730: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1a0730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1a0734: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x1a0734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0738: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a0738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a073c: 0xc050194  jal         func_140650
    ctx->pc = 0x1A073Cu;
    SET_GPR_U32(ctx, 31, 0x1A0744u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1A073Cu, 0x1A0744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0744u;
label_1a0744:
    // 0x1a0744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a0744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a074c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a074cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0750: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1a0750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a0754: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A075Cu;
    // 0x1a075c: 0x0  nop
    ctx->pc = 0x1a075cu;
    // NOP
    // 0x1a0760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a0760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a0764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a0764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a0768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a076c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1a076cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1a0770: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a0774: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a0774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0778: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1a0778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1a077c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A077Cu;
    SET_GPR_U32(ctx, 31, 0x1A0784u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A077Cu, 0x1A0784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0784u;
label_1a0784:
    // 0x1a0784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0788: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a0788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a078c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a078cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0790: 0xc090f80  jal         func_243E00
    ctx->pc = 0x1A0790u;
    SET_GPR_U32(ctx, 31, 0x1A0798u);
    ctx->pc = 0x243E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243E00u, 0x1A0790u, 0x1A0798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0798u;
label_1a0798:
    // 0x1a0798: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x1a0798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a079c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a07a0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1a07a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a07a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1a07a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a07a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1a07a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a07ac: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1a07acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1a07b0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1a07b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1a07b4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1a07b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1a07b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a07b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a07bc: 0xc091008  jal         func_244020
    ctx->pc = 0x1A07BCu;
    SET_GPR_U32(ctx, 31, 0x1A07C4u);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1A07BCu, 0x1A07C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07C4u;
label_1a07c4:
    // 0x1a07c4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1a07c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1a07c8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1a07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a07cc: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x1a07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a07d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a07d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1a07d4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1a07d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1a07d8: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1a07d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a07dc: 0xc0c3966  jal         func_30E598
    ctx->pc = 0x1A07DCu;
    SET_GPR_U32(ctx, 31, 0x1A07E4u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1A07DCu, 0x1A07E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A07E4u;
label_1a07e4:
    // 0x1a07e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a07e8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a07e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a07ec: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1a07ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a07f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a07f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a07f4: 0x0  nop
    ctx->pc = 0x1a07f4u;
    // NOP
    // 0x1a07f8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1a07f8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1a07fc: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x1a07fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1a0800: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a0800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a0804: 0xc7ac003c  lwc1        $f12, 0x3C($sp)
    ctx->pc = 0x1a0804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a0808: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1A0808u;
    SET_GPR_U32(ctx, 31, 0x1A0810u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1A0808u, 0x1A0810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0810u;
label_1a0810:
    // 0x1a0810: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1a0810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1a0814: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1a0814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a0818: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1a0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a081c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a081cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a0820: 0x0  nop
    ctx->pc = 0x1a0820u;
    // NOP
    // 0x1a0824: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1a0824u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1a0828: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1a0828u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1a082c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a082cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a0830: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0834: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1a0834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a0838: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a083c: 0xc106598  jal         func_419660
    ctx->pc = 0x1A083Cu;
    SET_GPR_U32(ctx, 31, 0x1A0844u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1A083Cu, 0x1A0844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0844u;
label_1a0844:
    // 0x1a0844: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a0844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0848: 0xc106794  jal         func_419E50
    ctx->pc = 0x1A0848u;
    SET_GPR_U32(ctx, 31, 0x1A0850u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1A0848u, 0x1A0850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0850u;
label_1a0850:
    // 0x1a0850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a0850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0854: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0858: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a0858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a085c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A085Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0864u;
    // 0x1a0864: 0x0  nop
    ctx->pc = 0x1a0864u;
    // NOP
    // 0x1a0868: 0x0  nop
    ctx->pc = 0x1a0868u;
    // NOP
    // 0x1a086c: 0x0  nop
    ctx->pc = 0x1a086cu;
    // NOP
    // 0x1a0870: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1a0870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1a0874: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a0874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1a0878: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a0878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1a087c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a087cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1a0880: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a0880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1a0884: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a0884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a0888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a088c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a088cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a0890: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a0890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a0894: 0xafa401a0  sw          $a0, 0x1A0($sp)
    ctx->pc = 0x1a0894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 4));
    // 0x1a0898: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x1a0898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a089c: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x1A089Cu;
    SET_GPR_U32(ctx, 31, 0x1A08A4u);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x1A089Cu, 0x1A08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08A4u;
label_1a08a4:
    // 0x1a08a4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1a08a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1a08a8: 0xc122430  jal         func_4890C0
    ctx->pc = 0x1A08A8u;
    SET_GPR_U32(ctx, 31, 0x1A08B0u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x1A08A8u, 0x1A08B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08B0u;
label_1a08b0:
    // 0x1a08b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a08b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a08b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a08b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a08bc: 0x24a56270  addiu       $a1, $a1, 0x6270
    ctx->pc = 0x1a08bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25200));
    // 0x1a08c0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1A08C0u;
    SET_GPR_U32(ctx, 31, 0x1A08C8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1A08C0u, 0x1A08C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08C8u;
label_1a08c8:
    // 0x1a08c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a08c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08cc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a08ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a08d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a08d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08d4: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1a08d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x1a08d8: 0x24e762a8  addiu       $a3, $a3, 0x62A8
    ctx->pc = 0x1a08d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25256));
    // 0x1a08dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a08dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a08e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a08e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a08e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a08ec: 0xc120c08  jal         func_483020
    ctx->pc = 0x1A08ECu;
    SET_GPR_U32(ctx, 31, 0x1A08F4u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1A08ECu, 0x1A08F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A08F4u;
label_1a08f4:
    // 0x1a08f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a08f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a08f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a08f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a08fc: 0x24a562c0  addiu       $a1, $a1, 0x62C0
    ctx->pc = 0x1a08fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    // 0x1a0900: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1A0900u;
    SET_GPR_U32(ctx, 31, 0x1A0908u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1A0900u, 0x1A0908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0908u;
label_1a0908:
    // 0x1a0908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a090c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a090cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a0910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0914: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1a0914u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x1a0918: 0x24e76300  addiu       $a3, $a3, 0x6300
    ctx->pc = 0x1a0918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25344));
    // 0x1a091c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a091cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0920: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a0920u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0924: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a0924u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0928: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a0928u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a092c: 0xc120c08  jal         func_483020
    ctx->pc = 0x1A092Cu;
    SET_GPR_U32(ctx, 31, 0x1A0934u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1A092Cu, 0x1A0934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0934u;
label_1a0934:
    // 0x1a0934: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a0934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a0938: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a093c: 0x24a56320  addiu       $a1, $a1, 0x6320
    ctx->pc = 0x1a093cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25376));
    // 0x1a0940: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1A0940u;
    SET_GPR_U32(ctx, 31, 0x1A0948u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1A0940u, 0x1A0948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0948u;
label_1a0948:
    // 0x1a0948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a094c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a094cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a0950: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0954: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1a0954u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x1a0958: 0x24e76360  addiu       $a3, $a3, 0x6360
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25440));
    // 0x1a095c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a095cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0960: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a0960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0964: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a0964u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0968: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a0968u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a096c: 0xc120c08  jal         func_483020
    ctx->pc = 0x1A096Cu;
    SET_GPR_U32(ctx, 31, 0x1A0974u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1A096Cu, 0x1A0974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0974u;
label_1a0974:
    // 0x1a0974: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a0974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a0978: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a097c: 0x24a56380  addiu       $a1, $a1, 0x6380
    ctx->pc = 0x1a097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25472));
    // 0x1a0980: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1A0980u;
    SET_GPR_U32(ctx, 31, 0x1A0988u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1A0980u, 0x1A0988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0988u;
label_1a0988:
    // 0x1a0988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a098c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a098cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a0990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0994: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1a0994u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x1a0998: 0x24e763b8  addiu       $a3, $a3, 0x63B8
    ctx->pc = 0x1a0998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25528));
    // 0x1a099c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a099cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a09a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a09a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a09a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09ac: 0xc120c08  jal         func_483020
    ctx->pc = 0x1A09ACu;
    SET_GPR_U32(ctx, 31, 0x1A09B4u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1A09ACu, 0x1A09B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09B4u;
label_1a09b4:
    // 0x1a09b4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a09b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a09b8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a09b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a09bc: 0x24a563d0  addiu       $a1, $a1, 0x63D0
    ctx->pc = 0x1a09bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    // 0x1a09c0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1A09C0u;
    SET_GPR_U32(ctx, 31, 0x1A09C8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1A09C0u, 0x1A09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09C8u;
label_1a09c8:
    // 0x1a09c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a09c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09cc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a09ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a09d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a09d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09d4: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1a09d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x1a09d8: 0x24e76410  addiu       $a3, $a3, 0x6410
    ctx->pc = 0x1a09d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25616));
    // 0x1a09dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a09dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a09e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a09e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a09e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a09ec: 0xc120c08  jal         func_483020
    ctx->pc = 0x1A09ECu;
    SET_GPR_U32(ctx, 31, 0x1A09F4u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1A09ECu, 0x1A09F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A09F4u;
label_1a09f4:
    // 0x1a09f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1a09f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a09f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a09f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a09fc: 0x24a56430  addiu       $a1, $a1, 0x6430
    ctx->pc = 0x1a09fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25648));
    // 0x1a0a00: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1A0A00u;
    SET_GPR_U32(ctx, 31, 0x1A0A08u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1A0A00u, 0x1A0A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A08u;
label_1a0a08:
    // 0x1a0a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a0a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a0c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1a0a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a0a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a14: 0x3c07004e  lui         $a3, 0x4E
    ctx->pc = 0x1a0a14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)78 << 16));
    // 0x1a0a18: 0x24e76468  addiu       $a3, $a3, 0x6468
    ctx->pc = 0x1a0a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 25704));
    // 0x1a0a1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a0a1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a0a20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a0a24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a28: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1a0a28u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a2c: 0xc120c08  jal         func_483020
    ctx->pc = 0x1A0A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A0A34u);
    ctx->pc = 0x483020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483020u, 0x1A0A2Cu, 0x1A0A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A34u;
label_1a0a34:
    // 0x1a0a34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a0a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a38: 0xc0434e0  jal         func_10D380
    ctx->pc = 0x1A0A38u;
    SET_GPR_U32(ctx, 31, 0x1A0A40u);
    ctx->pc = 0x10D380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D380u, 0x1A0A38u, 0x1A0A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A40u;
label_1a0a40:
    // 0x1a0a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a44: 0xc0434d8  jal         func_10D360
    ctx->pc = 0x1A0A44u;
    SET_GPR_U32(ctx, 31, 0x1A0A4Cu);
    ctx->pc = 0x10D360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D360u, 0x1A0A44u, 0x1A0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A4Cu;
label_1a0a4c:
    // 0x1a0a4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a50: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a0a54: 0x24a56478  addiu       $a1, $a1, 0x6478
    ctx->pc = 0x1a0a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25720));
    // 0x1a0a58: 0xc044edc  jal         func_113B70
    ctx->pc = 0x1A0A58u;
    SET_GPR_U32(ctx, 31, 0x1A0A60u);
    ctx->pc = 0x113B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113B70u, 0x1A0A58u, 0x1A0A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A60u;
label_1a0a60:
    // 0x1a0a60: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a0a60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a64: 0x10140005  beq         $zero, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0A64u;
    {
        const bool branch_taken_0x1a0a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x1a0a64) {
            ctx->pc = 0x1A0A7Cu;
            goto label_1a0a7c;
        }
    }
    ctx->pc = 0x1A0A6Cu;
    // 0x1a0a6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a0a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0a70: 0xc0457d8  jal         func_115F60
    ctx->pc = 0x1A0A70u;
    SET_GPR_U32(ctx, 31, 0x1A0A78u);
    ctx->pc = 0x115F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F60u, 0x1A0A70u, 0x1A0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0A78u;
label_1a0a78:
    // 0x1a0a78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a0a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a0a7c:
    // 0x1a0a7c: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A0A7Cu;
    {
        const bool branch_taken_0x1a0a7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a7c) {
            ctx->pc = 0x1A0B40u;
            goto label_1a0b40;
        }
    }
    ctx->pc = 0x1A0A84u;
    // 0x1a0a84: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x1a0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1a0a88: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1a0a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1a0a8c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0A8Cu;
    {
        const bool branch_taken_0x1a0a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a0a8c) {
            ctx->pc = 0x1A0AB4u;
            goto label_1a0ab4;
        }
    }
    ctx->pc = 0x1A0A94u;
    // 0x1a0a94: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1a0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1a0a98:
    // 0x1a0a98: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1a0a98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a0a9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a0a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a0aa0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a0aa4: 0x0  nop
    ctx->pc = 0x1a0aa4u;
    // NOP
    // 0x1a0aa8: 0x0  nop
    ctx->pc = 0x1a0aa8u;
    // NOP
    // 0x1a0aac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A0AACu;
    {
        const bool branch_taken_0x1a0aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0aac) {
            ctx->pc = 0x1A0A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0a98;
        }
    }
    ctx->pc = 0x1A0AB4u;
label_1a0ab4:
    // 0x1a0ab4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a0ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ab8: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x1a0ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1a0abc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a0abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ac4: 0xc08cd28  jal         func_2334A0
    ctx->pc = 0x1A0AC4u;
    SET_GPR_U32(ctx, 31, 0x1A0ACCu);
    ctx->pc = 0x2334A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334A0u, 0x1A0AC4u, 0x1A0ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0ACCu;
label_1a0acc:
    // 0x1a0acc: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1a0accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0ad0: 0xac6200f8  sw          $v0, 0xF8($v1)
    ctx->pc = 0x1a0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 2));
    // 0x1a0ad4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0ad8: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x1a0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1a0adc: 0x10020018  beq         $zero, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A0ADCu;
    {
        const bool branch_taken_0x1a0adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0adc) {
            ctx->pc = 0x1A0B40u;
            goto label_1a0b40;
        }
    }
    ctx->pc = 0x1A0AE4u;
    // 0x1a0ae4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a0ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a0ae8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a0ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0aec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1a0aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a0af0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A0AF0u;
    SET_GPR_U32(ctx, 31, 0x1A0AF8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A0AF0u, 0x1A0AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0AF8u;
label_1a0af8:
    // 0x1a0af8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1a0af8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0afc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0b00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b08: 0x8c4600f8  lw          $a2, 0xF8($v0)
    ctx->pc = 0x1a0b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1a0b0c: 0xc096a20  jal         func_25A880
    ctx->pc = 0x1A0B0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B14u);
    ctx->pc = 0x25A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A880u, 0x1A0B0Cu, 0x1A0B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B14u;
label_1a0b14:
    // 0x1a0b14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a0b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a0b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b1c: 0xc096af0  jal         func_25ABC0
    ctx->pc = 0x1A0B1Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B24u);
    ctx->pc = 0x25ABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25ABC0u, 0x1A0B1Cu, 0x1A0B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B24u;
label_1a0b24:
    // 0x1a0b24: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0b28: 0x8c4400f8  lw          $a0, 0xF8($v0)
    ctx->pc = 0x1a0b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1a0b2c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1a0b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1a0b30: 0xc085538  jal         func_2154E0
    ctx->pc = 0x1A0B30u;
    SET_GPR_U32(ctx, 31, 0x1A0B38u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1A0B30u, 0x1A0B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B38u;
label_1a0b38:
    // 0x1a0b38: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1a0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0b3c: 0xac6200fc  sw          $v0, 0xFC($v1)
    ctx->pc = 0x1a0b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 2));
label_1a0b40:
    // 0x1a0b40: 0xc090864  jal         func_242190
    ctx->pc = 0x1A0B40u;
    SET_GPR_U32(ctx, 31, 0x1A0B48u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1A0B40u, 0x1A0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B48u;
label_1a0b48:
    // 0x1a0b48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a0b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b4c: 0xc0905a0  jal         func_241680
    ctx->pc = 0x1A0B4Cu;
    SET_GPR_U32(ctx, 31, 0x1A0B54u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x1A0B4Cu, 0x1A0B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B54u;
label_1a0b54:
    // 0x1a0b54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a0b54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b58: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0b5c: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0b60: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1a0b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1a0b64: 0xc068358  jal         func_1A0D60
    ctx->pc = 0x1A0B64u;
    SET_GPR_U32(ctx, 31, 0x1A0B6Cu);
    ctx->pc = 0x1A0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D60u, 0x1A0B64u, 0x1A0B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B6Cu;
label_1a0b6c:
    // 0x1a0b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b70: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a0b74: 0x24a56488  addiu       $a1, $a1, 0x6488
    ctx->pc = 0x1a0b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25736));
    // 0x1a0b78: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A0B78u;
    SET_GPR_U32(ctx, 31, 0x1A0B80u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A0B78u, 0x1A0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B80u;
label_1a0b80:
    // 0x1a0b80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0b80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b84: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0b88: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0b90: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0B90u;
    SET_GPR_U32(ctx, 31, 0x1A0B98u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0B98u;
label_1a0b98:
    // 0x1a0b98: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1a0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1a0b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0ba0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a0ba4: 0x24a56498  addiu       $a1, $a1, 0x6498
    ctx->pc = 0x1a0ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25752));
    // 0x1a0ba8: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A0BA8u;
    SET_GPR_U32(ctx, 31, 0x1A0BB0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A0BA8u, 0x1A0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BB0u;
label_1a0bb0:
    // 0x1a0bb0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0bb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bb4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0bb8: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a0bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0bc0: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0BC0u;
    SET_GPR_U32(ctx, 31, 0x1A0BC8u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0BC8u;
label_1a0bc8:
    // 0x1a0bc8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1a0bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1a0bcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0bd0: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a0bd4: 0x24a564a8  addiu       $a1, $a1, 0x64A8
    ctx->pc = 0x1a0bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25768));
    // 0x1a0bd8: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A0BD8u;
    SET_GPR_U32(ctx, 31, 0x1A0BE0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A0BD8u, 0x1A0BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0BE0u;
label_1a0be0:
    // 0x1a0be0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0be0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0be4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0be8: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0bec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a0becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0bf0: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0BF0u;
    SET_GPR_U32(ctx, 31, 0x1A0BF8u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0BF8u;
label_1a0bf8:
    // 0x1a0bf8: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1a0bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1a0bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c00: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a0c04: 0x24a564b8  addiu       $a1, $a1, 0x64B8
    ctx->pc = 0x1a0c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25784));
    // 0x1a0c08: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A0C08u;
    SET_GPR_U32(ctx, 31, 0x1A0C10u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A0C08u, 0x1A0C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C10u;
label_1a0c10:
    // 0x1a0c10: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0c10u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c14: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0c18: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0c1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1a0c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a0c20: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0C20u;
    SET_GPR_U32(ctx, 31, 0x1A0C28u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0C28u;
label_1a0c28:
    // 0x1a0c28: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1a0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1a0c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c30: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a0c34: 0x24a564c8  addiu       $a1, $a1, 0x64C8
    ctx->pc = 0x1a0c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25800));
    // 0x1a0c38: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A0C38u;
    SET_GPR_U32(ctx, 31, 0x1A0C40u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A0C38u, 0x1A0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C40u;
label_1a0c40:
    // 0x1a0c40: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0c40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c44: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0c48: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0c4c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1a0c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a0c50: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0C50u;
    SET_GPR_U32(ctx, 31, 0x1A0C58u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0C58u;
label_1a0c58:
    // 0x1a0c58: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1a0c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1a0c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c60: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1a0c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1a0c64: 0x24a564e0  addiu       $a1, $a1, 0x64E0
    ctx->pc = 0x1a0c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25824));
    // 0x1a0c68: 0xc09a364  jal         func_268D90
    ctx->pc = 0x1A0C68u;
    SET_GPR_U32(ctx, 31, 0x1A0C70u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x1A0C68u, 0x1A0C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0C70u;
label_1a0c70:
    // 0x1a0c70: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1a0c70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c74: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0c78: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0c7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a0c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0c80: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0C80u;
    SET_GPR_U32(ctx, 31, 0x1A0C88u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0C88u;
label_1a0c88:
    // 0x1a0c88: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1a0c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x1a0c8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a0c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0c90: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0c94: 0xac4300e4  sw          $v1, 0xE4($v0)
    ctx->pc = 0x1a0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 3));
    // 0x1a0c98: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x1a0c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1a0c9c: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x1A0C9Cu;
    SET_GPR_U32(ctx, 31, 0x1A0CA4u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x1A0C9Cu, 0x1A0CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CA4u;
label_1a0ca4:
    // 0x1a0ca4: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0ca8: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a0cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cb0: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0CB0u;
    SET_GPR_U32(ctx, 31, 0x1A0CB8u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0CB8u;
label_1a0cb8:
    // 0x1a0cb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0cbc: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x1a0cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x1a0cc0: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a0cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a0cc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a0cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0cc8: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1a0cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1a0ccc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0cd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0cd4: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x1A0CD4u;
    SET_GPR_U32(ctx, 31, 0x1A0CDCu);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x1A0CD4u, 0x1A0CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0CDCu;
label_1a0cdc:
    // 0x1a0cdc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1a0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0ce0: 0x244400d8  addiu       $a0, $v0, 0xD8
    ctx->pc = 0x1a0ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    // 0x1a0ce4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1a0ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a0ce8: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x1A0CE8u;
    SET_GPR_U32(ctx, 31, 0x1A0CF0u);
    ctx->pc = 0x1A05C0u;
    goto label_1a05c0;
    ctx->pc = 0x1A0CF0u;
label_1a0cf0:
    // 0x1a0cf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a0cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0cf4: 0xafa20184  sw          $v0, 0x184($sp)
    ctx->pc = 0x1a0cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 2));
    // 0x1a0cf8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1a0cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x1a0cfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a0cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0d00: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x1a0d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1a0d04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a0d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0d08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a0d08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d0c: 0xc0af064  jal         func_2BC190
    ctx->pc = 0x1A0D0Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D14u);
    ctx->pc = 0x2BC190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC190u, 0x1A0D0Cu, 0x1A0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D14u;
label_1a0d14:
    // 0x1a0d14: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1a0d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1a0d18: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x1a0d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x1a0d1c: 0xc0ac004  jal         func_2B0010
    ctx->pc = 0x1A0D1Cu;
    SET_GPR_U32(ctx, 31, 0x1A0D24u);
    ctx->pc = 0x2B0010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0010u, 0x1A0D1Cu, 0x1A0D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0D24u;
label_1a0d24:
    // 0x1a0d24: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1a0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1a0d28: 0xac620060  sw          $v0, 0x60($v1)
    ctx->pc = 0x1a0d28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
    // 0x1a0d2c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1a0d2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0d30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1a0d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a0d34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a0d34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a0d38: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a0d38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a0d3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a0d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a0d40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a0d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0d44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a0d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0d48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a0d48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0d4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a0d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0d50: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x1a0d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x1a0d54: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0D5Cu;
    // 0x1a0d5c: 0x0  nop
    ctx->pc = 0x1a0d5cu;
    // NOP
    ctx->pc = 0x1a0d60u;
}
