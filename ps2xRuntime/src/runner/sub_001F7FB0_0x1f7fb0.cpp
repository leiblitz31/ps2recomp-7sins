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

// Function: sub_001F7FB0
// Address: 0x1f7fb0 - 0x1f8170
void sub_001F7FB0_0x1f7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7FB0_0x1f7fb0");
#endif

    switch (ctx->pc) {
        case 0x1f7fdcu: goto label_1f7fdc;
        case 0x1f7ff4u: goto label_1f7ff4;
        case 0x1f8000u: goto label_1f8000;
        case 0x1f8020u: goto label_1f8020;
        case 0x1f802cu: goto label_1f802c;
        case 0x1f8044u: goto label_1f8044;
        case 0x1f8050u: goto label_1f8050;
        case 0x1f8068u: goto label_1f8068;
        case 0x1f80a4u: goto label_1f80a4;
        case 0x1f80c0u: goto label_1f80c0;
        case 0x1f80dcu: goto label_1f80dc;
        case 0x1f80f4u: goto label_1f80f4;
        case 0x1f810cu: goto label_1f810c;
        default: break;
    }

    ctx->pc = 0x1f7fb0u;

    // 0x1f7fb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f7fb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7fb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f7fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f7fbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f7fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f7fc0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1f7fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f7fc4: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x1f7fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f7fc8: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x1f7fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f7fcc: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x1f7fccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f7fd0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7fd4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7FD4u;
    SET_GPR_U32(ctx, 31, 0x1F7FDCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7FD4u, 0x1F7FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FDCu;
label_1f7fdc:
    // 0x1f7fdc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f7fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7fe0: 0x8c650140  lw          $a1, 0x140($v1)
    ctx->pc = 0x1f7fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x1f7fe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f7fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fe8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f7fe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fec: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F7FECu;
    SET_GPR_U32(ctx, 31, 0x1F7FF4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F7FECu, 0x1F7FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FF4u;
label_1f7ff4:
    // 0x1f7ff4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f7ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7ff8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F7FF8u;
    SET_GPR_U32(ctx, 31, 0x1F8000u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F7FF8u, 0x1F8000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8000u;
label_1f8000:
    // 0x1f8000: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8004: 0x8c650150  lw          $a1, 0x150($v1)
    ctx->pc = 0x1f8004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1f8008: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1f8008u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f800c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f800cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f8010: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1f8010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f8014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8018: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8018u;
    SET_GPR_U32(ctx, 31, 0x1F8020u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8018u, 0x1F8020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8020u;
label_1f8020:
    // 0x1f8020: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f8020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8024: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8024u;
    SET_GPR_U32(ctx, 31, 0x1F802Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8024u, 0x1F802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F802Cu;
label_1f802c:
    // 0x1f802c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f802cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8030: 0x8c650160  lw          $a1, 0x160($v1)
    ctx->pc = 0x1f8030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x1f8034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8038: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f8038u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f803c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F803Cu;
    SET_GPR_U32(ctx, 31, 0x1F8044u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F803Cu, 0x1F8044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8044u;
label_1f8044:
    // 0x1f8044: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f8044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8048: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8048u;
    SET_GPR_U32(ctx, 31, 0x1F8050u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8048u, 0x1F8050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8050u;
label_1f8050:
    // 0x1f8050: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8054: 0x8c650194  lw          $a1, 0x194($v1)
    ctx->pc = 0x1f8054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x1f8058: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f805c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f805cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8060: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8060u;
    SET_GPR_U32(ctx, 31, 0x1F8068u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8060u, 0x1F8068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8068u;
label_1f8068:
    // 0x1f8068: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x1f8068u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f806c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F806Cu;
    {
        const bool branch_taken_0x1f806c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f806c) {
            ctx->pc = 0x1F8084u;
            goto label_1f8084;
        }
    }
    ctx->pc = 0x1F8074u;
    // 0x1f8074: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8078: 0x8c500160  lw          $s0, 0x160($v0)
    ctx->pc = 0x1f8078u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x1f807c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F807Cu;
    {
        const bool branch_taken_0x1f807c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f807c) {
            ctx->pc = 0x1F808Cu;
            goto label_1f808c;
        }
    }
    ctx->pc = 0x1F8084u;
label_1f8084:
    // 0x1f8084: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f8084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8088: 0x8c500150  lw          $s0, 0x150($v0)
    ctx->pc = 0x1f8088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_1f808c:
    // 0x1f808c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f808cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8094: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f8094u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8098: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f809c: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F809Cu;
    SET_GPR_U32(ctx, 31, 0x1F80A4u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F809Cu, 0x1F80A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80A4u;
label_1f80a4:
    // 0x1f80a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f80a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f80a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f80ac: 0x8c450170  lw          $a1, 0x170($v0)
    ctx->pc = 0x1f80acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x1f80b0: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f80b0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f80b4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f80b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f80b8: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F80B8u;
    SET_GPR_U32(ctx, 31, 0x1F80C0u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F80B8u, 0x1F80C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80C0u;
label_1f80c0:
    // 0x1f80c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f80c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f80c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f80c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f80c8: 0x8c450184  lw          $a1, 0x184($v0)
    ctx->pc = 0x1f80c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1f80cc: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f80ccu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f80d0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f80d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f80d4: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F80D4u;
    SET_GPR_U32(ctx, 31, 0x1F80DCu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F80D4u, 0x1F80DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80DCu;
label_1f80dc:
    // 0x1f80dc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f80dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f80e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f80e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f80e4: 0x24640214  addiu       $a0, $v1, 0x214
    ctx->pc = 0x1f80e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 532));
    // 0x1f80e8: 0x8c450238  lw          $a1, 0x238($v0)
    ctx->pc = 0x1f80e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 568)));
    // 0x1f80ec: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F80ECu;
    SET_GPR_U32(ctx, 31, 0x1F80F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F80ECu, 0x1F80F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F80F4u;
label_1f80f4:
    // 0x1f80f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f80f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f80f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f80f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f80fc: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f80fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8100: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f8100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f8104: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F8104u;
    SET_GPR_U32(ctx, 31, 0x1F810Cu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F8104u, 0x1F810Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F810Cu;
label_1f810c:
    // 0x1f810c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8110: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8114: 0xa06400e0  sb          $a0, 0xE0($v1)
    ctx->pc = 0x1f8114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8118: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f811c: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8120: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8124: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x1f8124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f8128: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8128u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f812c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8130: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x1f8130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x1f8134: 0x93a40040  lbu         $a0, 0x40($sp)
    ctx->pc = 0x1f8134u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8138: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f813c: 0xa06400e8  sb          $a0, 0xE8($v1)
    ctx->pc = 0x1f813cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 232), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8140: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x1f8140u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8144: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8148: 0xa06400e9  sb          $a0, 0xE9($v1)
    ctx->pc = 0x1f8148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 233), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f814c: 0x93a40060  lbu         $a0, 0x60($sp)
    ctx->pc = 0x1f814cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8150: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8154: 0xa06400ea  sb          $a0, 0xEA($v1)
    ctx->pc = 0x1f8154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 234), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8158: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f815c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f815cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8160: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f8160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8164: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F816Cu;
    // 0x1f816c: 0x0  nop
    ctx->pc = 0x1f816cu;
    // NOP
    ctx->pc = 0x1f8170u;
}
