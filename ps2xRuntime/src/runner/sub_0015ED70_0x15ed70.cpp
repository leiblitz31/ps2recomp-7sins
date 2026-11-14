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

// Function: sub_0015ED70
// Address: 0x15ed70 - 0x15efe0
void sub_0015ED70_0x15ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015ED70_0x15ed70");
#endif

    switch (ctx->pc) {
        case 0x15eddcu: goto label_15eddc;
        case 0x15edf0u: goto label_15edf0;
        case 0x15ee10u: goto label_15ee10;
        case 0x15ee28u: goto label_15ee28;
        case 0x15ee3cu: goto label_15ee3c;
        case 0x15ee54u: goto label_15ee54;
        case 0x15ee78u: goto label_15ee78;
        case 0x15eea4u: goto label_15eea4;
        case 0x15eeb8u: goto label_15eeb8;
        case 0x15eed0u: goto label_15eed0;
        case 0x15ef44u: goto label_15ef44;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef84u: goto label_15ef84;
        case 0x15ef98u: goto label_15ef98;
        case 0x15efb0u: goto label_15efb0;
        default: break;
    }

    ctx->pc = 0x15ed70u;

    // 0x15ed70: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x15ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x15ed74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15ed78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15ed7c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15ed80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15ed80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15ed84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15ed84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15ed88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ed88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15ed8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15ed8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15ed90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15ed90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15ed94: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x15ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x15ed98: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x15ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x15ed9c: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x15ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x15eda0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x15eda0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eda4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x15eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15eda8: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x15eda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x15edac: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x15edacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x15edb0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x15edb0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15edb4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x15edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15edb8: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x15edb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x15edbc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EDBCu;
    {
        const bool branch_taken_0x15edbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15edbc) {
            ctx->pc = 0x15EDD0u;
            goto label_15edd0;
        }
    }
    ctx->pc = 0x15EDC4u;
    // 0x15edc4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x15edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15edc8: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x15edc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x15edcc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x15edccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_15edd0:
    // 0x15edd0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15edd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15edd4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15EDD4u;
    {
        const bool branch_taken_0x15edd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15edd4) {
            ctx->pc = 0x15EE2Cu;
            goto label_15ee2c;
        }
    }
    ctx->pc = 0x15EDDCu;
label_15eddc:
    // 0x15eddc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ede0: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15ede4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ede4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ede8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15EDE8u;
    SET_GPR_U32(ctx, 31, 0x15EDF0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15EDE8u, 0x15EDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDF0u;
label_15edf0:
    // 0x15edf0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15edf4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15EDF4u;
    {
        const bool branch_taken_0x15edf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15edf4) {
            ctx->pc = 0x15EE28u;
            goto label_15ee28;
        }
    }
    ctx->pc = 0x15EDFCu;
    // 0x15edfc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ee00: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15ee04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ee04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee08: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15EE08u;
    SET_GPR_U32(ctx, 31, 0x15EE10u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15EE08u, 0x15EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE10u;
label_15ee10:
    // 0x15ee10: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ee14: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ee18: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15ee1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ee1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee20: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15EE20u;
    SET_GPR_U32(ctx, 31, 0x15EE28u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15EE20u, 0x15EE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE28u;
label_15ee28:
    // 0x15ee28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x15ee28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15ee2c:
    // 0x15ee2c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ee2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ee30: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15ee34: 0xc05611c  jal         func_158470
    ctx->pc = 0x15EE34u;
    SET_GPR_U32(ctx, 31, 0x15EE3Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x15EE34u, 0x15EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE3Cu;
label_15ee3c:
    // 0x15ee3c: 0x222182b  sltu        $v1, $s1, $v0
    ctx->pc = 0x15ee3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15ee40: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x15EE40u;
    {
        const bool branch_taken_0x15ee40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ee40) {
            ctx->pc = 0x15EDDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eddc;
        }
    }
    ctx->pc = 0x15EE48u;
    // 0x15ee48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15ee48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee4c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15EE4Cu;
    {
        const bool branch_taken_0x15ee4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee4c) {
            ctx->pc = 0x15EE7Cu;
            goto label_15ee7c;
        }
    }
    ctx->pc = 0x15EE54u;
label_15ee54:
    // 0x15ee54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ee58: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15ee5c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ee60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ee64: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15ee64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15ee68: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x15ee68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x15ee6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15ee6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee70: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15EE70u;
    SET_GPR_U32(ctx, 31, 0x15EE78u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15EE70u, 0x15EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE78u;
label_15ee78:
    // 0x15ee78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15ee78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_15ee7c:
    // 0x15ee7c: 0x2e630005  sltiu       $v1, $s3, 0x5
    ctx->pc = 0x15ee7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x15ee80: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15EE80u;
    {
        const bool branch_taken_0x15ee80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ee80) {
            ctx->pc = 0x15EE54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ee54;
        }
    }
    ctx->pc = 0x15EE88u;
    // 0x15ee88: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x15ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15ee8c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x15ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15ee90: 0x10830047  beq         $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x15EE90u;
    {
        const bool branch_taken_0x15ee90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ee90) {
            ctx->pc = 0x15EFB0u;
            goto label_15efb0;
        }
    }
    ctx->pc = 0x15EE98u;
    // 0x15ee98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15ee98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15EE9Cu;
    {
        const bool branch_taken_0x15ee9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ee9c) {
            ctx->pc = 0x15EED4u;
            goto label_15eed4;
        }
    }
    ctx->pc = 0x15EEA4u;
