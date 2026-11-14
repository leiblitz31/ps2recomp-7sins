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

// Function: sub_00354928
// Address: 0x354928 - 0x3549b8
void sub_00354928_0x354928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354928_0x354928");
#endif

    switch (ctx->pc) {
        case 0x354970u: goto label_354970;
        case 0x354984u: goto label_354984;
        case 0x35498cu: goto label_35498c;
        default: break;
    }

    ctx->pc = 0x354928u;

    // 0x354928: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x354928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35492c: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x35492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354930: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x354930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x354934: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x354934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x354938: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x354938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x35493c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x354940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x354940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x354944: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x354944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354948: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x354948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x35494c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x35494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x354950: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x354950u;
    {
        const bool branch_taken_0x354950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x354954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354950u;
        // 0x354954: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354950) {
            ctx->pc = 0x3549A4u;
            goto label_3549a4;
        }
    }
    ctx->pc = 0x354958u;
    // 0x354958: 0x8c91009c  lw          $s1, 0x9C($a0)
    ctx->pc = 0x354958u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x35495c: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x35495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x354960: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x354960u;
    {
        const bool branch_taken_0x354960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354960u;
        // 0x354964: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354960) {
            ctx->pc = 0x3549A4u;
            goto label_3549a4;
        }
    }
    ctx->pc = 0x354968u;
    // 0x354968: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x354968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x35496c: 0x0  nop
    ctx->pc = 0x35496cu;
    // NOP
label_354970:
    // 0x354970: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x354970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x354974: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x354974u;
    {
        const bool branch_taken_0x354974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x354974) {
            ctx->pc = 0x354978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354974u;
            // 0x354978: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354990u;
            goto label_354990;
        }
    }
    ctx->pc = 0x35497Cu;
    // 0x35497c: 0xc10a024  jal         func_428090
    ctx->pc = 0x35497Cu;
    SET_GPR_U32(ctx, 31, 0x354984u);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x35497Cu, 0x354984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354984u;
label_354984:
    // 0x354984: 0xc10a024  jal         func_428090
    ctx->pc = 0x354984u;
    SET_GPR_U32(ctx, 31, 0x35498Cu);
    ctx->pc = 0x428090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428090u, 0x354984u, 0x35498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35498Cu;
label_35498c:
    // 0x35498c: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x35498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
label_354990:
    // 0x354990: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x354990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x354994: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x354994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x354998: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x354998u;
    {
        const bool branch_taken_0x354998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354998u;
        // 0x35499c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354998) {
            ctx->pc = 0x354970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_354970;
        }
    }
    ctx->pc = 0x3549A0u;
    // 0x3549a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3549a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3549a4:
    // 0x3549a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3549a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3549a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3549a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3549ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3549acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3549b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3549B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3549B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549B0u;
        // 0x3549b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3549B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3549B8u;
}
