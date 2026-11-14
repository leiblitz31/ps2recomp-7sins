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

// Function: sub_00435508
// Address: 0x435508 - 0x435580
void sub_00435508_0x435508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435508_0x435508");
#endif

    switch (ctx->pc) {
        case 0x435544u: goto label_435544;
        default: break;
    }

    ctx->pc = 0x435508u;

    // 0x435508: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x435508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43550c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x43550cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x435510: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x435510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x435514: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x435514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x435518: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x435518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43551c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x435520: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x435520u;
    {
        const bool branch_taken_0x435520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x435524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435520u;
        // 0x435524: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435520) {
            ctx->pc = 0x435564u;
            goto label_435564;
        }
    }
    ctx->pc = 0x435528u;
    // 0x435528: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x435528u;
    {
        const bool branch_taken_0x435528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x43552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435528u;
        // 0x43552c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435528) {
            ctx->pc = 0x435568u;
            goto label_435568;
        }
    }
    ctx->pc = 0x435530u;
    // 0x435530: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x435530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x435534: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x435534u;
    {
        const bool branch_taken_0x435534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435534u;
        // 0x435538: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435534) {
            ctx->pc = 0x435564u;
            goto label_435564;
        }
    }
    ctx->pc = 0x43553Cu;
    // 0x43553c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x43553Cu;
    SET_GPR_U32(ctx, 31, 0x435544u);
    ctx->pc = 0x435540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43553Cu;
    // 0x435540: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x43553Cu, 0x435544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435544u;
label_435544:
    // 0x435544: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x435544u;
    {
        const bool branch_taken_0x435544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435544u;
        // 0x435548: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435544) {
            ctx->pc = 0x435564u;
            goto label_435564;
        }
    }
    ctx->pc = 0x43554Cu;
    // 0x43554c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x43554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x435550: 0x8f84beb8  lw          $a0, -0x4148($gp)
    ctx->pc = 0x435550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x435554: 0x97a50000  lhu         $a1, 0x0($sp)
    ctx->pc = 0x435554u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435558: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x435558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x43555c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x43555Cu;
    {
        const bool branch_taken_0x43555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43555Cu;
        // 0x435560: 0xa4650014  sh          $a1, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43555c) {
            ctx->pc = 0x435568u;
            goto label_435568;
        }
    }
    ctx->pc = 0x435564u;
label_435564:
    // 0x435564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x435564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_435568:
    // 0x435568: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x435568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43556c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43556cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435574: 0x3e00008  jr          $ra
    ctx->pc = 0x435574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435574u;
        // 0x435578: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43557Cu;
    // 0x43557c: 0x0  nop
    ctx->pc = 0x43557cu;
    // NOP
    ctx->pc = 0x435580u;
}
