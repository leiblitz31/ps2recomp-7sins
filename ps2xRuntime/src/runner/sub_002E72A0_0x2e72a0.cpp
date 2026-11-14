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

// Function: sub_002E72A0
// Address: 0x2e72a0 - 0x2e7420
void sub_002E72A0_0x2e72a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E72A0_0x2e72a0");
#endif

    switch (ctx->pc) {
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        case 0x2e72e4u: goto label_2e72e4;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e72ecu: goto label_2e72ec;
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        case 0x2e73e0u: goto label_2e73e0;
        case 0x2e73e4u: goto label_2e73e4;
        case 0x2e73e8u: goto label_2e73e8;
        case 0x2e73ecu: goto label_2e73ec;
        case 0x2e73f0u: goto label_2e73f0;
        case 0x2e73f4u: goto label_2e73f4;
        case 0x2e73f8u: goto label_2e73f8;
        case 0x2e73fcu: goto label_2e73fc;
        case 0x2e7400u: goto label_2e7400;
        case 0x2e7404u: goto label_2e7404;
        case 0x2e7408u: goto label_2e7408;
        case 0x2e740cu: goto label_2e740c;
        case 0x2e7410u: goto label_2e7410;
        case 0x2e7414u: goto label_2e7414;
        case 0x2e7418u: goto label_2e7418;
        case 0x2e741cu: goto label_2e741c;
        default: break;
    }

    ctx->pc = 0x2e72a0u;

label_2e72a0:
    // 0x2e72a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e72a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2e72a4:
    // 0x2e72a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e72a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e72a8:
    // 0x2e72a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e72a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e72ac:
    // 0x2e72ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e72acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e72b0:
    // 0x2e72b0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2e72b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2e72b4:
    // 0x2e72b4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e72b8:
    // 0x2e72b8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e72b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e72bc:
    // 0x2e72bc: 0xc044598  jal         func_111660
label_2e72c0:
    if (ctx->pc == 0x2E72C0u) {
        ctx->pc = 0x2E72C4u;
        goto label_2e72c4;
    }
    ctx->pc = 0x2E72BCu;
    SET_GPR_U32(ctx, 31, 0x2E72C4u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2E72BCu, 0x2E72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72C4u;
label_2e72c4:
    // 0x2e72c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e72c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e72c8:
    // 0x2e72c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e72c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e72cc:
    // 0x2e72cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e72d0:
    if (ctx->pc == 0x2E72D0u) {
        ctx->pc = 0x2E72D4u;
        goto label_2e72d4;
    }
    ctx->pc = 0x2E72CCu;
    {
        const bool branch_taken_0x2e72cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e72cc) {
            ctx->pc = 0x2E7300u;
            goto label_2e7300;
        }
    }
    ctx->pc = 0x2E72D4u;
label_2e72d4:
    // 0x2e72d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e72d8:
    // 0x2e72d8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e72d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e72dc:
    // 0x2e72dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e72dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e72e0:
    // 0x2e72e0: 0xc04a9c0  jal         func_12A700
