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

// Function: sub_002E7950
// Address: 0x2e7950 - 0x2e7ad0
void sub_002E7950_0x2e7950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7950_0x2e7950");
#endif

    switch (ctx->pc) {
        case 0x2e7984u: goto label_2e7984;
        case 0x2e7994u: goto label_2e7994;
        case 0x2e79a8u: goto label_2e79a8;
        case 0x2e79c4u: goto label_2e79c4;
        case 0x2e79ecu: goto label_2e79ec;
        case 0x2e79fcu: goto label_2e79fc;
        case 0x2e7a0cu: goto label_2e7a0c;
        case 0x2e7a20u: goto label_2e7a20;
        case 0x2e7a34u: goto label_2e7a34;
        case 0x2e7a44u: goto label_2e7a44;
        case 0x2e7a60u: goto label_2e7a60;
        case 0x2e7a70u: goto label_2e7a70;
        default: break;
    }

    ctx->pc = 0x2e7950u;

    // 0x2e7950: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e7950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2e7954: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e7954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e7958: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e7958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e795c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e795cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e7960: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e7960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e7964: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e7964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7968: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e796c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2e796cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2e7970: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2e7970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2e7974: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e7974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7978: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e797c: 0xc0b9a4c  jal         func_2E6930
    ctx->pc = 0x2E797Cu;
    SET_GPR_U32(ctx, 31, 0x2E7984u);
    ctx->pc = 0x2E6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6930u, 0x2E797Cu, 0x2E7984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7984u;
label_2e7984:
    // 0x2e7984: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e7984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7988: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2e7988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e798c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x2E798Cu;
    {
        const bool branch_taken_0x2e798c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e798c) {
            ctx->pc = 0x2E7A90u;
            goto label_2e7a90;
        }
    }
    ctx->pc = 0x2E7994u;
label_2e7994:
    // 0x2e7994: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e7994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7998: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e799c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e799cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79a0: 0xc0b9a3c  jal         func_2E68F0
    ctx->pc = 0x2E79A0u;
    SET_GPR_U32(ctx, 31, 0x2E79A8u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E79A0u, 0x2E79A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79A8u;
label_2e79a8:
    // 0x2e79a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e79ac: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x2e79acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e79b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e79b4: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e79b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e79b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e79b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79bc: 0xc0b9a3c  jal         func_2E68F0
    ctx->pc = 0x2E79BCu;
    SET_GPR_U32(ctx, 31, 0x2E79C4u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E79BCu, 0x2E79C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79C4u;
label_2e79c4:
    // 0x2e79c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e79c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e79cc: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x2e79ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e79d0: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x2E79D0u;
    {
        const bool branch_taken_0x2e79d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e79d0) {
            ctx->pc = 0x2E7A8Cu;
            goto label_2e7a8c;
        }
    }
    ctx->pc = 0x2E79D8u;
    // 0x2e79d8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e79dc: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e79e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e79e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e79e4: 0xc0b9a3c  jal         func_2E68F0
    ctx->pc = 0x2E79E4u;
    SET_GPR_U32(ctx, 31, 0x2E79ECu);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E79E4u, 0x2E79ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79ECu;
label_2e79ec:
    // 0x2e79ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e79ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e79f0: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e79f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e79f4: 0xc044598  jal         func_111660
    ctx->pc = 0x2E79F4u;
    SET_GPR_U32(ctx, 31, 0x2E79FCu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x2E79F4u, 0x2E79FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E79FCu;
label_2e79fc:
    // 0x2e79fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e79fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e7a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a04: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2E7A04u;
    {
        const bool branch_taken_0x2e7a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a04) {
            ctx->pc = 0x2E7A80u;
            goto label_2e7a80;
        }
    }
    ctx->pc = 0x2E7A0Cu;
label_2e7a0c:
    // 0x2e7a0c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e7a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7a10: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e7a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a18: 0xc0b9a3c  jal         func_2E68F0
    ctx->pc = 0x2E7A18u;
    SET_GPR_U32(ctx, 31, 0x2E7A20u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E7A18u, 0x2E7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A20u;
label_2e7a20:
    // 0x2e7a20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e7a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7a24: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x2e7a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2e7a28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e7a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a2c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x2E7A2Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A34u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x2E7A2Cu, 0x2E7A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A34u;
label_2e7a34:
    // 0x2e7a34: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x2e7a34u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7a38: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e7a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7a3c: 0xc09138c  jal         func_244E30
    ctx->pc = 0x2E7A3Cu;
    SET_GPR_U32(ctx, 31, 0x2E7A44u);
    ctx->pc = 0x244E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E30u, 0x2E7A3Cu, 0x2E7A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A44u;
label_2e7a44:
    // 0x2e7a44: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E7A44u;
    {
        const bool branch_taken_0x2e7a44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e7a44) {
            ctx->pc = 0x2E7A7Cu;
            goto label_2e7a7c;
        }
    }
    ctx->pc = 0x2E7A4Cu;
    // 0x2e7a4c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2e7a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7a50: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x2e7a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x2e7a54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e7a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7a58: 0xc0b9a3c  jal         func_2E68F0
    ctx->pc = 0x2E7A58u;
    SET_GPR_U32(ctx, 31, 0x2E7A60u);
    ctx->pc = 0x2E68F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E68F0u, 0x2E7A58u, 0x2E7A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A60u;
label_2e7a60:
    // 0x2e7a60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e7a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7a64: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x2e7a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7a68: 0xc0b94ac  jal         func_2E52B0
    ctx->pc = 0x2E7A68u;
    SET_GPR_U32(ctx, 31, 0x2E7A70u);
    ctx->pc = 0x2E52B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E52B0u, 0x2E7A68u, 0x2E7A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7A70u;
label_2e7a70:
    // 0x2e7a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e7a74: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E7A74u;
    {
        const bool branch_taken_0x2e7a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a74) {
            ctx->pc = 0x2E7AA0u;
            goto label_2e7aa0;
        }
    }
    ctx->pc = 0x2E7A7Cu;
label_2e7a7c:
    // 0x2e7a7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2e7a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2e7a80:
    // 0x2e7a80: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x2e7a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e7a84: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E7A84u;
    {
        const bool branch_taken_0x2e7a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a84) {
            ctx->pc = 0x2E7A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7a0c;
        }
    }
    ctx->pc = 0x2E7A8Cu;
label_2e7a8c:
    // 0x2e7a8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e7a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2e7a90:
    // 0x2e7a90: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2e7a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e7a94: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x2E7A94u;
    {
        const bool branch_taken_0x2e7a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7a94) {
            ctx->pc = 0x2E7994u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7994;
        }
    }
    ctx->pc = 0x2E7A9Cu;
    // 0x2e7a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7aa0:
    // 0x2e7aa0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e7aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7aa4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e7aa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7aa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e7aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7aac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e7aacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e7ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e7ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e7ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e7ab8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2e7ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e7abc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7AC4u;
    // 0x2e7ac4: 0x0  nop
    ctx->pc = 0x2e7ac4u;
    // NOP
    // 0x2e7ac8: 0x0  nop
    ctx->pc = 0x2e7ac8u;
    // NOP
    // 0x2e7acc: 0x0  nop
    ctx->pc = 0x2e7accu;
    // NOP
    ctx->pc = 0x2e7ad0u;
}
