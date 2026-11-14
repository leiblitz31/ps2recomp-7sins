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

// Function: sub_0044D840
// Address: 0x44d840 - 0x44de20
void sub_0044D840_0x44d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044D840_0x44d840");
#endif

    switch (ctx->pc) {
        case 0x44d8bcu: goto label_44d8bc;
        case 0x44d8ccu: goto label_44d8cc;
        case 0x44d90cu: goto label_44d90c;
        case 0x44d91cu: goto label_44d91c;
        case 0x44d95cu: goto label_44d95c;
        case 0x44d96cu: goto label_44d96c;
        case 0x44d9acu: goto label_44d9ac;
        case 0x44d9bcu: goto label_44d9bc;
        case 0x44d9fcu: goto label_44d9fc;
        case 0x44da0cu: goto label_44da0c;
        case 0x44da4cu: goto label_44da4c;
        case 0x44da5cu: goto label_44da5c;
        case 0x44da9cu: goto label_44da9c;
        case 0x44daacu: goto label_44daac;
        case 0x44daecu: goto label_44daec;
        case 0x44dafcu: goto label_44dafc;
        case 0x44db3cu: goto label_44db3c;
        case 0x44db4cu: goto label_44db4c;
        case 0x44db8cu: goto label_44db8c;
        case 0x44db9cu: goto label_44db9c;
        case 0x44dbdcu: goto label_44dbdc;
        case 0x44dbecu: goto label_44dbec;
        case 0x44dc2cu: goto label_44dc2c;
        case 0x44dc3cu: goto label_44dc3c;
        case 0x44dc7cu: goto label_44dc7c;
        case 0x44dc8cu: goto label_44dc8c;
        case 0x44dcccu: goto label_44dccc;
        case 0x44dcdcu: goto label_44dcdc;
        case 0x44dd1cu: goto label_44dd1c;
        case 0x44dd2cu: goto label_44dd2c;
        case 0x44dd6cu: goto label_44dd6c;
        case 0x44dd7cu: goto label_44dd7c;
        case 0x44ddbcu: goto label_44ddbc;
        case 0x44ddccu: goto label_44ddcc;
        case 0x44dde8u: goto label_44dde8;
        case 0x44de08u: goto label_44de08;
        default: break;
    }

    ctx->pc = 0x44d840u;

    // 0x44d840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44d844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44d848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44d848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44d84c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x44d84cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x44d850: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d854: 0x1040016c  beqz        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x44D854u;
    {
        const bool branch_taken_0x44d854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d854) {
            ctx->pc = 0x44DE08u;
            goto label_44de08;
        }
    }
    ctx->pc = 0x44D85Cu;
    // 0x44d85c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d860: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x44d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x44d864: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x44d864u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x44d868: 0x1020015a  beqz        $at, . + 4 + (0x15A << 2)
    ctx->pc = 0x44D868u;
    {
        const bool branch_taken_0x44d868 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d868) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D870u;
    // 0x44d870: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x44d870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x44d874: 0x24631830  addiu       $v1, $v1, 0x1830
    ctx->pc = 0x44d874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6192));
    // 0x44d878: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x44d878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x44d87c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44d87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44d880: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x44d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x44d884: 0x400008  jr          $v0
    ctx->pc = 0x44D884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x44D88Cu: goto label_44d88c;
            case 0x44D8DCu: goto label_44d8dc;
            case 0x44D92Cu: goto label_44d92c;
            case 0x44D97Cu: goto label_44d97c;
            case 0x44D9CCu: goto label_44d9cc;
            case 0x44DA1Cu: goto label_44da1c;
            case 0x44DA6Cu: goto label_44da6c;
            case 0x44DABCu: goto label_44dabc;
            case 0x44DB0Cu: goto label_44db0c;
            case 0x44DB5Cu: goto label_44db5c;
            case 0x44DBACu: goto label_44dbac;
            case 0x44DBFCu: goto label_44dbfc;
            case 0x44DC4Cu: goto label_44dc4c;
            case 0x44DC9Cu: goto label_44dc9c;
            case 0x44DCECu: goto label_44dcec;
            case 0x44DD3Cu: goto label_44dd3c;
            case 0x44DD8Cu: goto label_44dd8c;
            case 0x44DDD4u: goto label_44ddd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44D884u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x44D88Cu;
