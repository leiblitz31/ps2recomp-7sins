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

// Function: sub_0045BA90
// Address: 0x45ba90 - 0x45bb70
void sub_0045BA90_0x45ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BA90_0x45ba90");
#endif

    switch (ctx->pc) {
        case 0x45bb00u: goto label_45bb00;
        default: break;
    }

    ctx->pc = 0x45ba90u;

    // 0x45ba90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45ba90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x45ba94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x45ba94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x45ba98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45ba9c: 0xdf82bf50  ld          $v0, -0x40B0($gp)
    ctx->pc = 0x45ba9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294950736)));
    // 0x45baa0: 0x2c410018  sltiu       $at, $v0, 0x18
    ctx->pc = 0x45baa0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x45baa4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x45BAA4u;
    {
        const bool branch_taken_0x45baa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45baa4) {
            ctx->pc = 0x45BAB8u;
            goto label_45bab8;
        }
    }
    ctx->pc = 0x45BAACu;
    // 0x45baac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45baacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45bab0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x45BAB0u;
    {
        const bool branch_taken_0x45bab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bab0) {
            ctx->pc = 0x45BB5Cu;
            goto label_45bb5c;
        }
    }
    ctx->pc = 0x45BAB8u;
label_45bab8:
    // 0x45bab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45babc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45babcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45bac0: 0x2782bf60  addiu       $v0, $gp, -0x40A0
    ctx->pc = 0x45bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950752));
    // 0x45bac4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45bac8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45bac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45bacc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45baccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x45bad0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45BAD0u;
    {
        const bool branch_taken_0x45bad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45bad0) {
            ctx->pc = 0x45BAE4u;
            goto label_45bae4;
        }
    }
    ctx->pc = 0x45BAD8u;
    // 0x45bad8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45bad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x45badc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x45BADCu;
    {
        const bool branch_taken_0x45badc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45badc) {
            ctx->pc = 0x45BB5Cu;
            goto label_45bb5c;
        }
    }
    ctx->pc = 0x45BAE4u;
label_45bae4:
    // 0x45bae4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45bae8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x45bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x45baec: 0x2782bf60  addiu       $v0, $gp, -0x40A0
    ctx->pc = 0x45baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950752));
    // 0x45baf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x45baf4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x45baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45baf8: 0xc0c40f6  jal         func_3103D8
    ctx->pc = 0x45BAF8u;
    SET_GPR_U32(ctx, 31, 0x45BB00u);
    ctx->pc = 0x3103D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3103D8u, 0x45BAF8u, 0x45BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45BB00u;
label_45bb00:
    // 0x45bb00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x45bb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45bb04: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x45BB04u;
    {
        const bool branch_taken_0x45bb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45bb04) {
            ctx->pc = 0x45BB58u;
            goto label_45bb58;
        }
    }
    ctx->pc = 0x45BB0Cu;
    // 0x45bb0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45bb10: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45BB10u;
    {
        const bool branch_taken_0x45bb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45bb10) {
            ctx->pc = 0x45BB4Cu;
            goto label_45bb4c;
        }
    }
    ctx->pc = 0x45BB18u;
    // 0x45bb18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45bb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45bb1c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x45BB1Cu;
    {
        const bool branch_taken_0x45bb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x45bb1c) {
            ctx->pc = 0x45BB40u;
            goto label_45bb40;
        }
    }
    ctx->pc = 0x45BB24u;
    // 0x45bb24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45BB24u;
    {
        const bool branch_taken_0x45bb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb24) {
            ctx->pc = 0x45BB34u;
            goto label_45bb34;
        }
    }
    ctx->pc = 0x45BB2Cu;
    // 0x45bb2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x45BB2Cu;
    {
        const bool branch_taken_0x45bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb2c) {
            ctx->pc = 0x45BB58u;
            goto label_45bb58;
        }
    }
    ctx->pc = 0x45BB34u;
label_45bb34:
    // 0x45bb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x45bb38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x45BB38u;
    {
        const bool branch_taken_0x45bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb38) {
            ctx->pc = 0x45BB5Cu;
            goto label_45bb5c;
        }
    }
    ctx->pc = 0x45BB40u;
label_45bb40:
    // 0x45bb40: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x45bb44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x45BB44u;
    {
        const bool branch_taken_0x45bb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb44) {
            ctx->pc = 0x45BB5Cu;
            goto label_45bb5c;
        }
    }
    ctx->pc = 0x45BB4Cu;
label_45bb4c:
    // 0x45bb4c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x45bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x45bb50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45BB50u;
    {
        const bool branch_taken_0x45bb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45bb50) {
            ctx->pc = 0x45BB5Cu;
            goto label_45bb5c;
        }
    }
    ctx->pc = 0x45BB58u;
label_45bb58:
    // 0x45bb58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45bb5c:
    // 0x45bb5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x45bb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45bb60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x45bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45bb64: 0x3e00008  jr          $ra
    ctx->pc = 0x45BB64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45BB64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45BB6Cu;
    // 0x45bb6c: 0x0  nop
    ctx->pc = 0x45bb6cu;
    // NOP
    ctx->pc = 0x45bb70u;
}
