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

// Function: sub_00389548
// Address: 0x389548 - 0x389618
void sub_00389548_0x389548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389548_0x389548");
#endif

    switch (ctx->pc) {
        case 0x389588u: goto label_389588;
        case 0x3895c8u: goto label_3895c8;
        case 0x3895f4u: goto label_3895f4;
        default: break;
    }

    ctx->pc = 0x389548u;

    // 0x389548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x389548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38954c: 0xaf85bd20  sw          $a1, -0x42E0($gp)
    ctx->pc = 0x38954cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950176), GPR_U32(ctx, 5));
    // 0x389550: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x389550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x389554: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x389554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x389558: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x389558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38955c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x38955cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x389560: 0x8c44ada0  lw          $a0, -0x5260($v0)
    ctx->pc = 0x389560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DADA0u));
    // 0x389564: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x389564u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x389568: 0x8f85a990  lw          $a1, -0x5670($gp)
    ctx->pc = 0x389568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945168)));
    // 0x38956c: 0x2508c4d8  addiu       $t0, $t0, -0x3B28
    ctx->pc = 0x38956cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952152));
    // 0x389570: 0x8f87a994  lw          $a3, -0x566C($gp)
    ctx->pc = 0x389570u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945172)));
    // 0x389574: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x389574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x389578: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x389578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38957c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389580: 0xc10408c  jal         func_410230
    ctx->pc = 0x389580u;
    SET_GPR_U32(ctx, 31, 0x389588u);
    ctx->pc = 0x389584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389580u;
    // 0x389584: 0x35290010  ori         $t1, $t1, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x389580u, 0x389588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389588u;
label_389588:
    // 0x389588: 0x8f84bd20  lw          $a0, -0x42E0($gp)
    ctx->pc = 0x389588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x38958c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x38958cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x389590: 0x2470e880  addiu       $s0, $v1, -0x1780
    ctx->pc = 0x389590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
    // 0x389594: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x389594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x389598: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x389598u;
    {
        const bool branch_taken_0x389598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389598u;
        // 0x38959c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389598) {
            ctx->pc = 0x389600u;
            goto label_389600;
        }
    }
    ctx->pc = 0x3895A0u;
    // 0x3895a0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3895a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3895a4: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3895a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3895a8: 0x8c44adb8  lw          $a0, -0x5248($v0)
    ctx->pc = 0x3895a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DADB8u));
    // 0x3895ac: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3895acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x3895b0: 0x8f85a998  lw          $a1, -0x5668($gp)
    ctx->pc = 0x3895b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945176)));
    // 0x3895b4: 0x2508c500  addiu       $t0, $t0, -0x3B00
    ctx->pc = 0x3895b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952192));
    // 0x3895b8: 0x8f87a99c  lw          $a3, -0x5664($gp)
    ctx->pc = 0x3895b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945180)));
    // 0x3895bc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3895bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3895c0: 0xc10408c  jal         func_410230
    ctx->pc = 0x3895C0u;
    SET_GPR_U32(ctx, 31, 0x3895C8u);
    ctx->pc = 0x3895C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3895C0u;
    // 0x3895c4: 0x35290014  ori         $t1, $t1, 0x14 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)20);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3895C0u, 0x3895C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3895C8u;
label_3895c8:
    // 0x3895c8: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x3895c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x3895cc: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3895ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3895d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3895D0u;
    {
        const bool branch_taken_0x3895d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3895D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895D0u;
        // 0x3895d4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3895d0) {
            ctx->pc = 0x3895ECu;
            goto label_3895ec;
        }
    }
    ctx->pc = 0x3895D8u;
    // 0x3895d8: 0x8f83bd24  lw          $v1, -0x42DC($gp)
    ctx->pc = 0x3895d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950180)));
    // 0x3895dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3895dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3895e0: 0xaf83bd24  sw          $v1, -0x42DC($gp)
    ctx->pc = 0x3895e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950180), GPR_U32(ctx, 3));
    // 0x3895e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3895E4u;
    {
        const bool branch_taken_0x3895e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3895E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895E4u;
        // 0x3895e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3895e4) {
            ctx->pc = 0x389604u;
            goto label_389604;
        }
    }
    ctx->pc = 0x3895ECu;
label_3895ec:
    // 0x3895ec: 0xc104284  jal         func_410A10
    ctx->pc = 0x3895ECu;
    SET_GPR_U32(ctx, 31, 0x3895F4u);
    ctx->pc = 0x3895F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3895ECu;
    // 0x3895f0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410A10u, 0x3895ECu, 0x3895F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3895F4u;
label_3895f4:
    // 0x3895f4: 0x8f83bd20  lw          $v1, -0x42E0($gp)
    ctx->pc = 0x3895f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950176)));
    // 0x3895f8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x3895f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x3895fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3895fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_389600:
    // 0x389600: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389600u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_389604:
    // 0x389604: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x389604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x389608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38960c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38960cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389610: 0x3e00008  jr          $ra
    ctx->pc = 0x389610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389610u;
        // 0x389614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389618u;
}
