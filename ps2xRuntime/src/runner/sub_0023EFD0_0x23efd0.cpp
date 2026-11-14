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

// Function: sub_0023EFD0
// Address: 0x23efd0 - 0x23f1e0
void sub_0023EFD0_0x23efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023EFD0_0x23efd0");
#endif

    switch (ctx->pc) {
        case 0x23f040u: goto label_23f040;
        case 0x23f050u: goto label_23f050;
        case 0x23f068u: goto label_23f068;
        case 0x23f080u: goto label_23f080;
        case 0x23f090u: goto label_23f090;
        case 0x23f0b0u: goto label_23f0b0;
        case 0x23f0c0u: goto label_23f0c0;
        case 0x23f0d8u: goto label_23f0d8;
        case 0x23f0f0u: goto label_23f0f0;
        case 0x23f10cu: goto label_23f10c;
        case 0x23f11cu: goto label_23f11c;
        case 0x23f12cu: goto label_23f12c;
        case 0x23f144u: goto label_23f144;
        case 0x23f154u: goto label_23f154;
        case 0x23f164u: goto label_23f164;
        case 0x23f174u: goto label_23f174;
        case 0x23f190u: goto label_23f190;
        case 0x23f1b0u: goto label_23f1b0;
        default: break;
    }

    ctx->pc = 0x23efd0u;

    // 0x23efd0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x23efd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x23efd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23efd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23efdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23efdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23efe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23efe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23efe4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23efe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23efe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23efe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23efec: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x23efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x23eff0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x23eff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x23eff4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x23eff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x23eff8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x23eff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x23effc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x23effcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x23f000: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x23f000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x23f004: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x23f004u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x23f008: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x23f008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23f00c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x23f00cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23f010: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f014: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f018: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23F018u;
    {
        const bool branch_taken_0x23f018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f018) {
            ctx->pc = 0x23F070u;
            goto label_23f070;
        }
    }
    ctx->pc = 0x23F020u;
    // 0x23f020: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x23F020u;
    {
        const bool branch_taken_0x23f020 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f020) {
            ctx->pc = 0x23F0FCu;
            goto label_23f0fc;
        }
    }
    ctx->pc = 0x23F028u;
    // 0x23f028: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x23F028u;
    {
        const bool branch_taken_0x23f028 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x23f028) {
            ctx->pc = 0x23F070u;
            goto label_23f070;
        }
    }
    ctx->pc = 0x23F030u;
    // 0x23f030: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x23f030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x23f034: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23f038: 0xc08f45c  jal         func_23D170
    ctx->pc = 0x23F038u;
    SET_GPR_U32(ctx, 31, 0x23F040u);
    ctx->pc = 0x23D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D170u, 0x23F038u, 0x23F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F040u;
label_23f040:
    // 0x23f040: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x23f040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f048: 0xc08f44c  jal         func_23D130
    ctx->pc = 0x23F048u;
    SET_GPR_U32(ctx, 31, 0x23F050u);
    ctx->pc = 0x23D130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D130u, 0x23F048u, 0x23F050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F050u;
label_23f050:
    // 0x23f050: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x23f050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f054: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x23f054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x23f058: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23f058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f05c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x23f05cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f060: 0xc0426d8  jal         func_109B60
    ctx->pc = 0x23F060u;
    SET_GPR_U32(ctx, 31, 0x23F068u);
    ctx->pc = 0x109B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109B60u, 0x23F060u, 0x23F068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F068u;
label_23f068:
    // 0x23f068: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23F068u;
    {
        const bool branch_taken_0x23f068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f068) {
            ctx->pc = 0x23F0FCu;
            goto label_23f0fc;
        }
    }
    ctx->pc = 0x23F070u;
label_23f070:
    // 0x23f070: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f074: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23f074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23f078: 0xc08fc80  jal         func_23F200
    ctx->pc = 0x23F078u;
    SET_GPR_U32(ctx, 31, 0x23F080u);
    ctx->pc = 0x23F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F200u, 0x23F078u, 0x23F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F080u;
label_23f080:
    // 0x23f080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f084: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f088: 0xc08f444  jal         func_23D110
    ctx->pc = 0x23F088u;
    SET_GPR_U32(ctx, 31, 0x23F090u);
    ctx->pc = 0x23D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D110u, 0x23F088u, 0x23F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F090u;
label_23f090:
    // 0x23f090: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23f090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23f094: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f098: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f09c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23F09Cu;
    {
        const bool branch_taken_0x23f09c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f09c) {
            ctx->pc = 0x23F0CCu;
            goto label_23f0cc;
        }
    }
    ctx->pc = 0x23F0A4u;
    // 0x23f0a4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f0a8: 0xc08f03c  jal         func_23C0F0
    ctx->pc = 0x23F0A8u;
    SET_GPR_U32(ctx, 31, 0x23F0B0u);
    ctx->pc = 0x23C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0F0u, 0x23F0A8u, 0x23F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0B0u;
label_23f0b0:
    // 0x23f0b0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23f0b4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f0b8: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x23F0B8u;
    SET_GPR_U32(ctx, 31, 0x23F0C0u);
    ctx->pc = 0x23C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0B0u, 0x23F0B8u, 0x23F0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0C0u;