label_15eea4:
    // 0x15eea4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eea8: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x15eea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x15eeac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15eeacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eeb0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15EEB0u;
    SET_GPR_U32(ctx, 31, 0x15EEB8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15EEB0u, 0x15EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EEB8u;
label_15eeb8:
    // 0x15eeb8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15eeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15eebc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15eec0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15eec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15eec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eec8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15EEC8u;
    SET_GPR_U32(ctx, 31, 0x15EED0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15EEC8u, 0x15EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EED0u;
label_15eed0:
    // 0x15eed0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x15eed0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_15eed4:
    // 0x15eed4: 0x2a420007  slti        $v0, $s2, 0x7
    ctx->pc = 0x15eed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x15eed8: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15EED8u;
    {
        const bool branch_taken_0x15eed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eed8) {
            ctx->pc = 0x15EEA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15eea4;
        }
    }
    ctx->pc = 0x15EEE0u;
    // 0x15eee0: 0x8fb00090  lw          $s0, 0x90($sp)
    ctx->pc = 0x15eee0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15eee4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15eee8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x15EEE8u;
    {
        const bool branch_taken_0x15eee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15eee8) {
            ctx->pc = 0x15EF84u;
            goto label_15ef84;
        }
    }
    ctx->pc = 0x15EEF0u;
    // 0x15eef0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15eef4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15EEF4u;
    {
        const bool branch_taken_0x15eef4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x15eef4) {
            ctx->pc = 0x15EF08u;
            goto label_15ef08;
        }
    }
    ctx->pc = 0x15EEFCu;
    // 0x15eefc: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15ef00: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x15EF00u;
    {
        const bool branch_taken_0x15ef00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef00) {
            ctx->pc = 0x15EF84u;
            goto label_15ef84;
        }
    }
    ctx->pc = 0x15EF08u;
label_15ef08:
    // 0x15ef08: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15ef0c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x15ef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15ef10: 0x240203e7  addiu       $v0, $zero, 0x3E7
    ctx->pc = 0x15ef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
    // 0x15ef14: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EF14u;
    {
        const bool branch_taken_0x15ef14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15ef14) {
            ctx->pc = 0x15EF2Cu;
            goto label_15ef2c;
        }
    }
    ctx->pc = 0x15EF1Cu;
    // 0x15ef1c: 0x2410000e  addiu       $s0, $zero, 0xE
    ctx->pc = 0x15ef1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15ef20: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x15EF20u;
    {
        const bool branch_taken_0x15ef20 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ef20) {
            ctx->pc = 0x15EF2Cu;
            goto label_15ef2c;
        }
    }
    ctx->pc = 0x15EF28u;
    // 0x15ef28: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_15ef2c:
    // 0x15ef2c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x15ef2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ef30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ef34: 0x24640074  addiu       $a0, $v1, 0x74
    ctx->pc = 0x15ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x15ef38: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x15ef38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15ef3c: 0xc057944  jal         func_15E510
    ctx->pc = 0x15EF3Cu;
    SET_GPR_U32(ctx, 31, 0x15EF44u);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x15EF3Cu, 0x15EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF44u;
label_15ef44:
    // 0x15ef44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ef48: 0xc058880  jal         func_162200
    ctx->pc = 0x15EF48u;
    SET_GPR_U32(ctx, 31, 0x15EF50u);
    ctx->pc = 0x162200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162200u, 0x15EF48u, 0x15EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF50u;
label_15ef50:
    // 0x15ef50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15ef50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef54: 0x2402029a  addiu       $v0, $zero, 0x29A
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 666));
    // 0x15ef58: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15EF58u;
    {
        const bool branch_taken_0x15ef58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ef58) {
            ctx->pc = 0x15EF84u;
            goto label_15ef84;
        }
    }
    ctx->pc = 0x15EF60u;
    // 0x15ef60: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ef64: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x15ef64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x15ef68: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ef6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ef70: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x15ef74: 0x8c4500d0  lw          $a1, 0xD0($v0)
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x15ef78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15ef78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ef7c: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15EF7Cu;
    SET_GPR_U32(ctx, 31, 0x15EF84u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15EF7Cu, 0x15EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF84u;
label_15ef84:
    // 0x15ef84: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15ef88: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x15ef88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x15ef8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ef8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef90: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x15EF90u;
    SET_GPR_U32(ctx, 31, 0x15EF98u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x15EF90u, 0x15EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF98u;
label_15ef98:
    // 0x15ef98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15ef9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15efa0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15efa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15efa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15efa8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x15EFA8u;
    SET_GPR_U32(ctx, 31, 0x15EFB0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x15EFA8u, 0x15EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFB0u;
label_15efb0:
    // 0x15efb0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15efb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15efb4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15efb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15efb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15efb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15efbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15efbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15efc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15efc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15efc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15efc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15efc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15efc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15efcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15efccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15efd0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15efd4: 0x3e00008  jr          $ra
    ctx->pc = 0x15EFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EFDCu;
    // 0x15efdc: 0x0  nop
    ctx->pc = 0x15efdcu;
    // NOP
    ctx->pc = 0x15efe0u;
}
