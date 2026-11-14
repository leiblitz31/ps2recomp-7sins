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

// Function: sub_0020B1E0
// Address: 0x20b1e0 - 0x20b490
void sub_0020B1E0_0x20b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B1E0_0x20b1e0");
#endif

    switch (ctx->pc) {
        case 0x20b21cu: goto label_20b21c;
        case 0x20b25cu: goto label_20b25c;
        case 0x20b298u: goto label_20b298;
        case 0x20b2acu: goto label_20b2ac;
        case 0x20b2bcu: goto label_20b2bc;
        case 0x20b2c8u: goto label_20b2c8;
        case 0x20b2e0u: goto label_20b2e0;
        case 0x20b2ecu: goto label_20b2ec;
        case 0x20b304u: goto label_20b304;
        case 0x20b31cu: goto label_20b31c;
        case 0x20b32cu: goto label_20b32c;
        case 0x20b338u: goto label_20b338;
        case 0x20b350u: goto label_20b350;
        case 0x20b35cu: goto label_20b35c;
        case 0x20b374u: goto label_20b374;
        case 0x20b38cu: goto label_20b38c;
        case 0x20b3b0u: goto label_20b3b0;
        case 0x20b3c8u: goto label_20b3c8;
        case 0x20b3d8u: goto label_20b3d8;
        case 0x20b3fcu: goto label_20b3fc;
        case 0x20b428u: goto label_20b428;
        case 0x20b450u: goto label_20b450;
        case 0x20b460u: goto label_20b460;
        case 0x20b474u: goto label_20b474;
        default: break;
    }

    ctx->pc = 0x20b1e0u;

    // 0x20b1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20b1e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b1e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x20b1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x20b1ec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x20b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x20b1f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b1f4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x20b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b1f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b1fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x20b200: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20B200u;
    {
        const bool branch_taken_0x20b200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20b200) {
            ctx->pc = 0x20B234u;
            goto label_20b234;
        }
    }
    ctx->pc = 0x20B208u;
    // 0x20b208: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20b208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b20c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x20b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b210: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b214: 0xc04282c  jal         func_10A0B0
    ctx->pc = 0x20B214u;
    SET_GPR_U32(ctx, 31, 0x20B21Cu);
    ctx->pc = 0x10A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0B0u, 0x20B214u, 0x20B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B21Cu;
label_20b21c:
    // 0x20b21c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b220: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20b224: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x20b224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x20b228: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20b228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x20b22c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20B22Cu;
    {
        const bool branch_taken_0x20b22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b22c) {
            ctx->pc = 0x20B25Cu;
            goto label_20b25c;
        }
    }
    ctx->pc = 0x20B234u;
label_20b234:
    // 0x20b234: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x20b234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b238: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x20b238u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x20b23c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x20b23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b240: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x20b240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20b244: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x20b244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b248: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x20b248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x20b24c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20b24cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b250: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x20b250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b254: 0xc07e6c0  jal         func_1F9B00
    ctx->pc = 0x20B254u;
    SET_GPR_U32(ctx, 31, 0x20B25Cu);
    ctx->pc = 0x1F9B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B00u, 0x20B254u, 0x20B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B25Cu;
label_20b25c:
    // 0x20b25c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b260: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20b264: 0x3e00008  jr          $ra
    ctx->pc = 0x20B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B26Cu;
    // 0x20b26c: 0x0  nop
    ctx->pc = 0x20b26cu;
    // NOP
    // 0x20b270: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20b270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20b274: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20b278: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20b27c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x20b27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20b280: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x20b280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x20b284: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x20b284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x20b288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b28c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20b28cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b290: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x20B290u;
    SET_GPR_U32(ctx, 31, 0x20B298u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x20B290u, 0x20B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B298u;
label_20b298:
    // 0x20b298: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b29c: 0x8c440114  lw          $a0, 0x114($v0)
    ctx->pc = 0x20b29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x20b2a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b2a4: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x20B2A4u;
    SET_GPR_U32(ctx, 31, 0x20B2ACu);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x20B2A4u, 0x20B2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2ACu;
label_20b2ac:
    // 0x20b2ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b2b0: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x20b2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x20b2b4: 0xc082b90  jal         func_20AE40
    ctx->pc = 0x20B2B4u;
    SET_GPR_U32(ctx, 31, 0x20B2BCu);
    ctx->pc = 0x20AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20AE40u, 0x20B2B4u, 0x20B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2BCu;
label_20b2bc:
    // 0x20b2bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20b2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20B2C0u;
    {
        const bool branch_taken_0x20b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b2c0) {
            ctx->pc = 0x20B2F4u;
            goto label_20b2f4;
        }
    }
    ctx->pc = 0x20B2C8u;
