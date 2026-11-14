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

// Function: sub_0038E470
// Address: 0x38e470 - 0x38e4f0
void sub_0038E470_0x38e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E470_0x38e470");
#endif

    switch (ctx->pc) {
        case 0x38e4acu: goto label_38e4ac;
        default: break;
    }

    ctx->pc = 0x38e470u;

    // 0x38e470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38e470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38e474: 0xaf85bd40  sw          $a1, -0x42C0($gp)
    ctx->pc = 0x38e474u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950208), GPR_U32(ctx, 5));
    // 0x38e478: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38e478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38e47c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x38e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x38e480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38e480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e484: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x38e484u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x38e488: 0x8c44ae00  lw          $a0, -0x5200($v0)
    ctx->pc = 0x38e488u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DAE00u));
    // 0x38e48c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x38e48cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x38e490: 0x8f85a9b8  lw          $a1, -0x5648($gp)
    ctx->pc = 0x38e490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945208)));
    // 0x38e494: 0x2508c550  addiu       $t0, $t0, -0x3AB0
    ctx->pc = 0x38e494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952272));
    // 0x38e498: 0x8f87a9bc  lw          $a3, -0x5644($gp)
    ctx->pc = 0x38e498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945212)));
    // 0x38e49c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x38e49cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e4a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38e4a4: 0xc10408c  jal         func_410230
    ctx->pc = 0x38E4A4u;
    SET_GPR_U32(ctx, 31, 0x38E4ACu);
    ctx->pc = 0x38E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E4A4u;
    // 0x38e4a8: 0x35290007  ori         $t1, $t1, 0x7 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)7);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x38E4A4u, 0x38E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4ACu;
label_38e4ac:
    // 0x38e4ac: 0x8f84bd40  lw          $a0, -0x42C0($gp)
    ctx->pc = 0x38e4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950208)));
    // 0x38e4b0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x38e4b4: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x38e4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x38e4b8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x38e4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x38e4bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38E4BCu;
    {
        const bool branch_taken_0x38e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4BCu;
        // 0x38e4c0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e4bc) {
            ctx->pc = 0x38E4D8u;
            goto label_38e4d8;
        }
    }
    ctx->pc = 0x38E4C4u;
    // 0x38e4c4: 0x8f83bd44  lw          $v1, -0x42BC($gp)
    ctx->pc = 0x38e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950212)));
    // 0x38e4c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38e4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x38e4cc: 0xaf83bd44  sw          $v1, -0x42BC($gp)
    ctx->pc = 0x38e4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950212), GPR_U32(ctx, 3));
    // 0x38e4d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38E4D0u;
    {
        const bool branch_taken_0x38e4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4D0u;
        // 0x38e4d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e4d0) {
            ctx->pc = 0x38E4DCu;
            goto label_38e4dc;
        }
    }
    ctx->pc = 0x38E4D8u;
label_38e4d8:
    // 0x38e4d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38e4d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38e4dc:
    // 0x38e4dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38e4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38e4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38e4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x38E4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4E4u;
        // 0x38e4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E4ECu;
    // 0x38e4ec: 0x0  nop
    ctx->pc = 0x38e4ecu;
    // NOP
    ctx->pc = 0x38e4f0u;
}
