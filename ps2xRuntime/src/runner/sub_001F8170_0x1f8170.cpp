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

// Function: sub_001F8170
// Address: 0x1f8170 - 0x1f8330
void sub_001F8170_0x1f8170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8170_0x1f8170");
#endif

    switch (ctx->pc) {
        case 0x1f819cu: goto label_1f819c;
        case 0x1f81b4u: goto label_1f81b4;
        case 0x1f81c0u: goto label_1f81c0;
        case 0x1f81e0u: goto label_1f81e0;
        case 0x1f81ecu: goto label_1f81ec;
        case 0x1f8204u: goto label_1f8204;
        case 0x1f8210u: goto label_1f8210;
        case 0x1f8228u: goto label_1f8228;
        case 0x1f8264u: goto label_1f8264;
        case 0x1f8280u: goto label_1f8280;
        case 0x1f829cu: goto label_1f829c;
        case 0x1f82b4u: goto label_1f82b4;
        case 0x1f82ccu: goto label_1f82cc;
        default: break;
    }

    ctx->pc = 0x1f8170u;

    // 0x1f8170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f8170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f8174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f8174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f8178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f8178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f817c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1f817cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1f8180: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1f8180u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f8184: 0xa3a60040  sb          $a2, 0x40($sp)
    ctx->pc = 0x1f8184u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 6));
    // 0x1f8188: 0xa3a70050  sb          $a3, 0x50($sp)
    ctx->pc = 0x1f8188u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f818c: 0xa3a80060  sb          $t0, 0x60($sp)
    ctx->pc = 0x1f818cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 8));
    // 0x1f8190: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f8190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8194: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8194u;
    SET_GPR_U32(ctx, 31, 0x1F819Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8194u, 0x1F819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F819Cu;
label_1f819c:
    // 0x1f819c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f81a0: 0x8c650144  lw          $a1, 0x144($v1)
    ctx->pc = 0x1f81a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
    // 0x1f81a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f81a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f81a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81ac: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F81ACu;
    SET_GPR_U32(ctx, 31, 0x1F81B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F81ACu, 0x1F81B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81B4u;
label_1f81b4:
    // 0x1f81b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f81b8: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F81B8u;
    SET_GPR_U32(ctx, 31, 0x1F81C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F81B8u, 0x1F81C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81C0u;
label_1f81c0:
    // 0x1f81c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f81c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f81c4: 0x8c650154  lw          $a1, 0x154($v1)
    ctx->pc = 0x1f81c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1f81c8: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1f81c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f81cc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1f81ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f81d0: 0x38660001  xori        $a2, $v1, 0x1
    ctx->pc = 0x1f81d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1f81d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f81d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81d8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F81D8u;
    SET_GPR_U32(ctx, 31, 0x1F81E0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F81D8u, 0x1F81E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81E0u;
label_1f81e0:
    // 0x1f81e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f81e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f81e4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F81E4u;
    SET_GPR_U32(ctx, 31, 0x1F81ECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F81E4u, 0x1F81ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F81ECu;
label_1f81ec:
    // 0x1f81ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f81ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f81f0: 0x8c650164  lw          $a1, 0x164($v1)
    ctx->pc = 0x1f81f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 356)));
    // 0x1f81f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f81f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f81f8: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f81f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f81fc: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F81FCu;
    SET_GPR_U32(ctx, 31, 0x1F8204u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F81FCu, 0x1F8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8204u;
label_1f8204:
    // 0x1f8204: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f8204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8208: 0xc06479c  jal         func_191E70
    ctx->pc = 0x1F8208u;
    SET_GPR_U32(ctx, 31, 0x1F8210u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1F8208u, 0x1F8210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8210u;
label_1f8210:
    // 0x1f8210: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8214: 0x8c650198  lw          $a1, 0x198($v1)
    ctx->pc = 0x1f8214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
    // 0x1f8218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f8218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f821c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f821cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8220: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1F8220u;
    SET_GPR_U32(ctx, 31, 0x1F8228u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1F8220u, 0x1F8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8228u;
label_1f8228:
    // 0x1f8228: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x1f8228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f822c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F822Cu;
    {
        const bool branch_taken_0x1f822c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f822c) {
            ctx->pc = 0x1F8244u;
            goto label_1f8244;
        }
    }
    ctx->pc = 0x1F8234u;
    // 0x1f8234: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f8234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8238: 0x8c500164  lw          $s0, 0x164($v0)
    ctx->pc = 0x1f8238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x1f823c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F823Cu;
    {
        const bool branch_taken_0x1f823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f823c) {
            ctx->pc = 0x1F824Cu;
            goto label_1f824c;
        }
    }
    ctx->pc = 0x1F8244u;
label_1f8244:
    // 0x1f8244: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f8244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8248: 0x8c500154  lw          $s0, 0x154($v0)
    ctx->pc = 0x1f8248u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
label_1f824c:
    // 0x1f824c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f824cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8254: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f8254u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f825c: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F825Cu;
    SET_GPR_U32(ctx, 31, 0x1F8264u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F825Cu, 0x1F8264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8264u;
label_1f8264:
    // 0x1f8264: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f8264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8268: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f8268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f826c: 0x8c450174  lw          $a1, 0x174($v0)
    ctx->pc = 0x1f826cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1f8270: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f8270u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8274: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1f8274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8278: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F8278u;
    SET_GPR_U32(ctx, 31, 0x1F8280u);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F8278u, 0x1F8280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8280u;
label_1f8280:
    // 0x1f8280: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f8280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8284: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f8284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8288: 0x8c450188  lw          $a1, 0x188($v0)
    ctx->pc = 0x1f8288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 392)));
    // 0x1f828c: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f828cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8290: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1f8290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f8294: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F8294u;
    SET_GPR_U32(ctx, 31, 0x1F829Cu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F8294u, 0x1F829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F829Cu;
label_1f829c:
    // 0x1f829c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1f82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82a4: 0x24640220  addiu       $a0, $v1, 0x220
    ctx->pc = 0x1f82a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x1f82a8: 0x8c45023c  lw          $a1, 0x23C($v0)
    ctx->pc = 0x1f82a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x1f82ac: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1F82ACu;
    SET_GPR_U32(ctx, 31, 0x1F82B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1F82ACu, 0x1F82B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F82B4u;
label_1f82b4:
    // 0x1f82b4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1f82b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f82b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f82bc: 0x93a60030  lbu         $a2, 0x30($sp)
    ctx->pc = 0x1f82bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f82c0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1f82c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f82c4: 0xc07e100  jal         func_1F8400
    ctx->pc = 0x1F82C4u;
    SET_GPR_U32(ctx, 31, 0x1F82CCu);
    ctx->pc = 0x1F8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8400u, 0x1F82C4u, 0x1F82CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F82CCu;
label_1f82cc:
    // 0x1f82cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f82ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f82d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f82d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82d4: 0xa06400e0  sb          $a0, 0xE0($v1)
    ctx->pc = 0x1f82d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 224), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f82d8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f82d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82dc: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f82dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f82e0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82e4: 0xc46000dc  lwc1        $f0, 0xDC($v1)
    ctx->pc = 0x1f82e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f82e8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f82e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f82ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f82ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82f0: 0xe46000e4  swc1        $f0, 0xE4($v1)
    ctx->pc = 0x1f82f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 228), bits); }
    // 0x1f82f4: 0x93a40040  lbu         $a0, 0x40($sp)
    ctx->pc = 0x1f82f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f82f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f82f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f82fc: 0xa06400e8  sb          $a0, 0xE8($v1)
    ctx->pc = 0x1f82fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 232), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8300: 0x93a40050  lbu         $a0, 0x50($sp)
    ctx->pc = 0x1f8300u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8304: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8308: 0xa06400e9  sb          $a0, 0xE9($v1)
    ctx->pc = 0x1f8308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 233), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f830c: 0x93a40060  lbu         $a0, 0x60($sp)
    ctx->pc = 0x1f830cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8310: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1f8310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8314: 0xa06400ea  sb          $a0, 0xEA($v1)
    ctx->pc = 0x1f8314u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 234), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f8318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f8318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f831c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f831cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8320: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1f8320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8324: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F832Cu;
    // 0x1f832c: 0x0  nop
    ctx->pc = 0x1f832cu;
    // NOP
    ctx->pc = 0x1f8330u;
}
