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

// Function: sub_00114150
// Address: 0x114150 - 0x114260
void sub_00114150_0x114150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114150_0x114150");
#endif

    switch (ctx->pc) {
        case 0x11417cu: goto label_11417c;
        case 0x11418cu: goto label_11418c;
        case 0x11419cu: goto label_11419c;
        case 0x1141b4u: goto label_1141b4;
        case 0x1141c0u: goto label_1141c0;
        case 0x1141d4u: goto label_1141d4;
        case 0x1141f4u: goto label_1141f4;
        case 0x11420cu: goto label_11420c;
        case 0x114224u: goto label_114224;
        case 0x114234u: goto label_114234;
        case 0x114240u: goto label_114240;
        default: break;
    }

    ctx->pc = 0x114150u;

    // 0x114150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x114150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x114154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x114154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x114158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x114158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11415c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11415cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x114160: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x114160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x114164: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x114164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x114168: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x114168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x11416c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x11416cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114170: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x114170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114174: 0xc0450e8  jal         func_1143A0
    ctx->pc = 0x114174u;
    SET_GPR_U32(ctx, 31, 0x11417Cu);
    ctx->pc = 0x1143A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1143A0u, 0x114174u, 0x11417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11417Cu;
label_11417c:
    // 0x11417c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x11417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x114180: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x114180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114184: 0xc044df4  jal         func_1137D0
    ctx->pc = 0x114184u;
    SET_GPR_U32(ctx, 31, 0x11418Cu);
    ctx->pc = 0x1137D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137D0u, 0x114184u, 0x11418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11418Cu;
label_11418c:
    // 0x11418c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x11418cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x114190: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x114190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x114194: 0xc0426a0  jal         func_109A80
    ctx->pc = 0x114194u;
    SET_GPR_U32(ctx, 31, 0x11419Cu);
    ctx->pc = 0x109A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A80u, 0x114194u, 0x11419Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11419Cu;
label_11419c:
    // 0x11419c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11419Cu;
    {
        const bool branch_taken_0x11419c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11419c) {
            ctx->pc = 0x1141DCu;
            goto label_1141dc;
        }
    }
    ctx->pc = 0x1141A4u;
    // 0x1141a4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1141a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1141a8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1141a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1141ac: 0xc0450cc  jal         func_114330
    ctx->pc = 0x1141ACu;
    SET_GPR_U32(ctx, 31, 0x1141B4u);
    ctx->pc = 0x114330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114330u, 0x1141ACu, 0x1141B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141B4u;
label_1141b4:
    // 0x1141b4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1141b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1141b8: 0xc044f94  jal         func_113E50
    ctx->pc = 0x1141B8u;
    SET_GPR_U32(ctx, 31, 0x1141C0u);
    ctx->pc = 0x113E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E50u, 0x1141B8u, 0x1141C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141C0u;
label_1141c0:
    // 0x1141c0: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1141c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1141c4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1141c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1141c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1141c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141cc: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1141CCu;
    SET_GPR_U32(ctx, 31, 0x1141D4u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1141CCu, 0x1141D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141D4u;
label_1141d4:
    // 0x1141d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1141D4u;
    {
        const bool branch_taken_0x1141d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1141d4) {
            ctx->pc = 0x114234u;
            goto label_114234;
        }
    }
    ctx->pc = 0x1141DCu;
label_1141dc:
    // 0x1141dc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x1141dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x1141e0: 0x27b00038  addiu       $s0, $sp, 0x38
    ctx->pc = 0x1141e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1141e4: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1141e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x1141e8: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x1141e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1141ec: 0xc0450c0  jal         func_114300
    ctx->pc = 0x1141ECu;
    SET_GPR_U32(ctx, 31, 0x1141F4u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x1141ECu, 0x1141F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1141F4u;
label_1141f4:
    // 0x1141f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1141f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1141f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1141f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1141fc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1141fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x114200: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x114200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114204: 0xc0450b0  jal         func_1142C0
    ctx->pc = 0x114204u;
    SET_GPR_U32(ctx, 31, 0x11420Cu);
    ctx->pc = 0x1142C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1142C0u, 0x114204u, 0x11420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11420Cu;
label_11420c:
    // 0x11420c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11420cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x114210: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x114210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114214: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114218: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x114218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11421c: 0xc045098  jal         func_114260
    ctx->pc = 0x11421Cu;
    SET_GPR_U32(ctx, 31, 0x114224u);
    ctx->pc = 0x114260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114260u, 0x11421Cu, 0x114224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114224u;
label_114224:
    // 0x114224: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x114224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x114228: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x114228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11422c: 0xc044f9c  jal         func_113E70
    ctx->pc = 0x11422Cu;
    SET_GPR_U32(ctx, 31, 0x114234u);
    ctx->pc = 0x113E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E70u, 0x11422Cu, 0x114234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114234u;
label_114234:
    // 0x114234: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x114234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x114238: 0xc044f94  jal         func_113E50
    ctx->pc = 0x114238u;
    SET_GPR_U32(ctx, 31, 0x114240u);
    ctx->pc = 0x113E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113E50u, 0x114238u, 0x114240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114240u;
label_114240:
    // 0x114240: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x114240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x114244: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x114244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x114248: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x114248u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11424c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11424cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114250: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x114250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x114254: 0x3e00008  jr          $ra
    ctx->pc = 0x114254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11425Cu;
    // 0x11425c: 0x0  nop
    ctx->pc = 0x11425cu;
    // NOP
    ctx->pc = 0x114260u;
}
