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

// Function: sub_00414398
// Address: 0x414398 - 0x414410
void sub_00414398_0x414398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00414398_0x414398");
#endif

    switch (ctx->pc) {
        case 0x4143d0u: goto label_4143d0;
        default: break;
    }

    ctx->pc = 0x414398u;

    // 0x414398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x414398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41439c: 0xaf85bdf0  sw          $a1, -0x4210($gp)
    ctx->pc = 0x41439cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950384), GPR_U32(ctx, 5));
    // 0x4143a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4143a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4143a4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4143a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x4143a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4143a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4143ac: 0x8f85ad64  lw          $a1, -0x529C($gp)
    ctx->pc = 0x4143acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946148)));
    // 0x4143b0: 0x8f87ad68  lw          $a3, -0x5298($gp)
    ctx->pc = 0x4143b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946152)));
    // 0x4143b4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4143b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4143b8: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x4143b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x4143bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4143bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4143c0: 0x2508e830  addiu       $t0, $t0, -0x17D0
    ctx->pc = 0x4143c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961200));
    // 0x4143c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4143c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4143c8: 0xc10408c  jal         func_410230
    ctx->pc = 0x4143C8u;
    SET_GPR_U32(ctx, 31, 0x4143D0u);
    ctx->pc = 0x4143CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4143C8u;
    // 0x4143cc: 0x35290412  ori         $t1, $t1, 0x412 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1042);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x4143C8u, 0x4143D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4143D0u;
label_4143d0:
    // 0x4143d0: 0x8f84bdf0  lw          $a0, -0x4210($gp)
    ctx->pc = 0x4143d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950384)));
    // 0x4143d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4143d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4143d8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4143d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4143dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4143dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4143e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4143E0u;
    {
        const bool branch_taken_0x4143e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4143E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4143E0u;
        // 0x4143e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4143e0) {
            ctx->pc = 0x4143FCu;
            goto label_4143fc;
        }
    }
    ctx->pc = 0x4143E8u;
    // 0x4143e8: 0x8f83bdf4  lw          $v1, -0x420C($gp)
    ctx->pc = 0x4143e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950388)));
    // 0x4143ec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4143ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4143f0: 0xaf83bdf4  sw          $v1, -0x420C($gp)
    ctx->pc = 0x4143f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950388), GPR_U32(ctx, 3));
    // 0x4143f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4143F4u;
    {
        const bool branch_taken_0x4143f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4143F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4143F4u;
        // 0x4143f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4143f4) {
            ctx->pc = 0x414400u;
            goto label_414400;
        }
    }
    ctx->pc = 0x4143FCu;
label_4143fc:
    // 0x4143fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4143fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_414400:
    // 0x414400: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x414400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x414404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x414404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x414408: 0x3e00008  jr          $ra
    ctx->pc = 0x414408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x414408u;
        // 0x41440c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x414408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x414410u;
}
