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

// Function: sub_00389730
// Address: 0x389730 - 0x389798
void sub_00389730_0x389730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389730_0x389730");
#endif

    switch (ctx->pc) {
        case 0x389758u: goto label_389758;
        case 0x389770u: goto label_389770;
        default: break;
    }

    ctx->pc = 0x389730u;

    // 0x389730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x389734: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x389734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x389738: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x38973c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38973cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389744: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x389744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389748: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x389748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38974c: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x38974cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x389750: 0xc103440  jal         func_40D100
    ctx->pc = 0x389750u;
    SET_GPR_U32(ctx, 31, 0x389758u);
    ctx->pc = 0x389754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389750u;
    // 0x389754: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x389750u, 0x389758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389758u;
label_389758:
    // 0x389758: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x389758u;
    {
        const bool branch_taken_0x389758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389758u;
        // 0x38975c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389758) {
            ctx->pc = 0x38977Cu;
            goto label_38977c;
        }
    }
    ctx->pc = 0x389760u;
    // 0x389760: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x389760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x389764: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x389764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x389768: 0xc103440  jal         func_40D100
    ctx->pc = 0x389768u;
    SET_GPR_U32(ctx, 31, 0x389770u);
    ctx->pc = 0x38976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389768u;
    // 0x38976c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x389768u, 0x389770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389770u;
label_389770:
    // 0x389770: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x389770u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x389774: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x389774u;
    {
        const bool branch_taken_0x389774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389774u;
        // 0x389778: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389774) {
            ctx->pc = 0x389780u;
            goto label_389780;
        }
    }
    ctx->pc = 0x38977Cu;
label_38977c:
    // 0x38977c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38977cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389780:
    // 0x389780: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x389780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389784: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389784u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38978c: 0x3e00008  jr          $ra
    ctx->pc = 0x38978Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38978Cu;
        // 0x389790: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38978Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389794u;
    // 0x389794: 0x0  nop
    ctx->pc = 0x389794u;
    // NOP
    ctx->pc = 0x389798u;
}
