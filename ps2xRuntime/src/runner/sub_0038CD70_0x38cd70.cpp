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

// Function: sub_0038CD70
// Address: 0x38cd70 - 0x38cdf8
void sub_0038CD70_0x38cd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CD70_0x38cd70");
#endif

    switch (ctx->pc) {
        case 0x38cda8u: goto label_38cda8;
        case 0x38cdbcu: goto label_38cdbc;
        default: break;
    }

    ctx->pc = 0x38cd70u;

    // 0x38cd70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38cd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x38cd74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x38cd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x38cd78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38cd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x38cd7c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38cd7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cd80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x38cd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x38cd84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38cd84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cd88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x38cd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x38cd8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x38cd8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cd90: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x38CD90u;
    {
        const bool branch_taken_0x38cd90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CD90u;
        // 0x38cd94: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cd90) {
            ctx->pc = 0x38CDCCu;
            goto label_38cdcc;
        }
    }
    ctx->pc = 0x38CD98u;
    // 0x38cd98: 0x26710020  addiu       $s1, $s3, 0x20
    ctx->pc = 0x38cd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x38cd9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38cd9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cda0: 0xc0e3e2a  jal         func_38F8A8
    ctx->pc = 0x38CDA0u;
    SET_GPR_U32(ctx, 31, 0x38CDA8u);
    ctx->pc = 0x38CDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CDA0u;
    // 0x38cda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F8A8u, 0x38CDA0u, 0x38CDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CDA8u;
label_38cda8:
    // 0x38cda8: 0x443000a  bgezl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x38CDA8u;
    {
        const bool branch_taken_0x38cda8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x38cda8) {
            ctx->pc = 0x38CDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CDA8u;
            // 0x38cdac: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CDD4u;
            goto label_38cdd4;
        }
    }
    ctx->pc = 0x38CDB0u;
    // 0x38cdb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38cdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cdb4: 0xc0e3b14  jal         func_38EC50
    ctx->pc = 0x38CDB4u;
    SET_GPR_U32(ctx, 31, 0x38CDBCu);
    ctx->pc = 0x38CDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CDB4u;
    // 0x38cdb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC50u, 0x38CDB4u, 0x38CDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CDBCu;
label_38cdbc:
    // 0x38cdbc: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CDBCu;
    {
        const bool branch_taken_0x38cdbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x38cdbc) {
            ctx->pc = 0x38CDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CDBCu;
            // 0x38cdc0: 0xa6420006  sh          $v0, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CDD4u;
            goto label_38cdd4;
        }
    }
    ctx->pc = 0x38CDC4u;
    // 0x38cdc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38CDC4u;
    {
        const bool branch_taken_0x38cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDC4u;
        // 0x38cdc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cdc4) {
            ctx->pc = 0x38CDD8u;
            goto label_38cdd8;
        }
    }
    ctx->pc = 0x38CDCCu;
label_38cdcc:
    // 0x38cdcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x38cdccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x38cdd0: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x38cdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_38cdd4:
    // 0x38cdd4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x38cdd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_38cdd8:
    // 0x38cdd8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x38cdd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38cddc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x38cddcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38cde0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38cde0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38cde4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x38cde4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cde8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38cde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cdec: 0x3e00008  jr          $ra
    ctx->pc = 0x38CDECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CDECu;
        // 0x38cdf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CDECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CDF4u;
    // 0x38cdf4: 0x0  nop
    ctx->pc = 0x38cdf4u;
    // NOP
    ctx->pc = 0x38cdf8u;
}