label_20b2c8:
    // 0x20b2c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20b2cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B2CCu;
    {
        const bool branch_taken_0x20b2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b2cc) {
            ctx->pc = 0x20B2F0u;
            goto label_20b2f0;
        }
    }
    ctx->pc = 0x20B2D4u;
    // 0x20b2d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20b2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20b2d8: 0xc082e10  jal         func_20B840
    ctx->pc = 0x20B2D8u;
    SET_GPR_U32(ctx, 31, 0x20B2E0u);
    ctx->pc = 0x20B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B840u, 0x20B2D8u, 0x20B2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2E0u;
label_20b2e0:
    // 0x20b2e0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20b2e4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x20B2E4u;
    SET_GPR_U32(ctx, 31, 0x20B2ECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20B2E4u, 0x20B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B2ECu;
label_20b2ec:
    // 0x20b2ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x20b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_20b2f0:
    // 0x20b2f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x20b2f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_20b2f4:
    // 0x20b2f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b2f8: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x20b2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x20b2fc: 0xc082e08  jal         func_20B820
    ctx->pc = 0x20B2FCu;
    SET_GPR_U32(ctx, 31, 0x20B304u);
    ctx->pc = 0x20B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B820u, 0x20B2FCu, 0x20B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B304u;
label_20b304:
    // 0x20b304: 0x1622fff0  bne         $s1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20B304u;
    {
        const bool branch_taken_0x20b304 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b304) {
            ctx->pc = 0x20B2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b2c8;
        }
    }
    ctx->pc = 0x20B30Cu;
    // 0x20b30c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b310: 0x2444012c  addiu       $a0, $v0, 0x12C
    ctx->pc = 0x20b310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x20b314: 0xc082dc4  jal         func_20B710
    ctx->pc = 0x20B314u;
    SET_GPR_U32(ctx, 31, 0x20B31Cu);
    ctx->pc = 0x20B710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B710u, 0x20B314u, 0x20B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B31Cu;
label_20b31c:
    // 0x20b31c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b320: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20b320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20b324: 0xc082dbc  jal         func_20B6F0
    ctx->pc = 0x20B324u;
    SET_GPR_U32(ctx, 31, 0x20B32Cu);
    ctx->pc = 0x20B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6F0u, 0x20B324u, 0x20B32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B32Cu;
label_20b32c:
    // 0x20b32c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20b32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b330: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20B330u;
    {
        const bool branch_taken_0x20b330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b330) {
            ctx->pc = 0x20B364u;
            goto label_20b364;
        }
    }
    ctx->pc = 0x20B338u;
label_20b338:
    // 0x20b338: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20b338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b33c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B33Cu;
    {
        const bool branch_taken_0x20b33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b33c) {
            ctx->pc = 0x20B360u;
            goto label_20b360;
        }
    }
    ctx->pc = 0x20B344u;
    // 0x20b344: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20b344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b348: 0xc082db0  jal         func_20B6C0
    ctx->pc = 0x20B348u;
    SET_GPR_U32(ctx, 31, 0x20B350u);
    ctx->pc = 0x20B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6C0u, 0x20B348u, 0x20B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B350u;
label_20b350:
    // 0x20b350: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x20b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b354: 0xc119c5c  jal         func_467170
    ctx->pc = 0x20B354u;
    SET_GPR_U32(ctx, 31, 0x20B35Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20B354u, 0x20B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B35Cu;
label_20b35c:
    // 0x20b35c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_20b360:
    // 0x20b360: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x20b360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_20b364:
    // 0x20b364: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b368: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20b36c: 0xc082da8  jal         func_20B6A0
    ctx->pc = 0x20B36Cu;
    SET_GPR_U32(ctx, 31, 0x20B374u);
    ctx->pc = 0x20B6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B6A0u, 0x20B36Cu, 0x20B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B374u;
label_20b374:
    // 0x20b374: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x20B374u;
    {
        const bool branch_taken_0x20b374 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x20b374) {
            ctx->pc = 0x20B338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b338;
        }
    }
    ctx->pc = 0x20B37Cu;
    // 0x20b37c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b380: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x20b380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20b384: 0xc082d64  jal         func_20B590
    ctx->pc = 0x20B384u;
    SET_GPR_U32(ctx, 31, 0x20B38Cu);
    ctx->pc = 0x20B590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B590u, 0x20B384u, 0x20B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B38Cu;
