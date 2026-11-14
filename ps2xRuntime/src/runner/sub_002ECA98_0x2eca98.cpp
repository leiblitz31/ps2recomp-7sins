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

// Function: sub_002ECA98
// Address: 0x2eca98 - 0x2ecaf8
void sub_002ECA98_0x2eca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECA98_0x2eca98");
#endif

    switch (ctx->pc) {
        case 0x2ecac4u: goto label_2ecac4;
        default: break;
    }

    ctx->pc = 0x2eca98u;

    // 0x2eca98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2eca98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2eca9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x2eca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x2ecaa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ecaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ecaa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ecaa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecaa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ecaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ecaac: 0x2451f6b4  addiu       $s1, $v0, -0x94C
    ctx->pc = 0x2ecaacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964916));
    // 0x2ecab0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2ecab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecab4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ecab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecab8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ecab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ecabc: 0xc0bf8c6  jal         func_2FE318
    ctx->pc = 0x2ECABCu;
    SET_GPR_U32(ctx, 31, 0x2ECAC4u);
    ctx->pc = 0x2ECAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ECABCu;
    // 0x2ecac0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE318u, 0x2ECABCu, 0x2ECAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECAC4u;
label_2ecac4:
    // 0x2ecac4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ecac4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecac8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2ecac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ecacc: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ECACCu;
    {
        const bool branch_taken_0x2ecacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2ecacc) {
            ctx->pc = 0x2ECAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECACCu;
            // 0x2ecad0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECAE4u;
            goto label_2ecae4;
        }
    }
    ctx->pc = 0x2ECAD4u;
    // 0x2ecad4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ecad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ecad8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2ECAD8u;
    {
        const bool branch_taken_0x2ecad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ecad8) {
            ctx->pc = 0x2ECADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECAD8u;
            // 0x2ecadc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECAE0u;
            goto label_2ecae0;
        }
    }
    ctx->pc = 0x2ECAE0u;
label_2ecae0:
    // 0x2ecae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ecae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ecae4:
    // 0x2ecae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ecae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ecae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ecae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ecaec: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECAECu;
        // 0x2ecaf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECAF4u;
    // 0x2ecaf4: 0x0  nop
    ctx->pc = 0x2ecaf4u;
    // NOP
    ctx->pc = 0x2ecaf8u;
}