label_23f0c0:
    // 0x23f0c0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23f0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23f0c4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23F0C4u;
    {
        const bool branch_taken_0x23f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f0c4) {
            ctx->pc = 0x23F148u;
            goto label_23f148;
        }
    }
    ctx->pc = 0x23F0CCu;
label_23f0cc:
    // 0x23f0cc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f0d0: 0xc08f034  jal         func_23C0D0
    ctx->pc = 0x23F0D0u;
    SET_GPR_U32(ctx, 31, 0x23F0D8u);
    ctx->pc = 0x23C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0D0u, 0x23F0D0u, 0x23F0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0D8u;
label_23f0d8:
    // 0x23f0d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f0dc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x23F0DCu;
    {
        const bool branch_taken_0x23f0dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f0dc) {
            ctx->pc = 0x23F148u;
            goto label_23f148;
        }
    }
    ctx->pc = 0x23F0E4u;
    // 0x23f0e4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f0e8: 0xc08f034  jal         func_23C0D0
    ctx->pc = 0x23F0E8u;
    SET_GPR_U32(ctx, 31, 0x23F0F0u);
    ctx->pc = 0x23C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0D0u, 0x23F0E8u, 0x23F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F0F0u;
label_23f0f0:
    // 0x23f0f0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23f0f4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23F0F4u;
    {
        const bool branch_taken_0x23f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f0f4) {
            ctx->pc = 0x23F148u;
            goto label_23f148;
        }
    }
    ctx->pc = 0x23F0FCu;
label_23f0fc:
    // 0x23f0fc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f100: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23f100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23f104: 0xc08fc80  jal         func_23F200
    ctx->pc = 0x23F104u;
    SET_GPR_U32(ctx, 31, 0x23F10Cu);
    ctx->pc = 0x23F200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F200u, 0x23F104u, 0x23F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F10Cu;
label_23f10c:
    // 0x23f10c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23f110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f114: 0xc08f43c  jal         func_23D0F0
    ctx->pc = 0x23F114u;
    SET_GPR_U32(ctx, 31, 0x23F11Cu);
    ctx->pc = 0x23D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D0F0u, 0x23F114u, 0x23F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F11Cu;
label_23f11c:
    // 0x23f11c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23f11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x23f120: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f124: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x23F124u;
    SET_GPR_U32(ctx, 31, 0x23F12Cu);
    ctx->pc = 0x23C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0B0u, 0x23F124u, 0x23F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F12Cu;
label_23f12c:
    // 0x23f12c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f130: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F130u;
    {
        const bool branch_taken_0x23f130 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f130) {
            ctx->pc = 0x23F148u;
            goto label_23f148;
        }
    }
    ctx->pc = 0x23F138u;
    // 0x23f138: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23f138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f13c: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x23F13Cu;
    SET_GPR_U32(ctx, 31, 0x23F144u);
    ctx->pc = 0x23C0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C0B0u, 0x23F13Cu, 0x23F144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F144u;
label_23f144:
    // 0x23f144: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x23f144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_23f148:
    // 0x23f148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f14c: 0xc08fc78  jal         func_23F1E0
    ctx->pc = 0x23F14Cu;
    SET_GPR_U32(ctx, 31, 0x23F154u);
    ctx->pc = 0x23F1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1E0u, 0x23F14Cu, 0x23F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F154u;
label_23f154:
    // 0x23f154: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x23f154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x23f158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f15c: 0xc08f444  jal         func_23D110
    ctx->pc = 0x23F15Cu;
    SET_GPR_U32(ctx, 31, 0x23F164u);
    ctx->pc = 0x23D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D110u, 0x23F15Cu, 0x23F164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F164u;
label_23f164:
    // 0x23f164: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23f164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23f168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f16c: 0xc08f43c  jal         func_23D0F0
    ctx->pc = 0x23F16Cu;
    SET_GPR_U32(ctx, 31, 0x23F174u);
    ctx->pc = 0x23D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D0F0u, 0x23F16Cu, 0x23F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F174u;
label_23f174:
    // 0x23f174: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23f174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x23f178: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f17c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23f180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23f180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f184: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x23f188: 0xc042858  jal         func_10A160
    ctx->pc = 0x23F188u;
    SET_GPR_U32(ctx, 31, 0x23F190u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x23F188u, 0x23F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F190u;
label_23f190:
    // 0x23f190: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x23f190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23f194: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23f198: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23f19c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x23f19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x23f1a0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x23f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f1a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23f1a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f1a8: 0xc08f3dc  jal         func_23CF70
    ctx->pc = 0x23F1A8u;
    SET_GPR_U32(ctx, 31, 0x23F1B0u);
    ctx->pc = 0x23CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF70u, 0x23F1A8u, 0x23F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F1B0u;
label_23f1b0:
    // 0x23f1b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23f1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f1b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23f1b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f1b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23f1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f1bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23f1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f1c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f1c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23f1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f1c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x23f1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23f1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F1D4u;
    // 0x23f1d4: 0x0  nop
    ctx->pc = 0x23f1d4u;
    // NOP
    // 0x23f1d8: 0x0  nop
    ctx->pc = 0x23f1d8u;
    // NOP
    // 0x23f1dc: 0x0  nop
    ctx->pc = 0x23f1dcu;
    // NOP
    ctx->pc = 0x23f1e0u;
}