label_20b38c:
    // 0x20b38c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b390: 0x8c4200f8  lw          $v0, 0xF8($v0)
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x20b394: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B394u;
    {
        const bool branch_taken_0x20b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b394) {
            ctx->pc = 0x20B3B8u;
            goto label_20b3b8;
        }
    }
    ctx->pc = 0x20B39Cu;
    // 0x20b39c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b3a0: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x20b3a4: 0x8c4500f8  lw          $a1, 0xF8($v0)
    ctx->pc = 0x20b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x20b3a8: 0xc082d48  jal         func_20B520
    ctx->pc = 0x20B3A8u;
    SET_GPR_U32(ctx, 31, 0x20B3B0u);
    ctx->pc = 0x20B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B520u, 0x20B3A8u, 0x20B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3B0u;
label_20b3b0:
    // 0x20b3b0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b3b4: 0xac4000f8  sw          $zero, 0xF8($v0)
    ctx->pc = 0x20b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 248), GPR_U32(ctx, 0));
label_20b3b8:
    // 0x20b3b8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b3bc: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x20b3c0: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x20B3C0u;
    SET_GPR_U32(ctx, 31, 0x20B3C8u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x20B3C0u, 0x20B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3C8u;
label_20b3c8:
    // 0x20b3c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b3cc: 0x8c440104  lw          $a0, 0x104($v0)
    ctx->pc = 0x20b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x20b3d0: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x20B3D0u;
    SET_GPR_U32(ctx, 31, 0x20B3D8u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x20B3D0u, 0x20B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3D8u;
label_20b3d8:
    // 0x20b3d8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b3dc: 0x8c420100  lw          $v0, 0x100($v0)
    ctx->pc = 0x20b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x20b3e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B3E0u;
    {
        const bool branch_taken_0x20b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3e0) {
            ctx->pc = 0x20B404u;
            goto label_20b404;
        }
    }
    ctx->pc = 0x20B3E8u;
    // 0x20b3e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b3ec: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x20b3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x20b3f0: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x20b3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x20b3f4: 0xc082d48  jal         func_20B520
    ctx->pc = 0x20B3F4u;
    SET_GPR_U32(ctx, 31, 0x20B3FCu);
    ctx->pc = 0x20B520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B520u, 0x20B3F4u, 0x20B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B3FCu;
label_20b3fc:
    // 0x20b3fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b400: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x20b400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
label_20b404:
    // 0x20b404: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b408: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x20b408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x20b40c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20B40Cu;
    {
        const bool branch_taken_0x20b40c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b40c) {
            ctx->pc = 0x20B430u;
            goto label_20b430;
        }
    }
    ctx->pc = 0x20B414u;
    // 0x20b414: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b418: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x20b41c: 0x8c450108  lw          $a1, 0x108($v0)
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x20b420: 0xc082d30  jal         func_20B4C0
    ctx->pc = 0x20B420u;
    SET_GPR_U32(ctx, 31, 0x20B428u);
    ctx->pc = 0x20B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B4C0u, 0x20B420u, 0x20B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B428u;
label_20b428:
    // 0x20b428: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b42c: 0xac400108  sw          $zero, 0x108($v0)
    ctx->pc = 0x20b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 0));
label_20b430:
    // 0x20b430: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b434: 0x8c420110  lw          $v0, 0x110($v0)
    ctx->pc = 0x20b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x20b438: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20B438u;
    {
        const bool branch_taken_0x20b438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b438) {
            ctx->pc = 0x20B468u;
            goto label_20b468;
        }
    }
    ctx->pc = 0x20B440u;
    // 0x20b440: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b444: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x20b444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x20b448: 0xc082d24  jal         func_20B490
    ctx->pc = 0x20B448u;
    SET_GPR_U32(ctx, 31, 0x20B450u);
    ctx->pc = 0x20B490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B490u, 0x20B448u, 0x20B450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B450u;
label_20b450:
    // 0x20b450: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b454: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x20b454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x20b458: 0xc119c5c  jal         func_467170
    ctx->pc = 0x20B458u;
    SET_GPR_U32(ctx, 31, 0x20B460u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x20B458u, 0x20B460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B460u;
label_20b460:
    // 0x20b460: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x20b460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b464: 0xac400110  sw          $zero, 0x110($v0)
    ctx->pc = 0x20b464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 0));
label_20b468:
    // 0x20b468: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x20b468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b46c: 0xc064adc  jal         func_192B70
    ctx->pc = 0x20B46Cu;
    SET_GPR_U32(ctx, 31, 0x20B474u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x20B46Cu, 0x20B474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B474u;
label_20b474:
    // 0x20b474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20b474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b478: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b47c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20b47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b480: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x20b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20b484: 0x3e00008  jr          $ra
    ctx->pc = 0x20B484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B48Cu;
    // 0x20b48c: 0x0  nop
    ctx->pc = 0x20b48cu;
    // NOP
    ctx->pc = 0x20b490u;
}
