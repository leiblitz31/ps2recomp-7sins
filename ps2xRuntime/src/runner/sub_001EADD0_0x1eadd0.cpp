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

// Function: sub_001EADD0
// Address: 0x1eadd0 - 0x1eaf20
void sub_001EADD0_0x1eadd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EADD0_0x1eadd0");
#endif

    switch (ctx->pc) {
        case 0x1eadecu: goto label_1eadec;
        case 0x1eadfcu: goto label_1eadfc;
        case 0x1eae0cu: goto label_1eae0c;
        case 0x1eae48u: goto label_1eae48;
        case 0x1eae5cu: goto label_1eae5c;
        case 0x1eae6cu: goto label_1eae6c;
        case 0x1eae78u: goto label_1eae78;
        case 0x1eae9cu: goto label_1eae9c;
        case 0x1eaea8u: goto label_1eaea8;
        case 0x1eaebcu: goto label_1eaebc;
        case 0x1eaee8u: goto label_1eaee8;
        case 0x1eaef4u: goto label_1eaef4;
        case 0x1eaf04u: goto label_1eaf04;
        default: break;
    }

    ctx->pc = 0x1eadd0u;

    // 0x1eadd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eadd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eadd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eadd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eadd8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1eadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1eaddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eaddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eade0: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1eade0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1eade4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1EADE4u;
    SET_GPR_U32(ctx, 31, 0x1EADECu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1EADE4u, 0x1EADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADECu;
label_1eadec:
    // 0x1eadec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eadecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eadf0: 0x2444008c  addiu       $a0, $v0, 0x8C
    ctx->pc = 0x1eadf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 140));
    // 0x1eadf4: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1EADF4u;
    SET_GPR_U32(ctx, 31, 0x1EADFCu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1EADF4u, 0x1EADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EADFCu;
label_1eadfc:
    // 0x1eadfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eadfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eae00: 0x24440098  addiu       $a0, $v0, 0x98
    ctx->pc = 0x1eae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    // 0x1eae04: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1EAE04u;
    SET_GPR_U32(ctx, 31, 0x1EAE0Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1EAE04u, 0x1EAE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE0Cu;
label_1eae0c:
    // 0x1eae0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1eae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eae10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eae10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eae14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1eae14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1eae18: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAE20u;
    // 0x1eae20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eae24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eae24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eae28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eae2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eae30: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1eae30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1eae34: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1eae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1eae38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eae3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eae3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae40: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1EAE40u;
    SET_GPR_U32(ctx, 31, 0x1EAE48u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1EAE40u, 0x1EAE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE48u;
label_1eae48:
    // 0x1eae48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eae4c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1eae4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1eae50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1eae50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eae54: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1EAE54u;
    SET_GPR_U32(ctx, 31, 0x1EAE5Cu);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1EAE54u, 0x1EAE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE5Cu;
label_1eae5c:
    // 0x1eae5c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eae60: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1eae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1eae64: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1EAE64u;
    SET_GPR_U32(ctx, 31, 0x1EAE6Cu);
    ctx->pc = 0x1EB020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB020u, 0x1EAE64u, 0x1EAE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE6Cu;
label_1eae6c:
    // 0x1eae6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eae6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EAE70u;
    {
        const bool branch_taken_0x1eae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eae70) {
            ctx->pc = 0x1EAEACu;
            goto label_1eaeac;
        }
    }
    ctx->pc = 0x1EAE78u;
label_1eae78:
    // 0x1eae78: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1eae78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1eae7c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1eae7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1eae80: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EAE80u;
    {
        const bool branch_taken_0x1eae80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eae80) {
            ctx->pc = 0x1EAEACu;
            goto label_1eaeac;
        }
    }
    ctx->pc = 0x1EAE88u;
    // 0x1eae88: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EAE88u;
    {
        const bool branch_taken_0x1eae88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eae88) {
            ctx->pc = 0x1EAEACu;
            goto label_1eaeac;
        }
    }
    ctx->pc = 0x1EAE90u;
    // 0x1eae90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae94: 0xc07ac00  jal         func_1EB000
    ctx->pc = 0x1EAE94u;
    SET_GPR_U32(ctx, 31, 0x1EAE9Cu);
    ctx->pc = 0x1EB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB000u, 0x1EAE94u, 0x1EAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE9Cu;
label_1eae9c:
    // 0x1eae9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaea0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1EAEA0u;
    SET_GPR_U32(ctx, 31, 0x1EAEA8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1EAEA0u, 0x1EAEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEA8u;
label_1eaea8:
    // 0x1eaea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eaea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eaeac:
    // 0x1eaeac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1eaeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eaeb0: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1eaeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1eaeb4: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1EAEB4u;
    SET_GPR_U32(ctx, 31, 0x1EAEBCu);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1EAEB4u, 0x1EAEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEBCu;
label_1eaebc:
    // 0x1eaebc: 0x1622ffee  bne         $s1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1EAEBCu;
    {
        const bool branch_taken_0x1eaebc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1eaebc) {
            ctx->pc = 0x1EAE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eae78;
        }
    }
    ctx->pc = 0x1EAEC4u;
    // 0x1eaec4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eaec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eaec8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EAEC8u;
    {
        const bool branch_taken_0x1eaec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaec8) {
            ctx->pc = 0x1EAEF8u;
            goto label_1eaef8;
        }
    }
    ctx->pc = 0x1EAED0u;
    // 0x1eaed0: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eaed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eaed4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EAED4u;
    {
        const bool branch_taken_0x1eaed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eaed4) {
            ctx->pc = 0x1EAEF8u;
            goto label_1eaef8;
        }
    }
    ctx->pc = 0x1EAEDCu;
    // 0x1eaedc: 0x8f84bb60  lw          $a0, -0x44A0($gp)
    ctx->pc = 0x1eaedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eaee0: 0xc07abc8  jal         func_1EAF20
    ctx->pc = 0x1EAEE0u;
    SET_GPR_U32(ctx, 31, 0x1EAEE8u);
    ctx->pc = 0x1EAF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAF20u, 0x1EAEE0u, 0x1EAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEE8u;
label_1eaee8:
    // 0x1eaee8: 0x8f84bb60  lw          $a0, -0x44A0($gp)
    ctx->pc = 0x1eaee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eaeec: 0xc119c5c  jal         func_467170
    ctx->pc = 0x1EAEECu;
    SET_GPR_U32(ctx, 31, 0x1EAEF4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1EAEECu, 0x1EAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAEF4u;
label_1eaef4:
    // 0x1eaef4: 0xaf80bb60  sw          $zero, -0x44A0($gp)
    ctx->pc = 0x1eaef4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949728), GPR_U32(ctx, 0));
label_1eaef8:
    // 0x1eaef8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1eaef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1eaefc: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1EAEFCu;
    SET_GPR_U32(ctx, 31, 0x1EAF04u);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1EAEFCu, 0x1EAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAF04u;
label_1eaf04:
    // 0x1eaf04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eaf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaf08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eaf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaf0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaf0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaf10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1eaf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1eaf14: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAF1Cu;
    // 0x1eaf1c: 0x0  nop
    ctx->pc = 0x1eaf1cu;
    // NOP
    ctx->pc = 0x1eaf20u;
}
