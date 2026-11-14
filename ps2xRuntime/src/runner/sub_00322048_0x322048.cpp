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

// Function: sub_00322048
// Address: 0x322048 - 0x322108
void sub_00322048_0x322048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322048_0x322048");
#endif

    switch (ctx->pc) {
        case 0x3220c8u: goto label_3220c8;
        default: break;
    }

    ctx->pc = 0x322048u;

    // 0x322048: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x322048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x32204c: 0x8c43b1ac  lw          $v1, -0x4E54($v0)
    ctx->pc = 0x32204cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61B1ACu));
    // 0x322050: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x322050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x322054: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x322054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322058: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322058u;
    {
        const bool branch_taken_0x322058 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x32205Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322058u;
        // 0x32205c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322058) {
            ctx->pc = 0x32206Cu;
            goto label_32206c;
        }
    }
    ctx->pc = 0x322060u;
    // 0x322060: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x322060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x322064: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x322064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x322068: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x322068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_32206c:
    // 0x32206c: 0x3e00008  jr          $ra
    ctx->pc = 0x32206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32206Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322074u;
    // 0x322074: 0x0  nop
    ctx->pc = 0x322074u;
    // NOP
    // 0x322078: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x322078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32207c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x32207cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x322080: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x322080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x322084: 0x8c62b1ac  lw          $v0, -0x4E54($v1)
    ctx->pc = 0x322084u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61B1ACu));
    // 0x322088: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x322088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32208c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x32208cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x322090: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x322090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322098: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x322098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x32209c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3220a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3220a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3220a4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3220A4u;
    {
        const bool branch_taken_0x3220a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220A4u;
        // 0x3220a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220a4) {
            ctx->pc = 0x3220ECu;
            goto label_3220ec;
        }
    }
    ctx->pc = 0x3220ACu;
    // 0x3220ac: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x3220acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x3220b0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x3220b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3220b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3220b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3220b8: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3220B8u;
    {
        const bool branch_taken_0x3220b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x3220BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220B8u;
        // 0x3220bc: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220b8) {
            ctx->pc = 0x3220C8u;
            goto label_3220c8;
        }
    }
    ctx->pc = 0x3220C0u;
    // 0x3220c0: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x3220C0u;
    SET_GPR_U32(ctx, 31, 0x3220C8u);
    ctx->pc = 0x3220C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3220C0u;
    // 0x3220c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x3220C0u, 0x3220C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3220C8u;
label_3220c8:
    // 0x3220c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3220c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3220cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3220CCu;
    {
        const bool branch_taken_0x3220cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3220D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3220CCu;
        // 0x3220d0: 0xae110014  sw          $s1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3220cc) {
            ctx->pc = 0x3220E8u;
            goto label_3220e8;
        }
    }
    ctx->pc = 0x3220D4u;
    // 0x3220d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3220d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3220d8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3220D8u;
    {
        const bool branch_taken_0x3220d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3220d8) {
            ctx->pc = 0x3220DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3220D8u;
            // 0x3220dc: 0xae420048  sw          $v0, 0x48($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3220E0u;
            goto label_3220e0;
        }
    }
    ctx->pc = 0x3220E0u;
label_3220e0:
    // 0x3220e0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3220e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3220e4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3220e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3220e8:
    // 0x3220e8: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x3220e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3220ec:
    // 0x3220ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3220ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3220f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3220f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3220f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3220f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3220f8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3220f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3220fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3220fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322100: 0x3e00008  jr          $ra
    ctx->pc = 0x322100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322100u;
        // 0x322104: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322108u;
}
