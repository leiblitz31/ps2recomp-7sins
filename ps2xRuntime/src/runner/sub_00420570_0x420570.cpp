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

// Function: sub_00420570
// Address: 0x420570 - 0x420610
void sub_00420570_0x420570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420570_0x420570");
#endif

    switch (ctx->pc) {
        case 0x420570u: goto label_420570;
        case 0x420574u: goto label_420574;
        case 0x420578u: goto label_420578;
        case 0x42057cu: goto label_42057c;
        case 0x420580u: goto label_420580;
        case 0x420584u: goto label_420584;
        case 0x420588u: goto label_420588;
        case 0x42058cu: goto label_42058c;
        case 0x420590u: goto label_420590;
        case 0x420594u: goto label_420594;
        case 0x420598u: goto label_420598;
        case 0x42059cu: goto label_42059c;
        case 0x4205a0u: goto label_4205a0;
        case 0x4205a4u: goto label_4205a4;
        case 0x4205a8u: goto label_4205a8;
        case 0x4205acu: goto label_4205ac;
        case 0x4205b0u: goto label_4205b0;
        case 0x4205b4u: goto label_4205b4;
        case 0x4205b8u: goto label_4205b8;
        case 0x4205bcu: goto label_4205bc;
        case 0x4205c0u: goto label_4205c0;
        case 0x4205c4u: goto label_4205c4;
        case 0x4205c8u: goto label_4205c8;
        case 0x4205ccu: goto label_4205cc;
        case 0x4205d0u: goto label_4205d0;
        case 0x4205d4u: goto label_4205d4;
        case 0x4205d8u: goto label_4205d8;
        case 0x4205dcu: goto label_4205dc;
        case 0x4205e0u: goto label_4205e0;
        case 0x4205e4u: goto label_4205e4;
        case 0x4205e8u: goto label_4205e8;
        case 0x4205ecu: goto label_4205ec;
        case 0x4205f0u: goto label_4205f0;
        case 0x4205f4u: goto label_4205f4;
        case 0x4205f8u: goto label_4205f8;
        case 0x4205fcu: goto label_4205fc;
        case 0x420600u: goto label_420600;
        case 0x420604u: goto label_420604;
        case 0x420608u: goto label_420608;
        case 0x42060cu: goto label_42060c;
        default: break;
    }

    ctx->pc = 0x420570u;

label_420570:
    // 0x420570: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_420574:
    // 0x420574: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_420578:
    // 0x420578: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42057c:
    // 0x42057c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x42057cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_420580:
    // 0x420580: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420580u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_420584:
    // 0x420584: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_420588:
    // 0x420588: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x420588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42058c:
    // 0x42058c: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x42058cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_420590:
    // 0x420590: 0x2610e880  addiu       $s0, $s0, -0x1780
    ctx->pc = 0x420590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961280));
label_420594:
    // 0x420594: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x420594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_420598:
    // 0x420598: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x420598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_42059c:
    // 0x42059c: 0x40f809  jalr        $v0
label_4205a0:
    if (ctx->pc == 0x4205A0u) {
        ctx->pc = 0x4205A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42059Cu;
        // 0x4205a0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205A4u;
        goto label_4205a4;
    }
    ctx->pc = 0x42059Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4205A4u);
        ctx->pc = 0x4205A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42059Cu;
        // 0x4205a0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42059Cu, 0x4205A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4205A4u;
label_4205a4:
    // 0x4205a4: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x4205a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_4205a8:
    // 0x4205a8: 0x40f809  jalr        $v0
label_4205ac:
    if (ctx->pc == 0x4205ACu) {
        ctx->pc = 0x4205ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205A8u;
        // 0x4205ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205B0u;
        goto label_4205b0;
    }
    ctx->pc = 0x4205A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4205B0u);
        ctx->pc = 0x4205ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205A8u;
        // 0x4205ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4205A8u, 0x4205B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4205B0u;
label_4205b0:
    // 0x4205b0: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x4205b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_4205b4:
    // 0x4205b4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_4205b8:
    if (ctx->pc == 0x4205B8u) {
        ctx->pc = 0x4205B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205B4u;
        // 0x4205b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205BCu;
        goto label_4205bc;
    }
    ctx->pc = 0x4205B4u;
    {
        const bool branch_taken_0x4205b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4205B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205B4u;
        // 0x4205b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4205b4) {
            ctx->pc = 0x4205F0u;
            goto label_4205f0;
        }
    }
    ctx->pc = 0x4205BCu;
label_4205bc:
    // 0x4205bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4205bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4205c0:
    // 0x4205c0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4205c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4205c4:
    // 0x4205c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4205c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4205c8:
    // 0x4205c8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x4205c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4205cc:
    // 0x4205cc: 0x2407001f  addiu       $a3, $zero, 0x1F
    ctx->pc = 0x4205ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_4205d0:
    // 0x4205d0: 0x80a8001f  lb          $t0, 0x1F($a1)
    ctx->pc = 0x4205d0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 31)));
label_4205d4:
    // 0x4205d4: 0xc1035f6  jal         func_40D7D8
label_4205d8:
    if (ctx->pc == 0x4205D8u) {
        ctx->pc = 0x4205D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205D4u;
        // 0x4205d8: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205DCu;
        goto label_4205dc;
    }
    ctx->pc = 0x4205D4u;
    SET_GPR_U32(ctx, 31, 0x4205DCu);
    ctx->pc = 0x4205D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4205D4u;
    // 0x4205d8: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4205D4u, 0x4205DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4205DCu;
label_4205dc:
    // 0x4205dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4205dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4205e0:
    // 0x4205e0: 0xc103628  jal         func_40D8A0
label_4205e4:
    if (ctx->pc == 0x4205E4u) {
        ctx->pc = 0x4205E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4205E0u;
        // 0x4205e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4205E8u;
        goto label_4205e8;
    }
    ctx->pc = 0x4205E0u;
    SET_GPR_U32(ctx, 31, 0x4205E8u);
    ctx->pc = 0x4205E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4205E0u;
    // 0x4205e4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4205E0u, 0x4205E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4205E8u;
label_4205e8:
    // 0x4205e8: 0xa240002f  sb          $zero, 0x2F($s2)
    ctx->pc = 0x4205e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 47), (uint8_t)GPR_U32(ctx, 0));
label_4205ec:
    // 0x4205ec: 0x0  nop
    ctx->pc = 0x4205ecu;
    // NOP
label_4205f0:
    // 0x4205f0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4205f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4205f4:
    // 0x4205f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4205f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4205f8:
    // 0x4205f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4205f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4205fc:
    // 0x4205fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4205fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_420600:
    // 0x420600: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x420600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_420604:
    // 0x420604: 0x3e00008  jr          $ra
label_420608:
    if (ctx->pc == 0x420608u) {
        ctx->pc = 0x420608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420604u;
        // 0x420608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42060Cu;
        goto label_42060c;
    }
    ctx->pc = 0x420604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420604u;
        // 0x420608: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42060Cu;
label_42060c:
    // 0x42060c: 0x0  nop
    ctx->pc = 0x42060cu;
    // NOP
    ctx->pc = 0x420610u;
}
