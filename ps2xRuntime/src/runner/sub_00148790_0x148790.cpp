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

// Function: sub_00148790
// Address: 0x148790 - 0x148a40
void sub_00148790_0x148790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148790_0x148790");
#endif

    switch (ctx->pc) {
        case 0x148800u: goto label_148800;
        case 0x148834u: goto label_148834;
        case 0x148848u: goto label_148848;
        case 0x148858u: goto label_148858;
        case 0x14886cu: goto label_14886c;
        case 0x148894u: goto label_148894;
        case 0x1488a8u: goto label_1488a8;
        case 0x1488c8u: goto label_1488c8;
        case 0x1488dcu: goto label_1488dc;
        case 0x1488ecu: goto label_1488ec;
        case 0x148900u: goto label_148900;
        case 0x148928u: goto label_148928;
        case 0x14893cu: goto label_14893c;
        case 0x14895cu: goto label_14895c;
        case 0x148968u: goto label_148968;
        default: break;
    }

    ctx->pc = 0x148790u;

    // 0x148790: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x148790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x148794: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x148794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x148798: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x148798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14879c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14879cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1487a0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1487a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1487a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1487a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1487a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1487a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1487ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1487acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1487b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1487b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1487b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1487b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1487b8: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1487b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1487bc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1487bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1487c0: 0x24842d20  addiu       $a0, $a0, 0x2D20
    ctx->pc = 0x1487c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11552));
    // 0x1487c4: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1487c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1487c8: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1487c8u;
    { uint32_t bits = FAST_READ32(0x4E2D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1487cc: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1487ccu;
    { uint32_t bits = FAST_READ32(0x4E2D24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1487d0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1487d0u;
    { uint32_t bits = FAST_READ32(0x4E2D28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1487d4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1487d4u;
    { uint32_t bits = FAST_READ32(0x4E2D2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1487d8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x1487d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1487dc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x1487dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1487e0: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x1487e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1487e4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1487e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1487e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1487e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1487ec: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1487ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1487f0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1487f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1487f4: 0x8c70003c  lw          $s0, 0x3C($v1)
    ctx->pc = 0x1487f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1487f8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x1487F8u;
    {
        const bool branch_taken_0x1487f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1487f8) {
            ctx->pc = 0x148994u;
            goto label_148994;
        }
    }
    ctx->pc = 0x148800u;
label_148800:
    // 0x148800: 0x2e010007  sltiu       $at, $s0, 0x7
    ctx->pc = 0x148800u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x148804: 0x10200061  beqz        $at, . + 4 + (0x61 << 2)
    ctx->pc = 0x148804u;
    {
        const bool branch_taken_0x148804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148804) {
            ctx->pc = 0x14898Cu;
            goto label_14898c;
        }
    }
    ctx->pc = 0x14880Cu;
    // 0x14880c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x14880cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x148810: 0x24848280  addiu       $a0, $a0, -0x7D80
    ctx->pc = 0x148810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935168));
    // 0x148814: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x148814u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x148818: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x148818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14881c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14881cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x148820: 0x600008  jr          $v1
    ctx->pc = 0x148820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x148828u: goto label_148828;
            case 0x148888u: goto label_148888;
            case 0x1488BCu: goto label_1488bc;
            case 0x14891Cu: goto label_14891c;
            case 0x148950u: goto label_148950;
            case 0x14898Cu: goto label_14898c;
            case 0x148990u: goto label_148990;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148820u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x148828u;
label_148828:
    // 0x148828: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x14882c: 0xc041b40  jal         func_106D00
    ctx->pc = 0x14882Cu;
    SET_GPR_U32(ctx, 31, 0x148834u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x14882Cu, 0x148834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148834u;
label_148834:
    // 0x148834: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148838: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x148838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14883c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14883cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148840: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x148840u;
    SET_GPR_U32(ctx, 31, 0x148848u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x148840u, 0x148848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148848u;
label_148848:
    // 0x148848: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x148848u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14884c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x14884cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148850: 0xc041b40  jal         func_106D00
    ctx->pc = 0x148850u;
    SET_GPR_U32(ctx, 31, 0x148858u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x148850u, 0x148858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148858u;
label_148858:
    // 0x148858: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14885c: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x14885cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x148860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148864: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x148864u;
    SET_GPR_U32(ctx, 31, 0x14886Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x148864u, 0x14886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14886Cu;
label_14886c:
    // 0x14886c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x14886cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148870: 0x12e00047  beqz        $s7, . + 4 + (0x47 << 2)
    ctx->pc = 0x148870u;
    {
        const bool branch_taken_0x148870 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x148870) {
            ctx->pc = 0x148990u;
            goto label_148990;
        }
    }
    ctx->pc = 0x148878u;
    // 0x148878: 0x12c00051  beqz        $s6, . + 4 + (0x51 << 2)
    ctx->pc = 0x148878u;
    {
        const bool branch_taken_0x148878 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x148878) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x148880u;
    // 0x148880: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x148880u;
    {
        const bool branch_taken_0x148880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148880) {
            ctx->pc = 0x148990u;
            goto label_148990;
        }
    }
    ctx->pc = 0x148888u;
label_148888:
    // 0x148888: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x14888c: 0xc041b40  jal         func_106D00
    ctx->pc = 0x14888Cu;
    SET_GPR_U32(ctx, 31, 0x148894u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x14888Cu, 0x148894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148894u;
label_148894:
    // 0x148894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148898: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x148898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x14889c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14889cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488a0: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x1488A0u;
    SET_GPR_U32(ctx, 31, 0x1488A8u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x1488A0u, 0x1488A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488A8u;
label_1488a8:
    // 0x1488a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1488a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488ac: 0x16a00044  bnez        $s5, . + 4 + (0x44 << 2)
    ctx->pc = 0x1488ACu;
    {
        const bool branch_taken_0x1488ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1488ac) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x1488B4u;
    // 0x1488b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1488B4u;
    {
        const bool branch_taken_0x1488b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1488b4) {
            ctx->pc = 0x148990u;
            goto label_148990;
        }
    }
    ctx->pc = 0x1488BCu;
label_1488bc:
    // 0x1488bc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1488bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1488c0: 0xc041b40  jal         func_106D00
    ctx->pc = 0x1488C0u;
    SET_GPR_U32(ctx, 31, 0x1488C8u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x1488C0u, 0x1488C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488C8u;
label_1488c8:
    // 0x1488c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1488c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488cc: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1488ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1488d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1488d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488d4: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x1488D4u;
    SET_GPR_U32(ctx, 31, 0x1488DCu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x1488D4u, 0x1488DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488DCu;
label_1488dc:
    // 0x1488dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1488dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488e0: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1488e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x1488e4: 0xc041b40  jal         func_106D00
    ctx->pc = 0x1488E4u;
    SET_GPR_U32(ctx, 31, 0x1488ECu);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x1488E4u, 0x1488ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1488ECu;
label_1488ec:
    // 0x1488ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1488ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488f0: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x1488f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x1488f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1488f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1488f8: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x1488F8u;
    SET_GPR_U32(ctx, 31, 0x148900u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x1488F8u, 0x148900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148900u;
label_148900:
    // 0x148900: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x148900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148904: 0x12800022  beqz        $s4, . + 4 + (0x22 << 2)
    ctx->pc = 0x148904u;
    {
        const bool branch_taken_0x148904 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x148904) {
            ctx->pc = 0x148990u;
            goto label_148990;
        }
    }
    ctx->pc = 0x14890Cu;
    // 0x14890c: 0x1260002c  beqz        $s3, . + 4 + (0x2C << 2)
    ctx->pc = 0x14890Cu;
    {
        const bool branch_taken_0x14890c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14890c) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x148914u;
    // 0x148914: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x148914u;
    {
        const bool branch_taken_0x148914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148914) {
            ctx->pc = 0x148990u;
            goto label_148990;
        }
    }
    ctx->pc = 0x14891Cu;
label_14891c:
    // 0x14891c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x14891cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148920: 0xc041b40  jal         func_106D00
    ctx->pc = 0x148920u;
    SET_GPR_U32(ctx, 31, 0x148928u);
    ctx->pc = 0x106D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D00u, 0x148920u, 0x148928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148928u;
label_148928:
    // 0x148928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x148928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14892c: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x14892cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x148930: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x148930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148934: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x148934u;
    SET_GPR_U32(ctx, 31, 0x14893Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x148934u, 0x14893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14893Cu;
label_14893c:
    // 0x14893c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14893cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148940: 0x1640001f  bnez        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x148940u;
    {
        const bool branch_taken_0x148940 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x148940) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x148948u;
    // 0x148948: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x148948u;
    {
        const bool branch_taken_0x148948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148948) {
            ctx->pc = 0x148990u;
            goto label_148990;
        }
    }
    ctx->pc = 0x148950u;
label_148950:
    // 0x148950: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x148950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x148954: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x148954u;
    SET_GPR_U32(ctx, 31, 0x14895Cu);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x148954u, 0x14895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14895Cu;
label_14895c:
    // 0x14895c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14895cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148960: 0xc08d5d8  jal         func_235760
    ctx->pc = 0x148960u;
    SET_GPR_U32(ctx, 31, 0x148968u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x148960u, 0x148968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148968u;
label_148968:
    // 0x148968: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x148968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x14896c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x14896cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x148970: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x148970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148974: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x148974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148978: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x148978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14897c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x14897Cu;
    {
        const bool branch_taken_0x14897c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14897c) {
            ctx->pc = 0x148990u;
            goto label_148990;
        }
    }
    ctx->pc = 0x148984u;
    // 0x148984: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x148984u;
    {
        const bool branch_taken_0x148984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148984) {
            ctx->pc = 0x1489C0u;
            goto label_1489c0;
        }
    }
    ctx->pc = 0x14898Cu;
label_14898c:
    // 0x14898c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14898cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148990:
    // 0x148990: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x148990u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_148994:
    // 0x148994: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x148994u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x148998: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14899c: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x14899Cu;
    {
        const bool branch_taken_0x14899c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x14899c) {
            ctx->pc = 0x1489B8u;
            goto label_1489b8;
        }
    }
    ctx->pc = 0x1489A4u;
    // 0x1489a4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1489a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1489a8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1489a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1489ac: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x1489acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1489b0: 0x1020ff93  beqz        $at, . + 4 + (-0x6D << 2)
    ctx->pc = 0x1489B0u;
    {
        const bool branch_taken_0x1489b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489b0) {
            ctx->pc = 0x148800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_148800;
        }
    }
    ctx->pc = 0x1489B8u;
label_1489b8:
    // 0x1489b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1489B8u;
    {
        const bool branch_taken_0x1489b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489b8) {
            ctx->pc = 0x148A10u;
            goto label_148a10;
        }
    }
    ctx->pc = 0x1489C0u;
label_1489c0:
    // 0x1489c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1489c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1489c4: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x1489c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x1489c8: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1489c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1489cc: 0xa0600048  sb          $zero, 0x48($v1)
    ctx->pc = 0x1489ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x1489d0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1489d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1489d4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x1489d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1489d8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1489d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1489dc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1489dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1489e0: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1489e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
    // 0x1489e4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1489e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1489e8: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x1489e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1489ec: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1489ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1489f0: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x1489f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1489f4: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1489f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1489f8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1489F8u;
    {
        const bool branch_taken_0x1489f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1489f8) {
            ctx->pc = 0x148A10u;
            goto label_148a10;
        }
    }
    ctx->pc = 0x148A00u;
    // 0x148a00: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x148a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x148a04: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x148a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x148a08: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x148a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x148a0c: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x148a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_148a10:
    // 0x148a10: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x148a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x148a14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x148a14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x148a18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x148a18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x148a1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x148a1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148a20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x148a20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x148a24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x148a24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148a28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x148a28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x148a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148a34: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x148a34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x148a38: 0x3e00008  jr          $ra
    ctx->pc = 0x148A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148A40u;
}
