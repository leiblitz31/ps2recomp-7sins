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

// Function: sub_004B5090
// Address: 0x4b5090 - 0x4b5120
void sub_004B5090_0x4b5090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B5090_0x4b5090");
#endif

    switch (ctx->pc) {
        case 0x4b50d8u: goto label_4b50d8;
        case 0x4b50f4u: goto label_4b50f4;
        case 0x4b5108u: goto label_4b5108;
        default: break;
    }

    ctx->pc = 0x4b5090u;

    // 0x4b5090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b5090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b5094: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4b5094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4b5098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b5098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4b509c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b509cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b50a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b50a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b50a4: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x4b50a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x4b50a8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4b50a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4b50ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B50ACu;
    {
        const bool branch_taken_0x4b50ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B50B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50ACu;
        // 0x4b50b0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50ac) {
            ctx->pc = 0x4B50C0u;
            goto label_4b50c0;
        }
    }
    ctx->pc = 0x4B50B4u;
    // 0x4b50b4: 0x306200fe  andi        $v0, $v1, 0xFE
    ctx->pc = 0x4b50b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
    // 0x4b50b8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x4b50b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b50bc: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x4b50bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
label_4b50c0:
    // 0x4b50c0: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x4b50c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x4b50c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x4b50c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4b50c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B50C8u;
    {
        const bool branch_taken_0x4b50c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b50c8) {
            ctx->pc = 0x4B50CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B50C8u;
            // 0x4b50cc: 0x92020009  lbu         $v0, 0x9($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B50DCu;
            goto label_4b50dc;
        }
    }
    ctx->pc = 0x4B50D0u;
    // 0x4b50d0: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4B50D0u;
    SET_GPR_U32(ctx, 31, 0x4B50D8u);
    ctx->pc = 0x4B50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B50D0u;
    // 0x4b50d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4B50D0u, 0x4B50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B50D8u;
label_4b50d8:
    // 0x4b50d8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x4b50d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_4b50dc:
    // 0x4b50dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b50dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4b50e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B50E0u;
    {
        const bool branch_taken_0x4b50e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B50E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50E0u;
        // 0x4b50e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50e0) {
            ctx->pc = 0x4B50F4u;
            goto label_4b50f4;
        }
    }
    ctx->pc = 0x4B50E8u;
    // 0x4b50e8: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b50e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b50ec: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4B50ECu;
    SET_GPR_U32(ctx, 31, 0x4B50F4u);
    ctx->pc = 0x4B50F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B50ECu;
    // 0x4b50f0: 0x2484f668  addiu       $a0, $a0, -0x998 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4B50ECu, 0x4B50F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B50F4u;
label_4b50f4:
    // 0x4b50f4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B50F4u;
    {
        const bool branch_taken_0x4b50f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B50F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B50F4u;
        // 0x4b50f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b50f4) {
            ctx->pc = 0x4B5108u;
            goto label_4b5108;
        }
    }
    ctx->pc = 0x4B50FCu;
    // 0x4b50fc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b50fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x4b5100: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4B5100u;
    SET_GPR_U32(ctx, 31, 0x4B5108u);
    ctx->pc = 0x4B5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B5100u;
    // 0x4b5104: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4B5100u, 0x4B5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B5108u;
label_4b5108:
    // 0x4b5108: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4b5108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b510c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b510cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b5110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b5110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b5114: 0x3e00008  jr          $ra
    ctx->pc = 0x4B5114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B5114u;
        // 0x4b5118: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B5114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B511Cu;
    // 0x4b511c: 0x0  nop
    ctx->pc = 0x4b511cu;
    // NOP
    ctx->pc = 0x4b5120u;
}