label_2e72e4:
    if (ctx->pc == 0x2E72E4u) {
        ctx->pc = 0x2E72E8u;
        goto label_2e72e8;
    }
    ctx->pc = 0x2E72E0u;
    SET_GPR_U32(ctx, 31, 0x2E72E8u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2E72E0u, 0x2E72E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72E8u;
label_2e72e8:
    // 0x2e72e8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2e72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e72ec:
    // 0x2e72ec: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x2e72ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2e72f0:
    // 0x2e72f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e72f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e72f4:
    // 0x2e72f4: 0xc0444e0  jal         func_111380
label_2e72f8:
    if (ctx->pc == 0x2E72F8u) {
        ctx->pc = 0x2E72FCu;
        goto label_2e72fc;
    }
    ctx->pc = 0x2E72F4u;
    SET_GPR_U32(ctx, 31, 0x2E72FCu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x2E72F4u, 0x2E72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72FCu;
label_2e72fc:
    // 0x2e72fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e72fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e7300:
    // 0x2e7300: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2e7300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2e7304:
    // 0x2e7304: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2e7308:
    if (ctx->pc == 0x2E7308u) {
        ctx->pc = 0x2E730Cu;
        goto label_2e730c;
    }
    ctx->pc = 0x2E7304u;
    {
        const bool branch_taken_0x2e7304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7304) {
            ctx->pc = 0x2E72D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e72d4;
        }
    }
    ctx->pc = 0x2E730Cu;
label_2e730c:
    // 0x2e730c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7310:
    // 0x2e7310: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x2e7310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2e7314:
    // 0x2e7314: 0xc053cd4  jal         func_14F350
label_2e7318:
    if (ctx->pc == 0x2E7318u) {
        ctx->pc = 0x2E731Cu;
        goto label_2e731c;
    }
    ctx->pc = 0x2E7314u;
    SET_GPR_U32(ctx, 31, 0x2E731Cu);
    ctx->pc = 0x14F350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F350u, 0x2E7314u, 0x2E731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E731Cu;
label_2e731c:
    // 0x2e731c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e731cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7320:
    // 0x2e7320: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e7324:
    // 0x2e7324: 0xc0b9a4c  jal         func_2E6930
label_2e7328:
    if (ctx->pc == 0x2E7328u) {
        ctx->pc = 0x2E732Cu;
        goto label_2e732c;
    }
    ctx->pc = 0x2E7324u;
    SET_GPR_U32(ctx, 31, 0x2E732Cu);
    ctx->pc = 0x2E6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6930u, 0x2E7324u, 0x2E732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E732Cu;
label_2e732c:
    // 0x2e732c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e732cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e7330:
    // 0x2e7330: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e7330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7334:
    // 0x2e7334: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2e7338:
    if (ctx->pc == 0x2E7338u) {
        ctx->pc = 0x2E733Cu;
        goto label_2e733c;
    }
    ctx->pc = 0x2E7334u;
    {
        const bool branch_taken_0x2e7334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7334) {
            ctx->pc = 0x2E73E0u;
            goto label_2e73e0;
        }
    }
    ctx->pc = 0x2E733Cu;
label_2e733c:
    // 0x2e733c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7340:
    // 0x2e7340: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e7344:
    // 0x2e7344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7348:
    // 0x2e7348: 0xc0b9a3c  jal         func_2E68F0
