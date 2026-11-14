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

// Function: sub_004126B8
// Address: 0x4126b8 - 0x412730
void sub_004126B8_0x4126b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004126B8_0x4126b8");
#endif

    switch (ctx->pc) {
        case 0x4126f0u: goto label_4126f0;
        default: break;
    }

    ctx->pc = 0x4126b8u;

    // 0x4126b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4126b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4126bc: 0xaf85bdd8  sw          $a1, -0x4228($gp)
    ctx->pc = 0x4126bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950360), GPR_U32(ctx, 5));
    // 0x4126c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4126c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4126c4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x4126c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x4126c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4126c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4126cc: 0x8f85ad38  lw          $a1, -0x52C8($gp)
    ctx->pc = 0x4126ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946104)));
    // 0x4126d0: 0x8f87ad3c  lw          $a3, -0x52C4($gp)
    ctx->pc = 0x4126d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946108)));
    // 0x4126d4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4126d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4126d8: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x4126d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x4126dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4126dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4126e0: 0x2508e7e0  addiu       $t0, $t0, -0x1820
    ctx->pc = 0x4126e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961120));
    // 0x4126e4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4126e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4126e8: 0xc10408c  jal         func_410230
    ctx->pc = 0x4126E8u;
    SET_GPR_U32(ctx, 31, 0x4126F0u);
    ctx->pc = 0x4126ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4126E8u;
    // 0x4126ec: 0x35290404  ori         $t1, $t1, 0x404 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x4126E8u, 0x4126F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4126F0u;
label_4126f0:
    // 0x4126f0: 0x8f84bdd8  lw          $a0, -0x4228($gp)
    ctx->pc = 0x4126f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950360)));
    // 0x4126f4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4126f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x4126f8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4126f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x4126fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4126fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x412700: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x412700u;
    {
        const bool branch_taken_0x412700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412700u;
        // 0x412704: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412700) {
            ctx->pc = 0x41271Cu;
            goto label_41271c;
        }
    }
    ctx->pc = 0x412708u;
    // 0x412708: 0x8f83bddc  lw          $v1, -0x4224($gp)
    ctx->pc = 0x412708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950364)));
    // 0x41270c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x412710: 0xaf83bddc  sw          $v1, -0x4224($gp)
    ctx->pc = 0x412710u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950364), GPR_U32(ctx, 3));
    // 0x412714: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x412714u;
    {
        const bool branch_taken_0x412714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412714u;
        // 0x412718: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412714) {
            ctx->pc = 0x412720u;
            goto label_412720;
        }
    }
    ctx->pc = 0x41271Cu;
label_41271c:
    // 0x41271c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41271cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412720:
    // 0x412720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x412720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x412724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x412724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x412728: 0x3e00008  jr          $ra
    ctx->pc = 0x412728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412728u;
        // 0x41272c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412730u;
}
