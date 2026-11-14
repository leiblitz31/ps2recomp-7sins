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

// Function: sub_0022EFD0
// Address: 0x22efd0 - 0x22f220
void sub_0022EFD0_0x22efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EFD0_0x22efd0");
#endif

    switch (ctx->pc) {
        case 0x22f00cu: goto label_22f00c;
        case 0x22f06cu: goto label_22f06c;
        case 0x22f07cu: goto label_22f07c;
        case 0x22f094u: goto label_22f094;
        case 0x22f0b0u: goto label_22f0b0;
        case 0x22f0bcu: goto label_22f0bc;
        case 0x22f0ccu: goto label_22f0cc;
        case 0x22f0e4u: goto label_22f0e4;
        case 0x22f100u: goto label_22f100;
        case 0x22f114u: goto label_22f114;
        case 0x22f124u: goto label_22f124;
        case 0x22f13cu: goto label_22f13c;
        case 0x22f148u: goto label_22f148;
        case 0x22f158u: goto label_22f158;
        case 0x22f170u: goto label_22f170;
        case 0x22f1fcu: goto label_22f1fc;
        default: break;
    }

    ctx->pc = 0x22efd0u;

    // 0x22efd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22efd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22efd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22efdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22efe0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x22efe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x22efe4: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x22efe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x22efe8: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x22efe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
    // 0x22efec: 0xafa70090  sw          $a3, 0x90($sp)
    ctx->pc = 0x22efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 7));
    // 0x22eff0: 0xafa800a0  sw          $t0, 0xA0($sp)
    ctx->pc = 0x22eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 8));
    // 0x22eff4: 0xe7ac00b0  swc1        $f12, 0xB0($sp)
    ctx->pc = 0x22eff4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x22eff8: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x22eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x22effc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x22effcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f000: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x22f000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f004: 0xc08c200  jal         func_230800
    ctx->pc = 0x22F004u;
    SET_GPR_U32(ctx, 31, 0x22F00Cu);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x22F004u, 0x22F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F00Cu;
label_22f00c:
    // 0x22f00c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x22F00Cu;
    {
        const bool branch_taken_0x22f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f00c) {
            ctx->pc = 0x22F1FCu;
            goto label_22f1fc;
        }
    }
    ctx->pc = 0x22F014u;
    // 0x22f014: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x22f014u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x22f018: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x22f018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22f01c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x22f01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x22f020: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22f024: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x22f024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x22f028: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x22f028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x22f02c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x22f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x22f030: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x22f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22f034: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22f038: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x22F038u;
    {
        const bool branch_taken_0x22f038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f038) {
            ctx->pc = 0x22F178u;
            goto label_22f178;
        }
    }
    ctx->pc = 0x22F040u;
    // 0x22f040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22f044: 0x10830030  beq         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x22F044u;
    {
        const bool branch_taken_0x22f044 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f044) {
            ctx->pc = 0x22F108u;
            goto label_22f108;
        }
    }
    ctx->pc = 0x22F04Cu;
    // 0x22f04c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x22f04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22f050: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F050u;
    {
        const bool branch_taken_0x22f050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x22f050) {
            ctx->pc = 0x22F060u;
            goto label_22f060;
        }
    }
    ctx->pc = 0x22F058u;
    // 0x22f058: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x22F058u;
    {
        const bool branch_taken_0x22f058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f058) {
            ctx->pc = 0x22F188u;
            goto label_22f188;
        }
    }
    ctx->pc = 0x22F060u;
label_22f060:
    // 0x22f060: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22f064: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22F064u;
    SET_GPR_U32(ctx, 31, 0x22F06Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22F064u, 0x22F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F06Cu;
label_22f06c:
    // 0x22f06c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22f070: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f074: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22F074u;
    SET_GPR_U32(ctx, 31, 0x22F07Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22F074u, 0x22F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F07Cu;
label_22f07c:
    // 0x22f07c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22f07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f080: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F080u;
    {
        const bool branch_taken_0x22f080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f080) {
            ctx->pc = 0x22F098u;
            goto label_22f098;
        }
    }
    ctx->pc = 0x22F088u;
    // 0x22f088: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f08c: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x22F08Cu, 0x22F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22f094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f098:
    // 0x22f098: 0xafb10038  sw          $s1, 0x38($sp)
    ctx->pc = 0x22f098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 17));
    // 0x22f09c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22f0a0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22f0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f0a4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x22f0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22f0a8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22F0A8u;
    SET_GPR_U32(ctx, 31, 0x22F0B0u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22F0A8u, 0x22F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0B0u;
label_22f0b0:
    // 0x22f0b0: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22f0b4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22F0B4u;
    SET_GPR_U32(ctx, 31, 0x22F0BCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22F0B4u, 0x22F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0BCu;
label_22f0bc:
    // 0x22f0bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22f0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22f0c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0c4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22F0C4u;
    SET_GPR_U32(ctx, 31, 0x22F0CCu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22F0C4u, 0x22F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0CCu;
label_22f0cc:
    // 0x22f0cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f0ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0d0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F0D0u;
    {
        const bool branch_taken_0x22f0d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f0d0) {
            ctx->pc = 0x22F0E8u;
            goto label_22f0e8;
        }
    }
    ctx->pc = 0x22F0D8u;
    // 0x22f0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f0dc: 0xc05db34  jal         func_176CD0
    ctx->pc = 0x22F0DCu;
    SET_GPR_U32(ctx, 31, 0x22F0E4u);
    ctx->pc = 0x176CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176CD0u, 0x22F0DCu, 0x22F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F0E4u;
label_22f0e4:
    // 0x22f0e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22f0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22f0e8:
    // 0x22f0e8: 0xafb00058  sw          $s0, 0x58($sp)
    ctx->pc = 0x22f0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 16));
    // 0x22f0ec: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22f0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22f0f0: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22f0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22f0f4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x22f0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x22f0f8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22F0F8u;
    SET_GPR_U32(ctx, 31, 0x22F100u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22F0F8u, 0x22F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F100u;
label_22f100:
    // 0x22f100: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x22F100u;
    {
        const bool branch_taken_0x22f100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f100) {
            ctx->pc = 0x22F190u;
            goto label_22f190;
        }
    }
    ctx->pc = 0x22F108u;