label_2e734c:
    if (ctx->pc == 0x2E734Cu) {
        ctx->pc = 0x2E7350u;
        goto label_2e7350;
    }
    ctx->pc = 0x2E7348u;
    SET_GPR_U32(ctx, 31, 0x2E7350u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E7348u, 0x2E7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7350u;
label_2e7350:
    // 0x2e7350: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e7350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e7354:
    // 0x2e7354: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2e7354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e7358:
    // 0x2e7358: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2e7358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2e735c:
    // 0x2e735c: 0x320f809  jalr        $t9
label_2e7360:
    if (ctx->pc == 0x2E7360u) {
        ctx->pc = 0x2E7364u;
        goto label_2e7364;
    }
    ctx->pc = 0x2E735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E7364u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E735Cu, 0x2E7364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E7364u;
label_2e7364:
    // 0x2e7364: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e7364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7368:
    // 0x2e7368: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e736c:
    // 0x2e736c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e736cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7370:
    // 0x2e7370: 0xc0b9a3c  jal         func_2E68F0
label_2e7374:
    if (ctx->pc == 0x2E7374u) {
        ctx->pc = 0x2E7378u;
        goto label_2e7378;
    }
    ctx->pc = 0x2E7370u;
    SET_GPR_U32(ctx, 31, 0x2E7378u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E7370u, 0x2E7378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7378u;
label_2e7378:
    // 0x2e7378: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e7378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e737c:
    // 0x2e737c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_2e7380:
    if (ctx->pc == 0x2E7380u) {
        ctx->pc = 0x2E7384u;
        goto label_2e7384;
    }
    ctx->pc = 0x2E737Cu;
    {
        const bool branch_taken_0x2e737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e737c) {
            ctx->pc = 0x2E73DCu;
            goto label_2e73dc;
        }
    }
    ctx->pc = 0x2E7384u;
label_2e7384:
    // 0x2e7384: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e7384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e7388:
    // 0x2e7388: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e738c:
    // 0x2e738c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e738cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e7390:
    // 0x2e7390: 0xc0b9a3c  jal         func_2E68F0
label_2e7394:
    if (ctx->pc == 0x2E7394u) {
        ctx->pc = 0x2E7398u;
        goto label_2e7398;
    }
    ctx->pc = 0x2E7390u;
    SET_GPR_U32(ctx, 31, 0x2E7398u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E7390u, 0x2E7398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7398u;
label_2e7398:
    // 0x2e7398: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e7398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e739c:
    // 0x2e739c: 0xc0b9d4c  jal         func_2E7530
label_2e73a0:
    if (ctx->pc == 0x2E73A0u) {
        ctx->pc = 0x2E73A4u;
        goto label_2e73a4;
    }
    ctx->pc = 0x2E739Cu;
    SET_GPR_U32(ctx, 31, 0x2E73A4u);
    ctx->pc = 0x2E7530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7530u, 0x2E739Cu, 0x2E73A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73A4u;
label_2e73a4:
    // 0x2e73a4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e73a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e73a8:
    // 0x2e73a8: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e73a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e73ac:
    // 0x2e73ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e73acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e73b0:
    // 0x2e73b0: 0xc0b9a3c  jal         func_2E68F0
label_2e73b4:
    if (ctx->pc == 0x2E73B4u) {
        ctx->pc = 0x2E73B8u;
        goto label_2e73b8;
    }
    ctx->pc = 0x2E73B0u;
    SET_GPR_U32(ctx, 31, 0x2E73B8u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E73B0u, 0x2E73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73B8u;
label_2e73b8:
    // 0x2e73b8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e73b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e73bc:
    // 0x2e73bc: 0xc119c5c  jal         func_467170
label_2e73c0:
    if (ctx->pc == 0x2E73C0u) {
        ctx->pc = 0x2E73C4u;
        goto label_2e73c4;
    }
    ctx->pc = 0x2E73BCu;
    SET_GPR_U32(ctx, 31, 0x2E73C4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2E73BCu, 0x2E73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73C4u;
label_2e73c4:
    // 0x2e73c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e73c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e73c8:
    // 0x2e73c8: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e73c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e73cc:
    // 0x2e73cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e73ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e73d0:
    // 0x2e73d0: 0xc0b9a3c  jal         func_2E68F0
label_2e73d4:
    if (ctx->pc == 0x2E73D4u) {
        ctx->pc = 0x2E73D8u;
        goto label_2e73d8;
    }
    ctx->pc = 0x2E73D0u;
    SET_GPR_U32(ctx, 31, 0x2E73D8u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E73D0u, 0x2E73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73D8u;
label_2e73d8:
    // 0x2e73d8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e73d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2e73dc:
    // 0x2e73dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e73dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e73e0:
    // 0x2e73e0: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2e73e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_2e73e4:
    // 0x2e73e4: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_2e73e8:
    if (ctx->pc == 0x2E73E8u) {
        ctx->pc = 0x2E73ECu;
        goto label_2e73ec;
    }
    ctx->pc = 0x2E73E4u;
    {
        const bool branch_taken_0x2e73e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e73e4) {
            ctx->pc = 0x2E733Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e733c;
        }
    }
    ctx->pc = 0x2E73ECu;
label_2e73ec:
    // 0x2e73ec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2e73ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2e73f0:
    // 0x2e73f0: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e73f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_2e73f4:
    // 0x2e73f4: 0xc0b9d08  jal         func_2E7420
label_2e73f8:
    if (ctx->pc == 0x2E73F8u) {
        ctx->pc = 0x2E73FCu;
        goto label_2e73fc;
    }
    ctx->pc = 0x2E73F4u;
    SET_GPR_U32(ctx, 31, 0x2E73FCu);
    ctx->pc = 0x2E7420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7420u, 0x2E73F4u, 0x2E73FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73FCu;
label_2e73fc:
    // 0x2e73fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e73fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e7400:
    // 0x2e7400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e7404:
    // 0x2e7404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e7408:
    // 0x2e7408: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e7408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e740c:
    // 0x2e740c: 0x3e00008  jr          $ra
label_2e7410:
    if (ctx->pc == 0x2E7410u) {
        ctx->pc = 0x2E7414u;
        goto label_2e7414;
    }
    ctx->pc = 0x2E740Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E740Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7414u;
label_2e7414:
    // 0x2e7414: 0x0  nop
    ctx->pc = 0x2e7414u;
    // NOP
label_2e7418:
    // 0x2e7418: 0x0  nop
    ctx->pc = 0x2e7418u;
    // NOP
label_2e741c:
    // 0x2e741c: 0x0  nop
    ctx->pc = 0x2e741cu;
    // NOP
    ctx->pc = 0x2e7420u;
}
