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

// Function: sub_0026A0D0
// Address: 0x26a0d0 - 0x26a340
void sub_0026A0D0_0x26a0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A0D0_0x26a0d0");
#endif

    switch (ctx->pc) {
        case 0x26a104u: goto label_26a104;
        case 0x26a11cu: goto label_26a11c;
        case 0x26a128u: goto label_26a128;
        case 0x26a138u: goto label_26a138;
        case 0x26a148u: goto label_26a148;
        case 0x26a154u: goto label_26a154;
        case 0x26a168u: goto label_26a168;
        case 0x26a178u: goto label_26a178;
        case 0x26a188u: goto label_26a188;
        case 0x26a198u: goto label_26a198;
        case 0x26a1c8u: goto label_26a1c8;
        case 0x26a1d8u: goto label_26a1d8;
        case 0x26a200u: goto label_26a200;
        case 0x26a210u: goto label_26a210;
        case 0x26a238u: goto label_26a238;
        case 0x26a248u: goto label_26a248;
        case 0x26a25cu: goto label_26a25c;
        case 0x26a26cu: goto label_26a26c;
        case 0x26a284u: goto label_26a284;
        case 0x26a29cu: goto label_26a29c;
        case 0x26a2acu: goto label_26a2ac;
        case 0x26a2c4u: goto label_26a2c4;
        case 0x26a2dcu: goto label_26a2dc;
        case 0x26a2ecu: goto label_26a2ec;
        case 0x26a304u: goto label_26a304;
        default: break;
    }

    ctx->pc = 0x26a0d0u;

    // 0x26a0d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26a0d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x26a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x26a0d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26a0dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a0e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a0e4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x26a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x26a0e8: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x26a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x26a0ec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x26a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a0f0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x26A0F0u;
    {
        const bool branch_taken_0x26a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a0f0) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A0F8u;
    // 0x26a0f8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x26a0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a0fc: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x26A0FCu;
    SET_GPR_U32(ctx, 31, 0x26A104u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x26A0FCu, 0x26A104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A104u;
label_26a104:
    // 0x26a104: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x26A104u;
    {
        const bool branch_taken_0x26a104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a104) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A10Cu;
    // 0x26a10c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a110: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x26a110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26a114: 0xc040304  jal         func_100C10
    ctx->pc = 0x26A114u;
    SET_GPR_U32(ctx, 31, 0x26A11Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x26A114u, 0x26A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A11Cu;
label_26a11c:
    // 0x26a11c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a120: 0xc041b48  jal         func_106D20
    ctx->pc = 0x26A120u;
    SET_GPR_U32(ctx, 31, 0x26A128u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x26A120u, 0x26A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A128u;
label_26a128:
    // 0x26a128: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26a128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a12c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x26a12cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a130: 0xc1190f4  jal         func_4643D0
    ctx->pc = 0x26A130u;
    SET_GPR_U32(ctx, 31, 0x26A138u);
    ctx->pc = 0x4643D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4643D0u, 0x26A130u, 0x26A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A138u;
label_26a138:
    // 0x26a138: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26a138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a13c: 0x2785a0d8  addiu       $a1, $gp, -0x5F28
    ctx->pc = 0x26a13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294942936));
    // 0x26a140: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x26A140u;
    SET_GPR_U32(ctx, 31, 0x26A148u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x26A140u, 0x26A148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A148u;
label_26a148:
    // 0x26a148: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26a148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a14c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x26A14Cu;
    SET_GPR_U32(ctx, 31, 0x26A154u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x26A14Cu, 0x26A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A154u;
label_26a154:
    // 0x26a154: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26a154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a158: 0x24640048  addiu       $a0, $v1, 0x48
    ctx->pc = 0x26a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x26a15c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a160: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x26A160u;
    SET_GPR_U32(ctx, 31, 0x26A168u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x26A160u, 0x26A168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A168u;
label_26a168:
    // 0x26a168: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x26a168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a16c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26a16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a170: 0xc09a744  jal         func_269D10
    ctx->pc = 0x26A170u;
    SET_GPR_U32(ctx, 31, 0x26A178u);
    ctx->pc = 0x269D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269D10u, 0x26A170u, 0x26A178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A178u;
label_26a178:
    // 0x26a178: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x26a178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26a17c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a180: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26A180u;
    SET_GPR_U32(ctx, 31, 0x26A188u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26A180u, 0x26A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A188u;
label_26a188:
    // 0x26a188: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x26a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26a18c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26a190: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x26A190u;
    SET_GPR_U32(ctx, 31, 0x26A198u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x26A190u, 0x26A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A198u;
label_26a198:
    // 0x26a198: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A198u;
    {
        const bool branch_taken_0x26a198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a198) {
            ctx->pc = 0x26A1A8u;
            goto label_26a1a8;
        }
    }
    ctx->pc = 0x26A1A0u;
label_26a1a0:
    // 0x26a1a0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1a4: 0xa0400048  sb          $zero, 0x48($v0)
    ctx->pc = 0x26a1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 72), (uint8_t)GPR_U32(ctx, 0));
label_26a1a8:
    // 0x26a1a8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1ac: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x26a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a1b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26A1B0u;
    {
        const bool branch_taken_0x26a1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a1b0) {
            ctx->pc = 0x26A1E0u;
            goto label_26a1e0;
        }
    }
    ctx->pc = 0x26A1B8u;
    // 0x26a1b8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1bc: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a1c0: 0xc09a338  jal         func_268CE0
    ctx->pc = 0x26A1C0u;
    SET_GPR_U32(ctx, 31, 0x26A1C8u);
    ctx->pc = 0x268CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CE0u, 0x26A1C0u, 0x26A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1C8u;
label_26a1c8:
    // 0x26a1c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1cc: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x26a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x26a1d0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26A1D0u;
    SET_GPR_U32(ctx, 31, 0x26A1D8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26A1D0u, 0x26A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1D8u;
label_26a1d8:
    // 0x26a1d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1dc: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x26a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_26a1e0:
    // 0x26a1e0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1e4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x26a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26a1e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26A1E8u;
    {
        const bool branch_taken_0x26a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a1e8) {
            ctx->pc = 0x26A218u;
            goto label_26a218;
        }
    }
    ctx->pc = 0x26A1F0u;
    // 0x26a1f0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a1f4: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x26a1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26a1f8: 0xc06e598  jal         func_1B9660
    ctx->pc = 0x26A1F8u;
    SET_GPR_U32(ctx, 31, 0x26A200u);
    ctx->pc = 0x1B9660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9660u, 0x26A1F8u, 0x26A200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A200u;
label_26a200:
    // 0x26a200: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a204: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x26a204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26a208: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26A208u;
    SET_GPR_U32(ctx, 31, 0x26A210u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26A208u, 0x26A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A210u;
label_26a210:
    // 0x26a210: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a214: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x26a214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_26a218:
    // 0x26a218: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a21c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x26a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a220: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26A220u;
    {
        const bool branch_taken_0x26a220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a220) {
            ctx->pc = 0x26A250u;
            goto label_26a250;
        }
    }
    ctx->pc = 0x26A228u;
    // 0x26a228: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a22c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a230: 0xc09a32c  jal         func_268CB0
    ctx->pc = 0x26A230u;
    SET_GPR_U32(ctx, 31, 0x26A238u);
    ctx->pc = 0x268CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CB0u, 0x26A230u, 0x26A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A238u;
label_26a238:
    // 0x26a238: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a23c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x26a23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x26a240: 0xc119c5c  jal         func_467170
    ctx->pc = 0x26A240u;
    SET_GPR_U32(ctx, 31, 0x26A248u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x26A240u, 0x26A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A248u;
label_26a248:
    // 0x26a248: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a24c: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x26a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_26a250:
    // 0x26a250: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26a254: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26A254u;
    SET_GPR_U32(ctx, 31, 0x26A25Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26A254u, 0x26A25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A25Cu;
label_26a25c:
    // 0x26a25c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26a260: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a264: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26A264u;
    SET_GPR_U32(ctx, 31, 0x26A26Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26A264u, 0x26A26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A26Cu;
label_26a26c:
    // 0x26a26c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26a26cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a270: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A270u;
    {
        const bool branch_taken_0x26a270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a270) {
            ctx->pc = 0x26A288u;
            goto label_26a288;
        }
    }
    ctx->pc = 0x26A278u;
    // 0x26a278: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a27c: 0xc0514a8  jal         func_1452A0
    ctx->pc = 0x26A27Cu;
    SET_GPR_U32(ctx, 31, 0x26A284u);
    ctx->pc = 0x1452A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1452A0u, 0x26A27Cu, 0x26A284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A284u;
label_26a284:
    // 0x26a284: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26a284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a288:
    // 0x26a288: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a28c: 0xac52003c  sw          $s2, 0x3C($v0)
    ctx->pc = 0x26a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 18));
    // 0x26a290: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x26a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26a294: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26A294u;
    SET_GPR_U32(ctx, 31, 0x26A29Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26A294u, 0x26A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A29Cu;
label_26a29c:
    // 0x26a29c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x26a29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26a2a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2a4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26A2A4u;
    SET_GPR_U32(ctx, 31, 0x26A2ACu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26A2A4u, 0x26A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2ACu;
label_26a2ac:
    // 0x26a2ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2b0: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A2B0u;
    {
        const bool branch_taken_0x26a2b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2b0) {
            ctx->pc = 0x26A2C8u;
            goto label_26a2c8;
        }
    }
    ctx->pc = 0x26A2B8u;
    // 0x26a2b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2bc: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x26A2BCu;
    SET_GPR_U32(ctx, 31, 0x26A2C4u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x26A2BCu, 0x26A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2C4u;
label_26a2c4:
    // 0x26a2c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a2c8:
    // 0x26a2c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x26a2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a2cc: 0xac510040  sw          $s1, 0x40($v0)
    ctx->pc = 0x26a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 17));
    // 0x26a2d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x26a2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26a2d4: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x26A2D4u;
    SET_GPR_U32(ctx, 31, 0x26A2DCu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x26A2D4u, 0x26A2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2DCu;
label_26a2dc:
    // 0x26a2dc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x26a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26a2e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26a2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2e4: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26A2E4u;
    SET_GPR_U32(ctx, 31, 0x26A2ECu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26A2E4u, 0x26A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A2ECu;
label_26a2ec:
    // 0x26a2ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2f0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A2F0u;
    {
        const bool branch_taken_0x26a2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2f0) {
            ctx->pc = 0x26A308u;
            goto label_26a308;
        }
    }
    ctx->pc = 0x26A2F8u;
    // 0x26a2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2fc: 0xc0480a4  jal         func_120290
    ctx->pc = 0x26A2FCu;
    SET_GPR_U32(ctx, 31, 0x26A304u);
    ctx->pc = 0x120290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120290u, 0x26A2FCu, 0x26A304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A304u;
label_26a304:
    // 0x26a304: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26a304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26a308:
    // 0x26a308: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a30c: 0xac700044  sw          $s0, 0x44($v1)
    ctx->pc = 0x26a30cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 16));
    // 0x26a310: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26a310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a314: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x26a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26a318: 0xa0640038  sb          $a0, 0x38($v1)
    ctx->pc = 0x26a318u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x26a31c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x26a31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a320: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26a320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a324: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a324u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a328: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a32c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26a32cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26a330: 0x3e00008  jr          $ra
    ctx->pc = 0x26A330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A338u;
    // 0x26a338: 0x0  nop
    ctx->pc = 0x26a338u;
    // NOP
    // 0x26a33c: 0x0  nop
    ctx->pc = 0x26a33cu;
    // NOP
    ctx->pc = 0x26a340u;
}