label_44d88c:
    // 0x44d88c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d890: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d894: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x44D894u;
    {
        const bool branch_taken_0x44d894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d894) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D89Cu;
    // 0x44d89c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d8a0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d8a4: 0x1040014b  beqz        $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x44D8A4u;
    {
        const bool branch_taken_0x44d8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d8a4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D8ACu;
    // 0x44d8ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d8b0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d8b4: 0xc113800  jal         func_44E000
    ctx->pc = 0x44D8B4u;
    SET_GPR_U32(ctx, 31, 0x44D8BCu);
    ctx->pc = 0x44E000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E000u, 0x44D8B4u, 0x44D8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D8BCu;
label_44d8bc:
    // 0x44d8bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d8c0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d8c4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44D8C4u;
    SET_GPR_U32(ctx, 31, 0x44D8CCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44D8C4u, 0x44D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D8CCu;
label_44d8cc:
    // 0x44d8cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d8d0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44d8d4: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x44D8D4u;
    {
        const bool branch_taken_0x44d8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d8d4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D8DCu;
label_44d8dc:
    // 0x44d8dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d8e0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d8e4: 0x1040013b  beqz        $v0, . + 4 + (0x13B << 2)
    ctx->pc = 0x44D8E4u;
    {
        const bool branch_taken_0x44d8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d8e4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D8ECu;
    // 0x44d8ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d8f0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d8f4: 0x10400137  beqz        $v0, . + 4 + (0x137 << 2)
    ctx->pc = 0x44D8F4u;
    {
        const bool branch_taken_0x44d8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d8f4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D8FCu;
    // 0x44d8fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d900: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d904: 0xc1137f8  jal         func_44DFE0
    ctx->pc = 0x44D904u;
    SET_GPR_U32(ctx, 31, 0x44D90Cu);
    ctx->pc = 0x44DFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DFE0u, 0x44D904u, 0x44D90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D90Cu;
label_44d90c:
    // 0x44d90c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d910: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d914: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44D914u;
    SET_GPR_U32(ctx, 31, 0x44D91Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44D914u, 0x44D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D91Cu;
label_44d91c:
    // 0x44d91c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d920: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44d920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44d924: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x44D924u;
    {
        const bool branch_taken_0x44d924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d924) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D92Cu;
label_44d92c:
    // 0x44d92c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d930: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d934: 0x10400127  beqz        $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x44D934u;
    {
        const bool branch_taken_0x44d934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d934) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D93Cu;
    // 0x44d93c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d940: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d944: 0x10400123  beqz        $v0, . + 4 + (0x123 << 2)
    ctx->pc = 0x44D944u;
    {
        const bool branch_taken_0x44d944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d944) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D94Cu;
    // 0x44d94c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d950: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d954: 0xc1137f0  jal         func_44DFC0
    ctx->pc = 0x44D954u;
    SET_GPR_U32(ctx, 31, 0x44D95Cu);
    ctx->pc = 0x44DFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DFC0u, 0x44D954u, 0x44D95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D95Cu;
label_44d95c:
    // 0x44d95c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d960: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d964: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44D964u;
    SET_GPR_U32(ctx, 31, 0x44D96Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44D964u, 0x44D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D96Cu;
label_44d96c:
    // 0x44d96c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d970: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44d970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44d974: 0x10000117  b           . + 4 + (0x117 << 2)
    ctx->pc = 0x44D974u;
    {
        const bool branch_taken_0x44d974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d974) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D97Cu;
label_44d97c:
    // 0x44d97c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d980: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d984: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x44D984u;
    {
        const bool branch_taken_0x44d984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d984) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D98Cu;
    // 0x44d98c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d990: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d994: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
    ctx->pc = 0x44D994u;
    {
        const bool branch_taken_0x44d994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d994) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D99Cu;
    // 0x44d99c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d9a0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d9a4: 0xc1137e8  jal         func_44DFA0
    ctx->pc = 0x44D9A4u;
    SET_GPR_U32(ctx, 31, 0x44D9ACu);
    ctx->pc = 0x44DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DFA0u, 0x44D9A4u, 0x44D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D9ACu;
label_44d9ac:
    // 0x44d9ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d9b0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d9b4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44D9B4u;
    SET_GPR_U32(ctx, 31, 0x44D9BCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44D9B4u, 0x44D9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D9BCu;
label_44d9bc:
    // 0x44d9bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d9c0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44d9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44d9c4: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x44D9C4u;
    {
        const bool branch_taken_0x44d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d9c4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D9CCu;
label_44d9cc:
    // 0x44d9cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d9d0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d9d4: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x44D9D4u;
    {
        const bool branch_taken_0x44d9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d9d4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D9DCu;
    // 0x44d9dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d9e0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d9e4: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
    ctx->pc = 0x44D9E4u;
    {
        const bool branch_taken_0x44d9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44d9e4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44D9ECu;
    // 0x44d9ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44d9f0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44d9f4: 0xc1137e0  jal         func_44DF80
    ctx->pc = 0x44D9F4u;
    SET_GPR_U32(ctx, 31, 0x44D9FCu);
    ctx->pc = 0x44DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DF80u, 0x44D9F4u, 0x44D9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44D9FCu;
label_44d9fc:
    // 0x44d9fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da00: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44da00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da04: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DA04u;
    SET_GPR_U32(ctx, 31, 0x44DA0Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DA04u, 0x44DA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DA0Cu;
label_44da0c:
    // 0x44da0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da10: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44da10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44da14: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x44DA14u;
    {
        const bool branch_taken_0x44da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da14) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DA1Cu;
label_44da1c:
    // 0x44da1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da20: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44da20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da24: 0x104000eb  beqz        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x44DA24u;
    {
        const bool branch_taken_0x44da24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da24) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DA2Cu;
    // 0x44da2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da30: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44da30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da34: 0x104000e7  beqz        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x44DA34u;
    {
        const bool branch_taken_0x44da34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da34) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DA3Cu;
    // 0x44da3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da40: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44da40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da44: 0xc1137d8  jal         func_44DF60
    ctx->pc = 0x44DA44u;
    SET_GPR_U32(ctx, 31, 0x44DA4Cu);
    ctx->pc = 0x44DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DF60u, 0x44DA44u, 0x44DA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DA4Cu;
label_44da4c:
    // 0x44da4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da50: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44da50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da54: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DA54u;
    SET_GPR_U32(ctx, 31, 0x44DA5Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DA54u, 0x44DA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DA5Cu;
label_44da5c:
    // 0x44da5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da60: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44da60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44da64: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x44DA64u;
    {
        const bool branch_taken_0x44da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da64) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DA6Cu;
label_44da6c:
    // 0x44da6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da70: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44da70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da74: 0x104000d7  beqz        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x44DA74u;
    {
        const bool branch_taken_0x44da74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da74) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DA7Cu;
    // 0x44da7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da80: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44da80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da84: 0x104000d3  beqz        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x44DA84u;
    {
        const bool branch_taken_0x44da84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da84) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DA8Cu;
    // 0x44da8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44da90: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44da90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44da94: 0xc1137d0  jal         func_44DF40
    ctx->pc = 0x44DA94u;
    SET_GPR_U32(ctx, 31, 0x44DA9Cu);
    ctx->pc = 0x44DF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DF40u, 0x44DA94u, 0x44DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DA9Cu;
label_44da9c:
    // 0x44da9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44daa0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44daa4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DAA4u;
    SET_GPR_U32(ctx, 31, 0x44DAACu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DAA4u, 0x44DAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DAACu;
label_44daac:
    // 0x44daac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dab0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dab4: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x44DAB4u;
    {
        const bool branch_taken_0x44dab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dab4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DABCu;
label_44dabc:
    // 0x44dabc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dac0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dac4: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x44DAC4u;
    {
        const bool branch_taken_0x44dac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dac4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DACCu;
    // 0x44dacc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44daccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dad0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dad4: 0x104000bf  beqz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x44DAD4u;
    {
        const bool branch_taken_0x44dad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dad4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DADCu;
    // 0x44dadc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dae0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dae4: 0xc1137c8  jal         func_44DF20
    ctx->pc = 0x44DAE4u;
    SET_GPR_U32(ctx, 31, 0x44DAECu);
    ctx->pc = 0x44DF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DF20u, 0x44DAE4u, 0x44DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DAECu;
label_44daec:
    // 0x44daec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44daecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44daf0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44daf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44daf4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DAF4u;
    SET_GPR_U32(ctx, 31, 0x44DAFCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DAF4u, 0x44DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DAFCu;
label_44dafc:
    // 0x44dafc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db00: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44db00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44db04: 0x100000b3  b           . + 4 + (0xB3 << 2)
    ctx->pc = 0x44DB04u;
    {
        const bool branch_taken_0x44db04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db04) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DB0Cu;
label_44db0c:
    // 0x44db0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db10: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44db10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db14: 0x104000af  beqz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x44DB14u;
    {
        const bool branch_taken_0x44db14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db14) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DB1Cu;
    // 0x44db1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db20: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44db20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db24: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x44DB24u;
    {
        const bool branch_taken_0x44db24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db24) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DB2Cu;
    // 0x44db2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db30: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44db30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db34: 0xc1137c0  jal         func_44DF00
    ctx->pc = 0x44DB34u;
    SET_GPR_U32(ctx, 31, 0x44DB3Cu);
    ctx->pc = 0x44DF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DF00u, 0x44DB34u, 0x44DB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DB3Cu;
label_44db3c:
    // 0x44db3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db40: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44db40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db44: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DB44u;
    SET_GPR_U32(ctx, 31, 0x44DB4Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DB44u, 0x44DB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DB4Cu;
label_44db4c:
    // 0x44db4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db50: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44db50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44db54: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x44DB54u;
    {
        const bool branch_taken_0x44db54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db54) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DB5Cu;
label_44db5c:
    // 0x44db5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db60: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db64: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x44DB64u;
    {
        const bool branch_taken_0x44db64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db64) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DB6Cu;
    // 0x44db6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db70: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44db70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db74: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x44DB74u;
    {
        const bool branch_taken_0x44db74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db74) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DB7Cu;
    // 0x44db7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db80: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44db80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db84: 0xc1137b8  jal         func_44DEE0
    ctx->pc = 0x44DB84u;
    SET_GPR_U32(ctx, 31, 0x44DB8Cu);
    ctx->pc = 0x44DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DEE0u, 0x44DB84u, 0x44DB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DB8Cu;
label_44db8c:
    // 0x44db8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44db90: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44db90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44db94: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DB94u;
    SET_GPR_U32(ctx, 31, 0x44DB9Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DB94u, 0x44DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DB9Cu;
label_44db9c:
    // 0x44db9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dba0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dba4: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x44DBA4u;
    {
        const bool branch_taken_0x44dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dba4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DBACu;
label_44dbac:
    // 0x44dbac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dbb0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dbb4: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x44DBB4u;
    {
        const bool branch_taken_0x44dbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dbb4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DBBCu;
    // 0x44dbbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dbc0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dbc4: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x44DBC4u;
    {
        const bool branch_taken_0x44dbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dbc4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DBCCu;
    // 0x44dbcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dbd0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dbd4: 0xc1137b0  jal         func_44DEC0
    ctx->pc = 0x44DBD4u;
    SET_GPR_U32(ctx, 31, 0x44DBDCu);
    ctx->pc = 0x44DEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DEC0u, 0x44DBD4u, 0x44DBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DBDCu;
label_44dbdc:
    // 0x44dbdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dbe0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dbe4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DBE4u;
    SET_GPR_U32(ctx, 31, 0x44DBECu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DBE4u, 0x44DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DBECu;
label_44dbec:
    // 0x44dbec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dbf0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dbf4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x44DBF4u;
    {
        const bool branch_taken_0x44dbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dbf4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DBFCu;
label_44dbfc:
    // 0x44dbfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc00: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc04: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x44DC04u;
    {
        const bool branch_taken_0x44dc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc04) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DC0Cu;
    // 0x44dc0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc10: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc14: 0x1040006f  beqz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x44DC14u;
    {
        const bool branch_taken_0x44dc14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc14) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DC1Cu;
    // 0x44dc1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc20: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc24: 0xc1137a8  jal         func_44DEA0
    ctx->pc = 0x44DC24u;
    SET_GPR_U32(ctx, 31, 0x44DC2Cu);
    ctx->pc = 0x44DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DEA0u, 0x44DC24u, 0x44DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DC2Cu;
label_44dc2c:
    // 0x44dc2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc30: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc34: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DC34u;
    SET_GPR_U32(ctx, 31, 0x44DC3Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DC34u, 0x44DC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DC3Cu;
label_44dc3c:
    // 0x44dc3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc40: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dc40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dc44: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x44DC44u;
    {
        const bool branch_taken_0x44dc44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc44) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DC4Cu;
label_44dc4c:
    // 0x44dc4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc50: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc54: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x44DC54u;
    {
        const bool branch_taken_0x44dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc54) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DC5Cu;
    // 0x44dc5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc60: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc64: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x44DC64u;
    {
        const bool branch_taken_0x44dc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc64) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DC6Cu;
    // 0x44dc6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc70: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc74: 0xc1137a0  jal         func_44DE80
    ctx->pc = 0x44DC74u;
    SET_GPR_U32(ctx, 31, 0x44DC7Cu);
    ctx->pc = 0x44DE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DE80u, 0x44DC74u, 0x44DC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DC7Cu;
label_44dc7c:
    // 0x44dc7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc80: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dc84: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DC84u;
    SET_GPR_U32(ctx, 31, 0x44DC8Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DC84u, 0x44DC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DC8Cu;
label_44dc8c:
    // 0x44dc8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dc90: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dc90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dc94: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x44DC94u;
    {
        const bool branch_taken_0x44dc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc94) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DC9Cu;
label_44dc9c:
    // 0x44dc9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dca0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dca4: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x44DCA4u;
    {
        const bool branch_taken_0x44dca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dca4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DCACu;
    // 0x44dcac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dcb0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dcb4: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x44DCB4u;
    {
        const bool branch_taken_0x44dcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dcb4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DCBCu;
    // 0x44dcbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dcc0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dcc4: 0xc113798  jal         func_44DE60
    ctx->pc = 0x44DCC4u;
    SET_GPR_U32(ctx, 31, 0x44DCCCu);
    ctx->pc = 0x44DE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DE60u, 0x44DCC4u, 0x44DCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DCCCu;
label_44dccc:
    // 0x44dccc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dcd0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dcd4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DCD4u;
    SET_GPR_U32(ctx, 31, 0x44DCDCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DCD4u, 0x44DCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DCDCu;
label_44dcdc:
    // 0x44dcdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dce0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dce4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x44DCE4u;
    {
        const bool branch_taken_0x44dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dce4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DCECu;
label_44dcec:
    // 0x44dcec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dcf0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dcf4: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x44DCF4u;
    {
        const bool branch_taken_0x44dcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dcf4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DCFCu;
    // 0x44dcfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd00: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd04: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x44DD04u;
    {
        const bool branch_taken_0x44dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd04) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DD0Cu;
    // 0x44dd0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd10: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd14: 0xc113790  jal         func_44DE40
    ctx->pc = 0x44DD14u;
    SET_GPR_U32(ctx, 31, 0x44DD1Cu);
    ctx->pc = 0x44DE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DE40u, 0x44DD14u, 0x44DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DD1Cu;
label_44dd1c:
    // 0x44dd1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd20: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd24: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DD24u;
    SET_GPR_U32(ctx, 31, 0x44DD2Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DD24u, 0x44DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DD2Cu;
label_44dd2c:
    // 0x44dd2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd30: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dd34: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x44DD34u;
    {
        const bool branch_taken_0x44dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd34) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DD3Cu;
label_44dd3c:
    // 0x44dd3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd40: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd44: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x44DD44u;
    {
        const bool branch_taken_0x44dd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd44) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DD4Cu;
    // 0x44dd4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd50: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd54: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x44DD54u;
    {
        const bool branch_taken_0x44dd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd54) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DD5Cu;
    // 0x44dd5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd60: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd64: 0xc113788  jal         func_44DE20
    ctx->pc = 0x44DD64u;
    SET_GPR_U32(ctx, 31, 0x44DD6Cu);
    ctx->pc = 0x44DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DE20u, 0x44DD64u, 0x44DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DD6Cu;
label_44dd6c:
    // 0x44dd6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd70: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd74: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DD74u;
    SET_GPR_U32(ctx, 31, 0x44DD7Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DD74u, 0x44DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DD7Cu;
label_44dd7c:
    // 0x44dd7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd80: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x44dd84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x44DD84u;
    {
        const bool branch_taken_0x44dd84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd84) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DD8Cu;
label_44dd8c:
    // 0x44dd8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dd90: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dd94: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x44DD94u;
    {
        const bool branch_taken_0x44dd94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd94) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DD9Cu;
    // 0x44dd9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44dda0: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x44dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44dda4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x44DDA4u;
    {
        const bool branch_taken_0x44dda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dda4) {
            ctx->pc = 0x44DDD4u;
            goto label_44ddd4;
        }
    }
    ctx->pc = 0x44DDACu;
    // 0x44ddac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ddacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ddb0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44ddb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44ddb4: 0xc113788  jal         func_44DE20
    ctx->pc = 0x44DDB4u;
    SET_GPR_U32(ctx, 31, 0x44DDBCu);
    ctx->pc = 0x44DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44DE20u, 0x44DDB4u, 0x44DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DDBCu;
label_44ddbc:
    // 0x44ddbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ddbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ddc0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x44ddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x44ddc4: 0xc119c5c  jal         func_467170
    ctx->pc = 0x44DDC4u;
    SET_GPR_U32(ctx, 31, 0x44DDCCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x44DDC4u, 0x44DDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DDCCu;
label_44ddcc:
    // 0x44ddcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ddccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ddd0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x44ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_44ddd4:
    // 0x44ddd4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44ddd8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x44ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x44dddc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x44dddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x44dde0: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x44DDE0u;
    SET_GPR_U32(ctx, 31, 0x44DDE8u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x44DDE0u, 0x44DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DDE8u;
label_44dde8:
    // 0x44dde8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x44dde8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44ddec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x44ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x44ddf0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44ddf0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44ddf4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44DDF4u;
    {
        const bool branch_taken_0x44ddf4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44ddf4) {
            ctx->pc = 0x44DE08u;
            goto label_44de08;
        }
    }
    ctx->pc = 0x44DDFCu;
    // 0x44ddfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44ddfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44de00: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x44DE00u;
    SET_GPR_U32(ctx, 31, 0x44DE08u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x44DE00u, 0x44DE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44DE08u;
label_44de08:
    // 0x44de08: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x44de08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44de0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44de0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44de10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44de14: 0x3e00008  jr          $ra
    ctx->pc = 0x44DE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44DE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44DE1Cu;
    // 0x44de1c: 0x0  nop
    ctx->pc = 0x44de1cu;
    // NOP
    ctx->pc = 0x44de20u;
}
