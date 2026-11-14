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

// Function: sub_0046A250
// Address: 0x46a250 - 0x46a390
void sub_0046A250_0x46a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046A250_0x46a250");
#endif

    switch (ctx->pc) {
        case 0x46a28cu: goto label_46a28c;
        case 0x46a2a4u: goto label_46a2a4;
        case 0x46a2b4u: goto label_46a2b4;
        case 0x46a2c8u: goto label_46a2c8;
        case 0x46a2ecu: goto label_46a2ec;
        case 0x46a30cu: goto label_46a30c;
        case 0x46a324u: goto label_46a324;
        case 0x46a344u: goto label_46a344;
        case 0x46a35cu: goto label_46a35c;
        default: break;
    }

    ctx->pc = 0x46a250u;

    // 0x46a250: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x46a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x46a254: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x46a254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x46a258: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46a258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x46a25c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x46a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x46a260: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x46a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x46a264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46a264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x46a268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46a268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46a26c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46a26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46a270: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x46a270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x46a274: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x46a274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x46a278: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x46a278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x46a27c: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x46a27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x46a280: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x46a280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x46a284: 0xc11a944  jal         func_46A510
    ctx->pc = 0x46A284u;
    SET_GPR_U32(ctx, 31, 0x46A28Cu);
    ctx->pc = 0x46A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A510u, 0x46A284u, 0x46A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A28Cu;
label_46a28c:
    // 0x46a28c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x46a28cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a290: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x46a290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a294: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x46a294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x46a298: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x46a298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x46a29c: 0xc11a4e8  jal         func_4693A0
    ctx->pc = 0x46A29Cu;
    SET_GPR_U32(ctx, 31, 0x46A2A4u);
    ctx->pc = 0x4693A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4693A0u, 0x46A29Cu, 0x46A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A2A4u;
label_46a2a4:
    // 0x46a2a4: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x46a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x46a2a8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x46a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x46a2ac: 0xc11a938  jal         func_46A4E0
    ctx->pc = 0x46A2ACu;
    SET_GPR_U32(ctx, 31, 0x46A2B4u);
    ctx->pc = 0x46A4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A4E0u, 0x46A2ACu, 0x46A2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A2B4u;
label_46a2b4:
    // 0x46a2b4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x46A2B4u;
    {
        const bool branch_taken_0x46a2b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a2b4) {
            ctx->pc = 0x46A318u;
            goto label_46a318;
        }
    }
    ctx->pc = 0x46A2BCu;
    // 0x46a2bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x46a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46a2c0: 0xc11aeb4  jal         func_46BAD0
    ctx->pc = 0x46A2C0u;
    SET_GPR_U32(ctx, 31, 0x46A2C8u);
    ctx->pc = 0x46BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BAD0u, 0x46A2C0u, 0x46A2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A2C8u;
label_46a2c8:
    // 0x46a2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46a2cc: 0x2963c  dsll32      $s2, $v0, 24
    ctx->pc = 0x46a2ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 24));
    // 0x46a2d0: 0x12963f  dsra32      $s2, $s2, 24
    ctx->pc = 0x46a2d0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 24));
    // 0x46a2d4: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x46a2d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46a2d8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46a2dc: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x46a2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x46a2e0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x46a2e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a2e4: 0xc11a904  jal         func_46A410
    ctx->pc = 0x46A2E4u;
    SET_GPR_U32(ctx, 31, 0x46A2ECu);
    ctx->pc = 0x46A410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A410u, 0x46A2E4u, 0x46A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A2ECu;
label_46a2ec:
    // 0x46a2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46a2f0: 0x28e3c  dsll32      $s1, $v0, 24
    ctx->pc = 0x46a2f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 24));
    // 0x46a2f4: 0x118e3f  dsra32      $s1, $s1, 24
    ctx->pc = 0x46a2f4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 24));
    // 0x46a2f8: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x46a2f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46a2fc: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x46a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x46a300: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x46a300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a304: 0xc11abf8  jal         func_46AFE0
    ctx->pc = 0x46A304u;
    SET_GPR_U32(ctx, 31, 0x46A30Cu);
    ctx->pc = 0x46AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AFE0u, 0x46A304u, 0x46A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A30Cu;
label_46a30c:
    // 0x46a30c: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x46a30cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46a310: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x46A310u;
    {
        const bool branch_taken_0x46a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a310) {
            ctx->pc = 0x46A328u;
            goto label_46a328;
        }
    }
    ctx->pc = 0x46A318u;
label_46a318:
    // 0x46a318: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x46a318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x46a31c: 0xc11a574  jal         func_4695D0
    ctx->pc = 0x46A31Cu;
    SET_GPR_U32(ctx, 31, 0x46A324u);
    ctx->pc = 0x4695D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4695D0u, 0x46A31Cu, 0x46A324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A324u;
label_46a324:
    // 0x46a324: 0x2450000c  addiu       $s0, $v0, 0xC
    ctx->pc = 0x46a324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_46a328:
    // 0x46a328: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x46a328u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a32c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x46A32Cu;
    {
        const bool branch_taken_0x46a32c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a32c) {
            ctx->pc = 0x46A344u;
            goto label_46a344;
        }
    }
    ctx->pc = 0x46A334u;
    // 0x46a334: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x46a334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x46a338: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a33c: 0xc11a8e4  jal         func_46A390
    ctx->pc = 0x46A33Cu;
    SET_GPR_U32(ctx, 31, 0x46A344u);
    ctx->pc = 0x46A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A390u, 0x46A33Cu, 0x46A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A344u;
label_46a344:
    // 0x46a344: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x46A344u;
    {
        const bool branch_taken_0x46a344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x46a344) {
            ctx->pc = 0x46A35Cu;
            goto label_46a35c;
        }
    }
    ctx->pc = 0x46A34Cu;
    // 0x46a34c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x46a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x46a350: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x46a350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46a354: 0xc11aef4  jal         func_46BBD0
    ctx->pc = 0x46A354u;
    SET_GPR_U32(ctx, 31, 0x46A35Cu);
    ctx->pc = 0x46BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BBD0u, 0x46A354u, 0x46A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46A35Cu;
label_46a35c:
    // 0x46a35c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x46a35cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46a360: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x46a360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46a364: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x46a364u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46a368: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x46a368u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46a36c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x46a36cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46a370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46a370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46a374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46a374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46a378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46a378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46a37c: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x46a37cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x46a380: 0x3e00008  jr          $ra
    ctx->pc = 0x46A380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46A380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46A388u;
    // 0x46a388: 0x0  nop
    ctx->pc = 0x46a388u;
    // NOP
    // 0x46a38c: 0x0  nop
    ctx->pc = 0x46a38cu;
    // NOP
    ctx->pc = 0x46a390u;
}