label_22f108:
    // 0x22f108: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22f108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f10c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22F10Cu;
    SET_GPR_U32(ctx, 31, 0x22F114u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22F10Cu, 0x22F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F114u;
label_22f114:
    // 0x22f114: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f118: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f11c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22F11Cu;
    SET_GPR_U32(ctx, 31, 0x22F124u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22F11Cu, 0x22F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F124u;
label_22f124:
    // 0x22f124: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x22f124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x22f128: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x22f128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22f12c: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x22f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22f130: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22f130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f134: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22F134u;
    SET_GPR_U32(ctx, 31, 0x22F13Cu);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22F134u, 0x22F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F13Cu;
label_22f13c:
    // 0x22f13c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22f13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f140: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x22F140u;
    SET_GPR_U32(ctx, 31, 0x22F148u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x22F140u, 0x22F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F148u;
label_22f148:
    // 0x22f148: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x22f148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f14c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22f14cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f150: 0xc0400e0  jal         func_100380
    ctx->pc = 0x22F150u;
    SET_GPR_U32(ctx, 31, 0x22F158u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x22F150u, 0x22F158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F158u;
label_22f158:
    // 0x22f158: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x22f158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x22f15c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x22f15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x22f160: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x22f160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22f164: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x22f164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22f168: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x22F168u;
    SET_GPR_U32(ctx, 31, 0x22F170u);
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x22F168u, 0x22F170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F170u;
label_22f170:
    // 0x22f170: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22F170u;
    {
        const bool branch_taken_0x22f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f170) {
            ctx->pc = 0x22F190u;
            goto label_22f190;
        }
    }
    ctx->pc = 0x22F178u;
label_22f178:
    // 0x22f178: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x22f178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x22f17c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x22f17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x22f180: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x22F180u;
    {
        const bool branch_taken_0x22f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f180) {
            ctx->pc = 0x22F190u;
            goto label_22f190;
        }
    }
    ctx->pc = 0x22F188u;
label_22f188:
    // 0x22f188: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x22F188u;
    {
        const bool branch_taken_0x22f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f188) {
            ctx->pc = 0x22F1FCu;
            goto label_22f1fc;
        }
    }
    ctx->pc = 0x22F190u;
label_22f190:
    // 0x22f190: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x22f190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22f194: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x22f194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x22f198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f19c: 0x0  nop
    ctx->pc = 0x22f19cu;
    // NOP
    // 0x22f1a0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x22f1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22f1a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f1a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f1a8: 0x0  nop
    ctx->pc = 0x22f1a8u;
    // NOP
    // 0x22f1ac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x22f1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x22f1b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f1b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f1b4: 0x0  nop
    ctx->pc = 0x22f1b4u;
    // NOP
    // 0x22f1b8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x22f1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x22f1bc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x22f1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22f1c0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22f1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x22f1c4: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x22f1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22f1c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f1c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f1cc: 0x0  nop
    ctx->pc = 0x22f1ccu;
    // NOP
    // 0x22f1d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f1d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x22F1D4u;
    {
        const bool branch_taken_0x22f1d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f1d4) {
            ctx->pc = 0x22F1E8u;
            goto label_22f1e8;
        }
    }
    ctx->pc = 0x22F1DCu;
    // 0x22f1dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f1e0: 0x0  nop
    ctx->pc = 0x22f1e0u;
    // NOP
    // 0x22f1e4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x22f1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_22f1e8:
    // 0x22f1e8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x22f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22f1ec: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x22f1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22f1f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x22f1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22f1f4: 0xc08bad8  jal         func_22EB60
    ctx->pc = 0x22F1F4u;
    SET_GPR_U32(ctx, 31, 0x22F1FCu);
    ctx->pc = 0x22EB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EB60u, 0x22F1F4u, 0x22F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F1FCu;
label_22f1fc:
    // 0x22f1fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22f200: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22f200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22f204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22f204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f208: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x22f208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x22f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F214u;
    // 0x22f214: 0x0  nop
    ctx->pc = 0x22f214u;
    // NOP
    // 0x22f218: 0x0  nop
    ctx->pc = 0x22f218u;
    // NOP
    // 0x22f21c: 0x0  nop
    ctx->pc = 0x22f21cu;
    // NOP
    ctx->pc = 0x22f220u;
}
